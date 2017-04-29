// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/ControlPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ControlPage.h>
#include <_root.TG18_accessor_C-74c29487.h>
#include <_root.TG18_accessor_C-e7614448.h>
#include <_root.TG18_accessor_F-4d6e0f33.h>
#include <_root.TG18_ControlPag-b96bb017.h>
#include <_root.TG18_ControlPag-fd9bf86b.h>
#include <_root.TG18_FuseContro-1a43e8c1.h>
#include <_root.TG18_FuseContro-371e305b.h>
#include <_root.TG18_FuseContro-e9ebd714.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-b24df705.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[6];
static uType* TYPES[4];

namespace g{

// public partial sealed class ControlPage :2
// {
// static ControlPage() :42
static void ControlPage__cctor_4_fn(uType* __type)
{
    ControlPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    ControlPage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    ControlPage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"HeaderColor"*/]);
    ControlPage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"HeaderTextC...*/]);
    ControlPage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"TextColor"*/]);
    ControlPage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"Color"*/]);
    ControlPage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"self"*/]);
}

static void ControlPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("HeaderColor");
    ::STRINGS[2] = uString::Const("HeaderTextColor");
    ::STRINGS[3] = uString::Const("TextColor");
    ::STRINGS[4] = uString::Const("Color");
    ::STRINGS[5] = uString::Const("self");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface14));
    type->SetFields(105,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::ControlPage, __g_nametable1), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::ControlPage, _field_HeaderColor), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::ControlPage, _field_HeaderTextColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ControlPage, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::ControlPage, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ControlPage, temp1_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ControlPage, this_HeaderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::ControlPage, this_HeaderTextColor_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::ControlPage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::ControlPage::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction("get_HeaderColor", NULL, (void*)ControlPage__get_HeaderColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderColor", NULL, (void*)ControlPage__set_HeaderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_HeaderTextColor", NULL, (void*)ControlPage__get_HeaderTextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_HeaderTextColor", NULL, (void*)ControlPage__set_HeaderTextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)ControlPage__New5_fn, 0, true, type, 0),
        new uFunction("SetHeaderColor", NULL, (void*)ControlPage__SetHeaderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetHeaderTextColor", NULL, (void*)ControlPage__SetHeaderTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

::g::Fuse::Controls::Control_type* ControlPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 120;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(ControlPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("ControlPage", options);
    type->fp_build_ = ControlPage_build;
    type->fp_ctor_ = (void*)ControlPage__New5_fn;
    type->fp_cctor_ = ControlPage__cctor_4_fn;
    type->interface10.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface12.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface11.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface14.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface13.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface13.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface13.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface13.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface8.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface8.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface9.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface8.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface8.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ControlPage() :46
void ControlPage__ctor_8_fn(ControlPage* __this)
{
    __this->ctor_8();
}

// public float4 get_HeaderColor() :8
void ControlPage__get_HeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderColor();
}

// public void set_HeaderColor(float4 value) :9
void ControlPage__set_HeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* value)
{
    __this->HeaderColor(*value);
}

// public float4 get_HeaderTextColor() :23
void ControlPage__get_HeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->HeaderTextColor();
}

// public void set_HeaderTextColor(float4 value) :24
void ControlPage__set_HeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* value)
{
    __this->HeaderTextColor(*value);
}

// private void InitializeUX() :50
void ControlPage__InitializeUX_fn(ControlPage* __this)
{
    __this->InitializeUX();
}

// public ControlPage New() :46
void ControlPage__New5_fn(ControlPage** __retval)
{
    *__retval = ControlPage::New5();
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) :11
void ControlPage__SetHeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderColor(*value, origin);
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) :26
void ControlPage__SetHeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetHeaderTextColor(*value, origin);
}

uSStrong<uArray*> ControlPage::__g_static_nametable1_;
::g::Uno::UX::Selector ControlPage::__selector0_;
::g::Uno::UX::Selector ControlPage::__selector1_;
::g::Uno::UX::Selector ControlPage::__selector2_;
::g::Uno::UX::Selector ControlPage::__selector3_;
::g::Uno::UX::Selector ControlPage::__selector4_;
::g::Uno::UX::Selector ControlPage::__selector5_;

// public ControlPage() [instance] :46
void ControlPage::ctor_8()
{
    uStackFrame __("ControlPage", ".ctor()");
    ctor_7();
    InitializeUX();
}

// public float4 get_HeaderColor() [instance] :8
::g::Uno::Float4 ControlPage::HeaderColor()
{
    return _field_HeaderColor;
}

// public void set_HeaderColor(float4 value) [instance] :9
void ControlPage::HeaderColor(::g::Uno::Float4 value)
{
    uStackFrame __("ControlPage", "set_HeaderColor(float4)");
    SetHeaderColor(value, NULL);
}

// public float4 get_HeaderTextColor() [instance] :23
::g::Uno::Float4 ControlPage::HeaderTextColor()
{
    return _field_HeaderTextColor;
}

// public void set_HeaderTextColor(float4 value) [instance] :24
void ControlPage::HeaderTextColor(::g::Uno::Float4 value)
{
    uStackFrame __("ControlPage", "set_HeaderTextColor(float4)");
    SetHeaderTextColor(value, NULL);
}

// private void InitializeUX() [instance] :50
void ControlPage::InitializeUX()
{
    uStackFrame __("ControlPage", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::TG18_FuseControlsTextControl_Value_Property::New1(temp, ControlPage::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::TG18_accessor_Fuse_Controls_Page_Title::Singleton());
    this_HeaderColor_inst = ::g::TG18_ControlPage_HeaderColor_Property::New1(this, ControlPage::__selector1());
    this_HeaderTextColor_inst = ::g::TG18_ControlPage_HeaderTextColor_Property::New1(this, ControlPage::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ControlPage::__g_static_nametable1());
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_TextColor_inst = ::g::TG18_FuseControlsTextControl_TextColor_Property::New1(temp, ControlPage::__selector3());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::TG18_accessor_ControlPage_HeaderTextColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Panel* temp1 = ::g::Fuse::Controls::Panel::New3();
    temp1_Color_inst = ::g::TG18_FuseControlsPanel_Color_Property::New1(temp1, ControlPage::__selector4());
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::TG18_accessor_ControlPage_HeaderColor::Singleton());
    ::g::Fuse::Layouts::DefaultLayout* temp8 = ::g::Fuse::Layouts::DefaultLayout::New2();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_TextColor_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Color_inst, (uObject*)temp7, __g_nametable1, 3);
    HitTestMode(6);
    Name(ControlPage::__selector5());
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Height(::g::Uno::UX::Size__New1(45.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp->FontSize(22.0f);
    temp->Alignment(10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_HeaderColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[3/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_HeaderTextColor_inst);
    Layout(temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
}

// public void SetHeaderColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void ControlPage::SetHeaderColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("ControlPage", "SetHeaderColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderColor))
    {
        _field_HeaderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"HeaderColor"*/]), origin);
    }
}

// public void SetHeaderTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :26
void ControlPage::SetHeaderTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("ControlPage", "SetHeaderTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_HeaderTextColor))
    {
        _field_HeaderTextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"HeaderTextC...*/]), origin);
    }
}

// public ControlPage New() [static] :46
ControlPage* ControlPage::New5()
{
    ControlPage* obj1 = (ControlPage*)uNew(ControlPage_typeof());
    obj1->ctor_8();
    return obj1;
}
// }

} // ::g
