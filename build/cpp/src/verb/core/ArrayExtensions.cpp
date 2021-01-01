// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_verb_core_ArrayExtensions
#include <verb/core/ArrayExtensions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_16_alloc,"verb.core.ArrayExtensions","alloc",0x7bd00b54,"verb.core.ArrayExtensions.alloc","verb/core/ArrayExtensions.hx",16,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_33_reversed,"verb.core.ArrayExtensions","reversed",0x3423b383,"verb.core.ArrayExtensions.reversed","verb/core/ArrayExtensions.hx",33,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_50_last,"verb.core.ArrayExtensions","last",0x057f6457,"verb.core.ArrayExtensions.last","verb/core/ArrayExtensions.hx",50,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_64_first,"verb.core.ArrayExtensions","first",0x5ad9df0f,"verb.core.ArrayExtensions.first","verb/core/ArrayExtensions.hx",64,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_67_spliceAndInsert,"verb.core.ArrayExtensions","spliceAndInsert",0x427f0bf3,"verb.core.ArrayExtensions.spliceAndInsert","verb/core/ArrayExtensions.hx",67,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_82_left,"verb.core.ArrayExtensions","left",0x05826208,"verb.core.ArrayExtensions.left","verb/core/ArrayExtensions.hx",82,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_98_right,"verb.core.ArrayExtensions","right",0x43a072bb,"verb.core.ArrayExtensions.right","verb/core/ArrayExtensions.hx",98,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_114_rightWithPivot,"verb.core.ArrayExtensions","rightWithPivot",0xd0896ca1,"verb.core.ArrayExtensions.rightWithPivot","verb/core/ArrayExtensions.hx",114,0x96f27731)
HX_LOCAL_STACK_FRAME(_hx_pos_0676d78a015f4be4_132_unique,"verb.core.ArrayExtensions","unique",0xfe302f52,"verb.core.ArrayExtensions.unique","verb/core/ArrayExtensions.hx",132,0x96f27731)
namespace verb{
namespace core{

void ArrayExtensions_obj::__construct() { }

Dynamic ArrayExtensions_obj::__CreateEmpty() { return new ArrayExtensions_obj; }

void *ArrayExtensions_obj::_hx_vtable = 0;

Dynamic ArrayExtensions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayExtensions_obj > _hx_result = new ArrayExtensions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayExtensions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x162eb103;
}

void ArrayExtensions_obj::alloc(::cpp::VirtualArray a,int n){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_16_alloc)
HXLINE(  17)		if ((n < 0)) {
HXLINE(  17)			return;
            		}
HXLINE(  18)		while((a->get_length() < n)){
HXLINE(  19)			a->push(null());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,alloc,(void))

::cpp::VirtualArray ArrayExtensions_obj::reversed(::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_33_reversed)
HXLINE(  34)		::cpp::VirtualArray ac = a->copy();
HXLINE(  35)		ac->reverse();
HXLINE(  36)		return ac;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,reversed,return )

 ::Dynamic ArrayExtensions_obj::last(::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_50_last)
HXDLIN(  50)		return a->__get((a->get_length() - 1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,last,return )

 ::Dynamic ArrayExtensions_obj::first(::cpp::VirtualArray a){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_64_first)
HXDLIN(  64)		return a->__get(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,first,return )

void ArrayExtensions_obj::spliceAndInsert(::cpp::VirtualArray a,int start,int end, ::Dynamic ele){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_67_spliceAndInsert)
HXLINE(  68)		a->splice(start,end);
HXLINE(  69)		a->insert(start,ele);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ArrayExtensions_obj,spliceAndInsert,(void))

::cpp::VirtualArray ArrayExtensions_obj::left(::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_82_left)
HXLINE(  83)		if ((arr->get_length() == 0)) {
HXLINE(  83)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(  84)		int len = ::Math_obj::ceil((( (Float)(arr->get_length()) ) / ( (Float)(2) )));
HXLINE(  85)		return arr->slice(0,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,left,return )

::cpp::VirtualArray ArrayExtensions_obj::right(::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_98_right)
HXLINE(  99)		if ((arr->get_length() == 0)) {
HXLINE(  99)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 100)		int len = ::Math_obj::ceil((( (Float)(arr->get_length()) ) / ( (Float)(2) )));
HXLINE( 101)		return arr->slice(len,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,right,return )

::cpp::VirtualArray ArrayExtensions_obj::rightWithPivot(::cpp::VirtualArray arr){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_114_rightWithPivot)
HXLINE( 115)		if ((arr->get_length() == 0)) {
HXLINE( 115)			return ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 116)		int len = ::Math_obj::ceil((( (Float)(arr->get_length()) ) / ( (Float)(2) )));
HXLINE( 117)		return arr->slice((len - 1),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArrayExtensions_obj,rightWithPivot,return )

::cpp::VirtualArray ArrayExtensions_obj::unique(::cpp::VirtualArray arr, ::Dynamic comp){
            	HX_STACKFRAME(&_hx_pos_0676d78a015f4be4_132_unique)
HXLINE( 134)		::cpp::VirtualArray uniques = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 136)		if ((arr->get_length() == 0)) {
HXLINE( 136)			return uniques;
            		}
HXLINE( 138)		uniques->push(arr->pop());
HXLINE( 140)		while((arr->get_length() > 0)){
HXLINE( 142)			 ::Dynamic ele = arr->pop();
HXLINE( 143)			bool isUnique = true;
HXLINE( 145)			{
HXLINE( 145)				int _g = 0;
HXDLIN( 145)				while((_g < uniques->get_length())){
HXLINE( 145)					 ::Dynamic unique = uniques->__get(_g);
HXDLIN( 145)					_g = (_g + 1);
HXLINE( 146)					if (( (bool)(comp(ele,unique)) )) {
HXLINE( 147)						isUnique = false;
HXLINE( 148)						goto _hx_goto_10;
            					}
            				}
            				_hx_goto_10:;
            			}
HXLINE( 152)			if (isUnique) {
HXLINE( 153)				uniques->push(ele);
            			}
            		}
HXLINE( 157)		return uniques;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ArrayExtensions_obj,unique,return )


ArrayExtensions_obj::ArrayExtensions_obj()
{
}

bool ArrayExtensions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"last") ) { outValue = last_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"left") ) { outValue = left_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alloc") ) { outValue = alloc_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"first") ) { outValue = first_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"right") ) { outValue = right_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"unique") ) { outValue = unique_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"reversed") ) { outValue = reversed_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rightWithPivot") ) { outValue = rightWithPivot_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"spliceAndInsert") ) { outValue = spliceAndInsert_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayExtensions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayExtensions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayExtensions_obj::__mClass;

static ::String ArrayExtensions_obj_sStaticFields[] = {
	HX_("alloc",75,a4,93,21),
	HX_("reversed",02,c5,b5,81),
	HX_("last",56,0a,ad,47),
	HX_("first",30,78,9d,00),
	HX_("spliceAndInsert",54,b8,c7,64),
	HX_("left",07,08,b0,47),
	HX_("right",dc,0b,64,e9),
	HX_("rightWithPivot",60,27,a4,25),
	HX_("unique",11,93,92,63),
	::String(null())
};

void ArrayExtensions_obj::__register()
{
	ArrayExtensions_obj _hx_dummy;
	ArrayExtensions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.ArrayExtensions",0d,46,42,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayExtensions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ArrayExtensions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayExtensions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayExtensions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayExtensions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core