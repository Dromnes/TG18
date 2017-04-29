// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CustomButton.h>
#include <_root.TG18_accessor_C-e42fa7f7.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class TG18_accessor_CustomButton_Text :30
// {
// static TG18_accessor_CustomButton_Text() :30
static void TG18_accessor_CustomButton_Text__cctor__fn(uType* __type)
{
    TG18_accessor_CustomButton_Text::Singleton_ = TG18_accessor_CustomButton_Text::New1();
    TG18_accessor_CustomButton_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Text"*/]);
}

static void TG18_accessor_CustomButton_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::CustomButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TG18_accessor_CustomButton_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::TG18_accessor_CustomButton_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* TG18_accessor_CustomButton_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_accessor_CustomButton_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("TG18_accessor_CustomButton_Text", options);
    type->fp_build_ = TG18_accessor_CustomButton_Text_build;
    type->fp_ctor_ = (void*)TG18_accessor_CustomButton_Text__New1_fn;
    type->fp_cctor_ = TG18_accessor_CustomButton_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))TG18_accessor_CustomButton_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))TG18_accessor_CustomButton_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))TG18_accessor_CustomButton_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))TG18_accessor_CustomButton_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TG18_accessor_CustomButton_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated TG18_accessor_CustomButton_Text() :30
void TG18_accessor_CustomButton_Text__ctor_1_fn(TG18_accessor_CustomButton_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :36
void TG18_accessor_CustomButton_Text__GetAsObject_fn(TG18_accessor_CustomButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("TG18_accessor_CustomButton_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :33
void TG18_accessor_CustomButton_Text__get_Name_fn(TG18_accessor_CustomButton_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = TG18_accessor_CustomButton_Text::_name(), void();
}

// public generated TG18_accessor_CustomButton_Text New() :30
void TG18_accessor_CustomButton_Text__New1_fn(TG18_accessor_CustomButton_Text** __retval)
{
    *__retval = TG18_accessor_CustomButton_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :35
void TG18_accessor_CustomButton_Text__get_PropertyType_fn(TG18_accessor_CustomButton_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :37
void TG18_accessor_CustomButton_Text__SetAsObject_fn(TG18_accessor_CustomButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("TG18_accessor_CustomButton_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :38
void TG18_accessor_CustomButton_Text__get_SupportsOriginSetter_fn(TG18_accessor_CustomButton_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector TG18_accessor_CustomButton_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> TG18_accessor_CustomButton_Text::Singleton_;

// public generated TG18_accessor_CustomButton_Text() [instance] :30
void TG18_accessor_CustomButton_Text::ctor_1()
{
    ctor_();
}

// public generated TG18_accessor_CustomButton_Text New() [static] :30
TG18_accessor_CustomButton_Text* TG18_accessor_CustomButton_Text::New1()
{
    TG18_accessor_CustomButton_Text* obj1 = (TG18_accessor_CustomButton_Text*)uNew(TG18_accessor_CustomButton_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
