// Generated by Haxe 4.1.4
package verb.geom;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CylindricalSurface extends verb.geom.NurbsSurface
{
	public CylindricalSurface(haxe.lang.EmptyObject empty)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public CylindricalSurface(org.apache.commons.math3.linear.ArrayRealVector axis, org.apache.commons.math3.linear.ArrayRealVector xaxis, org.apache.commons.math3.linear.ArrayRealVector base, double height, double radius)
	{
		//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		verb.geom.CylindricalSurface.__hx_ctor_verb_geom_CylindricalSurface(this, axis, xaxis, base, height, radius);
	}
	
	
	protected static void __hx_ctor_verb_geom_CylindricalSurface(verb.geom.CylindricalSurface __hx_this, org.apache.commons.math3.linear.ArrayRealVector axis, org.apache.commons.math3.linear.ArrayRealVector xaxis, org.apache.commons.math3.linear.ArrayRealVector base, double height, double radius)
	{
		//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		verb.geom.NurbsSurface.__hx_ctor_verb_geom_NurbsSurface(__hx_this, verb.eval.Make.cylindricalSurface(axis, xaxis, base, height, radius));
		//line 27 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		__hx_this._axis = axis;
		//line 28 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		__hx_this._xaxis = xaxis;
		//line 29 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		__hx_this._base = base;
		//line 30 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		__hx_this._height = height;
		//line 31 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		__hx_this._radius = radius;
	}
	
	
	public org.apache.commons.math3.linear.ArrayRealVector _axis;
	
	public org.apache.commons.math3.linear.ArrayRealVector _xaxis;
	
	public org.apache.commons.math3.linear.ArrayRealVector _base;
	
	public double _height;
	
	public double _radius;
	
	public org.apache.commons.math3.linear.ArrayRealVector axis()
	{
		//line 41 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		return this._axis;
	}
	
	
	public org.apache.commons.math3.linear.ArrayRealVector xaxis()
	{
		//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		return this._xaxis;
	}
	
	
	public org.apache.commons.math3.linear.ArrayRealVector base()
	{
		//line 47 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		return this._base;
	}
	
	
	public double height()
	{
		//line 50 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		return this._height;
	}
	
	
	public double radius()
	{
		//line 53 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		return this._radius;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		{
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (( field != null )) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._radius = ((double) (value) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 1487441478:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._height = ((double) (value) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		{
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (( field != null )) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._radius = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 90742912:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_axis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._axis = ((org.apache.commons.math3.linear.ArrayRealVector) (value) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 1487441478:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._height = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case -1461367014:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_xaxis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._xaxis = ((org.apache.commons.math3.linear.ArrayRealVector) (value) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 90750896:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_base")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							this._base = ((org.apache.commons.math3.linear.ArrayRealVector) (value) );
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return value;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		{
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (( field != null )) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				switch (field.hashCode())
				{
					case -938578798:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "radius")) );
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 90742912:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_axis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._axis;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case -1221029593:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "height")) );
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case -1461367014:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_xaxis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._xaxis;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 3016401:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("base")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "base")) );
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 90750896:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_base")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._base;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 113830937:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("xaxis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "xaxis")) );
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 1487441478:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._height;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 3008417:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("axis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "axis")) );
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 1769892273:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._radius;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		{
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (( field != null )) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._radius;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 1487441478:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("_height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this._height;
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		{
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (( field != null )) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				switch (field.hashCode())
				{
					case -938578798:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("radius")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this.radius();
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 3008417:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("axis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this.axis();
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case -1221029593:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("height")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this.height();
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 113830937:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("xaxis")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this.xaxis();
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
					case 3016401:
					{
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						if (field.equals("base")) 
						{
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							__temp_executeDef1 = false;
							//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
							return this.base();
						}
						
						//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		baseArr.push("_radius");
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		baseArr.push("_height");
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		baseArr.push("_base");
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		baseArr.push("_xaxis");
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		baseArr.push("_axis");
		//line 12 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\CylindricalSurface.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


