// Generated by Haxe 4.1.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_verb_core_Constants
#include <verb/core/Constants.h>
#endif
#ifndef INCLUDED_verb_core_Mat
#include <verb/core/Mat.h>
#endif
#ifndef INCLUDED_verb_core_MinimizationResult
#include <verb/core/MinimizationResult.h>
#endif
#ifndef INCLUDED_verb_core_Minimizer
#include <verb/core/Minimizer.h>
#endif
#ifndef INCLUDED_verb_core_Vec
#include <verb/core/Vec.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_43d5c63933b20fbe_10_uncmin,"verb.core.Minimizer","uncmin",0x902b0e82,"verb.core.Minimizer.uncmin","verb/core/Minimizer.hx",10,0x5dedc90a)
HX_LOCAL_STACK_FRAME(_hx_pos_43d5c63933b20fbe_13_uncmin,"verb.core.Minimizer","uncmin",0x902b0e82,"verb.core.Minimizer.uncmin","verb/core/Minimizer.hx",13,0x5dedc90a)
HX_LOCAL_STACK_FRAME(_hx_pos_43d5c63933b20fbe_79_numericalGradient,"verb.core.Minimizer","numericalGradient",0x2e04ceae,"verb.core.Minimizer.numericalGradient","verb/core/Minimizer.hx",79,0x5dedc90a)
HX_LOCAL_STACK_FRAME(_hx_pos_43d5c63933b20fbe_123_tensor,"verb.core.Minimizer","tensor",0x027e6533,"verb.core.Minimizer.tensor","verb/core/Minimizer.hx",123,0x5dedc90a)
namespace verb{
namespace core{

void Minimizer_obj::__construct() { }

Dynamic Minimizer_obj::__CreateEmpty() { return new Minimizer_obj; }

void *Minimizer_obj::_hx_vtable = 0;

Dynamic Minimizer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Minimizer_obj > _hx_result = new Minimizer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Minimizer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a9844b6;
}

 ::verb::core::MinimizationResult Minimizer_obj::uncmin( ::Dynamic f,::Array< Float > x0, ::Dynamic tol, ::Dynamic gradient, ::Dynamic maxit){
            	HX_GC_STACKFRAME(&_hx_pos_43d5c63933b20fbe_10_uncmin)
HXLINE(  12)		if (::hx::IsNull( tol )) {
HXLINE(  12)			tol = ((Float)1e-8);
            		}
HXLINE(  13)		if (::hx::IsNull( gradient )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,f) HXARGC(1)
            			::Array< Float > _hx_run(::Array< Float > x){
            				HX_STACKFRAME(&_hx_pos_43d5c63933b20fbe_13_uncmin)
HXLINE(  13)				return ::verb::core::Minimizer_obj::numericalGradient(f,x);
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE(  13)			gradient =  ::Dynamic(new _hx_Closure_0(f));
            		}
HXLINE(  14)		if (::hx::IsNull( maxit )) {
HXLINE(  14)			maxit = 1000;
            		}
HXLINE(  16)		x0 = x0->slice(0,null());
HXLINE(  17)		int n = x0->length;
HXLINE(  18)		Float f0 = ( (Float)(f(x0)) );
HXDLIN(  18)		Float f1 = f0;
HXDLIN(  18)		Float df0;
HXLINE(  20)		if (::Math_obj::isNaN(f0)) {
HXLINE(  20)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("uncmin: f(x0) is a NaN!",3c,95,96,96)));
            		}
