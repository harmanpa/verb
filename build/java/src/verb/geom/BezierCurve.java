// Generated by Haxe 4.1.4
package verb.geom;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class BezierCurve extends verb.geom.NurbsCurve
{
	public BezierCurve(haxe.lang.EmptyObject empty)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\BezierCurve.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public BezierCurve(haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> points, org.apache.commons.math3.linear.ArrayRealVector weights)
	{
		//line 21 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\BezierCurve.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 21 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\BezierCurve.hx"
		verb.geom.BezierCurve.__hx_ctor_verb_geom_BezierCurve(this, points, weights);
	}
	
	
	protected static void __hx_ctor_verb_geom_BezierCurve(verb.geom.BezierCurve __hx_this, haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> points, org.apache.commons.math3.linear.ArrayRealVector weights)
	{
		//line 21 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\BezierCurve.hx"
		verb.geom.NurbsCurve.__hx_ctor_verb_geom_NurbsCurve(__hx_this, verb.eval.Make.rationalBezierCurve(points, weights));
	}
	
	
}


