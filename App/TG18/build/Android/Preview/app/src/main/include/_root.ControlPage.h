// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/ControlPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{struct ControlPage;}

namespace g{

// public partial sealed class ControlPage :2
// {
::g::Fuse::Controls::Control_type* ControlPage_typeof();
void ControlPage__ctor_8_fn(ControlPage* __this);
void ControlPage__get_HeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* __retval);
void ControlPage__set_HeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* value);
void ControlPage__get_HeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* __retval);
void ControlPage__set_HeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* value);
void ControlPage__InitializeUX_fn(ControlPage* __this);
void ControlPage__New5_fn(ControlPage** __retval);
void ControlPage__SetHeaderColor_fn(ControlPage* __this, ::g::Uno::Float4* value, uObject* origin);
void ControlPage__SetHeaderTextColor_fn(ControlPage* __this, ::g::Uno::Float4* value, uObject* origin);

struct ControlPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ControlPage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ControlPage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return ControlPage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return ControlPage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return ControlPage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return ControlPage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return ControlPage_typeof()->Init(), __selector5_; }
    ::g::Uno::Float4 _field_HeaderColor;
    ::g::Uno::Float4 _field_HeaderTextColor;
    uStrong< ::g::Uno::UX::Property1*> temp_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> this_HeaderColor_inst;
    uStrong< ::g::Uno::UX::Property1*> this_HeaderTextColor_inst;

    void ctor_8();
    ::g::Uno::Float4 HeaderColor();
    void HeaderColor(::g::Uno::Float4 value);
    ::g::Uno::Float4 HeaderTextColor();
    void HeaderTextColor(::g::Uno::Float4 value);
    void InitializeUX();
    void SetHeaderColor(::g::Uno::Float4 value, uObject* origin);
    void SetHeaderTextColor(::g::Uno::Float4 value, uObject* origin);
    static ControlPage* New5();
};
// }

} // ::g
