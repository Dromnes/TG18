// This file was generated based on '../../../Packages/Fuse.Controls.Native/0.47.7/android/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-26dc0a28.h>
#include <Fuse.Controls.Native.-ab35427a.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Button;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Button :9
// {
struct Button_type : ::g::Fuse::Controls::Native::Android::LeafView_type
{
    ::g::Fuse::Controls::Native::ILabelView interface3;
};

Button_type* Button_typeof();
void Button__ctor_5_fn(Button* __this);
void Button__Create_fn(::g::Java::Object** __retval);
void Button__New3_fn(Button** __retval);
void Button__SetText_fn(::g::Java::Object* handle, uString* text);
void Button__set_Text_fn(Button* __this, uString* value);

struct Button : ::g::Fuse::Controls::Native::Android::LeafView
{
    void ctor_5();
    void Text(uString* value);
    static ::g::Java::Object* Create();
    static Button* New3();
    static void SetText(::g::Java::Object* handle, uString* text);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
