package verb.geom;

import verb.eval.Check;
import verb.core.Vec;
import verb.core.Data;
import verb.eval.Make;

import verb.eval.Divide;

import verb.eval.Tess;
import verb.eval.Modify;
import verb.eval.Analyze;
import verb.core.ArrayExtensions;
using verb.core.ArrayExtensions;

import verb.eval.Eval;
import verb.core.Mat;
import verb.core.Serialization;

// A NURBS surface - this class represents the base class of many of verb's surface types and provides many tools for analysis and evaluation.
// This object is deliberately constrained to be immutable. The methods to inspect the properties of this class deliberately return copies. `asNurbs` can
// be used to obtain a simplified NurbsCurveData object that can be used with `verb.core` or for serialization purposes.

@:expose("geom.NurbsSurface")
class NurbsSurface extends SerializableBase implements ISurface {

    //Construct a NurbsSurface by a NurbsSurfaceData object
    //
    //**params**
    //
    //* The data object
    //
    //**returns**
    //
    //* A new NurbsSurface

    public function new( data : NurbsSurfaceData ) {
        _data = Check.isValidNurbsSurfaceData(data);
    }


    //Construct a NurbsSurface by degree, knots, control points, weights
    //
    //**params**
    //
    //* The degree in the U direction
    //* The degree in the V direction
    //* The knot array in the U direction
    //* The knot array in the V direction
    //* Two dimensional array of points
    //* Two dimensional array of weight values
    //
    //**returns**
    //
    //* A new NurbsSurface

    public static function byKnotsControlPointsWeights(degreeU : Int,
                                                       degreeV : Int,
                                                       knotsU : KnotArray,
                                                       knotsV : KnotArray,
                                                       controlPoints : Array<Array<Point>>,
                                                       weights : Array<Vector> = null ) : NurbsSurface {
        return new NurbsSurface( new NurbsSurfaceData( degreeU, degreeV, knotsU, knotsV, Eval.homogenize2d(controlPoints, weights) ) );
    }

    //Construct a NurbsSurface from four perimeter points in counter-clockwise order
    //
    //**params**
    //
    //* The first point
    //* The second point
    //* The third point
    //* The fourth point
    //
    //**returns**
    //
    //* A new NurbsSurface

    public static function byCorners( point0 : Point, point1 : Point, point2 : Point, point3 : Point ) : NurbsSurface {
        return new NurbsSurface( Make.fourPointSurface( point0, point1, point2, point3 ) );
    }

    //Construct a NurbsSurface by lofting between a collection of curves
    //
    //**params**
    //
    //* A collection of curves
    //
    //**returns**
    //
    //* A new NurbsSurface

    public static function byLoftingCurves( curves : Array<ICurve>, degreeV : Int = null ) : NurbsSurface {
        return new NurbsSurface( Make.loftedSurface([for (c in curves) c.asNurbs() ], degreeV ));
    }

    //underlying serializable, data object

    private var _data : NurbsSurfaceData;


    //The degree in the U direction

    public function degreeU() : Int { return _data.degreeU; }

    //The degree in the V direction

    public function degreeV() : Int { return _data.degreeV; }

    //The knot array in the U direction

    public function knotsU() : Vector { return _data.knotsU.slice(0); }

    //The knot array in the V direction

    public function knotsV() : Vector { return _data.knotsV.slice(0); }

    //Two dimensional array of points

    public function controlPoints() : Array<Array<Point>> { return Eval.dehomogenize2d(_data.controlPoints); }

    //Two dimensional array of weight values

    public function weights() : Array<Point> { return Eval.weight2d(_data.controlPoints); }

    //Obtain a copy of the underlying data structure for the Surface. Used with verb.core.
    //
    //**returns**
    //
    //* A new NurbsSurfaceData object

    public function asNurbs() : NurbsSurfaceData {
        return new NurbsSurfaceData( degreeU(), degreeV(), knotsU(), knotsV(), Eval.homogenize2d( controlPoints(), weights() ));
    }

    //Obtain a copy of the Surface
    //
    //**returns**
    //
    //* A new NurbsSurface

    public function clone() : NurbsSurface {
        return new NurbsSurface( asNurbs() );
    }

    //The parametric domain in the U direction
    //
    //**returns**
    //
    //* An Interval object with min and max property

    public function domainU() : Interval<Float> {
        return new Interval( _data.knotsU.first(), _data.knotsU.last());
    }

