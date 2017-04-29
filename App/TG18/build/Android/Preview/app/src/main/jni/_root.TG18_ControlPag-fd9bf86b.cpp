// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ControlPage.h>
#include <_root.TG18_ControlPag-fd9bf86b.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class TG18_ControlPage_HeaderTextColor_Property :94
// {
static void TG18_ControlPage_HeaderTextColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::ControlPage_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*ControlPage*/], offsetof(::g::TG18_ControlPage_HeaderTextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* TG18_ControlPage_HeaderTextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_ControlPage_HeaderTextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("TG18_ControlPage_HeaderTextColor_Property", options);
    type->fp_build_ = TG18_ControlPage_HeaderTextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))TG18_ControlPage_HeaderTextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))TG18_ControlPage_HeaderTextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))TG18_ControlPage_HeaderTextColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))TG18_ControlPage_HeaderTextColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public TG18_ControlPage_HeaderTextColor_Property(ControlPage obj, Uno.UX.Selector name) :97
void TG18_ControlPage_HeaderTextColor_Property__ctor_3_fn(TG18_ControlPage_HeaderTextColor_Property* __this, ::g::ControlPage* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :99
void TG18_ControlPage_HeaderTextColor_Property__Get1_fn(TG18_ControlPage_HeaderTextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("TG18_ControlPage_HeaderTextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::ControlPage*>(obj, ::TYPES[0/*ControlPage*/]))->HeaderTextColor(), void();
}

// public TG18_ControlPage_HeaderTextColor_Property New(ControlPage obj, Uno.UX.Selector name) :97
void TG18_ControlPage_HeaderTextColor_Property__New1_fn(::g::ControlPage* obj, ::g::Uno::UX::Selector* name, TG18_ControlPage_HeaderTextColor_Property** __retval)
{
    *__retval = TG18_ControlPage_HeaderTextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :98
void TG18_ControlPage_HeaderTextColor_Property__get_Object_fn(TG18_ControlPage_HeaderTextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :100
void TG18_ControlPage_HeaderTextColor_Property__Set1_fn(TG18_ControlPage_HeaderTextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("TG18_ControlPage_HeaderTextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::ControlPage*>(obj, ::TYPES[0/*ControlPage*/]))->SetHeaderTextColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :101
void TG18_ControlPage_HeaderTextColor_Property__get_SupportsOriginSetter_fn(TG18_ControlPage_HeaderTextColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public TG18_ControlPage_HeaderTextColor_Property(ControlPage obj, Uno.UX.Selector name) [instance] :97
void TG18_ControlPage_HeaderTextColor_Property::ctor_3(::g::ControlPage* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public TG18_ControlPage_HeaderTextColor_Property New(ControlPage obj, Uno.UX.Selector name) [static] :97
TG18_ControlPage_HeaderTextColor_Property* TG18_ControlPage_HeaderTextColor_Property::New1(::g::ControlPage* obj, ::g::Uno::UX::Selector name)
{
    TG18_ControlPage_HeaderTextColor_Property* obj1 = (TG18_ControlPage_HeaderTextColor_Property*)uNew(TG18_ControlPage_HeaderTextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
