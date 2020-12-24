package verb.core;

import verb.core.Data;

using verb.core.ArrayExtensions;

using Lambda;

import verb.core.Data;

// Tools for working with matrices

@:expose("core.Vec")
class Vec {

    public static function angleBetween(a : Vector, b : Vector) : Float {
        return Math.acos( dot(a, b) / ( norm(a) * norm(b) )  );
    }

    public static function positiveAngleBetween(a : Vector, b : Vector, n : Vector) : Float{
        var nab = Vec.cross(a,b);

        var al = Vec.norm(a);
        var bl = Vec.norm(b);
        var abl = al * bl;
        var adb = Vec.dot(a,b);

        var sina = Vec.norm(nab) / abl;
        var cosa = adb / abl;

        var w = Math.atan2( sina, cosa );
        var s = Vec.dot(n, nab);

        if (Math.abs(s) < Constants.EPSILON) return w;

        return s > 0 ? w : -w;
    }

    public static function signedAngleBetween(a : Vector, b : Vector, n : Vector) : Float {
        var nab = Vec.cross(a,b);

        var al = Vec.norm(a);
        var bl = Vec.norm(b);
        var abl = al * bl;
        var adb = Vec.dot(a,b);

        var sina = Vec.norm(nab) / abl;
        var cosa = adb / abl;

        var w = Math.atan2( sina, cosa );
        var s = Vec.dot(n, nab);

        return s > 0.0 ? w : 2 * Math.PI - w;
    }

    public static function angleBetweenNormalized2d(a : Vector, b : Vector) : Float {
        var perpDot = a[0] * b[1]-a[1] * b[0];
        return Math.atan2(perpDot, dot(a, b));
    }

    public static inline function domain(a : Vector) : Float {
        return a.last() - a.first();
    }

    public static function range(max : Int) : Vector {
        var l = [];
        var f = 0.0;
        for ( i in 0...max ){
            l.push(f);
            f += 1.0;
        }
        return l;
    }

    public static function span(min : Float, max : Float, step : Float) : Vector {
        #if (!cs && !cpp && !java)
            if (step == null) return [];
        #end
        if (step < Constants.EPSILON) return []; //infinite
        if (min > max && step > 0.0) return []; //infinite
        if (max > min && step < 0.0) return []; //infinite

        var l = [];
        var cur = min;

        while( cur <= max ){
            l.push(cur);
            cur += step;
        }

        return l;
    }

    public static function neg(arr : Vector) : Vector {
        return arr.map(function(x){ return -x; });
    }

    public static function min(arr : Vector) : Float {
        return arr.fold(function(x,a){ return Math.min(x,a); }, Math.POSITIVE_INFINITY);
    }

    public static function max(arr : Vector) : Float {
        return arr.fold(function(x,a){ return Math.max(x,a); }, Math.NEGATIVE_INFINITY);
    }

    public static function all(arr : Array<Bool>) : Bool {
        return arr.fold(function(x,a){ return a && x; }, true);
    }

    public static function finite(arr : Vector) : Array<Bool> {
        return arr.map(function(x){ return Math.isFinite(x); });
    }

    public static function onRay(origin : Point, dir : Vector, u : Float) : Vector {
        return Vec.add( origin, Vec.mul(u, dir) );
    }

    public static function lerp(i : Float, u : Vector, v : Vector) : Vector {
        return Vec.add( Vec.mul( i, u ), Vec.mul( 1.0 - i, v) );
    }

    public static function normalized( arr : Vector) {
        return div( arr, norm(arr) );
    }

    public static function cross(u : Vector, v : Vector) : Vector {
        return [u[1]*v[2]-u[2]*v[1],u[2]*v[0]-u[0]*v[2],u[0]*v[1]-u[1]*v[0]];
    }

    public static function dist(a : Vector, b : Vector) : Float {
        return norm(sub(a,b));
    }

    public static function distSquared(a : Vector, b : Vector ) : Float {
        return normSquared(sub(a,b));
    }

    public static function sum(a : Vector) : Float {
        return a.fold(function(x,a){ return a + x; }, 0);
    }

    public static function addAll(a : Iterable<Vector>) : Vector {
        var i = a.iterator();
        if (!i.hasNext()) return null;

        var f = i.next().length;

        return a.fold(function(x,a){ return add(a,x); }, rep(f, 0.0));
    }

