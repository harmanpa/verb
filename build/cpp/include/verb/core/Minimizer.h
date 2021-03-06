// Generated by Haxe 4.1.4
#ifndef INCLUDED_verb_core_Minimizer
#define INCLUDED_verb_core_Minimizer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(verb,core,MinimizationResult)
HX_DECLARE_CLASS2(verb,core,Minimizer)

namespace verb{
namespace core{


class HXCPP_CLASS_ATTRIBUTES Minimizer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Minimizer_obj OBJ_;
		Minimizer_obj();

	public:
		enum { _hx_ClassId = 0x7a9844b6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="verb.core.Minimizer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"verb.core.Minimizer"); }

		inline static ::hx::ObjectPtr< Minimizer_obj > __new() {
			::hx::ObjectPtr< Minimizer_obj > __this = new Minimizer_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Minimizer_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Minimizer_obj *__this = (Minimizer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Minimizer_obj), false, "verb.core.Minimizer"));
			*(void **)__this = Minimizer_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Minimizer_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Minimizer",74,db,70,ca); }

		static  ::verb::core::MinimizationResult uncmin( ::Dynamic f,::Array< Float > x0, ::Dynamic tol, ::Dynamic gradient, ::Dynamic maxit);
		static ::Dynamic uncmin_dyn();

		static ::Array< Float > numericalGradient( ::Dynamic f,::Array< Float > x);
		static ::Dynamic numericalGradient_dyn();

		static ::Array< ::Dynamic> tensor(::Array< Float > x,::Array< Float > y);
		static ::Dynamic tensor_dyn();

};

} // end namespace verb
} // end namespace core

#endif /* INCLUDED_verb_core_Minimizer */ 
