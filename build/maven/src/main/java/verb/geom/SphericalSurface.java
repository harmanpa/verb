// Generated by Haxe 4.1.4
package verb.geom;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class SphericalSurface extends verb.geom.NurbsSurface
{
	public SphericalSurface(haxe.lang.EmptyObject empty)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		super(haxe.lang.EmptyObject.EMPTY);
	}
	
	
	public SphericalSurface(org.apache.commons.math3.linear.ArrayRealVector center, double radius)
	{
		//line 22 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		super(((haxe.lang.EmptyObject) (haxe.lang.EmptyObject.EMPTY) ));
		//line 22 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		verb.geom.SphericalSurface.__hx_ctor_verb_geom_SphericalSurface(this, center, radius);
	}
	
	
	protected static void __hx_ctor_verb_geom_SphericalSurface(verb.geom.SphericalSurface __hx_this, org.apache.commons.math3.linear.ArrayRealVector center, double radius)
	{
		//line 22 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		verb.geom.NurbsSurface.__hx_ctor_verb_geom_NurbsSurface(__hx_this, verb.eval.Make.sphericalSurface(center, verb.core._Data.Vector_Impl_.fromArray(new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (0) ), ((java.lang.Object) (0) ), ((java.lang.Object) (1) )})), verb.core._Data.Vector_Impl_.fromArray(new haxe.root.Array<java.lang.Object>(new java.lang.Object[]{((java.lang.Object) (1) ), ((java.lang.Object) (0) ), ((java.lang.Object) (0) )})), radius));
		//line 24 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		__hx_this._center = center;
		//line 25 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		__hx_this._radius = radius;
	}
	
	
	public org.apache.commons.math3.linear.ArrayRealVector _center;
	
	public double _radius;
	
	public org.apache.commons.math3.linear.ArrayRealVector center()
	{
		//line 33 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		return this._center;
	}
	
	
	public double radius()
	{
		//line 37 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		return this._radius;
	}
	
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							this._radius = ((double) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							this._radius = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
					case 1344457076:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_center")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							this._center = ((org.apache.commons.math3.linear.ArrayRealVector) (value) );
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return value;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				switch (field.hashCode())
				{
					case -938578798:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "radius")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
					case 1344457076:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_center")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return this._center;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
					case -1364013995:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("center")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return ((haxe.lang.Function) (new haxe.lang.Closure(this, "center")) );
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
					case 1769892273:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return this._radius;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				switch (field.hashCode())
				{
					case 1769892273:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("_radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return this._radius;
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_invokeField(java.lang.String field, java.lang.Object[] dynargs)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		{
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			boolean __temp_executeDef1 = true;
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (( field != null )) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				switch (field.hashCode())
				{
					case -938578798:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("radius")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return this.radius();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
					case -1364013995:
					{
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						if (field.equals("center")) 
						{
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							__temp_executeDef1 = false;
							//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
							return this.center();
						}
						
						//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
			if (__temp_executeDef1) 
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				return super.__hx_invokeField(field, dynargs);
			}
			else
			{
				//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		baseArr.push("_radius");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		baseArr.push("_center");
		//line 11 "C:\\Users\\peter\\Development\\verb\\src\\verb\\geom\\SphericalSurface.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


