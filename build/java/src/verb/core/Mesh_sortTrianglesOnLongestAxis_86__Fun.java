// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Mesh_sortTrianglesOnLongestAxis_86__Fun extends haxe.lang.Function
{
	public Mesh_sortTrianglesOnLongestAxis_86__Fun()
	{
		//line 86 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		super(2, 1);
	}
	
	
	public static verb.core.Mesh_sortTrianglesOnLongestAxis_86__Fun __hx_current;
	
	@Override public double __hx_invoke2_f(double __fn_float1, java.lang.Object __fn_dyn1, double __fn_float2, java.lang.Object __fn_dyn2)
	{
		//line 86 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		verb.core.Pair<java.lang.Object, java.lang.Object> b = ( (( __fn_dyn2 == haxe.lang.Runtime.undefined )) ? (((verb.core.Pair<java.lang.Object, java.lang.Object>) (((java.lang.Object) (__fn_float2) )) )) : (((verb.core.Pair<java.lang.Object, java.lang.Object>) (__fn_dyn2) )) );
		//line 86 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		verb.core.Pair<java.lang.Object, java.lang.Object> a = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((verb.core.Pair<java.lang.Object, java.lang.Object>) (((java.lang.Object) (__fn_float1) )) )) : (((verb.core.Pair<java.lang.Object, java.lang.Object>) (__fn_dyn1) )) );
		//line 87 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		double a0 = ((double) (haxe.lang.Runtime.toDouble(a.item0)) );
		//line 88 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		double b0 = ((double) (haxe.lang.Runtime.toDouble(b.item0)) );
		//line 90 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
		if (( a0 == b0 )) 
		{
			//line 90 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
			return ((double) (0) );
		}
		else
		{
			//line 90 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
			if (( a0 > b0 )) 
			{
				//line 90 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
				return ((double) (1) );
			}
			else
			{
				//line 90 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mesh.hx"
				return ((double) (-1) );
			}
			
		}
		
	}
	
	
}


