// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KdTree_nearest_64__Fun<T> extends haxe.lang.Function
{
	public KdTree_nearest_64__Fun()
	{
		//line 64 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		super(1, 1);
	}
	
	
	@Override public double __hx_invoke1_f(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 64 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		verb.core.HeapElement<verb.core.KdNode<T>> e = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((verb.core.HeapElement<verb.core.KdNode<T>>) (((java.lang.Object) (__fn_float1) )) )) : (((verb.core.HeapElement<verb.core.KdNode<T>>) (__fn_dyn1) )) );
		//line 64 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		return  - (e.value) ;
	}
	
	
}


