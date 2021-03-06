// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_eval_AdaptiveRefinementNode
#define INCLUDED_verb_eval_AdaptiveRefinementNode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,MeshData)
HX_DECLARE_CLASS2(verb,core,NurbsSurfaceData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,core,SurfacePoint)
HX_DECLARE_CLASS2(verb,eval,AdaptiveRefinementNode)
HX_DECLARE_CLASS2(verb,eval,AdaptiveRefinementOptions)

namespace verb{
namespace eval{


class HXCPP_CLASS_ATTRIBUTES AdaptiveRefinementNode_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AdaptiveRefinementNode_obj OBJ_;
		AdaptiveRefinementNode_obj();

	public:
		enum { _hx_ClassId = 0x513e2c1e };

		void __construct( ::verb::core::NurbsSurfaceData srf,::Array< ::Dynamic> corners,::Array< ::Dynamic> neighbors);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.eval.AdaptiveRefinementNode")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.eval.AdaptiveRefinementNode"); }
		static ::hx::ObjectPtr< AdaptiveRefinementNode_obj > __new( ::verb::core::NurbsSurfaceData srf,::Array< ::Dynamic> corners,::Array< ::Dynamic> neighbors);
		static ::hx::ObjectPtr< AdaptiveRefinementNode_obj > __alloc(::hx::Ctx *_hx_ctx, ::verb::core::NurbsSurfaceData srf,::Array< ::Dynamic> corners,::Array< ::Dynamic> neighbors);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AdaptiveRefinementNode_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AdaptiveRefinementNode",63,f9,b8,e6); }

		 ::verb::core::NurbsSurfaceData srf;
		::Array< ::Dynamic> neighbors;
		::Array< ::Dynamic> children;
		::Array< ::Dynamic> corners;
		::Array< ::Dynamic> midPoints;
		 ::verb::core::SurfacePoint centerPoint;
		bool splitVert;
		bool splitHoriz;
		bool horizontal;
		Float u05;
		Float v05;
		bool isLeaf();
		::Dynamic isLeaf_dyn();

		 ::verb::core::SurfacePoint center();
		::Dynamic center_dyn();

		void evalCorners();
		::Dynamic evalCorners_dyn();

		 ::verb::core::SurfacePoint evalSrf(Float u,Float v, ::verb::core::SurfacePoint srfPt);
		::Dynamic evalSrf_dyn();

		::Array< ::Dynamic> getEdgeCorners(int edgeIndex);
		::Dynamic getEdgeCorners_dyn();

		::Array< ::Dynamic> getAllCorners(int edgeIndex);
		::Dynamic getAllCorners_dyn();

		 ::verb::core::SurfacePoint midpoint(int index);
		::Dynamic midpoint_dyn();

		bool hasBadNormals();
		::Dynamic hasBadNormals_dyn();

		void fixNormals();
		::Dynamic fixNormals_dyn();

		bool shouldDivide( ::verb::eval::AdaptiveRefinementOptions options,int currentDepth);
		::Dynamic shouldDivide_dyn();

		void divide( ::verb::eval::AdaptiveRefinementOptions options);
		::Dynamic divide_dyn();

		void _divide( ::verb::eval::AdaptiveRefinementOptions options,int currentDepth,bool horiz);
		::Dynamic _divide_dyn();

		 ::verb::core::MeshData triangulate( ::verb::core::MeshData mesh);
		::Dynamic triangulate_dyn();

		 ::verb::core::MeshData triangulateLeaf( ::verb::core::MeshData mesh);
		::Dynamic triangulateLeaf_dyn();

};

} // end namespace verb
} // end namespace eval

#endif /* INCLUDED_verb_eval_AdaptiveRefinementNode */ 
