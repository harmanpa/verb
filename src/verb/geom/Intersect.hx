package verb.geom;

import verb.core.Vec;
import verb.core.Data;
import verb.core.Intersections;

using verb.core.Vec;

// A class providing simplified access to verb's intersection tools. Intersect contains only static methods.
//
// Similar to `NurbsCurve` and `NurbsSurface`, `Intersect` provides asynchronous versions of all of its methods.

@:expose("geom.Intersect")
class Intersect {

    //Determine the intersection of two curves
    //
    //**params**
    //
    //* ICurve object
    //* ICurve object
    //* tolerance for the intersection
    //
    //**returns**
    //
    //* a possibly empty array of CurveCurveIntersection objects

    public static function curves( first : ICurve, second : ICurve, tol : Float = 1e-3  ) : Array<CurveCurveIntersection> {
        return verb.eval.Intersect.curves( first.asNurbs(), second.asNurbs(), tol );
    }


    //Determine the intersection of a curve and a surface
    //
    //**params**
    //
    //* ICurve
    //* ISurface
    //* tolerance for the curve intersection
    //
    //**returns**
    //
    //* array of CurveSurfaceIntersection objects

    public static function curveAndSurface( curve : ICurve, surface : ISurface, tol : Float = 1e-3 ) : Array<CurveSurfaceIntersection> {
        return verb.eval.Intersect.curveAndSurface( curve.asNurbs(), surface.asNurbs(), tol);
    }

    //Determine the intersection of two surfaces
    //
    //**params**
    //
    //* ISurface
    //* ISurface
    //
    //**returns**
    //
    //* array of NurbsCurveData objects

    public static function surfaces( first : ISurface, second : ISurface, tol : Float = 1e-3  ) : Array<NurbsCurve> {
        return verb.eval.Intersect.surfaces( first.asNurbs(), second.asNurbs(), tol )
            .map(function(cd){ return new NurbsCurve(cd); });
    }

}
