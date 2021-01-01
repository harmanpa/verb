// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_LazyPolylineBoundingBoxTree
#define INCLUDED_verb_core_LazyPolylineBoundingBoxTree

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_verb_eval_IBoundingBoxTree
#include <verb/eval/IBoundingBoxTree.h>
#endif
HX_DECLARE_CLASS2(verb,core,BoundingBox)
HX_DECLARE_CLASS2(verb,core,Interval)
HX_DECLARE_CLASS2(verb,core,LazyPolylineBoundingBoxTree)
HX_DECLARE_CLASS2(verb,core,Pair)
HX_DECLARE_CLASS2(verb,core,PolylineData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)
HX_DECLARE_CLASS2(verb,eval,IBoundingBoxTree)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES LazyPolylineBoundingBoxTree_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LazyPolylineBoundingBoxTree_obj OBJ_;
		LazyPolylineBoundingBoxTree_obj();

	public:
		enum { _hx_ClassId = 0x6f4cad33 };

		void __construct( ::verb::core::PolylineData polyline, ::verb::core::Interval interval);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.LazyPolylineBoundingBoxTree")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.LazyPolylineBoundingBoxTree"); }
		static ::hx::ObjectPtr< LazyPolylineBoundingBoxTree_obj > __new( ::verb::core::PolylineData polyline, ::verb::core::Interval interval);
		static ::hx::ObjectPtr< LazyPolylineBoundingBoxTree_obj > __alloc(::hx::Ctx *_hx_ctx, ::verb::core::PolylineData polyline, ::verb::core::Interval interval);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LazyPolylineBoundingBoxTree_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		 ::Dynamic yield_2aa2127b();
		::String __ToString() const { return HX_("LazyPolylineBoundingBoxTree",71,cb,b7,fe); }

		 ::verb::core::Interval _interval;
		 ::verb::core::PolylineData _polyline;
		 ::verb::core::BoundingBox _boundingBox;
		 ::verb::core::Pair split();
		::Dynamic split_dyn();

		 ::verb::core::BoundingBox boundingBox();
		::Dynamic boundingBox_dyn();

		int yield();
		::Dynamic yield_dyn();

		bool indivisible(Float tolerance);
		::Dynamic indivisible_dyn();

		bool empty();
		::Dynamic empty_dyn();

};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_LazyPolylineBoundingBoxTree */ 
