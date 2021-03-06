// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_KdTree
#define INCLUDED_verb_core_KdTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,HeapElement)
HX_DECLARE_CLASS2(verb,core,KdNode)
HX_DECLARE_CLASS2(verb,core,KdPoint)
HX_DECLARE_CLASS2(verb,core,KdTree)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES KdTree_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KdTree_obj OBJ_;
		KdTree_obj();

	public:
		enum { _hx_ClassId = 0x7289f135 };

		void __construct(::Array< ::Dynamic> points, ::Dynamic distanceFunction);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.KdTree")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.KdTree"); }
		static ::hx::ObjectPtr< KdTree_obj > __new(::Array< ::Dynamic> points, ::Dynamic distanceFunction);
		static ::hx::ObjectPtr< KdTree_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> points, ::Dynamic distanceFunction);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KdTree_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KdTree",b7,d7,b2,c8); }

		::Array< ::Dynamic> points;
		 ::Dynamic distanceFunction;
		Dynamic distanceFunction_dyn() { return distanceFunction;}
		int dim;
		 ::verb::core::KdNode root;
		 ::verb::core::KdNode buildTree(::Array< ::Dynamic> points,int depth, ::verb::core::KdNode parent);
		::Dynamic buildTree_dyn();

		::Array< ::Dynamic> nearest(::Array< Float > point,int maxNodes,Float maxDistance);
		::Dynamic nearest_dyn();

};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_KdTree */ 
