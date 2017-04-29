// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct PageWithTitle;}
namespace g{struct TG18_PageWithTitle_HeaderColor_Property;}

namespace g{

// internal sealed class TG18_PageWithTitle_HeaderColor_Property :117
// {
::g::Uno::UX::Property1_type* TG18_PageWithTitle_HeaderColor_Property_typeof();
void TG18_PageWithTitle_HeaderColor_Property__ctor_3_fn(TG18_PageWithTitle_HeaderColor_Property* __this, ::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name);
void TG18_PageWithTitle_HeaderColor_Property__Get1_fn(TG18_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void TG18_PageWithTitle_HeaderColor_Property__New1_fn(::g::PageWithTitle* obj, ::g::Uno::UX::Selector* name, TG18_PageWithTitle_HeaderColor_Property** __retval);
void TG18_PageWithTitle_HeaderColor_Property__get_Object_fn(TG18_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void TG18_PageWithTitle_HeaderColor_Property__Set1_fn(TG18_PageWithTitle_HeaderColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void TG18_PageWithTitle_HeaderColor_Property__get_SupportsOriginSetter_fn(TG18_PageWithTitle_HeaderColor_Property* __this, bool* __retval);

struct TG18_PageWithTitle_HeaderColor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::PageWithTitle*> _obj;

    void ctor_3(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
    static TG18_PageWithTitle_HeaderColor_Property* New1(::g::PageWithTitle* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
