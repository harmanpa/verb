// Generated by Haxe 4.1.4
package verb.core._Mat;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class LUDecomp extends haxe.lang.HxObject
{
	public LUDecomp(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public LUDecomp(haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> lu, haxe.root.Array<java.lang.Object> p)
	{
		//line 227 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		verb.core._Mat.LUDecomp.__hx_ctor_verb_core__Mat_LUDecomp(this, lu, p);
	}
	
	
	protected static void __hx_ctor_verb_core__Mat_LUDecomp(verb.core._Mat.LUDecomp __hx_this, haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> lu, haxe.root.Array<java.lang.Object> p)
	{
		//line 228 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		__hx_this.LU = lu;
		//line 229 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		__hx_this.P = p;
	}
	
	
	public haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector> LU;
	
	public haxe.root.Array<java.lang.Object> P;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		{
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			boolean __temp_executeDef1 = true;
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			if (( field != null )) 
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				switch (field.hashCode())
				{
					case 80:
					{
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						if (field.equals("P")) 
						{
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							__temp_executeDef1 = false;
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							this.P = ((haxe.root.Array<java.lang.Object>) (value) );
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							return value;
						}
						
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						break;
					}
					
					
					case 2441:
					{
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						if (field.equals("LU")) 
						{
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							__temp_executeDef1 = false;
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							this.LU = ((haxe.root.Array<org.apache.commons.math3.linear.ArrayRealVector>) (value) );
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							return value;
						}
						
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			if (__temp_executeDef1) 
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		{
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			boolean __temp_executeDef1 = true;
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			if (( field != null )) 
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				switch (field.hashCode())
				{
					case 80:
					{
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						if (field.equals("P")) 
						{
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							__temp_executeDef1 = false;
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							return this.P;
						}
						
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						break;
					}
					
					
					case 2441:
					{
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						if (field.equals("LU")) 
						{
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							__temp_executeDef1 = false;
							//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
							return this.LU;
						}
						
						//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
			if (__temp_executeDef1) 
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		baseArr.push("P");
		//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		baseArr.push("LU");
		//line 223 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Mat.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