HXLINE(  22)		tol = ::Math_obj::max(( (Float)(tol) ),::verb::core::Constants_obj::EPSILON);
HXLINE(  23)		::Array< Float > step;
HXLINE(  25)		::Array< Float > g1;
HXLINE(  26)		::Array< ::Dynamic> H1 = ::verb::core::Mat_obj::identity(n);
HXLINE(  27)		int it = 0;
HXDLIN(  27)		 ::Dynamic i;
HXDLIN(  27)		::Array< Float > x1;
HXDLIN(  27)		::Array< Float > y;
HXDLIN(  27)		::Array< Float > Hy;
HXDLIN(  27)		 ::Dynamic Hs;
HXDLIN(  27)		Float ys;
HXDLIN(  27)		 ::Dynamic i0;
HXDLIN(  27)		Float t;
HXDLIN(  27)		Float nstep;
HXDLIN(  27)		 ::Dynamic t1;
HXDLIN(  27)		 ::Dynamic t2;
HXLINE(  28)		::Array< Float > s = ::Array_obj< Float >::__new(0);
HXLINE(  29)		::String msg = HX_("",00,00,00,00);
HXLINE(  24)		::Array< Float > g0 = ( (::Array< Float >)(gradient(x0)) );
HXLINE(  32)		while(::hx::IsLess( it,maxit )){
HXLINE(  34)			if (!(::verb::core::Vec_obj::all(::verb::core::Vec_obj::finite(g0)))) {
HXLINE(  34)				msg = HX_("Gradient has Infinity or NaN",60,a6,9a,04);
HXDLIN(  34)				goto _hx_goto_0;
            			}
HXLINE(  35)			step = ::verb::core::Vec_obj::neg(::verb::core::Mat_obj::dot(H1,g0));
HXLINE(  37)			if (!(::verb::core::Vec_obj::all(::verb::core::Vec_obj::finite(step)))) {
HXLINE(  37)				msg = HX_("Search direction has Infinity or NaN",77,d1,b5,13);
HXDLIN(  37)				goto _hx_goto_0;
            			}
HXLINE(  39)			nstep = ::verb::core::Vec_obj::norm(step);
HXLINE(  40)			if (::hx::IsLess( nstep,tol )) {
HXLINE(  40)				msg = HX_("Newton step smaller than tol",c5,e2,1e,99);
HXDLIN(  40)				goto _hx_goto_0;
            			}
HXLINE(  42)			t = ((Float)1.0);
HXLINE(  43)			df0 = ::verb::core::Vec_obj::dot(g0,step);
HXLINE(  46)			x1 = x0;
HXLINE(  47)			while(::hx::IsLess( it,maxit )){
HXLINE(  48)				if (::hx::IsLess( (t * nstep),tol )) {
HXLINE(  48)					goto _hx_goto_1;
            				}
HXLINE(  49)				s = ::verb::core::Vec_obj::mul(t,step);
HXLINE(  50)				x1 = ::verb::core::Vec_obj::add(x0,s);
HXLINE(  51)				f1 = ( (Float)(f(x1)) );
HXLINE(  52)				bool _hx_tmp;
HXDLIN(  52)				if (!(((f1 - f0) >= ((((Float)0.1) * t) * df0)))) {
HXLINE(  52)					_hx_tmp = ::Math_obj::isNaN(f1);
            				}
            				else {
HXLINE(  52)					_hx_tmp = true;
            				}
HXDLIN(  52)				if (_hx_tmp) {
HXLINE(  53)					t = (t * ((Float)0.5));
HXLINE(  54)					it = (it + 1);
HXLINE(  55)					continue;
            				}
HXLINE(  57)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
HXLINE(  60)			if (::hx::IsLess( (t * nstep),tol )) {
HXLINE(  60)				msg = HX_("Line search step size smaller than tol",15,58,4b,5b);
HXDLIN(  60)				goto _hx_goto_0;
            			}
HXLINE(  61)			if (::hx::IsEq( it,maxit )) {
HXLINE(  61)				msg = HX_("maxit reached during line search",f4,3a,ce,e3);
HXDLIN(  61)				goto _hx_goto_0;
            			}
HXLINE(  63)			g1 = ( (::Array< Float >)(gradient(x1)) );
HXLINE(  64)			y = ::verb::core::Vec_obj::sub(g1,g0);
HXLINE(  65)			ys = ::verb::core::Vec_obj::dot(y,s);
HXLINE(  66)			Hy = ::verb::core::Mat_obj::dot(H1,y);
HXLINE(  68)			Float H11 = ((ys + ::verb::core::Vec_obj::dot(y,Hy)) / (ys * ys));
HXDLIN(  68)			::Array< ::Dynamic> H12 = ::verb::core::Mat_obj::add(H1,::verb::core::Mat_obj::mul(H11,::verb::core::Minimizer_obj::tensor(s,s)));
HXLINE(  69)			::Array< ::Dynamic> H13 = ::verb::core::Minimizer_obj::tensor(Hy,s);
HXLINE(  67)			H1 = ::verb::core::Mat_obj::sub(H12,::verb::core::Mat_obj::div(::verb::core::Mat_obj::add(H13,::verb::core::Minimizer_obj::tensor(s,Hy)),ys));
HXLINE(  70)			x0 = x1;
HXLINE(  71)			f0 = f1;
HXLINE(  72)			g0 = g1;
HXLINE(  73)			it = (it + 1);
            		}
            		_hx_goto_0:;
HXLINE(  76)		return  ::verb::core::MinimizationResult_obj::__alloc( HX_CTX ,x0,f0,g0,H1,it,msg);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Minimizer_obj,uncmin,return )

