// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_NurbsCurveData
#define INCLUDED_verb_core_NurbsCurveData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
HX_DECLARE_CLASS2(verb,core,NurbsCurveData)
HX_DECLARE_CLASS2(verb,core,SerializableBase)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES NurbsCurveData_obj : public  ::verb::core::SerializableBase_obj
{
	public:
		typedef  ::verb::core::SerializableBase_obj super;
		typedef NurbsCurveData_obj OBJ_;
		NurbsCurveData_obj();

	public:
		enum { _hx_ClassId = 0x1e8283ff };

		void __construct(int degree,::Array< Float > knots,::Array< ::Dynamic> controlPoints);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core.NurbsCurveData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core.NurbsCurveData"); }
		static ::hx::ObjectPtr< NurbsCurveData_obj > __new(int degree,::Array< Float > knots,::Array< ::Dynamic> controlPoints);
		static ::hx::ObjectPtr< NurbsCurveData_obj > __alloc(::hx::Ctx *_hx_ctx,int degree,::Array< Float > knots,::Array< ::Dynamic> controlPoints);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NurbsCurveData_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NurbsCurveData",1d,ae,3d,90); }

		int degree;
		::Array< ::Dynamic> controlPoints;
		::Array< Float > knots;
};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_NurbsCurveData */ 
