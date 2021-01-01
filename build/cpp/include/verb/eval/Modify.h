// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_eval_Modify
#define INCLUDED_verb_eval_Modify

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,NurbsCurveData)
HX_DECLARE_CLASS2(verb,core,NurbsSurfaceData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,eval,Modify)

namespace verb{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES Modify_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Modify_obj OBJ_;
		Modify_obj();

	public:
		enum { _hx_ClassId = 0x0f655fb9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.eval.Modify")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.eval.Modify"); }

		inline static ::hx::ObjectPtr< Modify_obj > __new() {
			::hx::ObjectPtr< Modify_obj > __this = new Modify_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Modify_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Modify_obj *__this = (Modify_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Modify_obj), false, "verb.eval.Modify"));
			*(void **)__this = Modify_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Modify_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Modify",9a,88,5e,f5); }

		static  ::verb::core::NurbsCurveData curveReverse( ::verb::core::NurbsCurveData curve);
		static ::Dynamic curveReverse_dyn();

		static  ::verb::core::NurbsSurfaceData surfaceReverse( ::verb::core::NurbsSurfaceData surface,::hx::Null< bool >  useV);
		static ::Dynamic surfaceReverse_dyn();

		static ::Array< Float > knotsReverse(::Array< Float > knots);
		static ::Dynamic knotsReverse_dyn();

		static ::Array< ::Dynamic> unifyCurveKnotVectors(::Array< ::Dynamic> curves);
		static ::Dynamic unifyCurveKnotVectors_dyn();

		static int imin(int a,int b);
		static ::Dynamic imin_dyn();

		static int imax(int a,int b);
		static ::Dynamic imax_dyn();

		static  ::verb::core::NurbsCurveData curveElevateDegree( ::verb::core::NurbsCurveData curve,int finalDegree);
		static ::Dynamic curveElevateDegree_dyn();

		static  ::verb::core::NurbsSurfaceData rationalSurfaceTransform( ::verb::core::NurbsSurfaceData surface,::Array< ::Dynamic> mat);
		static ::Dynamic rationalSurfaceTransform_dyn();

		static  ::verb::core::NurbsCurveData rationalCurveTransform( ::verb::core::NurbsCurveData curve,::Array< ::Dynamic> mat);
		static ::Dynamic rationalCurveTransform_dyn();

		static  ::verb::core::NurbsSurfaceData surfaceKnotRefine( ::verb::core::NurbsSurfaceData surface,::Array< Float > knotsToInsert,bool useV);
		static ::Dynamic surfaceKnotRefine_dyn();

		static ::Array< ::Dynamic> decomposeCurveIntoBeziers( ::verb::core::NurbsCurveData curve);
		static ::Dynamic decomposeCurveIntoBeziers_dyn();

		static  ::verb::core::NurbsCurveData curveKnotRefine( ::verb::core::NurbsCurveData curve,::Array< Float > knotsToInsert);
		static ::Dynamic curveKnotRefine_dyn();

		static  ::verb::core::NurbsCurveData curveKnotInsert( ::verb::core::NurbsCurveData curve,Float u,int r);
		static ::Dynamic curveKnotInsert_dyn();

};

} // end namespace verb
} // end namespace eval

#endif /* INCLUDED_verb_eval_Modify */ 
