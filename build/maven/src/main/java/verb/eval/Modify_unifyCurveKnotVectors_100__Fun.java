// Generated by Haxe 4.1.4
package verb.eval;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Modify_unifyCurveKnotVectors_100__Fun extends haxe.lang.Function
{
	public Modify_unifyCurveKnotVectors_100__Fun()
	{
		//line 100 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Modify.hx"
		super(2, 1);
	}
	
	
	public static verb.eval.Modify_unifyCurveKnotVectors_100__Fun __hx_current;
	
	@Override public double __hx_invoke2_f(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 100 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Modify.hx"
		int a = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((int) (__fn_float2) )) : (((int) (haxe.lang.Runtime.toInt(__fn_dyn2)) )) );
		//line 100 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Modify.hx"
		verb.core.NurbsCurveData x = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((verb.core.NurbsCurveData) (((java.lang.Object) (__fn_float1) )) )) : (((verb.core.NurbsCurveData) (__fn_dyn1) )) );
		//line 100 "C:\\Users\\peter\\Development\\verb\\src\\verb\\eval\\Modify.hx"
		return ((double) (verb.eval.Modify.imax(x.degree, a)) );
	}
	
	
}


