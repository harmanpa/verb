// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KdTree_buildTree_40__Fun<T> extends haxe.lang.Function
{
	public KdTree_buildTree_40__Fun(int dim)
	{
		//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		super(2, 1);
		//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.dim = dim;
	}
	
	
	@Override public double __hx_invoke2_f(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		try 
		{
			//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.KdPoint<T> b = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((verb.core.KdPoint<T>) (((java.lang.Object) (__fn_float2) )) )) : (((verb.core.KdPoint<T>) (__fn_dyn2) )) );
			//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.KdPoint<T> a = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((verb.core.KdPoint<T>) (((java.lang.Object) (__fn_float1) )) )) : (((verb.core.KdPoint<T>) (__fn_dyn1) )) );
			//line 41 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			double diff = ( ((org.apache.commons.math3.linear.ArrayRealVector) (a.point) ).getEntry(((int) (this.dim) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (b.point) ).getEntry(((int) (this.dim) )) );
			//line 42 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( diff == 0.0 )) 
			{
				//line 43 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				return ((double) (0) );
			}
			else
			{
				//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( diff > 0 )) 
				{
					//line 45 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					return ((double) (1) );
				}
				else
				{
					//line 47 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					return ((double) (-1) );
				}
				
			}
			
		}
		catch (java.lang.Throwable typedException)
		{
			//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public int dim;
	
}


