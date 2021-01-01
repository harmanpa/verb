// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_geom_EllipseArc
#define INCLUDED_verb_geom_EllipseArc

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_verb_geom_NurbsCurve
#include <verb/geom/NurbsCurve.h>
#endif
HX_DECLARE_CLASS2(verb,core,ISerializable)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,geom,EllipseArc)
HX_DECLARE_CLASS2(verb,geom,ICurve)
HX_DECLARE_CLASS2(verb,geom,NurbsCurve)

namespace verb{
namespace geom{


class HXCPP_CLASS_ATTRIBUTES EllipseArc_obj : public  ::verb::geom::NurbsCurve_obj
{
	public:
		typedef  ::verb::geom::NurbsCurve_obj super;
		typedef EllipseArc_obj OBJ_;
		EllipseArc_obj();

	public:
		enum { _hx_ClassId = 0x6d91edf3 };

		void __construct(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float minAngle,Float maxAngle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.geom.EllipseArc")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.geom.EllipseArc"); }
		static ::hx::ObjectPtr< EllipseArc_obj > __new(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float minAngle,Float maxAngle);
		static ::hx::ObjectPtr< EllipseArc_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float minAngle,Float maxAngle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EllipseArc_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EllipseArc",34,d8,81,43); }

		::Array< Float > _center;
		::Array< Float > _xaxis;
		::Array< Float > _yaxis;
		Float _minAngle;
		Float _maxAngle;
		::Array< Float > center();
		::Dynamic center_dyn();

		::Array< Float > xaxis();
		::Dynamic xaxis_dyn();

		::Array< Float > yaxis();
		::Dynamic yaxis_dyn();

		Float minAngle();
		::Dynamic minAngle_dyn();

		Float maxAngle();
		::Dynamic maxAngle_dyn();

};

} // end namespace verb
} // end namespace geom

#endif /* INCLUDED_verb_geom_EllipseArc */ 
