// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_CurveSurfaceIntersection
#define INCLUDED_verb_core_CurveSurfaceIntersection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a30cb200c0bb4454_36_new)
HX_DECLARE_CLASS2(verb,core,CurveSurfaceIntersection)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES CurveSurfaceIntersection_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CurveSurfaceIntersection_obj OBJ_;
		CurveSurfaceIntersection_obj();

	public:
		enum { _hx_ClassId = 0x5a2ae5c5 };

		void __construct(Float u,::Array< Float > uv,::Array< Float > curvePoint,::Array< Float > surfacePoint);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.CurveSurfaceIntersection")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.CurveSurfaceIntersection"); }

		inline static ::hx::ObjectPtr< CurveSurfaceIntersection_obj > __new(Float u,::Array< Float > uv,::Array< Float > curvePoint,::Array< Float > surfacePoint) {
			::hx::ObjectPtr< CurveSurfaceIntersection_obj > __this = new CurveSurfaceIntersection_obj();
			__this->__construct(u,uv,curvePoint,surfacePoint);
			return __this;
		}

		inline static ::hx::ObjectPtr< CurveSurfaceIntersection_obj > __alloc(::hx::Ctx *_hx_ctx,Float u,::Array< Float > uv,::Array< Float > curvePoint,::Array< Float > surfacePoint) {
			CurveSurfaceIntersection_obj *__this = (CurveSurfaceIntersection_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CurveSurfaceIntersection_obj), true, "verb.core.CurveSurfaceIntersection"));
			*(void **)__this = CurveSurfaceIntersection_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a30cb200c0bb4454_36_new)
HXLINE(  37)		( ( ::verb::core::CurveSurfaceIntersection)(__this) )->u = u;
HXLINE(  38)		( ( ::verb::core::CurveSurfaceIntersection)(__this) )->uv = uv;
HXLINE(  39)		( ( ::verb::core::CurveSurfaceIntersection)(__this) )->curvePoint = curvePoint;
HXLINE(  40)		( ( ::verb::core::CurveSurfaceIntersection)(__this) )->surfacePoint = surfacePoint;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CurveSurfaceIntersection_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CurveSurfaceIntersection",c7,94,29,ab); }

		Float u;
		::Array< Float > uv;
		::Array< Float > curvePoint;
		::Array< Float > surfacePoint;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_CurveSurfaceIntersection */ 
