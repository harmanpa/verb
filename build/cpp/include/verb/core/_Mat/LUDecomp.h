// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core__Mat_LUDecomp
#define INCLUDED_verb_core__Mat_LUDecomp

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_6acac2099b5ee449_227_new)
HX_DECLARE_CLASS3(verb,core,_Mat,LUDecomp)

namespace verb{
namespace core{
namespace _Mat{


class HXCPP_CLASS_ATTRIBUTES LUDecomp_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LUDecomp_obj OBJ_;
		LUDecomp_obj();

	public:
		enum { _hx_ClassId = 0x23d5d240 };

		void __construct(::Array< ::Dynamic> lu,::Array< int > p);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="verb.core._Mat.LUDecomp")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"verb.core._Mat.LUDecomp"); }

		inline static ::hx::ObjectPtr< LUDecomp_obj > __new(::Array< ::Dynamic> lu,::Array< int > p) {
			::hx::ObjectPtr< LUDecomp_obj > __this = new LUDecomp_obj();
			__this->__construct(lu,p);
			return __this;
		}

		inline static ::hx::ObjectPtr< LUDecomp_obj > __alloc(::hx::Ctx *_hx_ctx,::Array< ::Dynamic> lu,::Array< int > p) {
			LUDecomp_obj *__this = (LUDecomp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LUDecomp_obj), true, "verb.core._Mat.LUDecomp"));
			*(void **)__this = LUDecomp_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6acac2099b5ee449_227_new)
HXLINE( 228)		( ( ::verb::core::_Mat::LUDecomp)(__this) )->LU = lu;
HXLINE( 229)		( ( ::verb::core::_Mat::LUDecomp)(__this) )->P = p;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LUDecomp_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LUDecomp",79,28,1c,63); }

		::Array< ::Dynamic> LU;
		::Array< int > P;
};

} // end namespace verb
} // end namespace core
} // end namespace _Mat

#endif /* INCLUDED_verb_core__Mat_LUDecomp */ 