    public static function addAllMutate(a : Array<Vector>) {
        var f = a[0];
        for (i in 1...a.length)
            addMutate(f, a[i]);
    }

    public static function addMulMutate(a : Vector, s : Float, b : Vector) {
        for (i in 0...a.length)
            a[i] = a[i] + s * b[i];
    }

    public static function subMulMutate(a : Vector, s : Float, b : Vector) {
        for (i in 0...a.length)
            a[i] = a[i] - s * b[i];
    }

    public static function addMutate(a : Vector, b : Vector) {
        for (i in 0...a.length)
            a[i] = a[i] + b[i];
    }

    public static function subMutate(a : Vector, b : Vector) {
        for (i in 0...a.length)
            a[i] = a[i] - b[i];
    }

    public static function mulMutate(a : Float, b : Vector) {
        for (i in 0...b.length)
            b[i] = b[i] * a;
    }

    public static function norm(a : Vector ) : Float {
        var norm2 = normSquared(a);
        return norm2 != 0.0 ? Math.sqrt( norm2 ) : norm2;
    }

    public static function normSquared(a : Vector ) : Float {
        return a.fold(function(x,a){ return a + x * x; }, 0);
    }

    public static function rep<T>(num : Int, ele : T ) : Array<T> {
        return [ for (i in 0...num) ele ];
    }

    public static function fill(num : Int, ele : Float ) : Vector {
        return [ for (i in 0...num) ele ];
    }

    public static function zeros1d(rows : Int) : Vector {
        return [ for (i in 0...rows) 0.0 ];
    }

    public static function zeros2d(rows : Int, cols : Int) : Array<Vector> {
        return [ for (i in 0...rows) zeros1d(cols) ];
    }

    public static function zeros3d(rows : Int, cols : Int, depth : Int) : Array<Array<Vector>> {
        return [ for (i in 0...rows) zeros2d(cols, depth) ];
    }

    public static function dot(a : Vector, b : Vector) : Float {
        var sum : Float = 0;
        for (i in 0...a.length){
            sum += a[i] * b[i];
        }
        return sum;
    }

    public static function add(a : Vector, b : Vector) : Vector {
        return [ for (i in 0...a.length) a[i] + b[i] ];
    }

    public static function mul(a : Float, b : Vector) : Vector {
        return [ for (i in 0...b.length) a * b[i] ];
    }

    public static function div(a : Vector, b : Float ) : Vector {
        return [ for (i in 0...a.length) a[i] / b ];
    }

    public static function sub(a : Vector, b : Vector) : Vector {
        return [ for (i in 0...a.length) a[i] - b[i] ];
    }

    public static function isZero( vec : Vector){

        for (i in 0...vec.length){
            if (Math.abs( vec[i] ) > verb.core.Constants.TOLERANCE ) return false;
        }

        return true;
    }

    public static function sortedSetUnion( a : Vector, b : Vector) : Vector {

        var merged = [];

        var ai = 0;
        var bi = 0;
        while ( ai < a.length || bi < b.length ){

            if ( ai >= a.length ){
                merged.push( b[bi] );
                bi++;
                continue;
            } else if ( bi >= b.length ){
                merged.push( a[ai] );
                ai++;
                continue;
            }

            var diff = a[ai] - b[bi];

            if ( Math.abs(diff) < Constants.EPSILON ){
                merged.push( a[ai] );
                ai++;
                bi++;
                continue;
            }

            if (diff > 0.0){
                //add the smaller
                merged.push( b[bi] );
                bi++;
                continue;
            }

            //thus diff < 0.0
            merged.push( a[ai] );
            ai++;

        }

        return merged;
    }

    //a is superset, hence it is always longer or equal
    public static function sortedSetSub( a : Vector, b : Vector) : Vector {

        var result = [];

        var ai = 0;
        var bi = 0;
        while ( ai < a.length ){

            if ( bi >= b.length ){
                result.push( a[ai] );
                ai++;
                continue;
            }

            if ( Math.abs( a[ai] - b[bi] ) < Constants.EPSILON ){
                ai++;
                bi++;
                continue;
            }

            result.push( a[ai] );
            ai++;
        }

        return result;
    }
}
