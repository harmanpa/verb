// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_Pair
#define INCLUDED_verb_core_Pair

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_fbc105299af82c50_206_new)
HX_DECLARE_CLASS2(verb,core,Pair)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Pair_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Pair_obj OBJ_;
		Pair_obj();

	public:
		enum { _hx_ClassId = 0x69002638 };

		void __construct( ::Dynamic item1, ::Dynamic item2);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.Pair")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.Pair"); }

		inline static ::hx::ObjectPtr< Pair_obj > __new( ::Dynamic item1, ::Dynamic item2) {
			::hx::ObjectPtr< Pair_obj > __this = new Pair_obj();
			__this->__construct(item1,item2);
			return __this;
		}

		inline static ::hx::ObjectPtr< Pair_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic item1, ::Dynamic item2) {
			Pair_obj *__this = (Pair_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pair_obj), true, "verb.core.Pair"));
			*(void **)__this = Pair_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fbc105299af82c50_206_new)
HXLINE( 207)		( ( ::verb::core::Pair)(__this) )->item0 = item1;
HXLINE( 208)		( ( ::verb::core::Pair)(__this) )->item1 = item2;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Pair_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Pair",3a,08,2b,35); }

		 ::Dynamic item0;
		 ::Dynamic item1;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_Pair */ 
