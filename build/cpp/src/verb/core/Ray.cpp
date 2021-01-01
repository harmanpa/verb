// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_Ray
#include <verb/core/Ray.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2da1f08a2139d8fa_49_new,"verb.core.Ray","new",0xad06b2dc,"verb.core.Ray.new","verb/core/Data.hx",49,0x26519174)
namespace verb{
namespace core{

void Ray_obj::__construct(::Array< Float > origin,::Array< Float > dir){
            	HX_STACKFRAME(&_hx_pos_2da1f08a2139d8fa_49_new)
HXLINE(  50)		this->origin = origin;
HXLINE(  51)		this->dir = dir;
            	}

Dynamic Ray_obj::__CreateEmpty() { return new Ray_obj; }

void *Ray_obj::_hx_vtable = 0;

Dynamic Ray_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Ray_obj > _hx_result = new Ray_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Ray_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06d9bbfa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
	} else {
		return inClassId==(int)0x176fb98c;
	}
}


::hx::ObjectPtr< Ray_obj > Ray_obj::__new(::Array< Float > origin,::Array< Float > dir) {
	::hx::ObjectPtr< Ray_obj > __this = new Ray_obj();
	__this->__construct(origin,dir);
	return __this;
}

::hx::ObjectPtr< Ray_obj > Ray_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > origin,::Array< Float > dir) {
	Ray_obj *__this = (Ray_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Ray_obj), true, "verb.core.Ray"));
	*(void **)__this = Ray_obj::_hx_vtable;
	__this->__construct(origin,dir);
	return __this;
}

Ray_obj::Ray_obj()
{
}

void Ray_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Ray);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_END_CLASS();
}

void Ray_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(origin,"origin");
}

::hx::Val Ray_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return ::hx::Val( dir ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Ray_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Ray_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dir",4d,3d,4c,00));
	outFields->push(HX_("origin",e6,19,01,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Ray_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Ray_obj,dir),HX_("dir",4d,3d,4c,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Ray_obj,origin),HX_("origin",e6,19,01,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Ray_obj_sStaticStorageInfo = 0;
#endif

static ::String Ray_obj_sMemberFields[] = {
	HX_("dir",4d,3d,4c,00),
	HX_("origin",e6,19,01,4b),
	::String(null()) };

::hx::Class Ray_obj::__mClass;

void Ray_obj::__register()
{
	Ray_obj _hx_dummy;
	Ray_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.Ray",ea,54,4d,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Ray_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Ray_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Ray_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Ray_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core