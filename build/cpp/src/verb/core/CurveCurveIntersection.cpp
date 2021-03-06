// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_CurveCurveIntersection
#include <verb/core/CurveCurveIntersection.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d852e69e0d0028f2_20_new,"verb.core.CurveCurveIntersection","new",0xecfbee5b,"verb.core.CurveCurveIntersection.new","verb/core/Intersections.hx",20,0x2e2a0454)
namespace verb{
namespace core{

void CurveCurveIntersection_obj::__construct(::Array< Float > point0,::Array< Float > point1,Float u0,Float u1){
            	HX_STACKFRAME(&_hx_pos_d852e69e0d0028f2_20_new)
HXLINE(  21)		this->point0 = point0;
HXLINE(  22)		this->point1 = point1;
HXLINE(  23)		this->u0 = u0;
HXLINE(  24)		this->u1 = u1;
            	}

Dynamic CurveCurveIntersection_obj::__CreateEmpty() { return new CurveCurveIntersection_obj; }

void *CurveCurveIntersection_obj::_hx_vtable = 0;

Dynamic CurveCurveIntersection_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CurveCurveIntersection_obj > _hx_result = new CurveCurveIntersection_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CurveCurveIntersection_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x459d6d87;
}


CurveCurveIntersection_obj::CurveCurveIntersection_obj()
{
}

void CurveCurveIntersection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CurveCurveIntersection);
	HX_MARK_MEMBER_NAME(point0,"point0");
	HX_MARK_MEMBER_NAME(point1,"point1");
	HX_MARK_MEMBER_NAME(u0,"u0");
	HX_MARK_MEMBER_NAME(u1,"u1");
	HX_MARK_END_CLASS();
}

void CurveCurveIntersection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point0,"point0");
	HX_VISIT_MEMBER_NAME(point1,"point1");
	HX_VISIT_MEMBER_NAME(u0,"u0");
	HX_VISIT_MEMBER_NAME(u1,"u1");
}

::hx::Val CurveCurveIntersection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u0") ) { return ::hx::Val( u0 ); }
		if (HX_FIELD_EQ(inName,"u1") ) { return ::hx::Val( u1 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point0") ) { return ::hx::Val( point0 ); }
		if (HX_FIELD_EQ(inName,"point1") ) { return ::hx::Val( point1 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CurveCurveIntersection_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"u0") ) { u0=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"u1") ) { u1=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"point0") ) { point0=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point1") ) { point1=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CurveCurveIntersection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("point0",e0,11,2e,f7));
	outFields->push(HX_("point1",e1,11,2e,f7));
	outFields->push(HX_("u0",1b,66,00,00));
	outFields->push(HX_("u1",1c,66,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CurveCurveIntersection_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(CurveCurveIntersection_obj,point0),HX_("point0",e0,11,2e,f7)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(CurveCurveIntersection_obj,point1),HX_("point1",e1,11,2e,f7)},
	{::hx::fsFloat,(int)offsetof(CurveCurveIntersection_obj,u0),HX_("u0",1b,66,00,00)},
	{::hx::fsFloat,(int)offsetof(CurveCurveIntersection_obj,u1),HX_("u1",1c,66,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CurveCurveIntersection_obj_sStaticStorageInfo = 0;
#endif

static ::String CurveCurveIntersection_obj_sMemberFields[] = {
	HX_("point0",e0,11,2e,f7),
	HX_("point1",e1,11,2e,f7),
	HX_("u0",1b,66,00,00),
	HX_("u1",1c,66,00,00),
	::String(null()) };

::hx::Class CurveCurveIntersection_obj::__mClass;

void CurveCurveIntersection_obj::__register()
{
	CurveCurveIntersection_obj _hx_dummy;
	CurveCurveIntersection_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.CurveCurveIntersection",e9,24,81,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CurveCurveIntersection_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CurveCurveIntersection_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CurveCurveIntersection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CurveCurveIntersection_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
