// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Minimizer_uncmin_13__Fun extends haxe.lang.Function
{
	public Minimizer_uncmin_13__Fun(haxe.lang.Function f)
	{
		//line 13 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Minimizer.hx"
		super(1, 0);
		//line 13 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Minimizer.hx"
		this.f = f;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 13 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Minimizer.hx"
		org.apache.commons.math3.linear.ArrayRealVector x = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((org.apache.commons.math3.linear.ArrayRealVector) (((java.lang.Object) (__fn_float1) )) )) : (((org.apache.commons.math3.linear.ArrayRealVector) (__fn_dyn1) )) );
		//line 13 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Minimizer.hx"
		return verb.core.Minimizer.numericalGradient(this.f, x);
	}
	
	
	public haxe.lang.Function f;
	
}


