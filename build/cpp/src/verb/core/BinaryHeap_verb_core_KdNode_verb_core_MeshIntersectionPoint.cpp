// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_verb_core_BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint
#include <verb/core/BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.h>
#endif
#ifndef INCLUDED_verb_core_HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint
#include <verb/core/HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_160_new,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","new",0xda7e733a,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.new","verb/core/KdTree.hx",160,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_165_push,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","push",0x5584edc0,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.push","verb/core/KdTree.hx",165,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_172_pop,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","pop",0xda80006b,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.pop","verb/core/KdTree.hx",172,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_187_peek,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","peek",0x5578bd81,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.peek","verb/core/KdTree.hx",187,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_190_remove,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","remove",0x0547bdaa,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.remove","verb/core/KdTree.hx",190,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_213_size,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","size",0x57777ca7,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.size","verb/core/KdTree.hx",213,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_216_bubbleUp,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","bubbleUp",0xd263ebed,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.bubbleUp","verb/core/KdTree.hx",216,0x3d59ce27)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14cf280aaa3f25_238_sinkDown,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint","sinkDown",0x8c36a73b,"verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint.sinkDown","verb/core/KdTree.hx",238,0x3d59ce27)
namespace verb{
namespace core{

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__construct( ::Dynamic scoreFunction){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_160_new)
HXLINE( 161)		this->content = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 162)		this->scoreFunction = scoreFunction;
            	}

Dynamic BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__CreateEmpty() { return new BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj; }

void *BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable = 0;

Dynamic BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj > _hx_result = new BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x665190ea;
}

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::push( ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint element){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_165_push)
HXLINE( 167)		this->content->push(element);
HXLINE( 169)		this->bubbleUp((this->content->length - 1));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,push,(void))

 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::pop(){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_172_pop)
HXLINE( 174)		 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint result = this->content->__get(0).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 176)		 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint end = this->content->pop().StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 179)		if ((this->content->length > 0)) {
HXLINE( 180)			this->content[0] = end;
HXLINE( 181)			this->sinkDown(0);
            		}
HXLINE( 183)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,pop,return )

 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::peek(){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_187_peek)
HXDLIN( 187)		return this->content->__get(0).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,peek,return )

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::remove( ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint node){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_190_remove)
HXLINE( 191)		int len = this->content->length;
HXLINE( 194)		{
HXLINE( 194)			int _g = 0;
HXDLIN( 194)			int _g1 = len;
HXDLIN( 194)			while((_g < _g1)){
HXLINE( 194)				_g = (_g + 1);
HXDLIN( 194)				int i = (_g - 1);
HXLINE( 195)				if (::hx::IsEq( this->content->__get(i).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >(),node )) {
HXLINE( 198)					 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint end = this->content->pop().StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 199)					if ((i != (len - 1))) {
HXLINE( 200)						this->content[i] = end;
HXLINE( 201)						Float _hx_tmp = ( (Float)(this->scoreFunction(end)) );
HXDLIN( 201)						if (::hx::IsLess( _hx_tmp,this->scoreFunction(node) )) {
HXLINE( 202)							this->bubbleUp(i);
            						}
            						else {
HXLINE( 204)							this->sinkDown(i);
            						}
            					}
HXLINE( 206)					return;
            				}
            			}
            		}
HXLINE( 209)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Node not found.",57,10,18,4d)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,remove,(void))

int BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::size(){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_213_size)
HXDLIN( 213)		return this->content->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,size,return )

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::bubbleUp(int n){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_216_bubbleUp)
HXLINE( 218)		 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint element = this->content->__get(n).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 220)		while((n > 0)){
HXLINE( 222)			int parentN = (::Math_obj::floor(((n + ((Float)1.0)) / ( (Float)(2) ))) - 1);
HXDLIN( 222)			 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint parent = this->content->__get(parentN).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 225)			Float _hx_tmp = ( (Float)(this->scoreFunction(element)) );
HXDLIN( 225)			if (::hx::IsLess( _hx_tmp,this->scoreFunction(parent) )) {
HXLINE( 226)				this->content[parentN] = element;
HXLINE( 227)				this->content[n] = parent;
HXLINE( 229)				n = parentN;
            			}
            			else {
HXLINE( 233)				goto _hx_goto_7;
            			}
            		}
            		_hx_goto_7:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,bubbleUp,(void))

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::sinkDown(int n){
            	HX_STACKFRAME(&_hx_pos_ad14cf280aaa3f25_238_sinkDown)
HXLINE( 240)		int length = this->content->length;
HXDLIN( 240)		 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint element = this->content->__get(n).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXDLIN( 240)		Float elemScore = ( (Float)(this->scoreFunction(element)) );
HXLINE( 244)		while(true){
HXLINE( 246)			int child2N = ((n + 1) * 2);
HXLINE( 247)			int child1N = (child2N - 1);
HXLINE( 250)			int swap = -1;
HXLINE( 251)			Float child1Score = ((Float)0.0);
HXLINE( 254)			if ((child1N < length)) {
HXLINE( 256)				 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint child1 = this->content->__get(child1N).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 257)				child1Score = ( (Float)(this->scoreFunction(child1)) );
HXLINE( 259)				if ((child1Score < elemScore)) {
HXLINE( 260)					swap = child1N;
            				}
            			}
HXLINE( 263)			if ((child2N < length)) {
HXLINE( 264)				 ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint child2 = this->content->__get(child2N).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 265)				Float child2Score = ( (Float)(this->scoreFunction(child2)) );
HXLINE( 266)				Float _hx_tmp;
HXDLIN( 266)				if ((swap == -1)) {
HXLINE( 266)					_hx_tmp = elemScore;
            				}
            				else {
HXLINE( 266)					_hx_tmp = child1Score;
            				}
HXDLIN( 266)				if ((child2Score < _hx_tmp)) {
HXLINE( 267)					swap = child2N;
            				}
            			}
HXLINE( 272)			if ((swap != -1)) {
HXLINE( 273)				this->content[n] = this->content->__get(swap).StaticCast<  ::verb::core::HeapElement_verb_core_KdNode_verb_core_MeshIntersectionPoint >();
HXLINE( 274)				this->content[swap] = element;
HXLINE( 275)				n = swap;
            			}
            			else {
HXLINE( 279)				goto _hx_goto_9;
            			}
            		}
            		_hx_goto_9:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,sinkDown,(void))


::hx::ObjectPtr< BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj > BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__new( ::Dynamic scoreFunction) {
	::hx::ObjectPtr< BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj > __this = new BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj();
	__this->__construct(scoreFunction);
	return __this;
}

::hx::ObjectPtr< BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj > BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic scoreFunction) {
	BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj *__this = (BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj), true, "verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint"));
	*(void **)__this = BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable;
	__this->__construct(scoreFunction);
	return __this;
}

BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj()
{
}

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint);
	HX_MARK_MEMBER_NAME(content,"content");
	HX_MARK_MEMBER_NAME(scoreFunction,"scoreFunction");
	HX_MARK_END_CLASS();
}

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(content,"content");
	HX_VISIT_MEMBER_NAME(scoreFunction,"scoreFunction");
}

::hx::Val BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pop") ) { return ::hx::Val( pop_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"push") ) { return ::hx::Val( push_dyn() ); }
		if (HX_FIELD_EQ(inName,"peek") ) { return ::hx::Val( peek_dyn() ); }
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { return ::hx::Val( content ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bubbleUp") ) { return ::hx::Val( bubbleUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"sinkDown") ) { return ::hx::Val( sinkDown_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scoreFunction") ) { return ::hx::Val( scoreFunction ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"content") ) { content=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"scoreFunction") ) { scoreFunction=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("content",39,8d,77,19));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,content),HX_("content",39,8d,77,19)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj,scoreFunction),HX_("scoreFunction",8a,7c,5c,6b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sStaticStorageInfo = 0;
#endif

static ::String BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sMemberFields[] = {
	HX_("content",39,8d,77,19),
	HX_("scoreFunction",8a,7c,5c,6b),
	HX_("push",da,11,61,4a),
	HX_("pop",91,5d,55,00),
	HX_("peek",9b,e1,54,4a),
	HX_("remove",44,9c,88,04),
	HX_("size",c1,a0,53,4c),
	HX_("bubbleUp",07,25,8d,ca),
	HX_("sinkDown",55,e0,5f,84),
	::String(null()) };

::hx::Class BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__mClass;

void BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::__register()
{
	BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj _hx_dummy;
	BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint",48,0e,ca,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BinaryHeap_verb_core_KdNode_verb_core_MeshIntersectionPoint_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core
