// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_ISerializable
#include <verb/core/ISerializable.h>
#endif
#ifndef INCLUDED_verb_core_NurbsCurveData
#include <verb/core/NurbsCurveData.h>
#endif
#ifndef INCLUDED_verb_core_NurbsSurfaceData
#include <verb/core/NurbsSurfaceData.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
#ifndef INCLUDED_verb_eval_Make
#include <verb/eval/Make.h>
#endif
#ifndef INCLUDED_verb_geom_ICurve
#include <verb/geom/ICurve.h>
#endif
#ifndef INCLUDED_verb_geom_ISurface
#include <verb/geom/ISurface.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsCurve
#include <verb/geom/NurbsCurve.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsSurface
#include <verb/geom/NurbsSurface.h>
#endif
#ifndef INCLUDED_verb_geom_RevolvedSurface
#include <verb/geom/RevolvedSurface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0d16311128e87d52_21_new,"verb.geom.RevolvedSurface","new",0x35c04367,"verb.geom.RevolvedSurface.new","verb/geom/RevolvedSurface.hx",21,0x79475a49)
HX_LOCAL_STACK_FRAME(_hx_pos_0d16311128e87d52_37_profile,"verb.geom.RevolvedSurface","profile",0x6b394bb0,"verb.geom.RevolvedSurface.profile","verb/geom/RevolvedSurface.hx",37,0x79475a49)
HX_LOCAL_STACK_FRAME(_hx_pos_0d16311128e87d52_41_center,"verb.geom.RevolvedSurface","center",0x0419112e,"verb.geom.RevolvedSurface.center","verb/geom/RevolvedSurface.hx",41,0x79475a49)
HX_LOCAL_STACK_FRAME(_hx_pos_0d16311128e87d52_45_axis,"verb.geom.RevolvedSurface","axis",0xc9f14fba,"verb.geom.RevolvedSurface.axis","verb/geom/RevolvedSurface.hx",45,0x79475a49)
HX_LOCAL_STACK_FRAME(_hx_pos_0d16311128e87d52_49_angle,"verb.geom.RevolvedSurface","angle",0xe296c69a,"verb.geom.RevolvedSurface.angle","verb/geom/RevolvedSurface.hx",49,0x79475a49)
namespace verb{
namespace geom{

void RevolvedSurface_obj::__construct( ::verb::geom::NurbsCurve profile,::Array< Float > center,::Array< Float > axis,Float angle){
            	HX_STACKFRAME(&_hx_pos_0d16311128e87d52_21_new)
HXLINE(  22)		super::__construct(::verb::eval::Make_obj::revolvedSurface(profile->asNurbs(),center,axis,angle));
HXLINE(  24)		this->_profile = profile;
HXLINE(  25)		this->_center = center;
HXLINE(  26)		this->_axis = axis;
HXLINE(  27)		this->_angle = angle;
            	}

Dynamic RevolvedSurface_obj::__CreateEmpty() { return new RevolvedSurface_obj; }

void *RevolvedSurface_obj::_hx_vtable = 0;

Dynamic RevolvedSurface_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< RevolvedSurface_obj > _hx_result = new RevolvedSurface_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool RevolvedSurface_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06d9bbfa) {
		if (inClassId<=(int)0x03c7ae3d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x03c7ae3d;
		} else {
			return inClassId==(int)0x06d9bbfa;
		}
	} else {
		return inClassId==(int)0x0a621450;
	}
}

::Dynamic RevolvedSurface_obj::profile(){
            	HX_STACKFRAME(&_hx_pos_0d16311128e87d52_37_profile)
HXDLIN(  37)		return this->_profile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RevolvedSurface_obj,profile,return )

::Array< Float > RevolvedSurface_obj::center(){
            	HX_STACKFRAME(&_hx_pos_0d16311128e87d52_41_center)
HXDLIN(  41)		return this->_center;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RevolvedSurface_obj,center,return )

