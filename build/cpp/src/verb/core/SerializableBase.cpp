// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Serializer
#include <haxe/Serializer.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59e32fda1d7ea9f0_20_serialize,"verb.core.SerializableBase","serialize",0x3c0ef3a2,"verb.core.SerializableBase.serialize","verb/core/Serialization.hx",20,0x108b646e)
namespace verb{
namespace core{

void SerializableBase_obj::__construct() { }

Dynamic SerializableBase_obj::__CreateEmpty() { return new SerializableBase_obj; }

void *SerializableBase_obj::_hx_vtable = 0;

Dynamic SerializableBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SerializableBase_obj > _hx_result = new SerializableBase_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SerializableBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
}

::String SerializableBase_obj::serialize(){
            	HX_GC_STACKFRAME(&_hx_pos_59e32fda1d7ea9f0_20_serialize)
HXLINE(  21)		 ::haxe::Serializer serializer =  ::haxe::Serializer_obj::__alloc( HX_CTX );
HXLINE(  22)		serializer->serialize(::hx::ObjectPtr<OBJ_>(this));
HXLINE(  23)		return serializer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(SerializableBase_obj,serialize,return )


SerializableBase_obj::SerializableBase_obj()
{
}

::hx::Val SerializableBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"serialize") ) { return ::hx::Val( serialize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SerializableBase_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SerializableBase_obj_sStaticStorageInfo = 0;
#endif

static ::String SerializableBase_obj_sMemberFields[] = {
	HX_("serialize",e0,5d,f2,f4),
	::String(null()) };

::hx::Class SerializableBase_obj::__mClass;

void SerializableBase_obj::__register()
{
	SerializableBase_obj _hx_dummy;
	SerializableBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.SerializableBase",b0,8f,e8,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SerializableBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SerializableBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SerializableBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SerializableBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core