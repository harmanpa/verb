// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_HeapElement
#include <verb/core/HeapElement.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0bfb9540fffe3df5_290_new,"verb.core.HeapElement","new",0x580a42e2,"verb.core.HeapElement.new","verb/core/KdTree.hx",290,0x3d59ce27)
namespace verb{
namespace core{

void HeapElement_obj::__construct( ::Dynamic obj,Float value){
            	HX_STACKFRAME(&_hx_pos_0bfb9540fffe3df5_290_new)
HXLINE( 291)		this->obj = obj;
HXLINE( 292)		this->value = value;
            	}

Dynamic HeapElement_obj::__CreateEmpty() { return new HeapElement_obj; }

void *HeapElement_obj::_hx_vtable = 0;

Dynamic HeapElement_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HeapElement_obj > _hx_result = new HeapElement_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HeapElement_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ae5c092;
}


HeapElement_obj::HeapElement_obj()
{
}

void HeapElement_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HeapElement);
	HX_MARK_MEMBER_NAME(obj,"obj");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void HeapElement_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(obj,"obj");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val HeapElement_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { return ::hx::Val( obj ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HeapElement_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"obj") ) { obj=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HeapElement_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("obj",f7,8f,54,00));
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HeapElement_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HeapElement_obj,obj),HX_("obj",f7,8f,54,00)},
	{::hx::fsFloat,(int)offsetof(HeapElement_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HeapElement_obj_sStaticStorageInfo = 0;
#endif

static ::String HeapElement_obj_sMemberFields[] = {
	HX_("obj",f7,8f,54,00),
	HX_("value",71,7f,b8,31),
	::String(null()) };

::hx::Class HeapElement_obj::__mClass;

void HeapElement_obj::__register()
{
	HeapElement_obj _hx_dummy;
	HeapElement_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.HeapElement",f0,e9,fa,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HeapElement_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HeapElement_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HeapElement_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HeapElement_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
