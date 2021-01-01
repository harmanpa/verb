// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_ISerializable
#include <verb/core/ISerializable.h>
#endif
#ifndef INCLUDED_verb_core_NurbsCurveData
#include <verb/core/NurbsCurveData.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
#ifndef INCLUDED_verb_eval_Make
#include <verb/eval/Make.h>
#endif
#ifndef INCLUDED_verb_geom_BezierCurve
#include <verb/geom/BezierCurve.h>
#endif
#ifndef INCLUDED_verb_geom_ICurve
#include <verb/geom/ICurve.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsCurve
#include <verb/geom/NurbsCurve.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f0928d059d96421d_21_new,"verb.geom.BezierCurve","new",0x34b65f5f,"verb.geom.BezierCurve.new","verb/geom/BezierCurve.hx",21,0xe3813551)
namespace verb{
namespace geom{

void BezierCurve_obj::__construct(::Array< ::Dynamic> points,::Array< Float > weights){
            	HX_STACKFRAME(&_hx_pos_f0928d059d96421d_21_new)
HXDLIN(  21)		super::__construct(::verb::eval::Make_obj::rationalBezierCurve(points,weights));
            	}

Dynamic BezierCurve_obj::__CreateEmpty() { return new BezierCurve_obj; }

void *BezierCurve_obj::_hx_vtable = 0;

Dynamic BezierCurve_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BezierCurve_obj > _hx_result = new BezierCurve_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BezierCurve_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x23cdaa35) {
		if (inClassId<=(int)0x06d9bbfa) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
		} else {
			return inClassId==(int)0x23cdaa35;
		}
	} else {
		return inClassId==(int)0x69541c12;
	}
}


::hx::ObjectPtr< BezierCurve_obj > BezierCurve_obj::__new(::Array< ::Dynamic> points,::Array< Float > weights) {
	::hx::ObjectPtr< BezierCurve_obj > __this = new BezierCurve_obj();
	__this->__construct(points,weights);
	return __this;
}

::hx::ObjectPtr< BezierCurve_obj > BezierCurve_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> points,::Array< Float > weights) {
	BezierCurve_obj *__this = (BezierCurve_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BezierCurve_obj), true, "verb.geom.BezierCurve"));
	*(void **)__this = BezierCurve_obj::_hx_vtable;
	__this->__construct(points,weights);
	return __this;
}

BezierCurve_obj::BezierCurve_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *BezierCurve_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *BezierCurve_obj_sStaticStorageInfo = 0;
#endif

::hx::Class BezierCurve_obj::__mClass;

void BezierCurve_obj::__register()
{
	BezierCurve_obj _hx_dummy;
	BezierCurve_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.geom.BezierCurve",ed,c3,65,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< BezierCurve_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BezierCurve_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BezierCurve_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace geom