// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class CurvePoint extends haxe.lang.HxObject
{
	public CurvePoint(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public CurvePoint(double u, org.apache.commons.math3.linear.ArrayRealVector pt)
	{
		//line 164 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		verb.core.CurvePoint.__hx_ctor_verb_core_CurvePoint(this, u, pt);
	}
	
	
	protected static void __hx_ctor_verb_core_CurvePoint(verb.core.CurvePoint __hx_this, double u, org.apache.commons.math3.linear.ArrayRealVector pt)
	{
		//line 165 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		__hx_this.u = u;
		//line 166 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		__hx_this.pt = pt;
	}
	
	
	public double u;
	
	public org.apache.commons.math3.linear.ArrayRealVector pt;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		{
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			boolean __temp_executeDef1 = true;
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (( field != null )) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				switch (field.hashCode())
				{
					case 117:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("u")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							this.u = ((double) (value) );
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return value;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (__temp_executeDef1) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		{
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			boolean __temp_executeDef1 = true;
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (( field != null )) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				switch (field.hashCode())
				{
					case 3588:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("pt")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							this.pt = ((org.apache.commons.math3.linear.ArrayRealVector) (value) );
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return value;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
					case 117:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("u")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							this.u = ((double) (haxe.lang.Runtime.toDouble(value)) );
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return value;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (__temp_executeDef1) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		{
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			boolean __temp_executeDef1 = true;
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (( field != null )) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				switch (field.hashCode())
				{
					case 3588:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("pt")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return this.pt;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
					case 117:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("u")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return this.u;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (__temp_executeDef1) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		{
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			boolean __temp_executeDef1 = true;
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (( field != null )) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				switch (field.hashCode())
				{
					case 117:
					{
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						if (field.equals("u")) 
						{
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							__temp_executeDef1 = false;
							//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
							return this.u;
						}
						
						//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
			if (__temp_executeDef1) 
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		baseArr.push("pt");
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		baseArr.push("u");
		//line 160 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Intersections.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


