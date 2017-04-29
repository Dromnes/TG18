// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/CustomButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-19aca435.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct CustomButton;}

namespace g{

// public partial sealed class CustomButton :2
// {
::g::Fuse::Controls::Control_type* CustomButton_typeof();
void CustomButton__ctor_7_fn(CustomButton* __this);
void CustomButton__InitializeUX_fn(CustomButton* __this);
void CustomButton__New4_fn(CustomButton** __retval);
void CustomButton__SetText_fn(CustomButton* __this, uString* value, uObject* origin);
void CustomButton__SetTextColor_fn(CustomButton* __this, ::g::Uno::Float4* value, uObject* origin);
void CustomButton__get_Text_fn(CustomButton* __this, uString** __retval);
void CustomButton__set_Text_fn(CustomButton* __this, uString* value);
void CustomButton__get_TextColor_fn(CustomButton* __this, ::g::Uno::Float4* __retval);
void CustomButton__set_TextColor_fn(CustomButton* __this, ::g::Uno::Float4* value);

struct CustomButton : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return CustomButton_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return CustomButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return CustomButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return CustomButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return CustomButton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return CustomButton_typeof()->Init(), __selector4_; }
    uStrong<uString*> _field_Text;
    ::g::Uno::Float4 _field_TextColor;
    uStrong< ::g::Uno::UX::Property1*> temp_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> this_TextColor_inst;

    void ctor_7();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    static CustomButton* New4();
};
// }

} // ::g
