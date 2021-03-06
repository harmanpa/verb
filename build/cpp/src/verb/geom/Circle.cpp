// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_verb_core_ISerializable
#include <verb/core/ISerializable.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
#ifndef INCLUDED_verb_geom_Arc
#include <verb/geom/Arc.h>
#endif
#ifndef INCLUDED_verb_geom_Circle
#include <verb/geom/Circle.h>
#endif
#ifndef INCLUDED_verb_geom_ICurve
#include <verb/geom/ICurve.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsCurve
#include <verb/geom/NurbsCurve.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e77d44ab457f0f87_26_new,"verb.geom.Circle","new",0x4c1dedc5,"verb.geom.Circle.new","verb/geom/Circle.hx",26,0x3ea7c8eb)
namespace verb{
namespace geom{

void Circle_obj::__construct(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float radius){
            	HX_STACKFRAME(&_hx_pos_e77d44ab457f0f87_26_new)
HXDLIN(  26)		super::__construct(center,xaxis,yaxis,radius,0,(::Math_obj::PI * ( (Float)(2) )));
            	}

Dynamic Circle_obj::__CreateEmpty() { return new Circle_obj; }

void *Circle_obj::_hx_vtable = 0;

Dynamic Circle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Circle_obj > _hx_result = new Circle_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Circle_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c53de93) {
		if (inClassId<=(int)0x06d9bbfa) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
		} else {
			return inClassId==(int)0x0c53de93;
		}
	} else {
		return inClassId==(int)0x575a7ad3 || inClassId==(int)0x69541c12;
	}
}


::hx::ObjectPtr< Circle_obj > Circle_obj::__new(::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float radius) {
	::hx::ObjectPtr< Circle_obj > __this = new Circle_obj();
	__this->__construct(center,xaxis,yaxis,radius);
	return __this;
}

::hx::ObjectPtr< Circle_obj > Circle_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > center,::Array< Float > xaxis,::Array< Float > yaxis,Float radius) {
	Circle_obj *__this = (Circle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Circle_obj), true, "verb.geom.Circle"));
	*(void **)__this = Circle_obj::_hx_vtable;
	__this->__construct(center,xaxis,yaxis,radius);
	return __this;
}

Circle_obj::Circle_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Circle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Circle_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	Circle_obj _hx_dummy;
	Circle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.geom.Circle",53,a7,40,58);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Circle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Circle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Circle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace geom
