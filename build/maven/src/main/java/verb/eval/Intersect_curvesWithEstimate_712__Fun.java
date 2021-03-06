// Generated by Haxe 4.1.4
package verb.eval;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Intersect_curvesWithEstimate_712__Fun extends haxe.lang.Function
{
	public Intersect_curvesWithEstimate_712__Fun(verb.core.NurbsCurveData curve1, verb.core.NurbsCurveData curve0)
	{
		//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		super(1, 0);
		//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		this.curve1 = curve1;
		//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		this.curve0 = curve0;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
		try 
		{
			//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector x = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((org.apache.commons.math3.linear.ArrayRealVector) (((java.lang.Object) (__fn_float1) )) )) : (((org.apache.commons.math3.linear.ArrayRealVector) (__fn_dyn1) )) );
			//line 713 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> dc0 = verb.eval.Eval.rationalCurveDerivatives(this.curve0, ((org.apache.commons.math3.linear.ArrayRealVector) (x) ).getEntry(((int) (0) )), 1);
			//line 713 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> dc1 = verb.eval.Eval.rationalCurveDerivatives(this.curve1, ((org.apache.commons.math3.linear.ArrayRealVector) (x) ).getEntry(((int) (1) )), 1);
			//line 716 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector r = verb.core.Vec.sub(dc0.__get(0), dc1.__get(0));
			//line 718 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector drdu = dc0.__get(1);
			//line 719 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			org.apache.commons.math3.linear.ArrayRealVector drdt = verb.core.Vec.mul(-1.0, dc1.__get(1));
			//line 721 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			return verb.core._Data.Vector_Impl_.fromArray(new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (( 2.0 * verb.core.Vec.dot(drdu, r) )) ), ((java.lang.Object) (( 2.0 * verb.core.Vec.dot(drdt, r) )) )}));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 712 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Intersect.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.NurbsCurveData curve1;
	
	public verb.core.NurbsCurveData curve0;
	
}


