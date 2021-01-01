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
#ifndef INCLUDED_verb_core_Vec
#include <verb/core/Vec.h>
#endif
#ifndef INCLUDED_verb_eval_Make
#include <verb/eval/Make.h>
#endif
#ifndef INCLUDED_verb_geom_ExtrudedSurface
#include <verb/geom/ExtrudedSurface.h>
#endif
#ifndef INCLUDED_verb_geom_ICurve
#include <verb/geom/ICurve.h>
#endif
#ifndef INCLUDED_verb_geom_ISurface
#include <verb/geom/ISurface.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsSurface
#include <verb/geom/NurbsSurface.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ee7941cae95a1632_18_new,"verb.geom.ExtrudedSurface","new",0x2dd28f1d,"verb.geom.ExtrudedSurface.new","verb/geom/ExtrudedSurface.hx",18,0x636e7753)
HX_LOCAL_STACK_FRAME(_hx_pos_ee7941cae95a1632_30_profile,"verb.geom.ExtrudedSurface","profile",0xacbaaa66,"verb.geom.ExtrudedSurface.profile","verb/geom/ExtrudedSurface.hx",30,0x636e7753)
HX_LOCAL_STACK_FRAME(_hx_pos_ee7941cae95a1632_34_direction,"verb.geom.ExtrudedSurface","direction",0x11ba4cbc,"verb.geom.ExtrudedSurface.direction","verb/geom/ExtrudedSurface.hx",34,0x636e7753)
namespace verb{
namespace geom{

void ExtrudedSurface_obj::__construct(::Dynamic profile,::Array< Float > direction){
            	HX_STACKFRAME(&_hx_pos_ee7941cae95a1632_18_new)
HXLINE(  19)		::Array< Float > _hx_tmp = ::verb::core::Vec_obj::normalized(direction);
HXDLIN(  19)		Float _hx_tmp1 = ::verb::core::Vec_obj::norm(direction);
HXDLIN(  19)		super::__construct(::verb::eval::Make_obj::extrudedSurface(_hx_tmp,_hx_tmp1,::verb::geom::ICurve_obj::asNurbs(profile)));
HXLINE(  21)		this->_profile = profile;
HXLINE(  22)		this->_direction = direction;
            	}

Dynamic ExtrudedSurface_obj::__CreateEmpty() { return new ExtrudedSurface_obj; }

void *ExtrudedSurface_obj::_hx_vtable = 0;

Dynamic ExtrudedSurface_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ExtrudedSurface_obj > _hx_result = new ExtrudedSurface_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ExtrudedSurface_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a621450) {
		if (inClassId<=(int)0x06d9bbfa) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
		} else {
			return inClassId==(int)0x0a621450;
		}
	} else {
		return inClassId==(int)0x223066f3;
	}
}

::Dynamic ExtrudedSurface_obj::profile(){
            	HX_STACKFRAME(&_hx_pos_ee7941cae95a1632_30_profile)
HXDLIN(  30)		return this->_profile;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExtrudedSurface_obj,profile,return )

::Array< Float > ExtrudedSurface_obj::direction(){
            	HX_STACKFRAME(&_hx_pos_ee7941cae95a1632_34_direction)
HXDLIN(  34)		return this->_direction;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ExtrudedSurface_obj,direction,return )


::hx::ObjectPtr< ExtrudedSurface_obj > ExtrudedSurface_obj::__new(::Dynamic profile,::Array< Float > direction) {
	::hx::ObjectPtr< ExtrudedSurface_obj > __this = new ExtrudedSurface_obj();
	__this->__construct(profile,direction);
	return __this;
}

::hx::ObjectPtr< ExtrudedSurface_obj > ExtrudedSurface_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic profile,::Array< Float > direction) {
	ExtrudedSurface_obj *__this = (ExtrudedSurface_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ExtrudedSurface_obj), true, "verb.geom.ExtrudedSurface"));
	*(void **)__this = ExtrudedSurface_obj::_hx_vtable;
	__this->__construct(profile,direction);
	return __this;
}

ExtrudedSurface_obj::ExtrudedSurface_obj()
{
}

void ExtrudedSurface_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExtrudedSurface);
	HX_MARK_MEMBER_NAME(_profile,"_profile");
	HX_MARK_MEMBER_NAME(_direction,"_direction");
	 ::verb::geom::NurbsSurface_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExtrudedSurface_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_profile,"_profile");
	HX_VISIT_MEMBER_NAME(_direction,"_direction");
	 ::verb::geom::NurbsSurface_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ExtrudedSurface_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"profile") ) { return ::hx::Val( profile_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { return ::hx::Val( _profile ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { return ::hx::Val( _direction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ExtrudedSurface_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_profile") ) { _profile=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_direction") ) { _direction=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExtrudedSurface_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_profile",aa,a2,01,2d));
	outFields->push(HX_("_direction",00,de,e2,6b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ExtrudedSurface_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(ExtrudedSurface_obj,_profile),HX_("_profile",aa,a2,01,2d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(ExtrudedSurface_obj,_direction),HX_("_direction",00,de,e2,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ExtrudedSurface_obj_sStaticStorageInfo = 0;
#endif

static ::String ExtrudedSurface_obj_sMemberFields[] = {
	HX_("_profile",aa,a2,01,2d),
	HX_("_direction",00,de,e2,6b),
	HX_("profile",29,49,49,f3),
	HX_("direction",3f,62,40,10),
	::String(null()) };

::hx::Class ExtrudedSurface_obj::__mClass;

void ExtrudedSurface_obj::__register()
{
	ExtrudedSurface_obj _hx_dummy;
	ExtrudedSurface_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.geom.ExtrudedSurface",ab,bc,03,07);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ExtrudedSurface_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ExtrudedSurface_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ExtrudedSurface_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ExtrudedSurface_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace geom
