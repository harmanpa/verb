// Generated by Haxe 4.1.4
package verb.core;

import haxe.root.*;

@SuppressWarnings(value={"rawtypes", "unchecked"})
public class Deserializer extends haxe.lang.HxObject
{
	public Deserializer(haxe.lang.EmptyObject empty)
	{
	}
	
	
	public Deserializer()
	{
		//line 30 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Serialization.hx"
		verb.core.Deserializer.__hx_ctor_verb_core_Deserializer(this);
	}
	
	
	protected static void __hx_ctor_verb_core_Deserializer(verb.core.Deserializer __hx_this)
	{
	}
	
	
	public static <T> T deserialize(java.lang.String s)
	{
		//line 44 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Serialization.hx"
		haxe.Unserializer unserializer = new haxe.Unserializer(haxe.lang.Runtime.toString(s));
		//line 45 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Serialization.hx"
		T r = ((T) (unserializer.unserialize()) );
		//line 46 "C:\\Users\\peter\\Development\\verb\\src\\verb\\core\\Serialization.hx"
		return r;
	}
	
	
}


