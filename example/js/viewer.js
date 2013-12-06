verb.geom.NurbsCurve.prototype.toGlType = function() {
  
  var s = this.tesselate();

  var crv = new GL.Curve({ colors: true });
  crv.lines = s;
  crv.compile();

  return crv;

};

verb.geom.NurbsSurface.prototype.toGlType = function() {

  var mesh = new GL.Mesh({ colors: true, normals: true });

  var s = this.tesselate();

  mesh.triangles = s.faces;
  mesh.vertices = s.points;

  mesh.colors = mesh.vertices.map(function(v) { return [1,0,0,1] });
  mesh.normals = s.normals;

  mesh.computeWireframe();

  return mesh;

};

var angleX = 20;
var angleY = 20;
var viewers = [];

// Set to true so lines don't use the depth buffer
Viewer.lineOverlay = false;

// A viewer is a WebGL canvas that lets the user view a mesh. The user can
// tumble it around by dragging the mouse.
function Viewer(ele, width, height, depth) {

  viewers.push(this);

  // Get a new WebGL canvas
  var gl = GL.create();
  this.gl = gl;

  // make the mesh
  this.mesh = ele.toGlType();

  // Set up the viewport
  gl.canvas.width = width;
  gl.canvas.height = height;
  gl.viewport(0, 0, width, height);
  gl.matrixMode( gl.PROJECTION );
  gl.loadIdentity();
  gl.perspective(45, width / height, 0.1, 100);
  gl.matrixMode( gl.MODELVIEW );

  // Set up WebGL state
  gl.blendFunc(gl.SRC_ALPHA, gl.ONE_MINUS_SRC_ALPHA);
  gl.clearColor(0.93, 0.93, 0.93, 1);
  gl.enable(gl.DEPTH_TEST);
  gl.disable(gl.CULL_FACE);
  gl.polygonOffset(1, 1);

  // Black shader for wireframe
  this.blackShader = new GL.Shader('\
    void main() {\
      gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\
    }\
  ', '\
    void main() {\
      gl_FragColor = vec4(0.0, 0.0, 0.0, 0.1);\
    }\
  ');

  // Shader with diffuse and specular lighting
  this.lightingShader = new GL.Shader('\
    varying vec3 color;\
    varying vec3 normal;\
    varying vec3 light;\
    void main() {\
      const vec3 lightDir = vec3(1.0, 2.0, 3.0) / 3.741657386773941;\
      light = (gl_ModelViewMatrix * vec4(lightDir, 0.0)).xyz;\
      color = gl_Color.rgb;\
      normal = gl_NormalMatrix * gl_Normal;\
      gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;\
    }\
  ', '\
    varying vec3 color;\
    varying vec3 normal;\
    varying vec3 light;\
    void main() {\
      vec3 n = normalize(normal);\
      float diffuse = max(0.0, dot(light, n));\
      float specular = pow(max(0.0, -reflect(light, n).z), 32.0) * sqrt(diffuse);\
      gl_FragColor = vec4(mix(color * (0.3 + 0.7 * diffuse), vec3(1.0), specular), 1.0);\
    }\
  ');

  gl.onmousemove = function(e) {
    if (e.dragging) {
      angleY += e.deltaX * 2;
      angleX += e.deltaY * 2;
      angleX = Math.max(-90, Math.min(90, angleX));

      viewers.map(function(viewer) {
        viewer.gl.ondraw();
      });
    }
  };

  var that = this;
  gl.ondraw = function() {

    gl.makeCurrent();

    gl.clear(gl.COLOR_BUFFER_BIT | gl.DEPTH_BUFFER_BIT);
    gl.loadIdentity();
    gl.translate(0, 0, -depth);
    gl.rotate(angleX, 1, 0, 0);
    gl.rotate(angleY, 0, 1, 0);

    if (that.mesh instanceof GL.Mesh){
      if (!Viewer.lineOverlay) gl.enable(gl.POLYGON_OFFSET_FILL);
      that.lightingShader.draw(that.mesh, gl.TRIANGLES);
      if (!Viewer.lineOverlay) gl.disable(gl.POLYGON_OFFSET_FILL);

      if (Viewer.lineOverlay) gl.disable(gl.DEPTH_TEST);
      gl.enable(gl.BLEND);
      that.blackShader.draw(that.mesh, gl.LINES);
      gl.disable(gl.BLEND);
      if (Viewer.lineOverlay) gl.enable(gl.DEPTH_TEST);
    } else {
      // gl.enable(gl.BLEND);
      that.blackShader.draw(that.mesh, gl.LINE_STRIP);
      // gl.disable(gl.BLEND);
    }

  };

  gl.ondraw();
}

var nextID = 0;

function addViewer(viewer) {
  var ele = document.getElementById(nextID++);

  ele.insertBefore(viewer.gl.canvas, ele.firstChild);
}