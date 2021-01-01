// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_KdNode_verb_core_MeshIntersectionPoint
#define INCLUDED_verb_core_KdNode_verb_core_MeshIntersectionPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,KdNode_verb_core_MeshIntersectionPoint)
HX_DECLARE_CLASS2(verb,core,KdPoint_verb_core_MeshIntersectionPoint)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES KdNode_verb_core_MeshIntersectionPoint_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KdNode_verb_core_MeshIntersectionPoint_obj OBJ_;
		KdNode_verb_core_MeshIntersectionPoint_obj();

	public:
		enum { _hx_ClassId = 0x02555df8 };

		void __construct( ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.KdNode_verb_core_MeshIntersectionPoint")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.KdNode_verb_core_MeshIntersectionPoint"); }
		static ::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > __new( ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent);
		static ::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > __alloc(::hx::Ctx *_hx_ctx, ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KdNode_verb_core_MeshIntersectionPoint_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KdNode_verb_core_MeshIntersectionPoint",16,72,97,cb); }

		 ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint;
		 ::verb::core::KdNode_verb_core_MeshIntersectionPoint left;
		 ::verb::core::KdNode_verb_core_MeshIntersectionPoint right;
		 ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent;
		int dimension;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_KdNode_verb_core_MeshIntersectionPoint */ 