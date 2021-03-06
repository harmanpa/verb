// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_eval_Make
#define INCLUDED_verb_eval_Make

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,NurbsCurveData)
HX_DECLARE_CLASS2(verb,core,NurbsSurfaceData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,eval,Make)

namespace verb{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Make_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Make_obj OBJ_;
		Make_obj();

	public:
		enum { _hx_ClassId = 0x02effe09 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.eval.Make")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.eval.Make"); }

		inline static ::hx::ObjectPtr< Make_obj > __new() {
			::hx::ObjectPtr< Make_obj > __this = new Make_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Make_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Make_obj *__this = (Make_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Make_obj), false, "verb.eval.Make"));
			*(void **)__this = Make_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Make_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Make",0e,66,2f,33); }

		static  ::verb::core::NurbsSurfaceData rationalTranslationalSurface( ::verb::core::NurbsCurveData profile, ::verb::core::NurbsCurveData rail);
		static ::Dynamic rationalTranslationalSurface_dyn();

		static ::Array< ::Dynamic> surfaceBoundaryCurves( ::verb::core::NurbsSurfaceData surface);
		static ::Dynamic surfaceBoundaryCurves_dyn();

		static  ::verb::core::NurbsCurveData surfaceIsocurve( ::verb::core::NurbsSurfaceData surface,Float u,::hx::Null< bool >  useV);
		static ::Dynamic surfaceIsocurve_dyn();

		static  ::verb::core::NurbsSurfaceData loftedSurface(::Array< ::Dynamic> curves, ::Dynamic degreeV);
		static ::Dynamic loftedSurface_dyn();

		static  ::verb::core::NurbsCurveData clonedCurve( ::verb::core::NurbsCurveData curve);
		static ::Dynamic clonedCurve_dyn();

		static  ::verb::core::NurbsCurveData rationalBezierCurve(::Array< ::Dynamic> controlPoints,::Array< Float > weights);
		static ::Dynamic rationalBezierCurve_dyn();

		static  ::verb::core::NurbsSurfaceData fourPointSurface(::Array< Float > p1,::Array< Float > p2,::Array< Float > p3,::Array< Float > p4,::hx::Null< int >  degree);
		static ::Dynamic fourPointSurface_dyn();

		static  ::verb::core::NurbsCurveData ellipseArc(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float startAngle,Float endAngle);
		static ::Dynamic ellipseArc_dyn();

		static  ::verb::core::NurbsCurveData arc(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float radius,Float startAngle,Float endAngle);
		static ::Dynamic arc_dyn();

		static  ::verb::core::NurbsCurveData polyline(::Array< ::Dynamic> pts);
		static ::Dynamic polyline_dyn();

		static  ::verb::core::NurbsSurfaceData extrudedSurface(::Array< Float > axis,Float length, ::verb::core::NurbsCurveData profile);
		static ::Dynamic extrudedSurface_dyn();

		static  ::verb::core::NurbsSurfaceData cylindricalSurface(::Array< Float > axis,::Array< Float > xaxis,::Array< Float > base,Float height,Float radius);
		static ::Dynamic cylindricalSurface_dyn();

		static  ::verb::core::NurbsSurfaceData revolvedSurface( ::verb::core::NurbsCurveData profile,::Array< Float > center,::Array< Float > axis,Float theta);
		static ::Dynamic revolvedSurface_dyn();

		static  ::verb::core::NurbsSurfaceData sphericalSurface(::Array< Float > center,::Array< Float > axis,::Array< Float > xaxis,Float radius);
		static ::Dynamic sphericalSurface_dyn();

		static  ::verb::core::NurbsSurfaceData conicalSurface(::Array< Float > axis,::Array< Float > xaxis,::Array< Float > base,Float height,Float radius);
		static ::Dynamic conicalSurface_dyn();

		static  ::verb::core::NurbsCurveData rationalInterpCurve(::Array< ::Dynamic> points,::hx::Null< int >  degree,::hx::Null< bool >  homogeneousPoints,::Array< Float > start_tangent,::Array< Float > end_tangent);
		static ::Dynamic rationalInterpCurve_dyn();

};

} // end namespace verb
} // end namespace eval

#endif /* INCLUDED_verb_eval_Make */ 
