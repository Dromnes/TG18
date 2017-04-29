// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.TG18_accessor_F-4d6e0f33.h>
#include <Fuse.Controls.Page.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class TG18_accessor_Fuse_Controls_Page_Title :11
// {
// static TG18_accessor_Fuse_Controls_Page_Title() :11
static void TG18_accessor_Fuse_Controls_Page_Title__cctor__fn(uType* __type)
{
    TG18_accessor_Fuse_Controls_Page_Title::Singleton_ = TG18_accessor_Fuse_Controls_Page_Title::New1();
    TG18_accessor_Fuse_Controls_Page_Title::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Title"*/]);
}

static void TG18_accessor_Fuse_Controls_Page_Title_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Title");
    ::TYPES[0] = ::g::Fuse::Controls::Page_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::TG18_accessor_Fuse_Controls_Page_Title::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::TG18_accessor_Fuse_Controls_Page_Title::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* TG18_accessor_Fuse_Controls_Page_Title_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TG18_accessor_Fuse_Controls_Page_Title);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("TG18_accessor_Fuse_Controls_Page_Title", options);
    type->fp_build_ = TG18_accessor_Fuse_Controls_Page_Title_build;
    type->fp_ctor_ = (void*)TG18_accessor_Fuse_Controls_Page_Title__New1_fn;
    type->fp_cctor_ = TG18_accessor_Fuse_Controls_Page_Title__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))TG18_accessor_Fuse_Controls_Page_Title__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))TG18_accessor_Fuse_Controls_Page_Title__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))TG18_accessor_Fuse_Controls_Page_Title__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))TG18_accessor_Fuse_Controls_Page_Title__SetAsObject_fn;
    return type;
}

// public generated TG18_accessor_Fuse_Controls_Page_Title() :11
void TG18_accessor_Fuse_Controls_Page_Title__ctor_1_fn(TG18_accessor_Fuse_Controls_Page_Title* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void TG18_accessor_Fuse_Controls_Page_Title__GetAsObject_fn(TG18_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("TG18_accessor_Fuse_Controls_Page_Title", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Page*>(obj, ::TYPES[0/*Fuse.Controls.Page*/]))->Title(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void TG18_accessor_Fuse_Controls_Page_Title__get_Name_fn(TG18_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = TG18_accessor_Fuse_Controls_Page_Title::_name(), void();
}

// public generated TG18_accessor_Fuse_Controls_Page_Title New() :11
void TG18_accessor_Fuse_Controls_Page_Title__New1_fn(TG18_accessor_Fuse_Controls_Page_Title** __retval)
{
    *__retval = TG18_accessor_Fuse_Controls_Page_Title::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void TG18_accessor_Fuse_Controls_Page_Title__get_PropertyType_fn(TG18_accessor_Fuse_Controls_Page_Title* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void TG18_accessor_Fuse_Controls_Page_Title__SetAsObject_fn(TG18_accessor_Fuse_Controls_Page_Title* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("TG18_accessor_Fuse_Controls_Page_Title", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Page*>(obj, ::TYPES[0/*Fuse.Controls.Page*/]))->Title(uCast<uString*>(v, ::TYPES[1/*string*/]));
}

::g::Uno::UX::Selector TG18_accessor_Fuse_Controls_Page_Title::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> TG18_accessor_Fuse_Controls_Page_Title::Singleton_;

// public generated TG18_accessor_Fuse_Controls_Page_Title() [instance] :11
void TG18_accessor_Fuse_Controls_Page_Title::ctor_1()
{
    ctor_();
}

// public generated TG18_accessor_Fuse_Controls_Page_Title New() [static] :11
TG18_accessor_Fuse_Controls_Page_Title* TG18_accessor_Fuse_Controls_Page_Title::New1()
{
    TG18_accessor_Fuse_Controls_Page_Title* obj1 = (TG18_accessor_Fuse_Controls_Page_Title*)uNew(TG18_accessor_Fuse_Controls_Page_Title_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
