// This file was generated based on '../../../Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-9ca29815.h>
#include <Fuse.Animations.IUnwr-4bbb3b04.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.IBusyHandler.h>
#include <Fuse.Triggers.WhileBusy.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileFailed;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileFailed :3609
// {
::g::Fuse::Triggers::WhileBusy_type* WhileFailed_typeof();
void WhileFailed__ctor_7_fn(WhileFailed* __this);
void WhileFailed__New3_fn(WhileFailed** __retval);

struct WhileFailed : ::g::Fuse::Triggers::WhileBusy
{
    void ctor_7();
    static WhileFailed* New3();
};
// }

}}} // ::g::Fuse::Triggers