::Array< Float > RevolvedSurface_obj::axis(){
            	HX_STACKFRAME(&_hx_pos_0d16311128e87d52_45_axis)
HXDLIN(  45)		return this->_center;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RevolvedSurface_obj,axis,return )

Float RevolvedSurface_obj::angle(){
            	HX_STACKFRAME(&_hx_pos_0d16311128e87d52_49_angle)
HXDLIN(  49)		return this->_angle;
            	}


HX_DEFINE_DYNAMIC_FUNC0(RevolvedSurface_obj,angle,return )


::hx::ObjectPtr< RevolvedSurface_obj > RevolvedSurface_obj::__new( ::verb::geom::NurbsCurve profile,::Array< Float > center,::Array< Float > axis,Float angle) {
	::hx::ObjectPtr< RevolvedSurface_obj > __this = new RevolvedSurface_obj();
	__this->__construct(profile,center,axis,angle);
	return __this;
}

::hx::ObjectPtr< RevolvedSurface_obj > RevolvedSurface_obj::__alloc(::hx::Ctx *_hx_ctx, ::verb::geom::NurbsCurve profile,::Array< Float > center,::Array< Float > axis,Float angle) {
	RevolvedSurface_obj *__this = (RevolvedSurface_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(RevolvedSurface_obj), true, "verb.geom.RevolvedSurface"));
	*(void **)__this = RevolvedSurface_obj::_hx_vtable;
	__this->__construct(profile,center,axis,angle);
	return __this;
}

RevolvedSurface_obj::RevolvedSurface_obj()
{
}

void RevolvedSurface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RevolvedSurface);
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_center,"_center");
	HX_MARK_MEMBER_NAME(_axis,"_axis");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	 ::verb::geom::NurbsSurface_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void RevolvedSurface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_center,"_center");
	HX_VISIT_MEMBER_NAME(_axis,"_axis");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	 ::verb::geom::NurbsSurface_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val RevolvedSurface_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return ::hx::Val( axis_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return ::hx::Val( _axis ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return ::hx::Val( _angle ); }
		if (HX_FIELD_EQ(inName,"center") ) { return ::hx::Val( center_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_center") ) { return ::hx::Val( _center ); }
		if (HX_FIELD_EQ(inName,"profile") ) { return ::hx::Val( profile_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val RevolvedSurface_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_center") ) { _center=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RevolvedSurface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_profile",aa,a2,01,2d));
	outFields->push(HX_("_center",74,37,52,74));
	outFields->push(HX_("_axis",80,38,8a,f3));
	outFields->push(HX_("_angle",14,8b,c9,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo RevolvedSurface_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(RevolvedSurface_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(RevolvedSurface_obj,_center),HX_("_center",74,37,52,74)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(RevolvedSurface_obj,_axis),HX_("_axis",80,38,8a,f3)},
	{::hx::fsFloat,(int)offsetof(RevolvedSurface_obj,_angle),HX_("_angle",14,8b,c9,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *RevolvedSurface_obj_sStaticStorageInfo = 0;
#endif

static ::String RevolvedSurface_obj_sMemberFields[] = {
	HX_("_profile",aa,a2,01,2d),
	HX_("_center",74,37,52,74),
	HX_("_axis",80,38,8a,f3),
	HX_("_angle",14,8b,c9,1e),
	HX_("profile",29,49,49,f3),
	HX_("center",d5,25,db,05),
	HX_("axis",a1,1c,79,40),
	HX_("angle",d3,43,e2,22),
	::String(null()) };

::hx::Class RevolvedSurface_obj::__mClass;

void RevolvedSurface_obj::__register()
{
	RevolvedSurface_obj _hx_dummy;
	RevolvedSurface_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.geom.RevolvedSurface",f5,03,9b,e8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(RevolvedSurface_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< RevolvedSurface_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = RevolvedSurface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = RevolvedSurface_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace geom
