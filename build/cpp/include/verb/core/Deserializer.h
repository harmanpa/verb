// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_Deserializer
#define INCLUDED_verb_core_Deserializer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,Deserializer)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Deserializer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Deserializer_obj OBJ_;
		Deserializer_obj();

	public:
		enum { _hx_ClassId = 0x0df36ed5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.core.Deserializer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.core.Deserializer"); }

		inline static ::hx::ObjectPtr< Deserializer_obj > __new() {
			::hx::ObjectPtr< Deserializer_obj > __this = new Deserializer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Deserializer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Deserializer_obj *__this = (Deserializer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Deserializer_obj), false, "verb.core.Deserializer"));
			*(void **)__this = Deserializer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Deserializer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Deserializer",73,35,b9,ad); }

		static  ::Dynamic deserialize(::String s);
		static ::Dynamic deserialize_dyn();

};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_Deserializer */ 