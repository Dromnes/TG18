// This file was generated based on '../../../Packages/Fuse.Triggers/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-9ca29815.h>
#include <Fuse.Animations.IUnwr-4bbb3b04.h>
#include <Fuse.Binding.h>
#include <Fuse.IBeginRemoveVisu-428528f1.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Trigger.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct RemovingAnimation;}}}
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public class RemovingAnimation :1721
// {
struct RemovingAnimation_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::IBeginRemoveVisualListener interface8;
};

RemovingAnimation_type* RemovingAnimation_typeof();
void RemovingAnimation__ctor_5_fn(RemovingAnimation* __this);
void RemovingAnimation__FuseIBeginRemoveVisualListenerOnBeginRemoveVisual_fn(RemovingAnimation* __this, ::g::Fuse::PendingRemoveVisual* pr);
void RemovingAnimation__New2_fn(RemovingAnimation** __retval);
void RemovingAnimation__OnDone_fn(RemovingAnimation* __this);
void RemovingAnimation__OnUnrooted_fn(RemovingAnimation* __this);

struct RemovingAnimation : ::g::Fuse::Triggers::Trigger
{
    uStrong< ::g::Fuse::PendingRemoveVisual*> _args;

    void ctor_5();
    void OnDone();
    static RemovingAnimation* New2();
};
// }

}}} // ::g::Fuse::Triggers
