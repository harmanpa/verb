// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_KdNode_verb_core_MeshIntersectionPoint
#include <verb/core/KdNode_verb_core_MeshIntersectionPoint.h>
#endif
#ifndef INCLUDED_verb_core_KdPoint_verb_core_MeshIntersectionPoint
#include <verb/core/KdPoint_verb_core_MeshIntersectionPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_19e49e77441d68ec_331_new,"verb.core.KdNode_verb_core_MeshIntersectionPoint","new",0x839ab2e8,"verb.core.KdNode_verb_core_MeshIntersectionPoint.new","verb/core/KdTree.hx",331,0x3d59ce27)
namespace verb{
namespace core{

void KdNode_verb_core_MeshIntersectionPoint_obj::__construct( ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent){
            	HX_STACKFRAME(&_hx_pos_19e49e77441d68ec_331_new)
HXLINE( 332)		this->kdPoint = kdPoint;
HXLINE( 333)		this->left = null();
HXLINE( 334)		this->right = null();
HXLINE( 335)		this->parent = parent;
HXLINE( 336)		this->dimension = dimension;
            	}

Dynamic KdNode_verb_core_MeshIntersectionPoint_obj::__CreateEmpty() { return new KdNode_verb_core_MeshIntersectionPoint_obj; }

void *KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable = 0;

Dynamic KdNode_verb_core_MeshIntersectionPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > _hx_result = new KdNode_verb_core_MeshIntersectionPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool KdNode_verb_core_MeshIntersectionPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02555df8;
}


::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > KdNode_verb_core_MeshIntersectionPoint_obj::__new( ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent) {
	::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > __this = new KdNode_verb_core_MeshIntersectionPoint_obj();
	__this->__construct(kdPoint,dimension,parent);
	return __this;
}

::hx::ObjectPtr< KdNode_verb_core_MeshIntersectionPoint_obj > KdNode_verb_core_MeshIntersectionPoint_obj::__alloc(::hx::Ctx *_hx_ctx, ::verb::core::KdPoint_verb_core_MeshIntersectionPoint kdPoint,int dimension, ::verb::core::KdNode_verb_core_MeshIntersectionPoint parent) {
	KdNode_verb_core_MeshIntersectionPoint_obj *__this = (KdNode_verb_core_MeshIntersectionPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KdNode_verb_core_MeshIntersectionPoint_obj), true, "verb.core.KdNode_verb_core_MeshIntersectionPoint"));
	*(void **)__this = KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable;
	__this->__construct(kdPoint,dimension,parent);
	return __this;
}

KdNode_verb_core_MeshIntersectionPoint_obj::KdNode_verb_core_MeshIntersectionPoint_obj()
{
}

void KdNode_verb_core_MeshIntersectionPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(KdNode_verb_core_MeshIntersectionPoint);
	HX_MARK_MEMBER_NAME(kdPoint,"kdPoint");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(dimension,"dimension");
	HX_MARK_END_CLASS();
}

void KdNode_verb_core_MeshIntersectionPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(kdPoint,"kdPoint");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(dimension,"dimension");
}

::hx::Val KdNode_verb_core_MeshIntersectionPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { return ::hx::Val( left ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { return ::hx::Val( right ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kdPoint") ) { return ::hx::Val( kdPoint ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dimension") ) { return ::hx::Val( dimension ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val KdNode_verb_core_MeshIntersectionPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast<  ::verb::core::KdNode_verb_core_MeshIntersectionPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast<  ::verb::core::KdNode_verb_core_MeshIntersectionPoint >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::verb::core::KdNode_verb_core_MeshIntersectionPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"kdPoint") ) { kdPoint=inValue.Cast<  ::verb::core::KdPoint_verb_core_MeshIntersectionPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dimension") ) { dimension=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void KdNode_verb_core_MeshIntersectionPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("kdPoint",f7,db,e5,b6));
	outFields->push(HX_("left",07,08,b0,47));
	outFields->push(HX_("right",dc,0b,64,e9));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("dimension",66,3b,14,95));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo KdNode_verb_core_MeshIntersectionPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::verb::core::KdPoint_verb_core_MeshIntersectionPoint */ ,(int)offsetof(KdNode_verb_core_MeshIntersectionPoint_obj,kdPoint),HX_("kdPoint",f7,db,e5,b6)},
	{::hx::fsObject /*  ::verb::core::KdNode_verb_core_MeshIntersectionPoint */ ,(int)offsetof(KdNode_verb_core_MeshIntersectionPoint_obj,left),HX_("left",07,08,b0,47)},
	{::hx::fsObject /*  ::verb::core::KdNode_verb_core_MeshIntersectionPoint */ ,(int)offsetof(KdNode_verb_core_MeshIntersectionPoint_obj,right),HX_("right",dc,0b,64,e9)},
	{::hx::fsObject /*  ::verb::core::KdNode_verb_core_MeshIntersectionPoint */ ,(int)offsetof(KdNode_verb_core_MeshIntersectionPoint_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(KdNode_verb_core_MeshIntersectionPoint_obj,dimension),HX_("dimension",66,3b,14,95)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *KdNode_verb_core_MeshIntersectionPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String KdNode_verb_core_MeshIntersectionPoint_obj_sMemberFields[] = {
	HX_("kdPoint",f7,db,e5,b6),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("parent",2a,05,7e,ed),
	HX_("dimension",66,3b,14,95),
	::String(null()) };

::hx::Class KdNode_verb_core_MeshIntersectionPoint_obj::__mClass;

void KdNode_verb_core_MeshIntersectionPoint_obj::__register()
{
	KdNode_verb_core_MeshIntersectionPoint_obj _hx_dummy;
	KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.KdNode_verb_core_MeshIntersectionPoint",f6,5e,45,8f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(KdNode_verb_core_MeshIntersectionPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< KdNode_verb_core_MeshIntersectionPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = KdNode_verb_core_MeshIntersectionPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = KdNode_verb_core_MeshIntersectionPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
