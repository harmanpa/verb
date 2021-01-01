// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_Constants
#include <verb/core/Constants.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_38415084b8d5c57c_10_boot,"verb.core.Constants","boot",0xef077771,"verb.core.Constants.boot","verb/core/Constants.hx",10,0x2a311cef)
HX_LOCAL_STACK_FRAME(_hx_pos_38415084b8d5c57c_14_boot,"verb.core.Constants","boot",0xef077771,"verb.core.Constants.boot","verb/core/Constants.hx",14,0x2a311cef)
HX_LOCAL_STACK_FRAME(_hx_pos_38415084b8d5c57c_18_boot,"verb.core.Constants","boot",0xef077771,"verb.core.Constants.boot","verb/core/Constants.hx",18,0x2a311cef)
namespace verb{
namespace core{

void Constants_obj::__construct() { }

Dynamic Constants_obj::__CreateEmpty() { return new Constants_obj; }

void *Constants_obj::_hx_vtable = 0;

Dynamic Constants_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Constants_obj > _hx_result = new Constants_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Constants_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x25f4d7e9;
}

Float Constants_obj::TOLERANCE;

Float Constants_obj::EPSILON;

::String Constants_obj::VERSION;


Constants_obj::Constants_obj()
{
}

bool Constants_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { outValue = ( EPSILON ); return true; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { outValue = ( VERSION ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOLERANCE") ) { outValue = ( TOLERANCE ); return true; }
	}
	return false;
}

bool Constants_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"EPSILON") ) { EPSILON=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"TOLERANCE") ) { TOLERANCE=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Constants_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Constants_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Constants_obj::TOLERANCE,HX_("TOLERANCE",ed,ac,d4,2e)},
	{::hx::fsFloat,(void *) &Constants_obj::EPSILON,HX_("EPSILON",4a,89,92,2c)},
	{::hx::fsString,(void *) &Constants_obj::VERSION,HX_("VERSION",f8,ba,c5,fc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Constants_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Constants_obj::TOLERANCE,"TOLERANCE");
	HX_MARK_MEMBER_NAME(Constants_obj::EPSILON,"EPSILON");
	HX_MARK_MEMBER_NAME(Constants_obj::VERSION,"VERSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Constants_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Constants_obj::TOLERANCE,"TOLERANCE");
	HX_VISIT_MEMBER_NAME(Constants_obj::EPSILON,"EPSILON");
	HX_VISIT_MEMBER_NAME(Constants_obj::VERSION,"VERSION");
};

#endif

::hx::Class Constants_obj::__mClass;

static ::String Constants_obj_sStaticFields[] = {
	HX_("TOLERANCE",ed,ac,d4,2e),
	HX_("EPSILON",4a,89,92,2c),
	HX_("VERSION",f8,ba,c5,fc),
	::String(null())
};

void Constants_obj::__register()
{
	Constants_obj _hx_dummy;
	Constants_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.Constants",8f,35,cb,05);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Constants_obj::__GetStatic;
	__mClass->mSetStaticField = &Constants_obj::__SetStatic;
	__mClass->mMarkFunc = Constants_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Constants_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Constants_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Constants_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Constants_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Constants_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Constants_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_38415084b8d5c57c_10_boot)
HXDLIN(  10)		TOLERANCE = ((Float)1e-6);
            	}
{
            	HX_STACKFRAME(&_hx_pos_38415084b8d5c57c_14_boot)
HXDLIN(  14)		EPSILON = ((Float)1e-10);
            	}
{
            	HX_STACKFRAME(&_hx_pos_38415084b8d5c57c_18_boot)
HXDLIN(  18)		VERSION = HX_("2.0.0",36,66,95,e8);
            	}
}

} // end namespace verb
} // end namespace core