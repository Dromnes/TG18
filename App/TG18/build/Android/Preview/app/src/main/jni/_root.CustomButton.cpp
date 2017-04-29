// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/CustomButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.CustomButton.h>
#include <_root.TBuilt.h>
#include <_root.TG18_accessor_C-e42fa7f7.h>
#include <_root.TG18_accessor_C-f781f23f.h>
#include <_root.TG18_CustomButt-b94d6bfe.h>
#include <_root.TG18_CustomButt-e8820225.h>
#include <_root.TG18_FuseContro-371e305b.h>
#include <_root.TG18_FuseContro-76864997.h>
#include <_root.TG18_FuseContro-e9ebd714.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-b24df705.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[5];
static uType* TYPES[6];

namespace g{

// public partial sealed class CustomButton :2
// {
// static CustomButton() :42
static void CustomButton__cctor_4_fn(uType* __type)
{
    CustomButton::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 0);
    CustomButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Value"*/]);
    CustomButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]);
    CustomButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
    CustomButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Color"*/]);
    CustomButton::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"self"*/]);
}

static void CustomButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("TextColor");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("Color");
    ::STRINGS[4] = uString::Const("self");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Control_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface7),
        ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Control_type, interface8),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Control_type, interface9),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface10),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface11),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface12),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface13),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Control_type, interface14));
    type->SetFields(103,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::CustomButton, __g_nametable1), 0,
        ::g::Uno::String_typeof(), offsetof(::g::CustomButton, _field_Text), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::CustomButton, _field_TextColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::CustomButton, temp_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CustomButton, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::CustomButton, this_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::CustomButton, this_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::CustomButton, this_TextColor_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::CustomButton::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CustomButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CustomButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CustomButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CustomButton::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::CustomButton::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(7,
        new uFunction(".ctor", NULL, (void*)CustomButton__New4_fn, 0, true, type, 0),
        new uFunction("SetText", NULL, (void*)CustomButton__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTextColor", NULL, (void*)CustomButton__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)CustomButton__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)CustomButton__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_TextColor", NULL, (void*)CustomButton__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)CustomButton__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::Control_type* CustomButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 117;
    options.InterfaceCount = 15;
    options.ObjectSize = sizeof(CustomButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Control_type);
    type = (::g::Fuse::Controls::Control_type*)uClassType::New("CustomButton", options);
    type->fp_build_ = CustomButton_build;
    type->fp_ctor_ = (void*)CustomButton__New4_fn;
    type->fp_cctor_ = CustomButton__cctor_4_fn;
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

// public CustomButton() :46
void CustomButton__ctor_7_fn(CustomButton* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :50
void CustomButton__InitializeUX_fn(CustomButton* __this)
{
    __this->InitializeUX();
}

// public CustomButton New() :46
void CustomButton__New4_fn(CustomButton** __retval)
{
    *__retval = CustomButton::New4();
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :26
void CustomButton__SetText_fn(CustomButton* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :11
void CustomButton__SetTextColor_fn(CustomButton* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public string get_Text() :23
void CustomButton__get_Text_fn(CustomButton* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :24
void CustomButton__set_Text_fn(CustomButton* __this, uString* value)
{
    __this->Text(value);
}

// public float4 get_TextColor() :8
void CustomButton__get_TextColor_fn(CustomButton* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :9
void CustomButton__set_TextColor_fn(CustomButton* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong<uArray*> CustomButton::__g_static_nametable1_;
::g::Uno::UX::Selector CustomButton::__selector0_;
::g::Uno::UX::Selector CustomButton::__selector1_;
::g::Uno::UX::Selector CustomButton::__selector2_;
::g::Uno::UX::Selector CustomButton::__selector3_;
::g::Uno::UX::Selector CustomButton::__selector4_;

// public CustomButton() [instance] :46
void CustomButton::ctor_7()
{
    uStackFrame __("CustomButton", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :50
void CustomButton::InitializeUX()
{
    uStackFrame __("CustomButton", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::TBuilt* temp = ::g::TBuilt::New4();
    temp_Value_inst = ::g::TG18_FuseControlsTextControl_Value_Property::New1(temp, CustomButton::__selector0());
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::TG18_accessor_CustomButton_Text::Singleton());
    this_TextColor_inst = ::g::TG18_CustomButton_TextColor_Property::New1(this, CustomButton::__selector1());
    this_Text_inst = ::g::TG18_CustomButton_Text_Property::New1(this, CustomButton::__selector2());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, CustomButton::__g_static_nametable1());
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Color_inst = ::g::TG18_FuseControlsTextControl_Color_Property::New1(temp, CustomButton::__selector3());
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::TG18_accessor_CustomButton_TextColor::Singleton());
    this_Color_inst = ::g::TG18_FuseControlsPanel_Color_Property::New1(this, CustomButton::__selector3());
    ::g::Fuse::Reactive::DataBinding* temp5 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp6 = ::g::Fuse::Reactive::DataBinding::New1(temp_Color_inst, (uObject*)temp4, __g_nametable1, 1);
    ::g::Fuse::Gestures::WhilePressed* temp7 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Change* temp8 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float4>*/], this_Color_inst);
    Color(::g::Uno::Float4__New2(0.1333333f, 0.3333333f, 0.6666667f, 1.0f));
    HitTestMode(2);
    Margin(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    Name(CustomButton::__selector4());
    temp->FontSize(72.0f);
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(30.0f, 15.0f, 30.0f, 15.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Animators()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp8);
    ::g::Fuse::Animations::Change__set_Value_fn(temp8, uCRef(::g::Uno::Float4__New2(0.06666667f, 0.2f, 0.5333334f, 1.0f)));
    temp8->Duration(0.05);
    temp8->DurationBack(0.2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_TextColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[4/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Text_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :26
void CustomButton::SetText(uString* value, uObject* origin)
{
    uStackFrame __("CustomButton", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :11
void CustomButton::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("CustomButton", "SetTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"TextColor"*/]), origin);
    }
}

// public string get_Text() [instance] :23
uString* CustomButton::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :24
void CustomButton::Text(uString* value)
{
    uStackFrame __("CustomButton", "set_Text(string)");
    SetText(value, NULL);
}

// public float4 get_TextColor() [instance] :8
::g::Uno::Float4 CustomButton::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :9
void CustomButton::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("CustomButton", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public CustomButton New() [static] :46
CustomButton* CustomButton::New4()
{
    CustomButton* obj1 = (CustomButton*)uNew(CustomButton_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
