// Generated by Haxe 4.1.4
package verb.eval;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Intersect_curveAndSurfaceWithEstimate_474__Fun extends haxe.lang.Function
{
	public Intersect_curveAndSurfaceWithEstimate_474__Fun(verb.core.NurbsSurfaceData surface, verb.core.NurbsCurveData curve)
	{
		//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		super(1, 1);
		//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		this.surface = surface;
		//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		this.curve = curve;
	}
	
	
	@Override public double __hx_invoke1_f(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		try 
		{
			//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector x = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((org.apache.commons.math3.linear.ArrayRealVector) (((java.lang.Object) (__fn_float1) )) )) : (((org.apache.commons.math3.linear.ArrayRealVector) (__fn_dyn1) )) );
			//line 475 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector p1 = verb.eval.Eval.rationalCurvePoint(this.curve, ((org.apache.commons.math3.linear.ArrayRealVector) (x) ).getEntry(((int) (0) )));
			//line 475 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector p2 = verb.eval.Eval.rationalSurfacePoint(this.surface, ((org.apache.commons.math3.linear.ArrayRealVector) (x) ).getEntry(((int) (1) )), ((org.apache.commons.math3.linear.ArrayRealVector) (x) ).getEntry(((int) (2) )));
			//line 475 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector p1_p2 = verb.core.Vec.sub(p1, p2);
			//line 479 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			return verb.core.Vec.dot(p1_p2, p1_p2);
		}
		catch (java.lang.Throwable typedException)
		{
			//line 474 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.NurbsSurfaceData surface;
	
	public verb.core.NurbsCurveData curve;
	
}


