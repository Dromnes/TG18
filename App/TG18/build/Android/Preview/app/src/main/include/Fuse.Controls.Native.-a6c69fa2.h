// This file was generated based on '../../../Packages/Fuse.Controls.Native/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-450f50d5.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ICircleView :459
// {
uInterfaceType* ICircleView_typeof();

struct ICircleView
{
    void(*fp_set_EffectiveEndAngleDegrees)(uObject*, float*);
    void(*fp_set_EndAngleDegrees)(uObject*, float*);
    void(*fp_set_StartAngleDegrees)(uObject*, float*);
    void(*fp_set_UseAngle)(uObject*, bool*);
    static void EffectiveEndAngleDegrees(const uInterface& __this, float value) { __this.VTable<ICircleView>()->fp_set_EffectiveEndAngleDegrees(__this, &value); }
    static void EndAngleDegrees(const uInterface& __this, float value) { __this.VTable<ICircleView>()->fp_set_EndAngleDegrees(__this, &value); }
    static void StartAngleDegrees(const uInterface& __this, float value) { __this.VTable<ICircleView>()->fp_set_StartAngleDegrees(__this, &value); }
    static void UseAngle(const uInterface& __this, bool value) { __this.VTable<ICircleView>()->fp_set_UseAngle(__this, &value); }
};
// }

}}}} // ::g::Fuse::Controls::Native