// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ControlPage.h>
#include <_root.TG18_accessor_C-74c29487.h>
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

// internal sealed class TG18_accessor_ControlPage_HeaderTextColor :20
// {
// static TG18_accessor_ControlPage_HeaderTextColor() :20
static void TG18_accessor_ControlPage_HeaderTextColor__cctor__fn(uType* __type)
{
    TG18_accessor_ControlPage_HeaderTextColor::Singleton_ = TG18_accessor_ControlPage_HeaderTextColor::New1();
    TG18_accessor_ControlPage_HeaderTextColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"HeaderTextC...*/]);
}

static void TG18_accessor_ControlPage_HeaderTextColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("HeaderTextColor");
    ::TYPES[0] = ::g::ControlPage_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TG18_accessor_ControlPage_HeaderTextColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::TG18_accessor_ControlPage_HeaderTextColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* TG18_accessor_ControlPage_HeaderTextColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_accessor_ControlPage_HeaderTextColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("TG18_accessor_ControlPage_HeaderTextColor", options);
    type->fp_build_ = TG18_accessor_ControlPage_HeaderTextColor_build;
    type->fp_ctor_ = (void*)TG18_accessor_ControlPage_HeaderTextColor__New1_fn;
    type->fp_cctor_ = TG18_accessor_ControlPage_HeaderTextColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))TG18_accessor_ControlPage_HeaderTextColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))TG18_accessor_ControlPage_HeaderTextColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))TG18_accessor_ControlPage_HeaderTextColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))TG18_accessor_ControlPage_HeaderTextColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TG18_accessor_ControlPage_HeaderTextColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated TG18_accessor_ControlPage_HeaderTextColor() :20
void TG18_accessor_ControlPage_HeaderTextColor__ctor_1_fn(TG18_accessor_ControlPage_HeaderTextColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :26
void TG18_accessor_ControlPage_HeaderTextColor__GetAsObject_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("TG18_accessor_ControlPage_HeaderTextColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::ControlPage*>(obj, ::TYPES[0/*ControlPage*/]))->HeaderTextColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :23
void TG18_accessor_ControlPage_HeaderTextColor__get_Name_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = TG18_accessor_ControlPage_HeaderTextColor::_name(), void();
}

// public generated TG18_accessor_ControlPage_HeaderTextColor New() :20
void TG18_accessor_ControlPage_HeaderTextColor__New1_fn(TG18_accessor_ControlPage_HeaderTextColor** __retval)
{
    *__retval = TG18_accessor_ControlPage_HeaderTextColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :25
void TG18_accessor_ControlPage_HeaderTextColor__get_PropertyType_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :27
void TG18_accessor_ControlPage_HeaderTextColor__SetAsObject_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("TG18_accessor_ControlPage_HeaderTextColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::ControlPage*>(obj, ::TYPES[0/*ControlPage*/]))->SetHeaderTextColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :28
void TG18_accessor_ControlPage_HeaderTextColor__get_SupportsOriginSetter_fn(TG18_accessor_ControlPage_HeaderTextColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector TG18_accessor_ControlPage_HeaderTextColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> TG18_accessor_ControlPage_HeaderTextColor::Singleton_;

// public generated TG18_accessor_ControlPage_HeaderTextColor() [instance] :20
void TG18_accessor_ControlPage_HeaderTextColor::ctor_1()
{
    ctor_();
}

// public generated TG18_accessor_ControlPage_HeaderTextColor New() [static] :20
TG18_accessor_ControlPage_HeaderTextColor* TG18_accessor_ControlPage_HeaderTextColor::New1()
{
    TG18_accessor_ControlPage_HeaderTextColor* obj1 = (TG18_accessor_ControlPage_HeaderTextColor*)uNew(TG18_accessor_ControlPage_HeaderTextColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
