// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CustomButton.h>
#include <_root.TG18_accessor_C-f781f23f.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class TG18_accessor_CustomButton_TextColor :40
// {
// static TG18_accessor_CustomButton_TextColor() :40
static void TG18_accessor_CustomButton_TextColor__cctor__fn(uType* __type)
{
    TG18_accessor_CustomButton_TextColor::Singleton_ = TG18_accessor_CustomButton_TextColor::New1();
    TG18_accessor_CustomButton_TextColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TextColor"*/]);
}

static void TG18_accessor_CustomButton_TextColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextColor");
    ::TYPES[0] = ::g::CustomButton_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TG18_accessor_CustomButton_TextColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::TG18_accessor_CustomButton_TextColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* TG18_accessor_CustomButton_TextColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_accessor_CustomButton_TextColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("TG18_accessor_CustomButton_TextColor", options);
    type->fp_build_ = TG18_accessor_CustomButton_TextColor_build;
    type->fp_ctor_ = (void*)TG18_accessor_CustomButton_TextColor__New1_fn;
    type->fp_cctor_ = TG18_accessor_CustomButton_TextColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))TG18_accessor_CustomButton_TextColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))TG18_accessor_CustomButton_TextColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))TG18_accessor_CustomButton_TextColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))TG18_accessor_CustomButton_TextColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TG18_accessor_CustomButton_TextColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated TG18_accessor_CustomButton_TextColor() :40
void TG18_accessor_CustomButton_TextColor__ctor_1_fn(TG18_accessor_CustomButton_TextColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :46
void TG18_accessor_CustomButton_TextColor__GetAsObject_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("TG18_accessor_CustomButton_TextColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->TextColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :43
void TG18_accessor_CustomButton_TextColor__get_Name_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = TG18_accessor_CustomButton_TextColor::_name(), void();
}

// public generated TG18_accessor_CustomButton_TextColor New() :40
void TG18_accessor_CustomButton_TextColor__New1_fn(TG18_accessor_CustomButton_TextColor** __retval)
{
    *__retval = TG18_accessor_CustomButton_TextColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :45
void TG18_accessor_CustomButton_TextColor__get_PropertyType_fn(TG18_accessor_CustomButton_TextColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :47
void TG18_accessor_CustomButton_TextColor__SetAsObject_fn(TG18_accessor_CustomButton_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("TG18_accessor_CustomButton_TextColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->SetTextColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :48
void TG18_accessor_CustomButton_TextColor__get_SupportsOriginSetter_fn(TG18_accessor_CustomButton_TextColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector TG18_accessor_CustomButton_TextColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> TG18_accessor_CustomButton_TextColor::Singleton_;

// public generated TG18_accessor_CustomButton_TextColor() [instance] :40
void TG18_accessor_CustomButton_TextColor::ctor_1()
{
    ctor_();
}

// public generated TG18_accessor_CustomButton_TextColor New() [static] :40
TG18_accessor_CustomButton_TextColor* TG18_accessor_CustomButton_TextColor::New1()
{
    TG18_accessor_CustomButton_TextColor* obj1 = (TG18_accessor_CustomButton_TextColor*)uNew(TG18_accessor_CustomButton_TextColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
