// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_verb_core_ArrayExtensions
#include <verb/core/ArrayExtensions.h>
#endif
#ifndef INCLUDED_verb_core_ISerializable
#include <verb/core/ISerializable.h>
#endif
#ifndef INCLUDED_verb_core_Interval
#include <verb/core/Interval.h>
#endif
#ifndef INCLUDED_verb_core_NurbsCurveData
#include <verb/core/NurbsCurveData.h>
#endif
#ifndef INCLUDED_verb_core_SerializableBase
#include <verb/core/SerializableBase.h>
#endif
#ifndef INCLUDED_verb_eval_Analyze
#include <verb/eval/Analyze.h>
#endif
#ifndef INCLUDED_verb_eval_Check
#include <verb/eval/Check.h>
#endif
#ifndef INCLUDED_verb_eval_CurveLengthSample
#include <verb/eval/CurveLengthSample.h>
#endif
#ifndef INCLUDED_verb_eval_Divide
#include <verb/eval/Divide.h>
#endif
#ifndef INCLUDED_verb_eval_Eval
#include <verb/eval/Eval.h>
#endif
#ifndef INCLUDED_verb_eval_Make
#include <verb/eval/Make.h>
#endif
#ifndef INCLUDED_verb_eval_Modify
#include <verb/eval/Modify.h>
#endif
#ifndef INCLUDED_verb_eval_Tess
#include <verb/eval/Tess.h>
#endif
#ifndef INCLUDED_verb_geom_ICurve
#include <verb/geom/ICurve.h>
#endif
#ifndef INCLUDED_verb_geom_NurbsCurve
#include <verb/geom/NurbsCurve.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f9cca04265a76fac_39_new,"verb.geom.NurbsCurve","new",0xf485e8e8,"verb.geom.NurbsCurve.new","verb/geom/NurbsCurve.hx",39,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_82_degree,"verb.geom.NurbsCurve","degree",0xd5a66bc4,"verb.geom.NurbsCurve.degree","verb/geom/NurbsCurve.hx",82,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_85_knots,"verb.geom.NurbsCurve","knots",0xdc397473,"verb.geom.NurbsCurve.knots","verb/geom/NurbsCurve.hx",85,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_88_controlPoints,"verb.geom.NurbsCurve","controlPoints",0xa6db67e8,"verb.geom.NurbsCurve.controlPoints","verb/geom/NurbsCurve.hx",88,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_91_weights,"verb.geom.NurbsCurve","weights",0x5199d483,"verb.geom.NurbsCurve.weights","verb/geom/NurbsCurve.hx",91,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_100_asNurbs,"verb.geom.NurbsCurve","asNurbs",0xd5378712,"verb.geom.NurbsCurve.asNurbs","verb/geom/NurbsCurve.hx",100,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_110_clone,"verb.geom.NurbsCurve","clone",0x3fb25de5,"verb.geom.NurbsCurve.clone","verb/geom/NurbsCurve.hx",110,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_120_domain,"verb.geom.NurbsCurve","domain",0x9b929dbc,"verb.geom.NurbsCurve.domain","verb/geom/NurbsCurve.hx",120,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_134_transform,"verb.geom.NurbsCurve","transform",0x85ce5bf4,"verb.geom.NurbsCurve.transform","verb/geom/NurbsCurve.hx",134,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_148_point,"verb.geom.NurbsCurve","point",0xbddefed8,"verb.geom.NurbsCurve.point","verb/geom/NurbsCurve.hx",148,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_163_tangent,"verb.geom.NurbsCurve","tangent",0x1c6a994d,"verb.geom.NurbsCurve.tangent","verb/geom/NurbsCurve.hx",163,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_178_derivatives,"verb.geom.NurbsCurve","derivatives",0xc57df314,"verb.geom.NurbsCurve.derivatives","verb/geom/NurbsCurve.hx",178,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_192_closestPoint,"verb.geom.NurbsCurve","closestPoint",0x0021bdaf,"verb.geom.NurbsCurve.closestPoint","verb/geom/NurbsCurve.hx",192,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_206_closestParam,"verb.geom.NurbsCurve","closestParam",0xf6e789ec,"verb.geom.NurbsCurve.closestParam","verb/geom/NurbsCurve.hx",206,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_216_length,"verb.geom.NurbsCurve","length",0x0d19815e,"verb.geom.NurbsCurve.length","verb/geom/NurbsCurve.hx",216,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_230_lengthAtParam,"verb.geom.NurbsCurve","lengthAtParam",0x64ea78dc,"verb.geom.NurbsCurve.lengthAtParam","verb/geom/NurbsCurve.hx",230,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_244_paramAtLength,"verb.geom.NurbsCurve","paramAtLength",0xe5da3a6e,"verb.geom.NurbsCurve.paramAtLength","verb/geom/NurbsCurve.hx",244,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_258_divideByEqualArcLength,"verb.geom.NurbsCurve","divideByEqualArcLength",0xac3488cc,"verb.geom.NurbsCurve.divideByEqualArcLength","verb/geom/NurbsCurve.hx",258,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_272_divideByArcLength,"verb.geom.NurbsCurve","divideByArcLength",0x7fd7b790,"verb.geom.NurbsCurve.divideByArcLength","verb/geom/NurbsCurve.hx",272,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_286_split,"verb.geom.NurbsCurve","split",0x78be3562,"verb.geom.NurbsCurve.split","verb/geom/NurbsCurve.hx",286,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_296_reverse,"verb.geom.NurbsCurve","reverse",0xfc9935aa,"verb.geom.NurbsCurve.reverse","verb/geom/NurbsCurve.hx",296,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_310_tessellate,"verb.geom.NurbsCurve","tessellate",0x87570696,"verb.geom.NurbsCurve.tessellate","verb/geom/NurbsCurve.hx",310,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_59_byKnotsControlPointsWeights,"verb.geom.NurbsCurve","byKnotsControlPointsWeights",0xa328edb7,"verb.geom.NurbsCurve.byKnotsControlPointsWeights","verb/geom/NurbsCurve.hx",59,0xb54f1328)
HX_LOCAL_STACK_FRAME(_hx_pos_f9cca04265a76fac_75_byPoints,"verb.geom.NurbsCurve","byPoints",0x407751d2,"verb.geom.NurbsCurve.byPoints","verb/geom/NurbsCurve.hx",75,0xb54f1328)
namespace verb{
namespace geom{

void NurbsCurve_obj::__construct( ::verb::core::NurbsCurveData data){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_39_new)
HXDLIN(  39)		this->_data = ::verb::eval::Check_obj::isValidNurbsCurveData(data);
            	}

Dynamic NurbsCurve_obj::__CreateEmpty() { return new NurbsCurve_obj; }

void *NurbsCurve_obj::_hx_vtable = 0;

Dynamic NurbsCurve_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NurbsCurve_obj > _hx_result = new NurbsCurve_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NurbsCurve_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06d9bbfa) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06d9bbfa;
	} else {
		return inClassId==(int)0x69541c12;
	}
}

