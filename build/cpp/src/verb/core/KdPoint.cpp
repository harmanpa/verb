// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_KdPoint
#include <verb/core/KdPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79ba68cc1ea63de5_306_new,"verb.core.KdPoint","new",0x4d31c369,"verb.core.KdPoint.new","verb/core/KdTree.hx",306,0x3d59ce27)
namespace verb{
namespace core{

void KdPoint_obj::__construct(::Array< Float > point, ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_79ba68cc1ea63de5_306_new)
HXLINE( 307)		this->point = point;
HXLINE( 308)		this->obj = obj;
            	}

Dynamic KdPoint_obj::__CreateEmpty() { return new KdPoint_obj; }

void *KdPoint_obj::_hx_vtable = 0;

Dynamic KdPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KdPoint_obj > _hx_result = new KdPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool KdPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x76963899;
}


KdPoint_obj::KdPoint_obj()
{
}

void KdPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KdPoint);
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_END_CLASS();
}

void KdPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(obj,"obj");
}

::hx::Val KdPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KdPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KdPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("obj",f7,8f,54,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KdPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(KdPoint_obj,point),HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(KdPoint_obj,obj),HX_("obj",f7,8f,54,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KdPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String KdPoint_obj_sMemberFields[] = {
	HX_("point",50,b4,8f,c6),
	HX_("obj",f7,8f,54,00),
	::String(null()) };

::hx::Class KdPoint_obj::__mClass;

void KdPoint_obj::__register()
{
	KdPoint_obj _hx_dummy;
	KdPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.KdPoint",f7,da,87,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KdPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KdPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KdPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KdPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core