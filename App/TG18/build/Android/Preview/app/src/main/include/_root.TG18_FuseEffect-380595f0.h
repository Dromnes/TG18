// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/TG18.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Effects{struct Blur;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct TG18_FuseEffectsBlur_Radius_Property;}

namespace g{

// internal sealed class TG18_FuseEffectsBlur_Radius_Property :109
// {
::g::Uno::UX::Property1_type* TG18_FuseEffectsBlur_Radius_Property_typeof();
void TG18_FuseEffectsBlur_Radius_Property__ctor_3_fn(TG18_FuseEffectsBlur_Radius_Property* __this, ::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name);
void TG18_FuseEffectsBlur_Radius_Property__Get1_fn(TG18_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void TG18_FuseEffectsBlur_Radius_Property__New1_fn(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector* name, TG18_FuseEffectsBlur_Radius_Property** __retval);
void TG18_FuseEffectsBlur_Radius_Property__get_Object_fn(TG18_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void TG18_FuseEffectsBlur_Radius_Property__Set1_fn(TG18_FuseEffectsBlur_Radius_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct TG18_FuseEffectsBlur_Radius_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Effects::Blur*> _obj;

    void ctor_3(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
    static TG18_FuseEffectsBlur_Radius_Property* New1(::g::Fuse::Effects::Blur* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