static ::verb::core::ISerializable_obj _hx_verb_geom_NurbsCurve__hx_verb_core_ISerializable= {
	( ::String (::hx::Object::*)())&::verb::geom::NurbsCurve_obj::serialize,
};

static ::verb::geom::ICurve_obj _hx_verb_geom_NurbsCurve__hx_verb_geom_ICurve= {
	( ::String (::hx::Object::*)())&::verb::geom::NurbsCurve_obj::serialize,
	(  ::verb::core::NurbsCurveData (::hx::Object::*)())&::verb::geom::NurbsCurve_obj::asNurbs,
	(  ::verb::core::Interval (::hx::Object::*)())&::verb::geom::NurbsCurve_obj::domain,
	( ::Array< Float > (::hx::Object::*)(Float))&::verb::geom::NurbsCurve_obj::point,
	( ::Array< ::Dynamic> (::hx::Object::*)(Float,::hx::Null< int > ))&::verb::geom::NurbsCurve_obj::derivatives,
};

void *NurbsCurve_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x62a1c1ea: return &_hx_verb_geom_NurbsCurve__hx_verb_core_ISerializable;
		case (int)0xb89fb0c1: return &_hx_verb_geom_NurbsCurve__hx_verb_geom_ICurve;
	}
	return super::_hx_getInterface(inHash);
}

int NurbsCurve_obj::degree(){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_82_degree)
HXDLIN(  82)		return this->_data->degree;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,degree,return )

