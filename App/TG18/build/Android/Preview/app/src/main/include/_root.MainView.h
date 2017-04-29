// This file was generated based on D:/TG18/TG18_code/App/TG18/build/Android/Preview/cache/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
namespace g{namespace Fuse{struct Font;}}
namespace g{struct MainView;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    static uSStrong< ::g::Fuse::Font*> Built_;
    static uSStrong< ::g::Fuse::Font*>& Built() { return MainView_typeof()->Init(), Built_; }

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
