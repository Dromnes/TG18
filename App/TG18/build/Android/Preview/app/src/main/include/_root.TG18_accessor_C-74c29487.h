// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TG18_accessor_ControlPage_HeaderTextColor;}

namespace g{

// internal sealed class TG18_accessor_ControlPage_HeaderTextColor :20
// {
::g::Uno::UX::PropertyAccessor_type* TG18_accessor_ControlPage_HeaderTextColor_typeof();
void TG18_accessor_ControlPage_HeaderTextColor__ctor_1_fn(TG18_accessor_ControlPage_HeaderTextColor* __this);
void TG18_accessor_ControlPage_HeaderTextColor__GetAsObject_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void TG18_accessor_ControlPage_HeaderTextColor__get_Name_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::Selector* __retval);
void TG18_accessor_ControlPage_HeaderTextColor__New1_fn(TG18_accessor_ControlPage_HeaderTextColor** __retval);
void TG18_accessor_ControlPage_HeaderTextColor__get_PropertyType_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, uType** __retval);
void TG18_accessor_ControlPage_HeaderTextColor__SetAsObject_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void TG18_accessor_ControlPage_HeaderTextColor__get_SupportsOriginSetter_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, bool* __retval);

struct TG18_accessor_ControlPage_HeaderTextColor : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return TG18_accessor_ControlPage_HeaderTextColor_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return TG18_accessor_ControlPage_HeaderTextColor_typeof()->Init(), Singleton_; }

    void ctor_1();
    static TG18_accessor_ControlPage_HeaderTextColor* New1();
};
// }

} // ::g