::Array< Float > NurbsCurve_obj::knots(){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_85_knots)
HXDLIN(  85)		return this->_data->knots->slice(0,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,knots,return )

::Array< ::Dynamic> NurbsCurve_obj::controlPoints(){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_88_controlPoints)
HXDLIN(  88)		return ::verb::eval::Eval_obj::dehomogenize1d(this->_data->controlPoints);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,controlPoints,return )

::Array< Float > NurbsCurve_obj::weights(){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_91_weights)
HXDLIN(  91)		return ::verb::eval::Eval_obj::weight1d(this->_data->controlPoints);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,weights,return )

 ::verb::core::NurbsCurveData NurbsCurve_obj::asNurbs(){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_100_asNurbs)
HXDLIN( 100)		int _hx_tmp = this->degree();
HXDLIN( 100)		::Array< Float > _hx_tmp1 = this->knots();
HXDLIN( 100)		::Array< ::Dynamic> _hx_tmp2 = this->controlPoints();
HXDLIN( 100)		return  ::verb::core::NurbsCurveData_obj::__alloc( HX_CTX ,_hx_tmp,_hx_tmp1,::verb::eval::Eval_obj::homogenize1d(_hx_tmp2,this->weights()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,asNurbs,return )

 ::verb::geom::NurbsCurve NurbsCurve_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_110_clone)
HXDLIN( 110)		return  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX ,this->_data);
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,clone,return )

 ::verb::core::Interval NurbsCurve_obj::domain(){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_120_domain)
HXDLIN( 120)		Float _hx_tmp = ( (Float)(::verb::core::ArrayExtensions_obj::first(this->_data->knots)) );
HXDLIN( 120)		return  ::verb::core::Interval_obj::__alloc( HX_CTX ,_hx_tmp,::verb::core::ArrayExtensions_obj::last(this->_data->knots));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,domain,return )

 ::verb::geom::NurbsCurve NurbsCurve_obj::transform(::Array< ::Dynamic> mat){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_134_transform)
HXDLIN( 134)		return  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX ,::verb::eval::Modify_obj::rationalCurveTransform(this->_data,mat));
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,transform,return )

::Array< Float > NurbsCurve_obj::point(Float u){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_148_point)
HXDLIN( 148)		return ::verb::eval::Eval_obj::rationalCurvePoint(this->_data,u);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,point,return )

::Array< Float > NurbsCurve_obj::tangent(Float u){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_163_tangent)
HXDLIN( 163)		return ::verb::eval::Eval_obj::rationalCurveTangent(this->_data,u);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,tangent,return )

::Array< ::Dynamic> NurbsCurve_obj::derivatives(Float u,::hx::Null< int >  __o_numDerivs){
            		int numDerivs = __o_numDerivs.Default(1);
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_178_derivatives)
HXDLIN( 178)		return ::verb::eval::Eval_obj::rationalCurveDerivatives(this->_data,u,numDerivs);
            	}


HX_DEFINE_DYNAMIC_FUNC2(NurbsCurve_obj,derivatives,return )

::Array< Float > NurbsCurve_obj::closestPoint(::Array< Float > pt){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_192_closestPoint)
HXDLIN( 192)		return ::verb::eval::Analyze_obj::rationalCurveClosestPoint(this->_data,pt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,closestPoint,return )

Float NurbsCurve_obj::closestParam(::Array< Float > pt){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_206_closestParam)
HXDLIN( 206)		return ::verb::eval::Analyze_obj::rationalCurveClosestParam(this->_data,pt);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,closestParam,return )

Float NurbsCurve_obj::length(){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_216_length)
HXDLIN( 216)		return ::verb::eval::Analyze_obj::rationalCurveArcLength(this->_data,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,length,return )

Float NurbsCurve_obj::lengthAtParam(Float u){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_230_lengthAtParam)
HXDLIN( 230)		return ::verb::eval::Analyze_obj::rationalCurveArcLength(this->_data,u,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,lengthAtParam,return )

Float NurbsCurve_obj::paramAtLength(Float len, ::Dynamic tolerance){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_244_paramAtLength)
HXDLIN( 244)		return ::verb::eval::Analyze_obj::rationalCurveParamAtArcLength(this->_data,len,tolerance,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(NurbsCurve_obj,paramAtLength,return )

::Array< ::Dynamic> NurbsCurve_obj::divideByEqualArcLength(int divisions){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_258_divideByEqualArcLength)
HXDLIN( 258)		return ::verb::eval::Divide_obj::rationalCurveByEqualArcLength(this->_data,divisions);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,divideByEqualArcLength,return )

