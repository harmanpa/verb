// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_PolylineData
#include <verb/core/PolylineData.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb62251127fc6d4f_153_new,"verb.core.PolylineData","new",0xf12f1d7c,"verb.core.PolylineData.new","verb/core/Data.hx",153,0x26519174)
namespace verb{
namespace core{

void PolylineData_obj::__construct(::Array< ::Dynamic> points,::Array< Float > params){
            	HX_STACKFRAME(&_hx_pos_cb62251127fc6d4f_153_new)
HXLINE( 154)		this->points = points;
HXLINE( 155)		this->params = params;
            	}

Dynamic PolylineData_obj::__CreateEmpty() { return new PolylineData_obj; }

void *PolylineData_obj::_hx_vtable = 0;

Dynamic PolylineData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PolylineData_obj > _hx_result = new PolylineData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PolylineData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06d9bbfa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
	} else {
		return inClassId==(int)0x1f8ed40c;
	}
}


::hx::ObjectPtr< PolylineData_obj > PolylineData_obj::__new(::Array< ::Dynamic> points,::Array< Float > params) {
	::hx::ObjectPtr< PolylineData_obj > __this = new PolylineData_obj();
	__this->__construct(points,params);
	return __this;
}

::hx::ObjectPtr< PolylineData_obj > PolylineData_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> points,::Array< Float > params) {
	PolylineData_obj *__this = (PolylineData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PolylineData_obj), true, "verb.core.PolylineData"));
	*(void **)__this = PolylineData_obj::_hx_vtable;
	__this->__construct(points,params);
	return __this;
}

PolylineData_obj::PolylineData_obj()
{
}

void PolylineData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PolylineData);
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_END_CLASS();
}

void PolylineData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(params,"params");
}

::hx::Val PolylineData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PolylineData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { params=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PolylineData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("points",23,12,2e,f7));
	outFields->push(HX_("params",46,fb,7a,ed));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PolylineData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PolylineData_obj,points),HX_("points",23,12,2e,f7)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(PolylineData_obj,params),HX_("params",46,fb,7a,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PolylineData_obj_sStaticStorageInfo = 0;
#endif

static ::String PolylineData_obj_sMemberFields[] = {
	HX_("points",23,12,2e,f7),
	HX_("params",46,fb,7a,ed),
	::String(null()) };

::hx::Class PolylineData_obj::__mClass;

void PolylineData_obj::__register()
{
	PolylineData_obj _hx_dummy;
	PolylineData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.PolylineData",8a,ef,03,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PolylineData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PolylineData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PolylineData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PolylineData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