    //The parametric domain in the V direction
    //
    //**returns**
    //
    //* An Interval object with min and max property

    public function domainV() : Interval<Float> {
        return new Interval( _data.knotsV.first(), _data.knotsV.last());
    }

    //Obtain a point on the surface at the given parameter
    //
    //**params**
    //
    //* The u parameter
    //* The v parameter
    //
    //**returns**
    //
    //* A point on the surface

    public function point( u : Float, v : Float ) : Point {
        return Eval.rationalSurfacePoint( _data, u, v );
    }

    //Obtain the normal to the surface at the given parameter
    //
    //**params**
    //
    //* The u parameter
    //* The v parameter
    //
    //**returns**
    //
    //* A normalized vector normal to the surface

    public function normal( u : Float, v : Float ) : Point {
        return Eval.rationalSurfaceNormal( _data, u, v );
    }

    //Obtain the derivatives of the NurbsSurface.  Returns a two dimensional array
    //containing the derivative vectors.  Increasing U partial derivatives are increasing
    //row-wise.  Increasing V partial derivatives are increasing column-wise.  Therefore,
    //the [0][0] position is a point on the surface, [n][0] is the nth V partial derivative,
    //the [1][1] position is twist vector or mixed partial derivative Puv.
    //
    //**params**
    //
    //* The u parameter
    //* The v parameter
    //* Number of derivatives to evaluate
    //
    //**returns**
    //
    //* A two dimensional array of vectors

    public function derivatives( u : Float, v : Float, numDerivs : Int = 1 ) : Array<Array<Vector>> {
        return Eval.rationalSurfaceDerivatives( _data, u, v, numDerivs );
    }

    //Get the closest parameter on the surface to a point
    //
    //**params**
    //
    //* The point
    //
    //**returns**
    //
    //* The closest point

    public function closestParam( pt : Point ) : UV {
        return Analyze.rationalSurfaceClosestParam( _data, pt );
    }

    //Get the closest point on the surface to a point
    //
    //**params**
    //
    //* The point
    //
    //**returns**
    //
    //* The closest point

    public function closestPoint( pt : Point ) : Point {
        return Analyze.rationalSurfaceClosestPoint( _data, pt );
    }

    //Split a surface
    //
    //**params**
    //
    //* The parameter to do the split
    //* Whether to divide in V or U
    //
    //**returns**
    //
    //* A length 2 array with two new NurbsSurface objects

    public function split( u : Float, useV : Bool = false ) : Array<NurbsSurface> {
        return Divide.surfaceSplit( _data, u, useV )
            .map(function(x){ return new NurbsSurface(x); });
    }

    //Reverse the parameterization of the curve
    //
    //**params**
    //
    //* False to reverse u, true to reverse v
    //
    //**returns**
    //
    //* The reversed surface

    public function reverse( useV : Bool = false ) : NurbsSurface {
        return new NurbsSurface( Modify.surfaceReverse( _data, useV ) );
    }

    //Extract an isocurve from a surface
    //
    //**params**
    //
    //* The parameter at which to obtain the isocurve
    //* False for a u-iso, true for a v-iso
    //
    //**returns**
    //
    //* A NurbsCurve in the provided direction

    public function isocurve( u : Float, useV : Bool = false ) : NurbsCurve {
        return new NurbsCurve( Make.surfaceIsocurve( _data, u, useV ) );
    }

    //Extract the boundary curves from a surface
    //
    //**returns**
    //
    //* an array containing 4 elements, first 2 curves in the V direction, then 2 curves in the U direction

    public function boundaries( options : AdaptiveRefinementOptions = null) : Array<NurbsCurve> {
        return Make.surfaceBoundaryCurves( _data ).map(function(x){ return new NurbsCurve(x); });
    }


    //Tessellate the surface
    //
    //**params**
    //
    //* an AdaptiveRefinementOptions object
    //
    //**returns**
    //
    //* A MeshData object

    public function tessellate( options : AdaptiveRefinementOptions = null) : MeshData {
        return Tess.rationalSurfaceAdaptive( _data, options );
    }

    //Transform a Surface with the given matrix.
    //
    //**params**
    //
    //* 4x4 array representing the transform
    //
    //**returns**
    //
    //* A new Surface

    public function transform( mat : Matrix ) : NurbsSurface {
        return new NurbsSurface( Modify.rationalSurfaceTransform( _data, mat ) );
    }

}
