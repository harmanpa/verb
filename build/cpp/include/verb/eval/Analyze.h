// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_eval_Analyze
#define INCLUDED_verb_eval_Analyze

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,NurbsCurveData)
HX_DECLARE_CLASS2(verb,core,NurbsSurfaceData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,eval,Analyze)
HX_DECLARE_CLASS2(verb,eval,KnotMultiplicity)

namespace verb{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Analyze_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Analyze_obj OBJ_;
		Analyze_obj();

	public:
		enum { _hx_ClassId = 0x57c7c72d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.eval.Analyze")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.eval.Analyze"); }

		inline static ::hx::ObjectPtr< Analyze_obj > __new() {
			::hx::ObjectPtr< Analyze_obj > __this = new Analyze_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Analyze_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Analyze_obj *__this = (Analyze_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Analyze_obj), false, "verb.eval.Analyze"));
			*(void **)__this = Analyze_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Analyze_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Analyze",2c,63,d2,ab); }

		static void __boot();
		static ::Array< ::Dynamic> knotMultiplicities(::Array< Float > knots);
		static ::Dynamic knotMultiplicities_dyn();

		static bool isRationalSurfaceClosed( ::verb::core::NurbsSurfaceData surface,::hx::Null< bool >  uDir);
		static ::Dynamic isRationalSurfaceClosed_dyn();

		static ::Array< Float > rationalSurfaceClosestPoint( ::verb::core::NurbsSurfaceData surface,::Array< Float > p);
		static ::Dynamic rationalSurfaceClosestPoint_dyn();

		static ::Array< Float > rationalSurfaceClosestParam( ::verb::core::NurbsSurfaceData surface,::Array< Float > p);
		static ::Dynamic rationalSurfaceClosestParam_dyn();

		static ::Array< Float > rationalCurveClosestPoint( ::verb::core::NurbsCurveData curve,::Array< Float > p);
		static ::Dynamic rationalCurveClosestPoint_dyn();

		static Float rationalCurveClosestParam( ::verb::core::NurbsCurveData curve,::Array< Float > p);
		static ::Dynamic rationalCurveClosestParam_dyn();

		static Float rationalCurveParamAtArcLength( ::verb::core::NurbsCurveData curve,Float len,::hx::Null< Float >  tol,::Array< ::Dynamic> beziers,::Array< Float > bezierLengths);
		static ::Dynamic rationalCurveParamAtArcLength_dyn();

		static Float rationalBezierCurveParamAtArcLength( ::verb::core::NurbsCurveData curve,Float len, ::Dynamic tol, ::Dynamic totalLength);
		static ::Dynamic rationalBezierCurveParamAtArcLength_dyn();

		static Float rationalCurveArcLength( ::verb::core::NurbsCurveData curve, ::Dynamic u,::hx::Null< int >  gaussDegIncrease);
		static ::Dynamic rationalCurveArcLength_dyn();

		static Float rationalBezierCurveArcLength( ::verb::core::NurbsCurveData curve, ::Dynamic u,::hx::Null< int >  gaussDegIncrease);
		static ::Dynamic rationalBezierCurveArcLength_dyn();

		static ::Array< ::Dynamic> Tvalues;
		static ::Array< ::Dynamic> Cvalues;
};

} // end namespace verb
} // end namespace eval

#endif /* INCLUDED_verb_eval_Analyze */ 
