// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CustomButton.h>
#include <_root.TG18_CustomButt-b94d6bfe.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class TG18_CustomButton_Text_Property :112
// {
static void TG18_CustomButton_Text_Property_build(uType* type)
{
    ::TYPES[0] = ::g::CustomButton_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*CustomButton*/], offsetof(::g::TG18_CustomButton_Text_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* TG18_CustomButton_Text_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_CustomButton_Text_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("TG18_CustomButton_Text_Property", options);
    type->fp_build_ = TG18_CustomButton_Text_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))TG18_CustomButton_Text_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))TG18_CustomButton_Text_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))TG18_CustomButton_Text_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TG18_CustomButton_Text_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public TG18_CustomButton_Text_Property(CustomButton obj, Uno.UX.Selector name) :115
void TG18_CustomButton_Text_Property__ctor_3_fn(TG18_CustomButton_Text_Property* __this, ::g::CustomButton* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :117
void TG18_CustomButton_Text_Property__Get1_fn(TG18_CustomButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("TG18_CustomButton_Text_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->Text(), void();
}

// public TG18_CustomButton_Text_Property New(CustomButton obj, Uno.UX.Selector name) :115
void TG18_CustomButton_Text_Property__New1_fn(::g::CustomButton* obj, ::g::Uno::UX::Selector* name, TG18_CustomButton_Text_Property** __retval)
{
    *__retval = TG18_CustomButton_Text_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :116
void TG18_CustomButton_Text_Property__get_Object_fn(TG18_CustomButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :118
void TG18_CustomButton_Text_Property__Set1_fn(TG18_CustomButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("TG18_CustomButton_Text_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::CustomButton*>(obj, ::TYPES[0/*CustomButton*/]))->SetText(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :119
void TG18_CustomButton_Text_Property__get_SupportsOriginSetter_fn(TG18_CustomButton_Text_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public TG18_CustomButton_Text_Property(CustomButton obj, Uno.UX.Selector name) [instance] :115
void TG18_CustomButton_Text_Property::ctor_3(::g::CustomButton* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public TG18_CustomButton_Text_Property New(CustomButton obj, Uno.UX.Selector name) [static] :115
TG18_CustomButton_Text_Property* TG18_CustomButton_Text_Property::New1(::g::CustomButton* obj, ::g::Uno::UX::Selector name)
{
    TG18_CustomButton_Text_Property* obj1 = (TG18_CustomButton_Text_Property*)uNew(TG18_CustomButton_Text_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