::Array< Float > Minimizer_obj::numericalGradient( ::Dynamic f,::Array< Float > x){
            	HX_STACKFRAME(&_hx_pos_43d5c63933b20fbe_79_numericalGradient)
HXLINE(  81)		int n = x->length;
HXLINE(  82)		Float f0 = ( (Float)(f(x)) );
HXLINE(  84)		if ((f0 == ::Math_obj::NaN)) {
HXLINE(  84)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("gradient: f(x) is a NaN!",a4,03,65,6f)));
            		}
HXLINE(  86)		 ::Dynamic i;
HXDLIN(  86)		::Array< Float > x0 = x->slice(0,null());
HXDLIN(  86)		Float f1;
HXDLIN(  86)		Float f2;
HXDLIN(  86)		::Array< Float > J = ::Array_obj< Float >::__new(0);
HXLINE(  88)		Float errest;
HXDLIN(  88)		 ::Dynamic roundoff;
HXDLIN(  88)		Float eps = ((Float)1e-3);
HXLINE(  89)		Float t0;
HXDLIN(  89)		Float t1;
HXDLIN(  89)		Float t2;
HXDLIN(  89)		int it = 0;
HXDLIN(  89)		Float d1;
HXDLIN(  89)		Float d2;
HXDLIN(  89)		Float N;
HXLINE(  91)		{
HXLINE(  91)			int _g = 0;
HXDLIN(  91)			int _g1 = n;
HXDLIN(  91)			while((_g < _g1)){
HXLINE(  91)				_g = (_g + 1);
HXDLIN(  91)				int i = (_g - 1);
HXLINE(  93)				Float h = ::Math_obj::max((((Float)1e-6) * f0),((Float)1e-8));
HXLINE(  95)				while(true){
HXLINE(  96)					it = (it + 1);
HXLINE(  97)					if ((it > 20)) {
HXLINE(  97)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Numerical gradient fails",ed,c8,7a,bb)));
            					}
HXLINE(  98)					x0[i] = (x->__get(i) + h);
HXLINE(  99)					f1 = ( (Float)(f(x0)) );
HXLINE( 100)					x0[i] = (x->__get(i) - h);
HXLINE( 101)					f2 = ( (Float)(f(x0)) );
HXLINE( 102)					x0[i] = x->__get(i);
HXLINE( 104)					bool _hx_tmp;
HXDLIN( 104)					if (!(::Math_obj::isNaN(f1))) {
HXLINE( 104)						_hx_tmp = ::Math_obj::isNaN(f2);
            					}
            					else {
HXLINE( 104)						_hx_tmp = true;
            					}
HXDLIN( 104)					if (_hx_tmp) {
HXLINE( 104)						h = (h / ( (Float)(16) ));
HXDLIN( 104)						continue;
            					}
HXLINE( 106)					J[i] = ((f1 - f2) / (( (Float)(2) ) * h));
HXLINE( 107)					t0 = (x->__get(i) - h);
HXLINE( 108)					t1 = x->__get(i);
HXLINE( 109)					t2 = (x->__get(i) + h);
HXLINE( 110)					d1 = ((f1 - f0) / h);
HXLINE( 111)					d2 = ((f0 - f2) / h);
HXLINE( 112)					N = ::verb::core::Vec_obj::max(::Array_obj< Float >::__new(8)->init(0,::Math_obj::abs(J->__get(i)))->init(1,::Math_obj::abs(f0))->init(2,::Math_obj::abs(f1))->init(3,::Math_obj::abs(f2))->init(4,::Math_obj::abs(t0))->init(5,::Math_obj::abs(t1))->init(6,::Math_obj::abs(t2))->init(7,((Float)1e-8)));
HXLINE( 114)					errest = ::Math_obj::min((::verb::core::Vec_obj::max(::Array_obj< Float >::__new(3)->init(0,::Math_obj::abs((d1 - J->__get(i))))->init(1,::Math_obj::abs((d2 - J->__get(i))))->init(2,::Math_obj::abs((d1 - d2)))) / N),(h / N));
HXLINE( 116)					if ((errest > eps)) {
HXLINE( 116)						h = (h / ( (Float)(16) ));
            					}
            					else {
HXLINE( 116)						goto _hx_goto_5;
            					}
            				}
            				_hx_goto_5:;
            			}
            		}
