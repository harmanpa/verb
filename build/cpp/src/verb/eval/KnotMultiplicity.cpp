// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_eval_KnotMultiplicity
#include <verb/eval/KnotMultiplicity.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2d18e344aefbf02c_683_new,"verb.eval.KnotMultiplicity","new",0xdc4a9f7c,"verb.eval.KnotMultiplicity.new","verb/eval/Analyze.hx",683,0xfbb34535)
HX_LOCAL_STACK_FRAME(_hx_pos_2d18e344aefbf02c_690_inc,"verb.eval.KnotMultiplicity","inc",0xdc46dbfa,"verb.eval.KnotMultiplicity.inc","verb/eval/Analyze.hx",690,0xfbb34535)
namespace verb{
namespace eval{

void KnotMultiplicity_obj::__construct(Float knot,int mult){
            	HX_STACKFRAME(&_hx_pos_2d18e344aefbf02c_683_new)
HXLINE( 684)		this->knot = knot;
HXLINE( 685)		this->mult = mult;
            	}

Dynamic KnotMultiplicity_obj::__CreateEmpty() { return new KnotMultiplicity_obj; }

void *KnotMultiplicity_obj::_hx_vtable = 0;

Dynamic KnotMultiplicity_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KnotMultiplicity_obj > _hx_result = new KnotMultiplicity_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool KnotMultiplicity_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x23ac222e;
}

void KnotMultiplicity_obj::inc(){
            	HX_STACKFRAME(&_hx_pos_2d18e344aefbf02c_690_inc)
HXDLIN( 690)		this->mult++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(KnotMultiplicity_obj,inc,(void))


KnotMultiplicity_obj::KnotMultiplicity_obj()
{
}

::hx::Val KnotMultiplicity_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"inc") ) { return ::hx::Val( inc_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"knot") ) { return ::hx::Val( knot ); }
		if (HX_FIELD_EQ(inName,"mult") ) { return ::hx::Val( mult ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KnotMultiplicity_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"knot") ) { knot=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mult") ) { mult=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KnotMultiplicity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("knot",88,ad,0d,47));
	outFields->push(HX_("mult",f0,67,65,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KnotMultiplicity_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(KnotMultiplicity_obj,knot),HX_("knot",88,ad,0d,47)},
	{::hx::fsInt,(int)offsetof(KnotMultiplicity_obj,mult),HX_("mult",f0,67,65,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KnotMultiplicity_obj_sStaticStorageInfo = 0;
#endif

static ::String KnotMultiplicity_obj_sMemberFields[] = {
	HX_("knot",88,ad,0d,47),
	HX_("mult",f0,67,65,48),
	HX_("inc",de,0c,50,00),
	::String(null()) };

::hx::Class KnotMultiplicity_obj::__mClass;

void KnotMultiplicity_obj::__register()
{
	KnotMultiplicity_obj _hx_dummy;
	KnotMultiplicity_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.eval.KnotMultiplicity",8a,71,b6,ed);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KnotMultiplicity_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KnotMultiplicity_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KnotMultiplicity_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KnotMultiplicity_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace eval
