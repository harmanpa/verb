// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_Plane
#define INCLUDED_verb_core_Plane

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
HX_DECLARE_CLASS2(verb,core,Plane)
HX_DECLARE_CLASS2(verb,core,SerializableBase)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Plane_obj : public  ::verb::core::SerializableBase_obj
{
	public:
		typedef  ::verb::core::SerializableBase_obj super;
		typedef Plane_obj OBJ_;
		Plane_obj();

	public:
		enum { _hx_ClassId = 0x7e608e7e };

		void __construct(::Array< Float > origin,::Array< Float > normal);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.Plane")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.Plane"); }
		static ::hx::ObjectPtr< Plane_obj > __new(::Array< Float > origin,::Array< Float > normal);
		static ::hx::ObjectPtr< Plane_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< Float > origin,::Array< Float > normal);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Plane_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Plane",3c,6e,bb,57); }

		::Array< Float > normal;
		::Array< Float > origin;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_Plane */ 
