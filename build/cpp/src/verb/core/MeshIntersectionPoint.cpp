// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_MeshIntersectionPoint
#include <verb/core/MeshIntersectionPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d84ef5c022496ef2_45_new,"verb.core.MeshIntersectionPoint","new",0x0a04c98c,"verb.core.MeshIntersectionPoint.new","verb/core/Intersections.hx",45,0x2e2a0454)
namespace verb{
namespace core{

void MeshIntersectionPoint_obj::__construct(::Array< Float > uv0,::Array< Float > uv1,::Array< Float > point,int faceIndex0,int faceIndex1){
            	HX_STACKFRAME(&_hx_pos_d84ef5c022496ef2_45_new)
HXLINE(  57)		this->visited = false;
HXLINE(  56)		this->adj = null();
HXLINE(  55)		this->opp = null();
HXLINE(  60)		this->uv0 = uv0;
HXLINE(  61)		this->uv1 = uv1;
HXLINE(  62)		this->point = point;
            	}

Dynamic MeshIntersectionPoint_obj::__CreateEmpty() { return new MeshIntersectionPoint_obj; }

void *MeshIntersectionPoint_obj::_hx_vtable = 0;

Dynamic MeshIntersectionPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeshIntersectionPoint_obj > _hx_result = new MeshIntersectionPoint_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool MeshIntersectionPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x454088bc;
}


MeshIntersectionPoint_obj::MeshIntersectionPoint_obj()
{
}

void MeshIntersectionPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshIntersectionPoint);
	HX_MARK_MEMBER_NAME(uv0,"uv0");
	HX_MARK_MEMBER_NAME(uv1,"uv1");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(faceIndex0,"faceIndex0");
	HX_MARK_MEMBER_NAME(faceIndex1,"faceIndex1");
	HX_MARK_MEMBER_NAME(opp,"opp");
	HX_MARK_MEMBER_NAME(adj,"adj");
	HX_MARK_MEMBER_NAME(visited,"visited");
	HX_MARK_END_CLASS();
}

void MeshIntersectionPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uv0,"uv0");
	HX_VISIT_MEMBER_NAME(uv1,"uv1");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(faceIndex0,"faceIndex0");
	HX_VISIT_MEMBER_NAME(faceIndex1,"faceIndex1");
	HX_VISIT_MEMBER_NAME(opp,"opp");
	HX_VISIT_MEMBER_NAME(adj,"adj");
	HX_VISIT_MEMBER_NAME(visited,"visited");
}

::hx::Val MeshIntersectionPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { return ::hx::Val( uv0 ); }
		if (HX_FIELD_EQ(inName,"uv1") ) { return ::hx::Val( uv1 ); }
		if (HX_FIELD_EQ(inName,"opp") ) { return ::hx::Val( opp ); }
		if (HX_FIELD_EQ(inName,"adj") ) { return ::hx::Val( adj ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visited") ) { return ::hx::Val( visited ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"faceIndex0") ) { return ::hx::Val( faceIndex0 ); }
		if (HX_FIELD_EQ(inName,"faceIndex1") ) { return ::hx::Val( faceIndex1 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeshIntersectionPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uv0") ) { uv0=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uv1") ) { uv1=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"opp") ) { opp=inValue.Cast<  ::verb::core::MeshIntersectionPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"adj") ) { adj=inValue.Cast<  ::verb::core::MeshIntersectionPoint >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visited") ) { visited=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"faceIndex0") ) { faceIndex0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"faceIndex1") ) { faceIndex1=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshIntersectionPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uv0",af,2e,59,00));
	outFields->push(HX_("uv1",b0,2e,59,00));
	outFields->push(HX_("point",50,b4,8f,c6));
	outFields->push(HX_("faceIndex0",5b,11,26,da));
	outFields->push(HX_("faceIndex1",5c,11,26,da));
	outFields->push(HX_("opp",2f,9c,54,00));
	outFields->push(HX_("adj",27,f2,49,00));
	outFields->push(HX_("visited",ea,1a,32,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeshIntersectionPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(MeshIntersectionPoint_obj,uv0),HX_("uv0",af,2e,59,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(MeshIntersectionPoint_obj,uv1),HX_("uv1",b0,2e,59,00)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(MeshIntersectionPoint_obj,point),HX_("point",50,b4,8f,c6)},
	{::hx::fsInt,(int)offsetof(MeshIntersectionPoint_obj,faceIndex0),HX_("faceIndex0",5b,11,26,da)},
	{::hx::fsInt,(int)offsetof(MeshIntersectionPoint_obj,faceIndex1),HX_("faceIndex1",5c,11,26,da)},
	{::hx::fsObject /*  ::verb::core::MeshIntersectionPoint */ ,(int)offsetof(MeshIntersectionPoint_obj,opp),HX_("opp",2f,9c,54,00)},
	{::hx::fsObject /*  ::verb::core::MeshIntersectionPoint */ ,(int)offsetof(MeshIntersectionPoint_obj,adj),HX_("adj",27,f2,49,00)},
	{::hx::fsBool,(int)offsetof(MeshIntersectionPoint_obj,visited),HX_("visited",ea,1a,32,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeshIntersectionPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String MeshIntersectionPoint_obj_sMemberFields[] = {
	HX_("uv0",af,2e,59,00),
	HX_("uv1",b0,2e,59,00),
	HX_("point",50,b4,8f,c6),
	HX_("faceIndex0",5b,11,26,da),
	HX_("faceIndex1",5c,11,26,da),
	HX_("opp",2f,9c,54,00),
	HX_("adj",27,f2,49,00),
	HX_("visited",ea,1a,32,a3),
	::String(null()) };

::hx::Class MeshIntersectionPoint_obj::__mClass;

void MeshIntersectionPoint_obj::__register()
{
	MeshIntersectionPoint_obj _hx_dummy;
	MeshIntersectionPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.MeshIntersectionPoint",9a,53,6e,2e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeshIntersectionPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeshIntersectionPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshIntersectionPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshIntersectionPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
