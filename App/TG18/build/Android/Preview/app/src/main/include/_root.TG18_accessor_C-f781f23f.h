// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TG18_accessor_CustomButton_TextColor;}

namespace g{

// internal sealed class TG18_accessor_CustomButton_TextColor :40
// {
::g::Uno::UX::PropertyAccessor_type* TG18_accessor_CustomButton_TextColor_typeof();
void TG18_accessor_CustomButton_TextColor__ctor_1_fn(TG18_accessor_CustomButton_TextColor* __this);
void TG18_accessor_CustomButton_TextColor__GetAsObject_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void TG18_accessor_CustomButton_TextColor__get_Name_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::Selector* __retval);
void TG18_accessor_CustomButton_TextColor__New1_fn(TG18_accessor_CustomButton_TextColor** __retval);
void TG18_accessor_CustomButton_TextColor__get_PropertyType_fn(TG18_accessor_CustomButton_TextColor* __this, uType** __retval);
void TG18_accessor_CustomButton_TextColor__SetAsObject_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void TG18_accessor_CustomButton_TextColor__get_SupportsOriginSetter_fn(TG18_accessor_CustomButton_TextColor* __this, bool* __retval);

struct TG18_accessor_CustomButton_TextColor : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return TG18_accessor_CustomButton_TextColor_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return TG18_accessor_CustomButton_TextColor_typeof()->Init(), Singleton_; }

    void ctor_1();
    static TG18_accessor_CustomButton_TextColor* New1();
};
// }

} // ::g
