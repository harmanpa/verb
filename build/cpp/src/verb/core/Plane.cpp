// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_Plane
#include <verb/core/Plane.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_910939875082918f_35_new,"verb.core.Plane","new",0x2f5dbc4e,"verb.core.Plane.new","verb/core/Data.hx",35,0x26519174)
namespace verb{
namespace core{

void Plane_obj::__construct(::Array< Float > origin,::Array< Float > normal){
            	HX_STACKFRAME(&_hx_pos_910939875082918f_35_new)
HXLINE(  36)		this->origin = origin;
HXLINE(  37)		this->normal = normal;
            	}

Dynamic Plane_obj::__CreateEmpty() { return new Plane_obj; }

void *Plane_obj::_hx_vtable = 0;

Dynamic Plane_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Plane_obj > _hx_result = new Plane_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Plane_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06d9bbfa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
	} else {
		return inClassId==(int)0x7e608e7e;
	}
}


::hx::ObjectPtr< Plane_obj > Plane_obj::__new(::Array< Float > origin,::Array< Float > normal) {
	::hx::ObjectPtr< Plane_obj > __this = new Plane_obj();
	__this->__construct(origin,normal);
	return __this;
}

::hx::ObjectPtr< Plane_obj > Plane_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< Float > origin,::Array< Float > normal) {
	Plane_obj *__this = (Plane_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Plane_obj), true, "verb.core.Plane"));
	*(void **)__this = Plane_obj::_hx_vtable;
	__this->__construct(origin,normal);
	return __this;
}

Plane_obj::Plane_obj()
{
}

void Plane_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Plane);
	HX_MARK_MEMBER_NAME(normal,"normal");
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_END_CLASS();
}

void Plane_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(normal,"normal");
	HX_VISIT_MEMBER_NAME(origin,"origin");
}

::hx::Val Plane_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { return ::hx::Val( normal ); }
		if (HX_FIELD_EQ(inName,"origin") ) { return ::hx::Val( origin ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Plane_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"normal") ) { normal=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Plane_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("normal",27,72,69,30));
	outFields->push(HX_("origin",e6,19,01,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Plane_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Plane_obj,normal),HX_("normal",27,72,69,30)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(Plane_obj,origin),HX_("origin",e6,19,01,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Plane_obj_sStaticStorageInfo = 0;
#endif

static ::String Plane_obj_sMemberFields[] = {
	HX_("normal",27,72,69,30),
	HX_("origin",e6,19,01,4b),
	::String(null()) };

::hx::Class Plane_obj::__mClass;

void Plane_obj::__register()
{
	Plane_obj _hx_dummy;
	Plane_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.Plane",5c,3d,62,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Plane_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Plane_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Plane_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Plane_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core