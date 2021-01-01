// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class LazySurfaceBoundingBoxTree extends haxe.lang.HxObject implements verb.eval.IBoundingBoxTree<verb.core.NurbsSurfaceData>
{
	public LazySurfaceBoundingBoxTree(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public LazySurfaceBoundingBoxTree(verb.core.NurbsSurfaceData surface, java.lang.Object splitV, java.lang.Object knotTolU, java.lang.Object knotTolV)
	{
		//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		verb.core.LazySurfaceBoundingBoxTree.__hx_ctor_verb_core_LazySurfaceBoundingBoxTree(this, surface, splitV, knotTolU, knotTolV);
	}
	
	
	protected static void __hx_ctor_verb_core_LazySurfaceBoundingBoxTree(verb.core.LazySurfaceBoundingBoxTree __hx_this, verb.core.NurbsSurfaceData surface, java.lang.Object splitV, java.lang.Object knotTolU, java.lang.Object knotTolV)
	{
		//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		try 
		{
			//line 14 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			__hx_this._boundingBox = null;
			//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			{
				//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				boolean splitV1 = ( (haxe.lang.Runtime.eq(splitV, null)) ? (false) : (haxe.lang.Runtime.toBool(((java.lang.Boolean) (splitV) ))) );
				//line 20 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				__hx_this._surface = surface;
				//line 21 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				__hx_this._splitV = splitV1;
				//line 23 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				if (haxe.lang.Runtime.eq(knotTolU, null)) 
				{
					//line 24 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					org.apache.commons.math3.linear.ArrayRealVector a = surface.knotsU;
					//line 24 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					knotTolU = ( (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (0) )) )) / 16 );
				}
				
				//line 27 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				if (haxe.lang.Runtime.eq(knotTolV, null)) 
				{
					//line 28 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					org.apache.commons.math3.linear.ArrayRealVector a1 = surface.knotsV;
					//line 28 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					knotTolV = ( (( ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getEntry(((int) (0) )) )) / 16 );
				}
				
				//line 31 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				__hx_this._knotTolU = ((double) (haxe.lang.Runtime.toDouble(knotTolU)) );
				//line 32 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				__hx_this._knotTolV = ((double) (haxe.lang.Runtime.toDouble(knotTolV)) );
			}
			
		}
		catch (java.lang.Throwable typedException)
		{
			//line 19 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.NurbsSurfaceData _surface;
	
	public verb.core.BoundingBox _boundingBox;
	
	public boolean _splitV;
	
	public double _knotTolU;
	
	public double _knotTolV;
	
	public verb.core.Pair<verb.eval.IBoundingBoxTree<verb.core.NurbsSurfaceData>, verb.eval.IBoundingBoxTree<verb.core.NurbsSurfaceData>> split()
	{
		//line 35 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		try 
		{
			//line 36 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			double min = 0.0;
			//line 37 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			double max = 0.0;
			//line 39 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (this._splitV) 
			{
				//line 40 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				min = ((org.apache.commons.math3.linear.ArrayRealVector) (this._surface.knotsV) ).getEntry(((int) (0) ));
				//line 41 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				org.apache.commons.math3.linear.ArrayRealVector this1 = this._surface.knotsV;
				//line 41 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				max = this1.getEntry(((int) (( this1.getDimension() - 1 )) ));
			}
			else
			{
				//line 43 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				min = ((org.apache.commons.math3.linear.ArrayRealVector) (this._surface.knotsU) ).getEntry(((int) (0) ));
				//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				org.apache.commons.math3.linear.ArrayRealVector this2 = this._surface.knotsU;
				//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				max = this2.getEntry(((int) (( this2.getDimension() - 1 )) ));
			}
			
			//line 47 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			double dom = ( max - min );
			//line 48 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			double pivot = ( (( min + max )) / 2.0 );
			//line 50 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			haxe.root.Array<verb.core.NurbsSurfaceData> srfs = verb.eval.Divide.surfaceSplit(this._surface, pivot, this._splitV);
			//line 52 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			return new verb.core.Pair<verb.eval.IBoundingBoxTree<verb.core.NurbsSurfaceData>, verb.eval.IBoundingBoxTree<verb.core.NurbsSurfaceData>>(new verb.core.LazySurfaceBoundingBoxTree(srfs.__get(0),  ! (this._splitV) , this._knotTolU, this._knotTolV), new verb.core.LazySurfaceBoundingBoxTree(srfs.__get(1),  ! (this._splitV) , this._knotTolU, this._knotTolV));
		}
		catch (java.lang.Throwable typedException)
		{
			//line 35 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public verb.core.BoundingBox boundingBox()
	{
		//line 58 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		if (( this._boundingBox == null )) 
		{
			//line 59 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			this._boundingBox = new verb.core.BoundingBox(((haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector>) (null) ));
			//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			{
				//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				int _g = 0;
				//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				haxe.root.Array<haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector>> _g1 = this._surface.controlPoints;
				//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				while (( _g < _g1.length ))
				{
					//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> row = _g1.__get(_g);
					//line 60 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					 ++ _g;
					//line 61 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
					this._boundingBox.addRange(verb.eval.Eval.dehomogenize1d(row));
				}
				
			}
			
		}
		
		//line 64 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		return this._boundingBox;
	}
	
	
	public verb.core.NurbsSurfaceData yield()
	{
		//line 68 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		return this._surface;
	}
	
	
	public boolean indivisible(double tolerance)
	{
		//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		try 
		{
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			org.apache.commons.math3.linear.ArrayRealVector a = this._surface.knotsV;
			//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( ( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a) ).getEntry(((int) (0) )) ) < this._knotTolV )) 
			{
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				org.apache.commons.math3.linear.ArrayRealVector a1 = this._surface.knotsU;
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return ( ( ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getEntry(((int) (( ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getDimension() - 1 )) )) - ((org.apache.commons.math3.linear.ArrayRealVector) (a1) ).getEntry(((int) (0) )) ) < this._knotTolU );
			}
			else
			{
				//line 72 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return false;
			}
			
		}
		catch (java.lang.Throwable typedException)
		{
			//line 71 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			throw ((java.lang.RuntimeException) (haxe.Exception.thrown(typedException)) );
		}
		
		
	}
	
	
	public boolean empty()
	{
		//line 76 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		return false;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case -278603476:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._knotTolV = ((double) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -278603477:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolU")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._knotTolU = ((double) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case -278603476:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._knotTolV = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 504992622:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_surface")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._surface = ((verb.core.NurbsSurfaceData) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -278603477:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolU")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._knotTolU = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1884107832:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._boundingBox = ((verb.core.BoundingBox) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 1812612507:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_splitV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							this._splitV = haxe.lang.Runtime.toBool(((java.lang.Boolean) (value) ));
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 96634189:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("empty")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "empty")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 504992622:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_surface")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._surface;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1421565752:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("indivisible")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "indivisible")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1884107832:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._boundingBox;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 114974605:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("yield")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "yield")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 1812612507:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_splitV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._splitV;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1262064249:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "boundingBox")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -278603477:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolU")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._knotTolU;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 109648666:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("split")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "split")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -278603476:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._knotTolV;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case -278603476:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolV")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._knotTolV;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -278603477:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("_knotTolU")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this._knotTolU;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				switch (field.hashCode())
				{
					case 96634189:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("empty")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this.empty();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 109648666:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("split")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this.split();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1421565752:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("indivisible")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this.indivisible(((double) (haxe.lang.Runtime.toDouble(dynargs[0])) ));
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case -1262064249:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("boundingBox")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this.boundingBox();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
					case 114974605:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						if (field.equals("yield")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
							return this.yield();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		baseArr.push("_knotTolV");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		baseArr.push("_knotTolU");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		baseArr.push("_splitV");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		baseArr.push("_boundingBox");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		baseArr.push("_surface");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\LazySurfaceBoundingBoxTree.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


