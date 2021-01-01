// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class KdTree_nearest_67__Fun<T> extends haxe.lang.Function
{
	public KdTree_nearest_67__Fun(org.apache.commons.math3.linear.ArrayRealVector point, haxe.lang.Function[] nearestSearch, int maxNodes, verb.core.BinaryHeap<verb.core.KdNode<T>> bestNodes, verb.core.KdTree<T> _gthis)
	{
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		super(1, 0);
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.point = point;
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.nearestSearch = nearestSearch;
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.maxNodes = maxNodes;
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this.bestNodes = bestNodes;
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		this._gthis = _gthis;
	}
	
	
	@Override public java.lang.Object __hx_invoke1_o(double __fn_float1, java.lang.Object __fn_dyn1)
	{
		//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
		try 
		{
			//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.KdNode<T> node = ( (( __fn_dyn1 == haxe.lang.Runtime.undefined )) ? (((verb.core.KdNode<T>) (((java.lang.Object) (__fn_float1) )) )) : (((verb.core.KdNode<T>) (__fn_dyn1) )) );
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.KdNode<T> bestChild = null;
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			int dimension = node.dimension;
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			double ownDistance = ((double) (this._gthis.distanceFunction.__hx_invoke2_f(0.0, this.point, 0.0, node.kdPoint.point)) );
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			haxe.root.Array<java.lang.Object> _g = new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{});
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			{
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				int _g1 = 0;
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				int _g2 = this._gthis.dim;
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				while (( _g1 < _g2 ))
				{
					//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					int i = _g1++;
					//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					_g.push(0.0);
				}
				
			}
			
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			haxe.root.Array<java.lang.Object> linearPoint = _g;
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			verb.core.KdNode<T> otherChild = null;
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			java.lang.Object i1 = null;
			//line 77 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			haxe.lang.Function saveNode = new verb.core.KdTree_nearest_77__Fun<T>(this.maxNodes, this.bestNodes);
			//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			{
				//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				int _g3 = 0;
				//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				int _g4 = this._gthis.dim;
				//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				while (( _g3 < _g4 ))
				{
					//line 84 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					int i2 = _g3++;
					//line 85 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					if (( i2 == node.dimension )) 
					{
						//line 86 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						double __temp_expr2 = ((double) (haxe.lang.Runtime.toDouble(linearPoint.__set(i2, ((org.apache.commons.math3.linear.ArrayRealVector) (this.point) ).getEntry(((int) (i2) ))))) );
					}
					else
					{
						//line 88 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						double __temp_expr1 = ((double) (haxe.lang.Runtime.toDouble(linearPoint.__set(i2, ((org.apache.commons.math3.linear.ArrayRealVector) (node.kdPoint.point) ).getEntry(((int) (i2) ))))) );
					}
					
				}
				
			}
			
			//line 69 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			double linearDistance = ((double) (this._gthis.distanceFunction.__hx_invoke2_f(0.0, verb.core._Data.Vector_Impl_.fromArray(linearPoint), 0.0, node.kdPoint.point)) );
			//line 94 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( ( node.right == null ) && ( node.left == null ) )) 
			{
				//line 95 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( ( this.bestNodes.size() < this.maxNodes ) || ( ownDistance < this.bestNodes.peek().value ) )) 
				{
					//line 96 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					saveNode.__hx_invoke2_o(0.0, node, ownDistance, haxe.lang.Runtime.undefined);
				}
				
				//line 98 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				return null;
			}
			
			//line 101 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( node.right == null )) 
			{
				//line 102 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				bestChild = node.left;
			}
			else
			{
				//line 103 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( node.left == null )) 
				{
					//line 104 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					bestChild = node.right;
				}
				else
				{
					//line 106 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					if (( ((org.apache.commons.math3.linear.ArrayRealVector) (this.point) ).getEntry(((int) (dimension) )) < ((org.apache.commons.math3.linear.ArrayRealVector) (node.kdPoint.point) ).getEntry(((int) (dimension) )) )) 
					{
						//line 107 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						bestChild = node.left;
					}
					else
					{
						//line 109 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
						bestChild = node.right;
					}
					
				}
				
			}
			
			//line 113 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			this.nearestSearch[0].__hx_invoke1_o(0.0, bestChild);
			//line 115 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( ( this.bestNodes.size() < this.maxNodes ) || ( ownDistance < this.bestNodes.peek().value ) )) 
			{
				//line 116 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				saveNode.__hx_invoke2_o(0.0, node, ownDistance, haxe.lang.Runtime.undefined);
			}
			
			//line 119 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			if (( ( this.bestNodes.size() < this.maxNodes ) || ( java.lang.Math.abs(linearDistance) < this.bestNodes.peek().value ) )) 
			{
				//line 120 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( bestChild == node.left )) 
				{
					//line 121 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					otherChild = node.right;
				}
				else
				{
					//line 123 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					otherChild = node.left;
				}
				
				//line 125 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
				if (( otherChild != null )) 
				{
					//line 126 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
					this.nearestSearch[0].__hx_invoke1_o(0.0, otherChild);
				}
				
			}
			
			//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			return null;
		}
		catch (java.lang.Throwable typedException)
		{
			//line 67 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\KdTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public org.apache.commons.math3.linear.ArrayRealVector point;
	
	public haxe.lang.Function[] nearestSearch;
	
	public int maxNodes;
	
	public verb.core.BinaryHeap<verb.core.KdNode<T>> bestNodes;
	
	public verb.core.KdTree<T> _gthis;
	
}