::Array< ::Dynamic> NurbsCurve_obj::divideByArcLength(Float arcLength){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_272_divideByArcLength)
HXDLIN( 272)		return ::verb::eval::Divide_obj::rationalCurveByArcLength(this->_data,arcLength);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,divideByArcLength,return )

::Array< ::Dynamic> NurbsCurve_obj::split(Float u){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_286_split)
HXDLIN( 286)		::Array< ::Dynamic> _this = ::verb::eval::Divide_obj::curveSplit(this->_data,u);
HXDLIN( 286)		::Array< ::Dynamic> result = ::Array_obj< ::Dynamic>::__new(_this->length);
HXDLIN( 286)		{
HXDLIN( 286)			int _g = 0;
HXDLIN( 286)			int _g1 = _this->length;
HXDLIN( 286)			while((_g < _g1)){
HXDLIN( 286)				_g = (_g + 1);
HXDLIN( 286)				int i = (_g - 1);
HXDLIN( 286)				{
HXDLIN( 286)					 ::verb::geom::NurbsCurve inValue =  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX ,( ( ::verb::core::NurbsCurveData)(_hx_array_unsafe_get(_this,i)) ));
HXDLIN( 286)					result->__unsafe_set(i,inValue);
            				}
            			}
            		}
HXDLIN( 286)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,split,return )

 ::verb::geom::NurbsCurve NurbsCurve_obj::reverse(){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_296_reverse)
HXDLIN( 296)		return  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX ,::verb::eval::Modify_obj::curveReverse(this->_data));
            	}


HX_DEFINE_DYNAMIC_FUNC0(NurbsCurve_obj,reverse,return )

::Array< ::Dynamic> NurbsCurve_obj::tessellate( ::Dynamic tolerance){
            	HX_STACKFRAME(&_hx_pos_f9cca04265a76fac_310_tessellate)
HXDLIN( 310)		return ::verb::eval::Tess_obj::rationalCurveAdaptiveSample(this->_data,tolerance,false);
            	}


HX_DEFINE_DYNAMIC_FUNC1(NurbsCurve_obj,tessellate,return )

 ::verb::geom::NurbsCurve NurbsCurve_obj::byKnotsControlPointsWeights(int degree,::Array< Float > knots,::Array< ::Dynamic> controlPoints,::Array< Float > weights){
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_59_byKnotsControlPointsWeights)
HXDLIN(  59)		::Array< Float > _hx_tmp = knots->copy();
HXDLIN(  59)		return  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX , ::verb::core::NurbsCurveData_obj::__alloc( HX_CTX ,degree,_hx_tmp,::verb::eval::Eval_obj::homogenize1d(controlPoints,weights)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(NurbsCurve_obj,byKnotsControlPointsWeights,return )

 ::verb::geom::NurbsCurve NurbsCurve_obj::byPoints(::Array< ::Dynamic> points,::hx::Null< int >  __o_degree){
            		int degree = __o_degree.Default(3);
            	HX_GC_STACKFRAME(&_hx_pos_f9cca04265a76fac_75_byPoints)
HXDLIN(  75)		return  ::verb::geom::NurbsCurve_obj::__alloc( HX_CTX ,::verb::eval::Make_obj::rationalInterpCurve(points,degree,null(),null(),null()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NurbsCurve_obj,byPoints,return )


::hx::ObjectPtr< NurbsCurve_obj > NurbsCurve_obj::__new( ::verb::core::NurbsCurveData data) {
	::hx::ObjectPtr< NurbsCurve_obj > __this = new NurbsCurve_obj();
	__this->__construct(data);
	return __this;
}

::hx::ObjectPtr< NurbsCurve_obj > NurbsCurve_obj::__alloc(::hx::Ctx *_hx_ctx, ::verb::core::NurbsCurveData data) {
	NurbsCurve_obj *__this = (NurbsCurve_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NurbsCurve_obj), true, "verb.geom.NurbsCurve"));
	*(void **)__this = NurbsCurve_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

NurbsCurve_obj::NurbsCurve_obj()
{
}

void NurbsCurve_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NurbsCurve);
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_END_CLASS();
}

