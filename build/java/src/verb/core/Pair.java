// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Pair<T1, T2> extends haxe.lang.HxObject
{
	public Pair(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Pair(T1 item1, T2 item2)
	{
		//line 296 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		verb.core.Pair.__hx_ctor_verb_core_Pair(((verb.core.Pair<T1, T2>) (this) ), ((T1) (item1) ), ((T2) (item2) ));
		//line 296 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		java.lang.Object __temp_expr1 = ((java.lang.Object) (null) );
	}
	
	
	protected static <T1_c, T2_c> void __hx_ctor_verb_core_Pair(verb.core.Pair<T1_c, T2_c> __hx_this, T1_c item1, T2_c item2)
	{
		//line 297 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		__hx_this.item0 = item1;
		//line 298 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		__hx_this.item1 = item2;
	}
	
	
	public T1 item0;
	
	public T2 item1;
	
	@Override public double __hx_setField_f(java.lang.String field, double value, boolean handleProperties)
	{
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		{
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			boolean __temp_executeDef1 = true;
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (( field != null )) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				switch (field.hashCode())
				{
					case 100525950:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item1")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							this.item1 = ((T2) (((java.lang.Object) (value) )) );
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (value) ))) );
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
					case 100525949:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item0")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							this.item0 = ((T1) (((java.lang.Object) (value) )) );
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (value) ))) );
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (__temp_executeDef1) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				return super.__hx_setField_f(field, value, handleProperties);
			}
			else
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		{
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			boolean __temp_executeDef1 = true;
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (( field != null )) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				switch (field.hashCode())
				{
					case 100525950:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item1")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							this.item1 = ((T2) (value) );
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return value;
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
					case 100525949:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item0")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							this.item0 = ((T1) (value) );
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return value;
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (__temp_executeDef1) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		{
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			boolean __temp_executeDef1 = true;
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (( field != null )) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				switch (field.hashCode())
				{
					case 100525950:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item1")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return this.item1;
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
					case 100525949:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item0")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return this.item0;
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (__temp_executeDef1) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public double __hx_getField_f(java.lang.String field, boolean throwErrors, boolean handleProperties)
	{
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		{
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			boolean __temp_executeDef1 = true;
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (( field != null )) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				switch (field.hashCode())
				{
					case 100525950:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item1")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (this.item1) ))) );
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
					case 100525949:
					{
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						if (field.equals("item0")) 
						{
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							__temp_executeDef1 = false;
							//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
							return ((double) (haxe.lang.Runtime.toDouble(((java.lang.Object) (this.item0) ))) );
						}
						
						//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
			if (__temp_executeDef1) 
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				return super.__hx_getField_f(field, throwErrors, handleProperties);
			}
			else
			{
				//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		baseArr.push("item1");
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		baseArr.push("item0");
		//line 292 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Data.java.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


