// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_MeshData
#include <verb/core/MeshData.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5b60da3e6bf54094_130_new,"verb.core.MeshData","new",0x9a923029,"verb.core.MeshData.new","verb/core/Data.hx",130,0x26519174)
HX_LOCAL_STACK_FRAME(_hx_pos_5b60da3e6bf54094_138_empty,"verb.core.MeshData","empty",0xde46de96,"verb.core.MeshData.empty","verb/core/Data.hx",138,0x26519174)
namespace verb{
namespace core{

void MeshData_obj::__construct(::Array< ::Dynamic> faces,::Array< ::Dynamic> points,::Array< ::Dynamic> normals,::Array< ::Dynamic> uvs){
            	HX_STACKFRAME(&_hx_pos_5b60da3e6bf54094_130_new)
HXLINE( 131)		this->faces = faces;
HXLINE( 132)		this->points = points;
HXLINE( 133)		this->normals = normals;
HXLINE( 134)		this->uvs = uvs;
            	}

Dynamic MeshData_obj::__CreateEmpty() { return new MeshData_obj; }

void *MeshData_obj::_hx_vtable = 0;

Dynamic MeshData_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeshData_obj > _hx_result = new MeshData_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool MeshData_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0289ba01) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0289ba01;
	} else {
		return inClassId==(int)0x06d9bbfa;
	}
}

 ::verb::core::MeshData MeshData_obj::empty(){
            	HX_GC_STACKFRAME(&_hx_pos_5b60da3e6bf54094_138_empty)
HXDLIN( 138)		return  ::verb::core::MeshData_obj::__alloc( HX_CTX ,::Array_obj< ::Dynamic>::__new(0),::Array_obj< ::Dynamic>::__new(0),::Array_obj< ::Dynamic>::__new(0),::Array_obj< ::Dynamic>::__new(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MeshData_obj,empty,return )


::hx::ObjectPtr< MeshData_obj > MeshData_obj::__new(::Array< ::Dynamic> faces,::Array< ::Dynamic> points,::Array< ::Dynamic> normals,::Array< ::Dynamic> uvs) {
	::hx::ObjectPtr< MeshData_obj > __this = new MeshData_obj();
	__this->__construct(faces,points,normals,uvs);
	return __this;
}

::hx::ObjectPtr< MeshData_obj > MeshData_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> faces,::Array< ::Dynamic> points,::Array< ::Dynamic> normals,::Array< ::Dynamic> uvs) {
	MeshData_obj *__this = (MeshData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeshData_obj), true, "verb.core.MeshData"));
	*(void **)__this = MeshData_obj::_hx_vtable;
	__this->__construct(faces,points,normals,uvs);
	return __this;
}

MeshData_obj::MeshData_obj()
{
}

void MeshData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeshData);
	HX_MARK_MEMBER_NAME(faces,"faces");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(normals,"normals");
	HX_MARK_MEMBER_NAME(uvs,"uvs");
	HX_MARK_END_CLASS();
}

void MeshData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(faces,"faces");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(normals,"normals");
	HX_VISIT_MEMBER_NAME(uvs,"uvs");
}

::hx::Val MeshData_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { return ::hx::Val( uvs ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faces") ) { return ::hx::Val( faces ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { return ::hx::Val( points ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { return ::hx::Val( normals ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MeshData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"empty") ) { outValue = empty_dyn(); return true; }
	}
	return false;
}

::hx::Val MeshData_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"uvs") ) { uvs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"faces") ) { faces=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"normals") ) { normals=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeshData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("faces",36,55,48,fb));
	outFields->push(HX_("points",23,12,2e,f7));
	outFields->push(HX_("normals",6c,70,da,2b));
	outFields->push(HX_("uvs",f2,2e,59,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeshData_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MeshData_obj,faces),HX_("faces",36,55,48,fb)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MeshData_obj,points),HX_("points",23,12,2e,f7)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MeshData_obj,normals),HX_("normals",6c,70,da,2b)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(MeshData_obj,uvs),HX_("uvs",f2,2e,59,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeshData_obj_sStaticStorageInfo = 0;
#endif

static ::String MeshData_obj_sMemberFields[] = {
	HX_("faces",36,55,48,fb),
	HX_("points",23,12,2e,f7),
	HX_("normals",6c,70,da,2b),
	HX_("uvs",f2,2e,59,00),
	::String(null()) };

::hx::Class MeshData_obj::__mClass;

static ::String MeshData_obj_sStaticFields[] = {
	HX_("empty",8d,3a,da,6f),
	::String(null())
};

void MeshData_obj::__register()
{
	MeshData_obj _hx_dummy;
	MeshData_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.MeshData",b7,e7,82,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MeshData_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MeshData_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeshData_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeshData_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeshData_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeshData_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
