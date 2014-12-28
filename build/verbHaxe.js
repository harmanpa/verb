(function ($hx_exports) { "use strict";
var IMap = function() { };
var haxe = {};
haxe.ds = {};
haxe.ds.IntMap = function() {
	this.h = { };
};
haxe.ds.IntMap.__interfaces__ = [IMap];
haxe.ds.IntMap.prototype = {
	set: function(key,value) {
		this.h[key] = value;
	}
	,get: function(key) {
		return this.h[key];
	}
	,exists: function(key) {
		return this.h.hasOwnProperty(key);
	}
};
var verb = {};
verb["eval"] = {};
verb.eval.Analyze = function() { };
verb.eval.Analyze.ok = function() {
	return verb.eval.Tessellate.ok();
};
verb.eval.Binomial = function() { };
verb.eval.Binomial.get = function(n,k) {
	if(k == 0.0) return 1.0;
	if(n == 0 || k > n) return 0.0;
	if(k > n - k) k = n - k;
	if(verb.eval.Binomial.memo_exists(n,k)) return verb.eval.Binomial.get_memo(n,k);
	var r = 1;
	var n_o = n;
	var _g1 = 1;
	var _g = k + 1;
	while(_g1 < _g) {
		var d = _g1++;
		if(verb.eval.Binomial.memo_exists(n_o,d)) {
			n--;
			r = verb.eval.Binomial.get_memo(n_o,d);
			continue;
		}
		r *= n--;
		r /= d;
		verb.eval.Binomial.memoize(n_o,d,r);
	}
	return r;
};
verb.eval.Binomial.get_no_memo = function(n,k) {
	if(k == 0) return 1;
	if(n == 0 || k > n) return 0;
	if(k > n - k) k = n - k;
	var r = 1;
	var n_o = n;
	var _g1 = 1;
	var _g = k + 1;
	while(_g1 < _g) {
		var d = _g1++;
		r *= n--;
		r /= d;
	}
	return r;
};
verb.eval.Binomial.memo_exists = function(n,k) {
	return verb.eval.Binomial.memo.exists(n) && verb.eval.Binomial.memo.get(n).exists(k);
};
verb.eval.Binomial.get_memo = function(n,k) {
	return verb.eval.Binomial.memo.get(n).get(k);
};
verb.eval.Binomial.memoize = function(n,k,val) {
	if(!verb.eval.Binomial.memo.exists(n)) verb.eval.Binomial.memo.set(n,new haxe.ds.IntMap());
	verb.eval.Binomial.memo.get(n).set(k,val);
};
verb.eval.Create = function() { };
verb.eval.Create.ok = function() {
	return verb.eval.Tessellate.ok();
};
verb.eval.Init = function() { };
verb.eval.Init.main = function() {
	console.log("verb verb.core 0.2.0");
};
verb.eval.Intersect = $hx_exports.Intersect = function() { };
verb.eval.Intersect.ok = function() {
	return verb.eval.Tessellate.ok();
};
verb.eval.Mesh = function() {
};
verb.eval.Modify = function() { };
verb.eval.Modify.curve_knot_insert = function(curve,u,r) {
	var degree = curve.degree;
	var control_points = curve.controlPoints;
	var knots = curve.knots;
	var s = 0;
	var num_pts = control_points.length;
	var k = verb.eval.Nurbs.knot_span(degree,u,knots);
	var num_pts_post = num_pts + r;
	var control_points_temp = new Array();
	var knots_post = new Array();
	var control_points_post = new Array();
	var i = 0;
	var _g1 = 1;
	var _g = k + 1;
	while(_g1 < _g) {
		var i1 = _g1++;
		knots_post[i1] = knots[i1];
	}
	var _g11 = 1;
	var _g2 = r + 1;
	while(_g11 < _g2) {
		var i2 = _g11++;
		knots_post[k + i2] = u;
	}
	var _g12 = k + 1;
	var _g3 = knots.length;
	while(_g12 < _g3) {
		var i3 = _g12++;
		knots_post[i3 + r] = knots[i3];
	}
	var _g13 = 0;
	var _g4 = k - degree + 1;
	while(_g13 < _g4) {
		var i4 = _g13++;
		control_points_post[i4] = control_points[i4];
	}
	var _g5 = k - s;
	while(_g5 < num_pts) {
		var i5 = _g5++;
		control_points_post[i5 + r] = control_points[i5];
	}
	var _g14 = 0;
	var _g6 = degree - s + 1;
	while(_g14 < _g6) {
		var i6 = _g14++;
		control_points_temp[i6] = control_points[k - degree + i6];
	}
	var L = 0;
	var alpha = 0;
	var _g15 = 1;
	var _g7 = r + 1;
	while(_g15 < _g7) {
		var j = _g15++;
		L = k - degree + j;
		var _g31 = 0;
		var _g21 = degree - j - s + 1;
		while(_g31 < _g21) {
			var i7 = _g31++;
			alpha = (u - knots[L + i7]) / (knots[i7 + k + 1] - knots[L + i7]);
			control_points_temp[i7] = verb.eval.Vec.add(verb.eval.Vec.mul(alpha,control_points_temp[i7 + 1]),verb.eval.Vec.mul(1.0 - alpha,control_points_temp[i7]));
		}
		control_points_post[L] = control_points_temp[0];
		control_points_post[k + r - j - s] = control_points_temp[degree - j - s];
	}
	var _g16 = L + 1;
	var _g8 = k - s;
	while(_g16 < _g8) {
		var i8 = _g16++;
		control_points_post[i8] = control_points_temp[i8 - L];
	}
	return new verb.eval.types.CurveData(degree,knots_post,control_points_post);
};
verb.eval.Nurbs = function() { };
verb.eval.Nurbs.rational_surface_derivs = $hx_exports.rational_surface_derivs = function(surface,num_derivs,u,v) {
	var ders = verb.eval.Nurbs.surface_derivs(surface,num_derivs,u,v);
	var Aders = verb.eval.Nurbs.rational_2d(ders);
	var wders = verb.eval.Nurbs.weight_2d(ders);
	var SKL = new Array();
	var dim = Aders[0][0].length;
	var _g1 = 0;
	var _g = num_derivs + 1;
	while(_g1 < _g) {
		var k = _g1++;
		SKL.push(new Array());
		var _g3 = 0;
		var _g2 = num_derivs - k + 1;
		while(_g3 < _g2) {
			var l = _g3++;
			var v1 = Aders[k][l];
			var _g5 = 1;
			var _g4 = l + 1;
			while(_g5 < _g4) {
				var j = _g5++;
				v1 = verb.eval.Vec.sub(v1,verb.eval.Vec.mul(verb.eval.Binomial.get(l,j) * wders[0][j],SKL[k][l - j]));
			}
			var _g51 = 1;
			var _g41 = k + 1;
			while(_g51 < _g41) {
				var i = _g51++;
				v1 = verb.eval.Vec.sub(v1,verb.eval.Vec.mul(verb.eval.Binomial.get(k,i) * wders[i][0],SKL[k - i][l]));
				var v2 = verb.eval.Vec.zeros1d(dim);
				var _g7 = 1;
				var _g6 = l + 1;
				while(_g7 < _g6) {
					var j1 = _g7++;
					v2 = verb.eval.Vec.add(v2,verb.eval.Vec.mul(verb.eval.Binomial.get(l,j1) * wders[i][j1],SKL[k - i][l - j1]));
				}
				v1 = verb.eval.Vec.sub(v1,verb.eval.Vec.mul(verb.eval.Binomial.get(k,i),v2));
			}
			SKL[k].push(verb.eval.Vec.mul(1 / wders[0][0],v1));
		}
	}
	return SKL;
};
verb.eval.Nurbs.rational_surface_point = $hx_exports.rational_surface_point = function(surface,u,v) {
	return verb.eval.Nurbs.dehomogenize(verb.eval.Nurbs.surface_point(surface,u,v));
};
verb.eval.Nurbs.rational_curve_derivs = $hx_exports.rational_curve_derivs = function(curve,u,num_derivs) {
	var ders = verb.eval.Nurbs.curve_derivs(curve,u,num_derivs);
	var Aders = verb.eval.Nurbs.rational_1d(ders);
	var wders = verb.eval.Nurbs.weight_1d(ders);
	var k = 0;
	var i = 0;
	var CK = [];
	var _g1 = 0;
	var _g = num_derivs + 1;
	while(_g1 < _g) {
		var k1 = _g1++;
		var v = Aders[k1];
		var _g3 = 1;
		var _g2 = k1 + 1;
		while(_g3 < _g2) {
			var i1 = _g3++;
			v = verb.eval.Vec.sub(v,verb.eval.Vec.mul(verb.eval.Binomial.get(k1,i1) * wders[i1],CK[k1 - i1]));
		}
		CK.push(verb.eval.Vec.mul(1 / wders[0],v));
	}
	return CK;
};
verb.eval.Nurbs.rational_curve_point = $hx_exports.rational_curve_point = function(curve,u) {
	return verb.eval.Nurbs.dehomogenize(verb.eval.Nurbs.curve_point(curve,u));
};
verb.eval.Nurbs.dehomogenize = $hx_exports.dehomogenize = function(homo_point) {
	var dim = homo_point.length;
	var point = [];
	var wt = homo_point[dim - 1];
	var l = homo_point.length - 1;
	var _g = 0;
	while(_g < l) {
		var i = _g++;
		point.push(homo_point[i] / wt);
	}
	return point;
};
verb.eval.Nurbs.rational_1d = $hx_exports.rational_1d = function(homo_points) {
	var dim = homo_points[0].length - 1;
	return homo_points.map(function(x) {
		return x.slice(0,dim);
	});
};
verb.eval.Nurbs.rational_2d = $hx_exports.rational_2d = function(homo_points) {
	return homo_points.map(verb.eval.Nurbs.rational_1d);
};
verb.eval.Nurbs.weight_1d = $hx_exports.weight_1d = function(homo_points) {
	var dim = homo_points[0].length - 1;
	return homo_points.map(function(x) {
		return x[dim];
	});
};
verb.eval.Nurbs.weight_2d = $hx_exports.weight_2d = function(homo_points) {
	return homo_points.map(verb.eval.Nurbs.weight_1d);
};
verb.eval.Nurbs.dehomogenize_1d = $hx_exports.dehomogenize_1d = function(homo_points) {
	return homo_points.map(verb.eval.Nurbs.dehomogenize);
};
verb.eval.Nurbs.dehomogenize_2d = $hx_exports.dehomogenize_2d = function(homo_points) {
	return homo_points.map(verb.eval.Nurbs.dehomogenize_1d);
};
verb.eval.Nurbs.homogenize_1d = $hx_exports.homogenize_1d = function(control_points,weights) {
	var rows = control_points.length;
	var dim = control_points[0].length;
	var homo_control_points = new Array();
	var wt = 0.0;
	var ref_pt = new Array();
	var _g = 0;
	while(_g < rows) {
		var i = _g++;
		var pt = [];
		ref_pt = control_points[i];
		wt = weights[i];
		var _g1 = 0;
		while(_g1 < dim) {
			var k = _g1++;
			pt.push(ref_pt[k] * wt);
		}
		pt.push(wt);
		homo_control_points.push(pt);
	}
	return homo_control_points;
};
verb.eval.Nurbs.homogenize_2d = $hx_exports.homogenize_2d = function(control_points,weights) {
	var rows = control_points.length;
	var homo_control_points = new Array();
	var _g = 0;
	while(_g < rows) {
		var i = _g++;
		homo_control_points.push(verb.eval.Nurbs.homogenize_1d(control_points[i],weights[i]));
	}
	return homo_control_points;
};
verb.eval.Nurbs.surface_derivs = $hx_exports.surface_derivs = function(surface,num_derivatives,u,v) {
	var n = surface.knotsU.length - surface.degreeU - 2;
	var m = surface.knotsV.length - surface.degreeV - 2;
	return verb.eval.Nurbs.surface_derivs_given_n_m(n,m,surface,num_derivatives,u,v);
};
verb.eval.Nurbs.surface_derivs_given_n_m = $hx_exports.surface_derivs_given_n_m = function(n,m,surface,num_derivatives,u,v) {
	var degree_u = surface.degreeU;
	var degree_v = surface.degreeV;
	var control_points = surface.controlPoints;
	var knots_u = surface.knotsU;
	var knots_v = surface.knotsV;
	if(!verb.eval.Nurbs.are_valid_relations(degree_u,control_points.length,knots_u.length) || !verb.eval.Nurbs.are_valid_relations(degree_v,control_points[0].length,knots_v.length)) throw "Invalid relations between control points, knot vector, and n";
	var dim = control_points[0][0].length;
	var du;
	if(num_derivatives < degree_u) du = num_derivatives; else du = degree_u;
	var dv;
	if(num_derivatives < degree_v) dv = num_derivatives; else dv = degree_v;
	var SKL = verb.eval.Vec.zeros3d(du + 1,dv + 1,dim);
	var knot_span_index_u = verb.eval.Nurbs.knot_span_given_n(n,degree_u,u,knots_u);
	var knot_span_index_v = verb.eval.Nurbs.knot_span_given_n(m,degree_v,v,knots_v);
	var uders = verb.eval.Nurbs.deriv_basis_functions_given_n_i(knot_span_index_u,u,degree_u,n,knots_u);
	var vders = verb.eval.Nurbs.deriv_basis_functions_given_n_i(knot_span_index_v,v,degree_v,m,knots_v);
	var temp = verb.eval.Vec.zeros2d(degree_v + 1,dim);
	var dd = 0;
	var _g1 = 0;
	var _g = du + 1;
	while(_g1 < _g) {
		var k = _g1++;
		var _g3 = 0;
		var _g2 = degree_v + 1;
		while(_g3 < _g2) {
			var s = _g3++;
			temp[s] = verb.eval.Vec.zeros1d(dim);
			var _g5 = 0;
			var _g4 = degree_u + 1;
			while(_g5 < _g4) {
				var r = _g5++;
				temp[s] = verb.eval.Vec.add(temp[s],verb.eval.Vec.mul(uders[k][r],control_points[knot_span_index_u - degree_u + r][knot_span_index_v - degree_v + s]));
			}
		}
		var nk = num_derivatives - k;
		if(nk < dv) dd = nk; else dd = dv;
		var _g31 = 0;
		var _g21 = dd + 1;
		while(_g31 < _g21) {
			var l = _g31++;
			SKL[k][l] = verb.eval.Vec.zeros1d(dim);
			var _g51 = 0;
			var _g41 = degree_v + 1;
			while(_g51 < _g41) {
				var s1 = _g51++;
				SKL[k][l] = verb.eval.Vec.add(SKL[k][l],verb.eval.Vec.mul(vders[l][s1],temp[s1]));
			}
		}
	}
	return SKL;
};
verb.eval.Nurbs.surface_point = $hx_exports.surface_point = function(surface,u,v) {
	var n = surface.knotsU.length - surface.degreeU - 2;
	var m = surface.knotsV.length - surface.degreeV - 2;
	return verb.eval.Nurbs.surface_point_given_n_m(n,m,surface,u,v);
};
verb.eval.Nurbs.surface_point_given_n_m = $hx_exports.surface_point_given_n_m = function(n,m,surface,u,v) {
	var degree_u = surface.degreeU;
	var degree_v = surface.degreeV;
	var control_points = surface.controlPoints;
	var knots_u = surface.knotsU;
	var knots_v = surface.knotsV;
	if(!verb.eval.Nurbs.are_valid_relations(degree_u,control_points.length,knots_u.length) || !verb.eval.Nurbs.are_valid_relations(degree_v,control_points[0].length,knots_v.length)) throw "Invalid relations between control points, knot vector, and n";
	var dim = control_points[0][0].length;
	var knot_span_index_u = verb.eval.Nurbs.knot_span_given_n(n,degree_u,u,knots_u);
	var knot_span_index_v = verb.eval.Nurbs.knot_span_given_n(m,degree_v,v,knots_v);
	var u_basis_vals = verb.eval.Nurbs.basis_functions_given_knot_span_index(knot_span_index_u,u,degree_u,knots_u);
	var v_basis_vals = verb.eval.Nurbs.basis_functions_given_knot_span_index(knot_span_index_v,v,degree_v,knots_v);
	var uind = knot_span_index_u - degree_u;
	var vind = knot_span_index_v;
	var position = verb.eval.Vec.zeros1d(dim);
	var temp = verb.eval.Vec.zeros1d(dim);
	var _g1 = 0;
	var _g = degree_v + 1;
	while(_g1 < _g) {
		var l = _g1++;
		temp = verb.eval.Vec.zeros1d(dim);
		vind = knot_span_index_v - degree_v + l;
		var _g3 = 0;
		var _g2 = degree_u + 1;
		while(_g3 < _g2) {
			var k = _g3++;
			temp = verb.eval.Vec.add(temp,verb.eval.Vec.mul(u_basis_vals[k],control_points[uind + k][vind]));
		}
		position = verb.eval.Vec.add(position,verb.eval.Vec.mul(v_basis_vals[l],temp));
	}
	return position;
};
verb.eval.Nurbs.curve_derivs = $hx_exports.curve_derivs = function(crv,u,num_derivs) {
	var n = crv.knots.length - crv.degree - 2;
	return verb.eval.Nurbs.curve_derivs_given_n(n,crv,u,num_derivs);
};
verb.eval.Nurbs.curve_derivs_given_n = $hx_exports.curve_derivs_given_n = function(n,curve,u,num_derivatives) {
	var degree = curve.degree;
	var control_points = curve.controlPoints;
	var knots = curve.knots;
	if(!verb.eval.Nurbs.are_valid_relations(degree,control_points.length,knots.length)) throw "Invalid relations between control points, knot vector, and n";
	var dim = control_points[0].length;
	var du;
	if(num_derivatives < degree) du = num_derivatives; else du = degree;
	var CK = verb.eval.Vec.zeros2d(du + 1,dim);
	var knot_span_index = verb.eval.Nurbs.knot_span_given_n(n,degree,u,knots);
	var nders = verb.eval.Nurbs.deriv_basis_functions_given_n_i(knot_span_index,u,degree,du,knots);
	var k = 0;
	var j = 0;
	var _g1 = 0;
	var _g = du + 1;
	while(_g1 < _g) {
		var k1 = _g1++;
		var _g3 = 0;
		var _g2 = degree + 1;
		while(_g3 < _g2) {
			var j1 = _g3++;
			CK[k1] = verb.eval.Vec.add(CK[k1],verb.eval.Vec.mul(nders[k1][j1],control_points[knot_span_index - degree + j1]));
		}
	}
	return CK;
};
verb.eval.Nurbs.curve_point = $hx_exports.curve_point = function(curve,u) {
	var n = curve.knots.length - curve.degree - 2;
	return verb.eval.Nurbs.curve_point_given_n(n,curve,u);
};
verb.eval.Nurbs.are_valid_relations = $hx_exports.are_valid_relations = function(degree,num_control_points,knots_length) {
	return num_control_points + degree + 1 - knots_length == 0;
};
verb.eval.Nurbs.curve_point_given_n = $hx_exports.curve_point_given_n = function(n,curve,u) {
	var degree = curve.degree;
	var control_points = curve.controlPoints;
	var knots = curve.knots;
	if(!verb.eval.Nurbs.are_valid_relations(degree,control_points.length,knots.length)) {
		throw "Invalid relations between control points, knot Array, and n";
		return null;
	}
	var knot_span_index = verb.eval.Nurbs.knot_span_given_n(n,degree,u,knots);
	var basis_values = verb.eval.Nurbs.basis_functions_given_knot_span_index(knot_span_index,u,degree,knots);
	var position = verb.eval.Vec.zeros1d(control_points[0].length);
	var _g1 = 0;
	var _g = degree + 1;
	while(_g1 < _g) {
		var j = _g1++;
		position = verb.eval.Vec.add(position,verb.eval.Vec.mul(basis_values[j],control_points[knot_span_index - degree + j]));
	}
	return position;
};
verb.eval.Nurbs.deriv_basis_functions = $hx_exports.deriv_basis_functions = function(u,degree,knots) {
	var knot_span_index = verb.eval.Nurbs.knot_span(degree,u,knots);
	var m = knots.length - 1;
	var n = m - degree - 1;
	return verb.eval.Nurbs.deriv_basis_functions_given_n_i(knot_span_index,u,degree,n,knots);
};
verb.eval.Nurbs.deriv_basis_functions_given_n_i = $hx_exports.deriv_basis_functions_given_n_i = function(knot_span_index,u,p,n,knots) {
	var ndu = verb.eval.Vec.zeros2d(p + 1,p + 1);
	var left = verb.eval.Vec.zeros1d(p + 1);
	var right = verb.eval.Vec.zeros1d(p + 1);
	var saved = 0.0;
	var temp = 0.0;
	ndu[0][0] = 1.0;
	var _g1 = 1;
	var _g = p + 1;
	while(_g1 < _g) {
		var j = _g1++;
		left[j] = u - knots[knot_span_index + 1 - j];
		right[j] = knots[knot_span_index + j] - u;
		saved = 0.0;
		var _g2 = 0;
		while(_g2 < j) {
			var r = _g2++;
			ndu[j][r] = right[r + 1] + left[j - r];
			temp = ndu[r][j - 1] / ndu[j][r];
			ndu[r][j] = saved + right[r + 1] * temp;
			saved = left[j - r] * temp;
		}
		ndu[j][j] = saved;
	}
	var ders = verb.eval.Vec.zeros2d(n + 1,p + 1);
	var a = verb.eval.Vec.zeros2d(2,p + 1);
	var s1 = 0;
	var s2 = 1;
	var d = 0.0;
	var rk = 0;
	var pk = 0;
	var j1 = 0;
	var j2 = 0;
	var _g11 = 0;
	var _g3 = p + 1;
	while(_g11 < _g3) {
		var j3 = _g11++;
		ders[0][j3] = ndu[j3][p];
	}
	var _g12 = 0;
	var _g4 = p + 1;
	while(_g12 < _g4) {
		var r1 = _g12++;
		s1 = 0;
		s2 = 1;
		a[0][0] = 1.0;
		var _g31 = 1;
		var _g21 = n + 1;
		while(_g31 < _g21) {
			var k = _g31++;
			d = 0.0;
			rk = r1 - k;
			pk = p - k;
			if(r1 >= k) {
				a[s2][0] = a[s1][0] / ndu[pk + 1][rk];
				d = a[s2][0] * ndu[rk][pk];
			}
			if(rk >= -1) j1 = 1; else j1 = -rk;
			if(r1 - 1 <= pk) j2 = k - 1; else j2 = p - r1;
			var _g5 = j1;
			var _g41 = j2 + 1;
			while(_g5 < _g41) {
				var j4 = _g5++;
				a[s2][j4] = (a[s1][j4] - a[s1][j4 - 1]) / ndu[pk + 1][rk + j4];
				d += a[s2][j4] * ndu[rk + j4][pk];
			}
			if(r1 <= pk) {
				a[s2][k] = -a[s1][k - 1] / ndu[pk + 1][r1];
				d += a[s2][k] * ndu[r1][pk];
			}
			ders[k][r1] = d;
			var temp1 = s1;
			s1 = s2;
			s2 = temp1;
		}
	}
	var acc = p;
	var _g13 = 1;
	var _g6 = n + 1;
	while(_g13 < _g6) {
		var k1 = _g13++;
		var _g32 = 0;
		var _g22 = p + 1;
		while(_g32 < _g22) {
			var j5 = _g32++;
			ders[k1][j5] *= acc;
		}
		acc *= p - k1;
	}
	return ders;
};
verb.eval.Nurbs.basis_functions = $hx_exports.basis_functions = function(u,degree,knots) {
	var knot_span_index = verb.eval.Nurbs.knot_span(degree,u,knots);
	return verb.eval.Nurbs.basis_functions_given_knot_span_index(knot_span_index,u,degree,knots);
};
verb.eval.Nurbs.basis_functions_given_knot_span_index = $hx_exports.basis_functions_given_knot_span_index = function(knot_span_index,u,degree,knots) {
	var basis_functions = verb.eval.Vec.zeros1d(degree + 1);
	var left = verb.eval.Vec.zeros1d(degree + 1);
	var right = verb.eval.Vec.zeros1d(degree + 1);
	var saved = 0;
	var temp = 0;
	basis_functions[0] = 1.0;
	var _g1 = 1;
	var _g = degree + 1;
	while(_g1 < _g) {
		var j = _g1++;
		left[j] = u - knots[knot_span_index + 1 - j];
		right[j] = knots[knot_span_index + j] - u;
		saved = 0.0;
		var _g2 = 0;
		while(_g2 < j) {
			var r = _g2++;
			temp = basis_functions[r] / (right[r + 1] + left[j - r]);
			basis_functions[r] = saved + right[r + 1] * temp;
			saved = left[j - r] * temp;
		}
		basis_functions[j] = saved;
	}
	return basis_functions;
};
verb.eval.Nurbs.knot_span = $hx_exports.knot_span = function(degree,u,knots) {
	var m = knots.length - 1;
	var n = m - degree - 1;
	return verb.eval.Nurbs.knot_span_given_n(n,degree,u,knots);
};
verb.eval.Nurbs.knot_span_given_n = $hx_exports.knot_span_given_n = function(n,degree,u,knots) {
	if(u >= knots[n + 1]) return n;
	if(u < knots[degree]) return degree;
	var low = degree;
	var high = n + 1;
	var mid = Math.floor((low + high) / 2);
	while(u < knots[mid] || u >= knots[mid + 1]) {
		if(u < knots[mid]) high = mid; else low = mid;
		mid = Math.floor((low + high) / 2);
	}
	return mid;
};
verb.eval.Tessellate = function() { };
verb.eval.Tessellate.ok = function() {
	return 5;
};
verb.eval.Utils = function() { };
verb.eval.Vec = function() { };
verb.eval.Vec.zeros1d = function(rows) {
	var _g = [];
	var _g1 = 0;
	while(_g1 < rows) {
		var i = _g1++;
		_g.push(0.0);
	}
	return _g;
};
verb.eval.Vec.zeros2d = function(rows,cols) {
	var _g = [];
	var _g1 = 0;
	while(_g1 < rows) {
		var i = _g1++;
		_g.push(verb.eval.Vec.zeros1d(cols));
	}
	return _g;
};
verb.eval.Vec.zeros3d = function(rows,cols,depth) {
	var _g = [];
	var _g1 = 0;
	while(_g1 < rows) {
		var i = _g1++;
		_g.push(verb.eval.Vec.zeros2d(cols,depth));
	}
	return _g;
};
verb.eval.Vec.add = function(a,b) {
	var _g = [];
	var _g2 = 0;
	var _g1 = a.length;
	while(_g2 < _g1) {
		var i = _g2++;
		_g.push(a[i] + b[i]);
	}
	return _g;
};
verb.eval.Vec.mul = function(a,b) {
	var _g = [];
	var _g2 = 0;
	var _g1 = b.length;
	while(_g2 < _g1) {
		var i = _g2++;
		_g.push(a * b[i]);
	}
	return _g;
};
verb.eval.Vec.sub = function(a,b) {
	var _g = [];
	var _g2 = 0;
	var _g1 = a.length;
	while(_g2 < _g1) {
		var i = _g2++;
		_g.push(a[i] - b[i]);
	}
	return _g;
};
verb.eval.types = {};
verb.eval.types.CurveData = $hx_exports.CurveData = function(degree,knots,controlPoints) {
	this.degree = degree;
	this.controlPoints = controlPoints;
	this.knots = knots;
};
verb.eval.types.SurfaceData = $hx_exports.SurfaceData = function(degreeU,degreeV,knotsU,knotsV,controlPoints) {
	this.degreeU = degreeU;
	this.degreeV = degreeV;
	this.knotsU = knotsU;
	this.knotsV = knotsV;
	this.controlPoints = controlPoints;
};
Math.NaN = Number.NaN;
Math.NEGATIVE_INFINITY = Number.NEGATIVE_INFINITY;
Math.POSITIVE_INFINITY = Number.POSITIVE_INFINITY;
Math.isFinite = function(i) {
	return isFinite(i);
};
Math.isNaN = function(i1) {
	return isNaN(i1);
};
if(Array.prototype.map == null) Array.prototype.map = function(f) {
	var a = [];
	var _g1 = 0;
	var _g = this.length;
	while(_g1 < _g) {
		var i = _g1++;
		a[i] = f(this[i]);
	}
	return a;
};
verb.eval.Binomial.memo = new haxe.ds.IntMap();
verb.eval.Init.main();
})(typeof window != "undefined" ? window : exports);