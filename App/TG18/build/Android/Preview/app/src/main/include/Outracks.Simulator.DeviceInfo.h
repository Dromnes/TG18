// This file was generated based on Packages/Outracks.Simulator.Client.Uno/0.1.0/$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Outracks{namespace Simulator{struct DeviceInfo;}}}

namespace g{
namespace Outracks{
namespace Simulator{

// public static extern class DeviceInfo :1664
// {
uClassType* DeviceInfo_typeof();
void DeviceInfo__GetGUID_fn(uString** __retval);
void DeviceInfo__GetName_fn(uString** __retval);
void DeviceInfo__get_GUID_fn(uString** __retval);
void DeviceInfo__get_Name_fn(uString** __retval);

struct DeviceInfo : uObject
{
    static uString* GetGUID();
    static uString* GetName();
    static uString* GUID();
    static uString* Name();
};
// }

}}} // ::g::Outracks::Simulator