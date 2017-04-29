// This file was generated based on '../../../Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-9ca29815.h>
#include <Fuse.Animations.IUnwr-4bbb3b04.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileEn-8a453f15.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileEnabled;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileEnabled :1098
// {
::g::Fuse::Triggers::WhileEnabledDisabledTrigger_type* WhileEnabled_typeof();
void WhileEnabled__ctor_7_fn(WhileEnabled* __this);
void WhileEnabled__get_IsActive_fn(WhileEnabled* __this, bool* __retval);
void WhileEnabled__New2_fn(WhileEnabled** __retval);

struct WhileEnabled : ::g::Fuse::Triggers::WhileEnabledDisabledTrigger
{
    void ctor_7();
    static WhileEnabled* New2();
};
// }

}}} // ::g::Fuse::Triggers
