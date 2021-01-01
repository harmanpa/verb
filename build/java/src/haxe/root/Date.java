// Generated by Haxe 4.1.4
package haxe.root;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Date extends haxe.lang.HxObject
{
	public Date(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Date(int year, int month, int day, int hour, int min, int sec)
	{
		//line 34 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		haxe.root.Date.__hx_ctor__Date(this, year, month, day, hour, min, sec);
	}
	
	
	protected static void __hx_ctor__Date(haxe.root.Date __hx_this, int year, int month, int day, int hour, int min, int sec)
	{
		//line 35 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.date = new java.util.GregorianCalendar(year, month, day, hour, min, sec);
		//line 36 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.dateUTC = new java.util.GregorianCalendar(((java.util.TimeZone) (java.util.TimeZone.getTimeZone(haxe.lang.Runtime.toString("UTC"))) ));
		//line 37 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		__hx_this.dateUTC.setTimeInMillis(((long) (__hx_this.date.getTimeInMillis()) ));
	}
	
	
	public static haxe.root.Date fromTime(double t)
	{
		//line 124 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		haxe.root.Date d = new haxe.root.Date(0, 0, 0, 0, 0, 0);
		//line 125 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		d.date.setTimeInMillis(((long) (t) ));
		//line 126 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		d.dateUTC.setTimeInMillis(((long) (t) ));
		//line 127 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		return d;
	}
	
	
	public static haxe.root.Date fromString(java.lang.String s)
	{
		//line 131 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		switch (s.length())
		{
			case 8:
			{
				//line 133 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				haxe.root.Array<java.lang.String> k = haxe.lang.StringExt.split(s, ":");
				//line 134 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return haxe.root.Date.fromTime(( ( ( ((double) (haxe.lang.Runtime.toDouble(haxe.root.Std.parseInt(k.__get(0)))) ) * ((double) (3600000.) ) ) + ( ((double) (haxe.lang.Runtime.toDouble(haxe.root.Std.parseInt(k.__get(1)))) ) * ((double) (60000.) ) ) ) + ( ((double) (haxe.lang.Runtime.toDouble(haxe.root.Std.parseInt(k.__get(2)))) ) * ((double) (1000.) ) ) ));
			}
			
			
			case 10:
			{
				//line 136 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				haxe.root.Array<java.lang.String> k1 = haxe.lang.StringExt.split(s, "-");
				//line 137 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return new haxe.root.Date(((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(k1.__get(0)))) ), ( ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(k1.__get(1)))) ) - ((int) (1) ) ), ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(k1.__get(2)))) ), 0, 0, 0);
			}
			
			
			case 19:
			{
				//line 139 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				haxe.root.Array<java.lang.String> k2 = haxe.lang.StringExt.split(s, " ");
				//line 140 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				haxe.root.Array<java.lang.String> y = haxe.lang.StringExt.split(k2.__get(0), "-");
				//line 141 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				haxe.root.Array<java.lang.String> t = haxe.lang.StringExt.split(k2.__get(1), ":");
				//line 142 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return new haxe.root.Date(((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(y.__get(0)))) ), ( ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(y.__get(1)))) ) - ((int) (1) ) ), ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(y.__get(2)))) ), ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(t.__get(0)))) ), ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(t.__get(1)))) ), ((int) (haxe.lang.Runtime.toInt(haxe.root.Std.parseInt(t.__get(2)))) ));
			}
			
			
			default:
			{
				//line 144 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				throw ((java.lang.RuntimeException) (haxe.Exception.thrown(( "Invalid date format : " + s ))) );
			}
			
		}
		
	}
	
	
	public java.util.Calendar date;
	
	public java.util.Calendar dateUTC;
	
	@Override public java.lang.Object __hx_setField(java.lang.String field, java.lang.Object value, boolean handleProperties)
	{
		//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		{
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			boolean __temp_executeDef1 = true;
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (( field != null )) 
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				switch (field.hashCode())
				{
					case 1443304214:
					{
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("dateUTC")) 
						{
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							this.dateUTC = ((java.util.Calendar) (value) );
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return value;
						}
						
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
					case 3076014:
					{
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("date")) 
						{
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							this.date = ((java.util.Calendar) (value) );
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return value;
						}
						
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (__temp_executeDef1) 
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return super.__hx_setField(field, value, handleProperties);
			}
			else
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public java.lang.Object __hx_getField(java.lang.String field, boolean throwErrors, boolean isCheck, boolean handleProperties)
	{
		//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		{
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			boolean __temp_executeDef1 = true;
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (( field != null )) 
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				switch (field.hashCode())
				{
					case 1443304214:
					{
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("dateUTC")) 
						{
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return this.dateUTC;
						}
						
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
					case 3076014:
					{
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						if (field.equals("date")) 
						{
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							__temp_executeDef1 = false;
							//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
							return this.date;
						}
						
						//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
						break;
					}
					
					
				}
				
			}
			
			//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
			if (__temp_executeDef1) 
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				return super.__hx_getField(field, throwErrors, isCheck, handleProperties);
			}
			else
			{
				//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
				throw null;
			}
			
		}
		
	}
	
	
	@Override public void __hx_getFields(haxe.root.Array<java.lang.String> baseArr)
	{
		//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		baseArr.push("dateUTC");
		//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		baseArr.push("date");
		//line 30 "C:\\Tools\\HaxeToolkit\\haxe\\std\\java\\_std\\Date.hx"
		super.__hx_getFields(baseArr);
	}
	
	
}