HXLINE( 120)		return J;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Minimizer_obj,numericalGradient,return )

::Array< ::Dynamic> Minimizer_obj::tensor(::Array< Float > x,::Array< Float > y){
            	HX_STACKFRAME(&_hx_pos_43d5c63933b20fbe_123_tensor)
HXLINE( 125)		int m = x->length;
HXDLIN( 125)		int n = y->length;
HXDLIN( 125)		::Array< Float > Ai;
HXDLIN( 125)		Float xi;
HXLINE( 126)		::Array< ::Dynamic> A = ::Array_obj< ::Dynamic>::__new();
HXLINE( 127)		int i = (m - 1);
HXLINE( 128)		while((i >= 0)){
HXLINE( 129)			Ai = ::Array_obj< Float >::__new(0);
HXLINE( 130)			xi = x->__get(i);
HXLINE( 131)			int j = (n - 1);
HXLINE( 132)			while((j >= 3)){
HXLINE( 133)				Ai[j] = (xi * y->__get(j));
HXLINE( 134)				j = (j - 1);
HXLINE( 135)				Ai[j] = (xi * y->__get(j));
HXLINE( 136)				j = (j - 1);
HXLINE( 137)				Ai[j] = (xi * y->__get(j));
HXLINE( 138)				j = (j - 1);
HXLINE( 139)				Ai[j] = (xi * y->__get(j));
HXLINE( 140)				j = (j - 1);
            			}
HXLINE( 142)			while((j >= 0)){
HXLINE( 142)				Ai[j] = (xi * y->__get(j));
HXDLIN( 142)				j = (j - 1);
            			}
HXLINE( 143)			A[i] = Ai;
HXLINE( 144)			i = (i - 1);
            		}
HXLINE( 146)		return A;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Minimizer_obj,tensor,return )


Minimizer_obj::Minimizer_obj()
{
}

bool Minimizer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"uncmin") ) { outValue = uncmin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"tensor") ) { outValue = tensor_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numericalGradient") ) { outValue = numericalGradient_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Minimizer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Minimizer_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Minimizer_obj::__mClass;

static ::String Minimizer_obj_sStaticFields[] = {
	HX_("uncmin",e8,37,98,5f),
	HX_("numericalGradient",08,f3,8b,46),
	HX_("tensor",99,8e,eb,d1),
	::String(null())
};

void Minimizer_obj::__register()
{
	Minimizer_obj _hx_dummy;
	Minimizer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("verb.core.Minimizer",94,ba,fd,e9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Minimizer_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Minimizer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Minimizer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Minimizer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Minimizer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace verb
} // end namespace core