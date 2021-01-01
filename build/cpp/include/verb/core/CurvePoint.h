// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_CurvePoint
#define INCLUDED_verb_core_CurvePoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_515173e2ececd148_164_new)
HX_DECLARE_CLASS2(verb,core,CurvePoint)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES CurvePoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CurvePoint_obj OBJ_;
		CurvePoint_obj();

	public:
		enum { _hx_ClassId = 0x141e3e23 };

		void __construct(Float u,::Array< Float > pt);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.CurvePoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.CurvePoint"); }

		inline static ::hx::ObjectPtr< CurvePoint_obj > __new(Float u,::Array< Float > pt) {
			::hx::ObjectPtr< CurvePoint_obj > __this = new CurvePoint_obj();
			__this->__construct(u,pt);
			return __this;
		}

		inline static ::hx::ObjectPtr< CurvePoint_obj > __alloc(::hx::Ctx *_hx_ctx,Float u,::Array< Float > pt) {
			CurvePoint_obj *__this = (CurvePoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CurvePoint_obj), true, "verb.core.CurvePoint"));
			*(void **)__this = CurvePoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_515173e2ececd148_164_new)
HXLINE( 165)		( ( ::verb::core::CurvePoint)(__this) )->u = u;
HXLINE( 166)		( ( ::verb::core::CurvePoint)(__this) )->pt = pt;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CurvePoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CurvePoint",41,81,f6,1a); }

		Float u;
		::Array< Float > pt;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_CurvePoint */ 
