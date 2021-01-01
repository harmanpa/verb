// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_eval_KnotMultiplicity
#define INCLUDED_verb_eval_KnotMultiplicity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_2d18e344aefbf02c_683_new)
HX_DECLARE_CLASS2(verb,eval,KnotMultiplicity)

namespace verb{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES KnotMultiplicity_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KnotMultiplicity_obj OBJ_;
		KnotMultiplicity_obj();

	public:
		enum { _hx_ClassId = 0x23ac222e };

		void __construct(Float knot,int mult);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.eval.KnotMultiplicity")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.eval.KnotMultiplicity"); }

		inline static ::hx::ObjectPtr< KnotMultiplicity_obj > __new(Float knot,int mult) {
			::hx::ObjectPtr< KnotMultiplicity_obj > __this = new KnotMultiplicity_obj();
			__this->__construct(knot,mult);
			return __this;
		}

		inline static ::hx::ObjectPtr< KnotMultiplicity_obj > __alloc(::hx::Ctx *_hx_ctx,Float knot,int mult) {
			KnotMultiplicity_obj *__this = (KnotMultiplicity_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KnotMultiplicity_obj), false, "verb.eval.KnotMultiplicity"));
			*(void **)__this = KnotMultiplicity_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_2d18e344aefbf02c_683_new)
HXLINE( 684)		( ( ::verb::eval::KnotMultiplicity)(__this) )->knot = knot;
HXLINE( 685)		( ( ::verb::eval::KnotMultiplicity)(__this) )->mult = mult;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KnotMultiplicity_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KnotMultiplicity",87,af,16,51); }

		Float knot;
		int mult;
		void inc();
		::Dynamic inc_dyn();

};

} // end namespace verb
} // end namespace eval

#endif /* INCLUDED_verb_eval_KnotMultiplicity */ 