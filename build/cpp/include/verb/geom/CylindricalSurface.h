// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_geom_CylindricalSurface
#define INCLUDED_verb_geom_CylindricalSurface

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_verb_geom_NurbsSurface
#include <verb/geom/NurbsSurface.h>
#endif
HX_DECLARE_CLASS2(verb,core,ISerializable)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,geom,CylindricalSurface)
HX_DECLARE_CLASS2(verb,geom,ISurface)
HX_DECLARE_CLASS2(verb,geom,NurbsSurface)

namespace verb{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES CylindricalSurface_obj : public  ::verb::geom::NurbsSurface_obj
{
	public:
		typedef  ::verb::geom::NurbsSurface_obj super;
		typedef CylindricalSurface_obj OBJ_;
		CylindricalSurface_obj();

	public:
		enum { _hx_ClassId = 0x6101923e };

		void __construct(::Array< Float > axis,::Array< Float > xaxis,::Array< Float > base,Float height,Float radius);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.geom.CylindricalSurface")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.geom.CylindricalSurface"); }
		static ::hx::ObjectPtr< CylindricalSurface_obj > __new(::Array< Float > axis,::Array< Float > xaxis,::Array< Float > base,Float height,Float radius);
		static ::hx::ObjectPtr< CylindricalSurface_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > axis,::Array< Float > xaxis,::Array< Float > base,Float height,Float radius);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CylindricalSurface_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CylindricalSurface",7f,25,37,77); }

		::Array< Float > _axis;
		::Array< Float > _xaxis;
		::Array< Float > _base;
		Float _height;
		Float _radius;
		::Array< Float > axis();
		::Dynamic axis_dyn();

		::Array< Float > xaxis();
		::Dynamic xaxis_dyn();

		::Array< Float > base();
		::Dynamic base_dyn();

		Float height();
		::Dynamic height_dyn();

		Float radius();
		::Dynamic radius_dyn();

};

} // end namespace verb
} // end namespace geom

#endif /* INCLUDED_verb_geom_CylindricalSurface */ 
