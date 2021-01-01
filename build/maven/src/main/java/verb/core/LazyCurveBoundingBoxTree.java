// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class LazyCurveBoundingBoxTree extends haxe.lang.HxObject implements verb.eval.IBoundingBoxTree<verb.core.NurbsCurveData>
{
	public LazyCurveBoundingBoxTree(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public LazyCurveBoundingBoxTree(verb.core.NurbsCurveData curve, java.lang.Object knotTol)
	{
		//line 17 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		verb.core.LazyCurveBoundingBoxTree.__hx_ctor_verb_core_LazyCurveBoundingBoxTree(this, curve, knotTol);
	}
	
	
	protected static void __hx_ctor_verb_core_LazyCurveBoundingBoxTree(verb.core.LazyCurveBoundingBoxTree __hx_this, verb.core.NurbsCurveData curve, java.lang.Object knotTol)
	{
		//line 17 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		try 
		{
			//line 14 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			__hx_this._boundingBox = null;
			//line 17 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			{
				//line 18 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				__hx_this._curve = curve;
				//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				if (haxe.lang.Runtime.eq(knotTol, null)) 
				{
					//line 20 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
					org.apache.commons.math3.linear.ArrayRealVector a = __hx_this._curve.knots;
					//line 20 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
					knotTol = ( (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (0) )) )) / 64 );
				}
				
				//line 22 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				__hx_this._knotTol = ((double) (haxe.lang.Runtime.toDouble(knotTol)) );
			}
			
		}
		catch (java.lang.Throwable typedException)
		{
			//line 17 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.NurbsCurveData _curve;
	
	public verb.core.BoundingBox _boundingBox;
	
	public double _knotTol;
	
	public verb.core.Pair<verb.eval.IBoundingBoxTree<verb.core.NurbsCurveData>, verb.eval.IBoundingBoxTree<verb.core.NurbsCurveData>> split()
	{
		//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		try 
		{
			//line 26 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			double min = ((org.apache.commons.math3.linear.ArrayRealVector) (this._curve.knots) ).getEntry(((int) (0) ));
			//line 27 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			org.apache.commons.math3.linear.ArrayRealVector this1 = this._curve.knots;
			//line 27 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			double max = this1.getEntry(((int) (( this1.getDimension() - 1 )) ));
			//line 28 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			double dom = ( max - min );
			//line 30 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			haxe.root.Array<verb.core.NurbsCurveData> crvs = verb.eval.Divide.curveSplit(this._curve, ( ( (( max + min )) / 2.0 ) + ( ( dom * 0.1 ) * java.lang.Math.random() ) ));
			//line 32 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			return new verb.core.Pair<verb.eval.IBoundingBoxTree<verb.core.NurbsCurveData>, verb.eval.IBoundingBoxTree<verb.core.NurbsCurveData>>(new verb.core.LazyCurveBoundingBoxTree(crvs.__get(0), this._knotTol), new verb.core.LazyCurveBoundingBoxTree(crvs.__get(1), this._knotTol));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.BoundingBox boundingBox()
	{
		//line 38 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		if (( this._boundingBox == null )) 
		{
			//line 39 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			this._boundingBox = new verb.core.BoundingBox(((haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector>) (verb.eval.Eval.dehomogenize1d(this._curve.controlPoints)) ));
		}
		
		//line 41 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		return this._boundingBox;
	}
	
	
	public verb.core.NurbsCurveData yield()
	{
		//line 45 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		return this._curve;
	}
	
	
	public boolean indivisible(double tolerance)
	{
		//line 49 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		try 
		{
			//line 49 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			org.apache.commons.math3.linear.ArrayRealVector a = this._curve.knots;
			//line 49 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			return ( ( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (0) )) ) < this._knotTol );
		}
		catch (java.lang.Throwable typedException)
		{
			//line 48 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public boolean empty()
	{
		//line 53 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		return false;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 1792128106:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_knotTol")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							this._knotTol = ((double) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 1792128106:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_knotTol")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							this._knotTol = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1480170512:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_curve")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							this._curve = ((verb.core.NurbsCurveData) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1884107832:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							this._boundingBox = ((verb.core.BoundingBox) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 96634189:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("empty")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "empty")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1480170512:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_curve")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this._curve;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1421565752:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("indivisible")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "indivisible")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1884107832:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this._boundingBox;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case 114974605:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("yield")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "yield")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case 1792128106:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_knotTol")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this._knotTol;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1262064249:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "boundingBox")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case 109648666:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("split")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "split")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 1792128106:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("_knotTol")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this._knotTol;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 96634189:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("empty")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this.empty();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case 109648666:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("split")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this.split();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1421565752:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("indivisible")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this.indivisible(((double) (haxe.lang.Runtime.toDouble(dynargs[0])) ));
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case -1262064249:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this.boundingBox();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
					case 114974605:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						if (field.equals("yield")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
							return this.yield();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		baseArr.push("_knotTol");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		baseArr.push("_boundingBox");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		baseArr.push("_curve");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazyCurveBoundingBoxTree.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


