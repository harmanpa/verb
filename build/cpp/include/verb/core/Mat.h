// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_Mat
#define INCLUDED_verb_core_Mat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,Mat)
HX_DECLARE_CLASS3(verb,core,_Mat,LUDecomp)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Mat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mat_obj OBJ_;
		Mat_obj();

	public:
		enum { _hx_ClassId = 0x176bee42 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.core.Mat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.core.Mat"); }

		inline static ::hx::ObjectPtr< Mat_obj > __new() {
			::hx::ObjectPtr< Mat_obj > __this = new Mat_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Mat_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Mat_obj *__this = (Mat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mat_obj), false, "verb.core.Mat"));
			*(void **)__this = Mat_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mat_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mat",80,c2,3a,00); }

		static ::Array< ::Dynamic> mul(Float a,::Array< ::Dynamic> b);
		static ::Dynamic mul_dyn();

		static ::Array< ::Dynamic> mult(::Array< ::Dynamic> x,::Array< ::Dynamic> y);
		static ::Dynamic mult_dyn();

		static ::Array< ::Dynamic> add(::Array< ::Dynamic> a,::Array< ::Dynamic> b);
		static ::Dynamic add_dyn();

		static ::Array< ::Dynamic> div(::Array< ::Dynamic> a,Float b);
		static ::Dynamic div_dyn();

		static ::Array< ::Dynamic> sub(::Array< ::Dynamic> a,::Array< ::Dynamic> b);
		static ::Dynamic sub_dyn();

		static ::Array< Float > dot(::Array< ::Dynamic> a,::Array< Float > b);
		static ::Dynamic dot_dyn();

		static ::Array< ::Dynamic> identity(int n);
		static ::Dynamic identity_dyn();

		static ::Array< ::Dynamic> transpose(::Array< ::Dynamic> a);
		static ::Dynamic transpose_dyn();

		static ::Array< ::Dynamic> transposeN(::Array< ::Dynamic> a);
		static ::Dynamic transposeN_dyn();

		static ::Array< Float > solve(::Array< ::Dynamic> A,::Array< Float > b);
		static ::Dynamic solve_dyn();

		static ::Array< Float > LUsolve( ::verb::core::_Mat::LUDecomp LUP,::Array< Float > b);
		static ::Dynamic LUsolve_dyn();

		static  ::verb::core::_Mat::LUDecomp LU(::Array< ::Dynamic> A);
		static ::Dynamic LU_dyn();

};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_Mat */ 