void NurbsCurve_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_data,"_data");
}

::hx::Val NurbsCurve_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { return ::hx::Val( _data ); }
		if (HX_FIELD_EQ(inName,"knots") ) { return ::hx::Val( knots_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"point") ) { return ::hx::Val( point_dyn() ); }
		if (HX_FIELD_EQ(inName,"split") ) { return ::hx::Val( split_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"degree") ) { return ::hx::Val( degree_dyn() ); }
		if (HX_FIELD_EQ(inName,"domain") ) { return ::hx::Val( domain_dyn() ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"weights") ) { return ::hx::Val( weights_dyn() ); }
		if (HX_FIELD_EQ(inName,"asNurbs") ) { return ::hx::Val( asNurbs_dyn() ); }
		if (HX_FIELD_EQ(inName,"tangent") ) { return ::hx::Val( tangent_dyn() ); }
		if (HX_FIELD_EQ(inName,"reverse") ) { return ::hx::Val( reverse_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"transform") ) { return ::hx::Val( transform_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tessellate") ) { return ::hx::Val( tessellate_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"derivatives") ) { return ::hx::Val( derivatives_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"closestPoint") ) { return ::hx::Val( closestPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"closestParam") ) { return ::hx::Val( closestParam_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"controlPoints") ) { return ::hx::Val( controlPoints_dyn() ); }
		if (HX_FIELD_EQ(inName,"lengthAtParam") ) { return ::hx::Val( lengthAtParam_dyn() ); }
		if (HX_FIELD_EQ(inName,"paramAtLength") ) { return ::hx::Val( paramAtLength_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"divideByArcLength") ) { return ::hx::Val( divideByArcLength_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"divideByEqualArcLength") ) { return ::hx::Val( divideByEqualArcLength_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NurbsCurve_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"byPoints") ) { outValue = byPoints_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"byKnotsControlPointsWeights") ) { outValue = byKnotsControlPointsWeights_dyn(); return true; }
	}
	return false;
}

::hx::Val NurbsCurve_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast<  ::verb::core::NurbsCurveData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NurbsCurve_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_data",09,72,74,f5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NurbsCurve_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::verb::core::NurbsCurveData */ ,(int)offsetof(NurbsCurve_obj,_data),HX_("_data",09,72,74,f5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *NurbsCurve_obj_sStaticStorageInfo = 0;
#endif

static ::String NurbsCurve_obj_sMemberFields[] = {
	HX_("_data",09,72,74,f5),
	HX_("degree",4c,7f,94,67),
	HX_("knots",eb,29,ea,e4),
	HX_("controlPoints",60,55,f2,6f),
	HX_("weights",fb,d7,fc,6f),
	HX_("asNurbs",8a,8a,9a,f3),
	HX_("clone",5d,13,63,48),
	HX_("domain",44,b1,80,2d),
	HX_("transform",6c,2d,93,45),
	HX_("point",50,b4,8f,c6),
	HX_("tangent",c5,9c,cd,3a),
	HX_("derivatives",8c,12,34,9d),
	HX_("closestPoint",37,27,c7,e7),
	HX_("closestParam",74,f3,8c,de),
	HX_("length",e6,94,07,9f),
	HX_("lengthAtParam",54,66,01,2e),
	HX_("paramAtLength",e6,27,f1,ae),
	HX_("divideByEqualArcLength",54,2c,40,24),
	HX_("divideByArcLength",08,c1,7e,9b),
	HX_("split",da,ea,6e,81),
	HX_("reverse",22,39,fc,1a),
	HX_("tessellate",1e,7e,c9,93),
	::String(null()) };

::hx::Class NurbsCurve_obj::__mClass;

static ::String NurbsCurve_obj_sStaticFields[] = {
	HX_("byKnotsControlPointsWeights",2f,7d,97,af),
	HX_("byPoints",5a,57,b7,b8),
	::String(null())
};

void NurbsCurve_obj::__register()
{
	NurbsCurve_obj _hx_dummy;
	NurbsCurve_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.geom.NurbsCurve",f6,94,dd,b0);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NurbsCurve_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NurbsCurve_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NurbsCurve_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NurbsCurve_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NurbsCurve_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NurbsCurve_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace geom