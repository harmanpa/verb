// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_TriSegmentIntersection
#define INCLUDED_verb_core_TriSegmentIntersection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_df8b90da7af832ad_117_new)
HX_DECLARE_CLASS2(verb,core,TriSegmentIntersection)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES TriSegmentIntersection_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TriSegmentIntersection_obj OBJ_;
		TriSegmentIntersection_obj();

	public:
		enum { _hx_ClassId = 0x0924a297 };

		void __construct(::Array< Float > point,Float s,Float t,Float r);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.TriSegmentIntersection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.TriSegmentIntersection"); }

		inline static ::hx::ObjectPtr< TriSegmentIntersection_obj > __new(::Array< Float > point,Float s,Float t,Float r) {
			::hx::ObjectPtr< TriSegmentIntersection_obj > __this = new TriSegmentIntersection_obj();
			__this->__construct(point,s,t,r);
			return __this;
		}

		inline static ::hx::ObjectPtr< TriSegmentIntersection_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > point,Float s,Float t,Float r) {
			TriSegmentIntersection_obj *__this = (TriSegmentIntersection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TriSegmentIntersection_obj), true, "verb.core.TriSegmentIntersection"));
			*(void **)__this = TriSegmentIntersection_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_df8b90da7af832ad_117_new)
HXLINE( 118)		( ( ::verb::core::TriSegmentIntersection)(__this) )->point = point;
HXLINE( 119)		( ( ::verb::core::TriSegmentIntersection)(__this) )->s = s;
HXLINE( 120)		( ( ::verb::core::TriSegmentIntersection)(__this) )->t = t;
HXLINE( 121)		( ( ::verb::core::TriSegmentIntersection)(__this) )->p = r;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TriSegmentIntersection_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TriSegmentIntersection",51,08,fe,44); }

		::Array< Float > point;
		Float s;
		Float t;
		Float p;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_TriSegmentIntersection */ 
