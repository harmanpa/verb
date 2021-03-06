// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_SurfaceSurfaceIntersectionPoint
#define INCLUDED_verb_core_SurfaceSurfaceIntersectionPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_656529a149ee8526_94_new)
HX_DECLARE_CLASS2(verb,core,SurfaceSurfaceIntersectionPoint)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES SurfaceSurfaceIntersectionPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SurfaceSurfaceIntersectionPoint_obj OBJ_;
		SurfaceSurfaceIntersectionPoint_obj();

	public:
		enum { _hx_ClassId = 0x6104a449 };

		void __construct(::Array< Float > uv0,::Array< Float > uv1,::Array< Float > point,Float dist);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.SurfaceSurfaceIntersectionPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.SurfaceSurfaceIntersectionPoint"); }

		inline static ::hx::ObjectPtr< SurfaceSurfaceIntersectionPoint_obj > __new(::Array< Float > uv0,::Array< Float > uv1,::Array< Float > point,Float dist) {
			::hx::ObjectPtr< SurfaceSurfaceIntersectionPoint_obj > __this = new SurfaceSurfaceIntersectionPoint_obj();
			__this->__construct(uv0,uv1,point,dist);
			return __this;
		}

		inline static ::hx::ObjectPtr< SurfaceSurfaceIntersectionPoint_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > uv0,::Array< Float > uv1,::Array< Float > point,Float dist) {
			SurfaceSurfaceIntersectionPoint_obj *__this = (SurfaceSurfaceIntersectionPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SurfaceSurfaceIntersectionPoint_obj), true, "verb.core.SurfaceSurfaceIntersectionPoint"));
			*(void **)__this = SurfaceSurfaceIntersectionPoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_656529a149ee8526_94_new)
HXLINE(  95)		( ( ::verb::core::SurfaceSurfaceIntersectionPoint)(__this) )->uv0 = uv0;
HXLINE(  96)		( ( ::verb::core::SurfaceSurfaceIntersectionPoint)(__this) )->uv1 = uv1;
HXLINE(  97)		( ( ::verb::core::SurfaceSurfaceIntersectionPoint)(__this) )->point = point;
HXLINE(  98)		( ( ::verb::core::SurfaceSurfaceIntersectionPoint)(__this) )->dist = dist;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SurfaceSurfaceIntersectionPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SurfaceSurfaceIntersectionPoint",87,b9,2e,3a); }

		::Array< Float > uv0;
		::Array< Float > uv1;
		::Array< Float > point;
		Float dist;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_SurfaceSurfaceIntersectionPoint */ 
