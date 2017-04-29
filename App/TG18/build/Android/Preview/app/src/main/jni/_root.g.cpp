// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNat-bee5a1ee.h>
#include <_root.FuseControlsNav-9486ecb9.h>
#include <_root.FuseControlsNav-e8d8cce8.h>
#include <_root.FuseControlsPan-7758f368.h>
#include <_root.FuseControlsPri-31ca59b0.h>
#include <_root.FuseControlsPri-3928cc2d.h>
#include <_root.FuseControlsPri-5f1f0b5f.h>
#include <_root.FuseControlsPri-6f551473.h>
#include <_root.FuseControlsPri-74d25d36.h>
#include <_root.FuseControlsPri-7a2c9334.h>
#include <_root.FuseControlsPri-8cad4d83.h>
#include <_root.FuseControlsPri-940454f5.h>
#include <_root.FuseControlsPri-9c9b741d.h>
#include <_root.FuseControlsPri-9f6c7a6f.h>
#include <_root.FuseControlsPri-a53c7983.h>
#include <_root.FuseControlsPri-b89ad79a.h>
#include <_root.FuseControlsPri-ea097e7.h>
#include <_root.FuseControlsScr-2ea08c40.h>
#include <_root.FuseControlsScr-433e3292.h>
#include <_root.FuseControlsScr-85ab218f.h>
#include <_root.FuseControlsScr-dbade381.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPoly-6c38537d.h>
#include <_root.FuseDrawingPrim-2efb5481.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseNodes_bundle.h>
#include <_root.FuseReactiveJav-9fd7535.h>
#include <_root.FuseText_bundle.h>
#include <_root.HashableWeakReference.h>
#include <_root.OutracksSimulat-2e217d39.h>
#include <_root.OutracksSimulat-4f267733.h>
#include <_root.OutracksSimulat-5a59dc8.h>
#include <_root.OutracksSimulat-729d617c.h>
#include <_root.OutracksSimulat-80299246.h>
#include <_root.OutracksSimulat-8e96328f.h>
#include <_root.OutracksSimulat-b3d5472e.h>
#include <_root.OutracksSimulat-b3dc562d.h>
#include <_root.OutracksSimulat-b8ae3149.h>
#include <_root.OutracksSimulat-bb535129.h>
#include <_root.OutracksSimulat-c62f3e4f.h>
#include <_root.OutracksSimulat-ddb73d9.h>
#include <_root.OutracksSimulat-e96864e6.h>
#include <_root.OutracksSimulat-f928ee7f.h>
#include <_root.UnoCore_bundle.h>
#include <_root.WeakDictionary-2.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Outracks.Simulator.ErrorToast.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.Runtime.Implement-4541d9a7.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.WeakReference-1.h>
static uString* STRINGS[177];
static uType* TYPES[19];

namespace g{

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls\0.47.7\.uno\package
// ---------------------------------------------------------------------------------

// public static generated class FuseControls_bundle :0
// {
// static FuseControls_bundle() :0
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle5950675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseControls_bundle::SolidRectangle5951675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[6/*"uniform mat...*/], ::STRINGS[7/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[14/*"l"*/]));
    FuseControls_bundle::SolidRectangle5953675f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[15/*"uniform mat...*/], ::STRINGS[16/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[23/*"t"*/]));
    FuseControls_bundle::Viewport78c30fd2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("uniform mat4 h, b;\n"
        "uniform vec2 c, d, e, i;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, float p){\n"
        "    vec2 q = (n * c) - d;\n"
        "    float r = dot(q, o) / p;\n"
        "    return (r - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, i, j);\n"
        "    gl_Position = b * (h * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[7] = uString::Const("uniform float f, g;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(l, vec2(k, 0.5)) * f) * g;\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[15] = uString::Const("uniform mat4 q, d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = ((((e * (false ? vec2(a.x, float(1) - a.y) : a)) - f) / g) * h) + i;\n"
        "    r = k + (u * j);\n"
        "    s = u;\n"
        "    gl_Position = d * (q * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[16] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o, p;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = (c ? vec4(float(0)) : texture2D(t, b ? (m + (fract(r) * l)) : s)) * n;\n"
        "    gl_FragColor = (vec4(u.xyz * u.w, u.w) * o) * p;\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[24] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5950675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5951675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::SolidRectangle5953675f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControls_bundle::Viewport78c30fd2_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("SolidRectangle5950675f", 0),
        new uField("SolidRectangle5951675f", 1),
        new uField("SolidRectangle5953675f", 2),
        new uField("Viewport78c30fd2", 3));
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5950675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5951675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle5953675f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControls_bundle::Viewport78c30fd2_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Native\0.47.7\.uno\package
// ----------------------------------------------------------------------------------------

// public static generated class FuseControlsNative_bundle :0
// {
// static FuseControlsNative_bundle() :0
static void FuseControlsNative_bundle__cctor__fn(uType* __type)
{
    FuseControlsNative_bundle::Blitter5bfe9814_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[26/*"uniform vec...*/], ::STRINGS[27/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"f"*/]));
    FuseControlsNative_bundle::Blitterbb973035_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform vec...*/], ::STRINGS[29/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[11/*"h"*/]));
}

static void FuseControlsNative_bundle_build(uType* type)
{
    ::STRINGS[26] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = a;\n"
        "    gl_Position = d * vec4(c + (a * b), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[27] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[28] = uString::Const("uniform vec2 d, c;\n"
        "uniform mat4 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    g = a;\n"
        "    gl_Position = e * vec4(d + (a * c), 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[29] = uString::Const("uniform sampler2D h;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = b ? texture2D(h, f) : texture2D(h, g);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[11] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitter5bfe9814_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsNative_bundle::Blitterbb973035_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Blitter5bfe9814", 0),
        new uField("Blitterbb973035", 1));
}

uClassType* FuseControlsNative_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsNative_bundle", options);
    type->fp_build_ = FuseControlsNative_bundle_build;
    type->fp_cctor_ = FuseControlsNative_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitter5bfe9814_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsNative_bundle::Blitterbb973035_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property :297
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[1/*Fuse.Controls.Panel*/], offsetof(::g::FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :302
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :301
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :303
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property(Fuse.Controls.Panel obj, Uno.UX.Selector name) [instance] :300
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property New(Fuse.Controls.Panel obj, Uno.UX.Selector name) [static] :300
FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property::New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* obj1 = (FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property*)uNew(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Navigation\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property :288
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :293
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :291
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :292
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :294
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsNavigation_FuseControlsShape_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :295
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :291
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :291
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Panels\0.47.7\.uno\package
// ----------------------------------------------------------------------------------------

// public static generated class FuseControlsPanels_bundle :0
// {
// static FuseControlsPanels_bundle() :0
static void FuseControlsPanels_bundle__cctor__fn(uType* __type)
{
    FuseControlsPanels_bundle::FreezeDrawable56f9322e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform mat...*/], ::STRINGS[31/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"f"*/]));
}

static void FuseControlsPanels_bundle_build(uType* type)
{
    ::STRINGS[30] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[31] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    gl_FragColor = vec4(g.xyz, g.w * c);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[9] = uString::Const("f");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPanels_bundle::FreezeDrawable56f9322e_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("FreezeDrawable56f9322e", 0));
}

uClassType* FuseControlsPanels_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPanels_bundle", options);
    type->fp_build_ = FuseControlsPanels_bundle_build;
    type->fp_cctor_ = FuseControlsPanels_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPanels_bundle::FreezeDrawable56f9322e_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text :751
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[32] = uString::Const("Text");
    ::TYPES[3] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :757
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[3/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :754
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :756
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[4/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :758
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[3/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[4/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :759
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance] :751
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static] :751
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value :761
// {
// static FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[33] = uString::Const("Value");
    ::TYPES[6] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :767
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[6/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name() :764
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name(), void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType() :766
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :768
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[6/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :769
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance] :761
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static] :761
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\package
// --------------------------------------------------------------------------------------------

// public static generated class FuseControlsPrimitives_bundle :0
// {
// static FuseControlsPrimitives_bundle() :0
static void FuseControlsPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_bundle::ImageElementDraw03922e21_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform mat...*/], ::STRINGS[35/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[11/*"h"*/]));
}

static void FuseControlsPrimitives_bundle_build(uType* type)
{
    ::STRINGS[34] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (a * c) + d;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[35] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, g) * e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[11] = uString::Const("h");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsPrimitives_bundle::ImageElementDraw03922e21_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("ImageElementDraw03922e21", 0));
}

uClassType* FuseControlsPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsPrimitives_bundle", options);
    type->fp_build_ = FuseControlsPrimitives_bundle_build;
    type->fp_cctor_ = FuseControlsPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsPrimitives_bundle::ImageElementDraw03922e21_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property :797
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(::g::FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :802
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsShape_Fill_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :801
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :803
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsShape_Fill_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(v);
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :800
void FuseControlsPrimitives_FuseControlsShape_Fill_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsShape_Fill_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :800
FuseControlsPrimitives_FuseControlsShape_Fill_Property* FuseControlsPrimitives_FuseControlsShape_Fill_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsShape_Fill_Property* obj1 = (FuseControlsPrimitives_FuseControlsShape_Fill_Property*)uNew(FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property :780
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :785
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :784
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :786
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :783
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :783
FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property :771
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Controls.TextControl*/], offsetof(::g::FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__ctor_3_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :776
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :775
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :777
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :778
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :774
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :774
FuseControlsPrimitives_FuseControlsTextControl_Value_Property* FuseControlsPrimitives_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseControlsTextControl_Value_Property* obj1 = (FuseControlsPrimitives_FuseControlsTextControl_Value_Property*)uNew(FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property :847
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Drawing.SolidColor*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :852
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[8/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__New1_fn(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :851
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :853
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[8/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :854
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [instance] :850
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::ctor_3(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property New(Fuse.Drawing.SolidColor obj, Uno.UX.Selector name) [static] :850
FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property::New1(::g::Fuse::Drawing::SolidColor* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property :805
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :810
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :809
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :811
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Brush(v);
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :808
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :808
FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Brush_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property :829
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.Stroke*/], offsetof(::g::FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__ctor_3_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :834
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :833
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :835
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :836
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :832
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :832
FuseControlsPrimitives_FuseDrawingStroke_Color_Property* FuseControlsPrimitives_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseDrawingStroke_Color_Property* obj1 = (FuseControlsPrimitives_FuseDrawingStroke_Color_Property*)uNew(FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property :813
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :818
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :817
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :819
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :816
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :816
FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property :821
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Effects.DropShadow*/], offsetof(::g::FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__ctor_3_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :826
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__New1_fn(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :825
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :827
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[10/*Fuse.Effects.DropShadow*/]))->Size(v_);
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [instance] :824
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::ctor_3(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property New(Fuse.Effects.DropShadow obj, Uno.UX.Selector name) [static] :824
FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property::New1(::g::Fuse::Effects::DropShadow* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* obj1 = (FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property*)uNew(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property :788
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Elements.Element*/], offsetof(::g::FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__ctor_3_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :793
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :792
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :794
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :795
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :791
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :791
FuseControlsPrimitives_FuseElementsElement_Opacity_Property* FuseControlsPrimitives_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseElementsElement_Opacity_Property* obj1 = (FuseControlsPrimitives_FuseElementsElement_Opacity_Property*)uNew(FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Primitives\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property :838
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Gestures.SwipeGesture*/], offsetof(::g::FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__ctor_3_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :843
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__New1_fn(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector* name, FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property** __retval)
{
    *__retval = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :842
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :844
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :845
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [instance] :841
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::ctor_3(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property New(Fuse.Gestures.SwipeGesture obj, Uno.UX.Selector name) [static] :841
FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property::New1(::g::Fuse::Gestures::SwipeGesture* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* obj1 = (FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property*)uNew(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView :179
// {
// static FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :179
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[36] = uString::Const("KeepFocusInView");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :185
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name() :182
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name(), void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType() :184
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :186
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance] :179
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static] :179
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll :170
// {
// static FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() :170
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"UserScroll"*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_build(uType* type)
{
    ::STRINGS[37] = uString::Const("UserScroll");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :176
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->UserScroll()), void();
}

// public override sealed Uno.UX.Selector get_Name() :173
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name(), void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll New() :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1();
}

// public override sealed Uno.Type get_PropertyType() :175
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :177
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->UserScroll(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::Singleton_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll() [instance] :170
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll New() [static] :170
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_UserScroll_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property :188
// {
static void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Gestures::Scroller_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Gestures.Scroller*/], offsetof(::g::FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__ctor_3_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :193
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Get1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::Scroller*>(obj, ::TYPES[14/*Fuse.Gestures.Scroller*/]))->UserScroll(), void();
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__New1_fn(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :192
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__get_Object_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :194
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property__Set1_fn(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::Scroller*>(obj, ::TYPES[14/*Fuse.Gestures.Scroller*/]))->UserScroll(v_);
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [instance] :191
void FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::ctor_3(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property New(Fuse.Gestures.Scroller obj, Uno.UX.Selector name) [static] :191
FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property::New1(::g::Fuse::Gestures::Scroller* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property* obj1 = (FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property*)uNew(FuseControlsScrollView_FuseGesturesScroller_UserScroll_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.ScrollView\0.47.7\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property :196
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[15/*Fuse.Triggers.WhileBool*/], offsetof(::g::FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :201
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :200
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :202
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :199
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :199
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls.Video\0.47.7\.uno\package
// ---------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle :0
// {
// static FuseControlsVideo_bundle() :0
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectanglef8978c7b_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform flo...*/], ::STRINGS[39/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[22/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElementd0e853ae_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[40/*"uniform mat...*/], ::STRINGS[41/*"uniform sam...*/], 1, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[11/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[39] = uString::Const("uniform samplerExternalOES q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[40] = uString::Const("uniform mat4 f, c;\n"
        "uniform vec2 d, e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec2 i(vec2 j){\n"
        "    vec2 k = j.xy;\n"
        "\n"
        "    if (b == 1)\n"
        "        return vec2(k.y, 1.0 - k.x);\n"
        "    else if (b == 2)\n"
        "        return vec2(1.0 - k.x, 1.0 - k.y);\n"
        "    else if (b == 3)\n"
        "        return vec2(1.0 - k.y, k.x);\n"
        "    else\n"
        "        return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = i((a * d) + e);\n"
        "    gl_Position = c * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[41] = uString::Const("uniform samplerExternalOES h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::Scale9Rectanglef8978c7b_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseControlsVideo_bundle::VideoDrawElementd0e853ae_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("Scale9Rectanglef8978c7b", 0),
        new uField("VideoDrawElementd0e853ae", 1));
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectanglef8978c7b_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElementd0e853ae_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Drawing\0.47.7\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle :0
// {
// static FuseDrawing_bundle() :0
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawableccd93376_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[42/*"attribute v...*/], ::STRINGS[43/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[42] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    h = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[43] = uString::Const("uniform float e[b], f;\n"
        "uniform vec4 g[c];\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "float i(float k, float l, float m){\n"
        "    return clamp((m - k) / (l - k), 0.0, 1.0);\n"
        "}\n"
        "\n"
        "vec4 j(vec2 k){\n"
        "    float l = e[0] + (f * k.x);\n"
        "    vec4 m = vec4(g[0].xyz * g[0].w, g[0].w);\n"
        "\n"
        "    for (int n = 0; n < (b - 1); n++)\n"
        "    {\n"
        "        float o = e[n];\n"
        "        float p = e[n + 1];\n"
        "        vec4 q = g[n + 1];\n"
        "        m = mix(m, vec4(q.xyz * q.w, q.w), d ? smoothstep(o, p, l) : i(o, p, l));\n"
        "    }\n"
        "\n"
        "    return m;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j(h);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawing_bundle::LinearGradientDrawableccd93376_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("LinearGradientDrawableccd93376", 0));
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawableccd93376_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Drawing.Polygons\0.47.7\.uno\package
// -----------------------------------------------------------------------------------------

// public static generated class FuseDrawingPolygons_bundle :0
// {
// static FuseDrawingPolygons_bundle() :0
static void FuseDrawingPolygons_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPolygons_bundle::Border102c669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[44/*"uniform mat...*/], ::STRINGS[45/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseDrawingPolygons_bundle::Border102d669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[46/*"uniform mat...*/], ::STRINGS[47/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPolygons_bundle::Border102f669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform mat...*/], ::STRINGS[49/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[50/*"s"*/]));
    FuseDrawingPolygons_bundle::Border1032669d_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[51/*"uniform mat...*/], ::STRINGS[52/*"varying vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[53/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[54/*"uniform mat...*/], ::STRINGS[55/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[56/*"r"*/]));
    FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[57/*"uniform mat...*/], ::STRINGS[58/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[13/*"j"*/]));
}

static void FuseDrawingPolygons_bundle_build(uType* type)
{
    ::STRINGS[44] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "uniform float d;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = (c * a.zw.x) * d;\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[45] = uString::Const("varying vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[46] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying float i, j;\n"
        "\n"
        "float l(vec2 m, vec2 n, float o){\n"
        "    vec2 p = (m * c) - d;\n"
        "    float q = dot(p, n) / o;\n"
        "    return (q - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = a.zw.x;\n"
        "    j = l(a.xy / c, g, h);\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[47] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D k;\n"
        "\n"
        "varying float i, j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(k, vec2(j, 0.5)) * i) * f;\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[48] = uString::Const("uniform mat4 d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = ((((e * (a.xy / e)) - f) / g) * h) + i;\n"
        "    p = a.zw.x;\n"
        "    q = k + (t * j);\n"
        "    r = t;\n"
        "    gl_Position = d * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 t = (c ? vec4(float(0)) : texture2D(s, b ? (m + (fract(q) * l)) : r)) * n;\n"
        "    gl_FragColor = (vec4(t.xyz * t.w, t.w) * p) * o;\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[50] = uString::Const("s");
    ::STRINGS[51] = uString::Const("uniform mat4 b;\n"
        "uniform vec4 c;\n"
        "\n"
        "attribute vec4 a;\n"
        "\n"
        "varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = c * a.zw.x;\n"
        "    gl_Position = b * vec4(a.xy, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("varying vec4 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = d;\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[54] = uString::Const("uniform mat4 d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = ((((e * (a / e)) - f) / g) * h) + i;\n"
        "    p = k + (s * j);\n"
        "    q = s;\n"
        "    gl_Position = d * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 s = (c ? vec4(float(0)) : texture2D(r, b ? (m + (fract(p) * l)) : q)) * n;\n"
        "    gl_FragColor = vec4(s.xyz * s.w, s.w) * o;\n"
        "}\n"
        "");
    ::STRINGS[56] = uString::Const("r");
    ::STRINGS[57] = uString::Const("uniform mat4 b;\n"
        "uniform vec2 c, d, e, g;\n"
        "uniform float h;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "float k(vec2 l, vec2 m, float n){\n"
        "    vec2 o = (l * c) - d;\n"
        "    float p = dot(o, m) / n;\n"
        "    return (p - e.x) / e.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    i = k(a / c, g, h);\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("uniform float f;\n"
        "\n"
        "uniform sampler2D j;\n"
        "\n"
        "varying float i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(j, vec2(i, 0.5)) * f;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102c669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102d669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border102f669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::Border1032669d_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("Border102c669d", 0),
        new uField("Border102d669d", 1),
        new uField("Border102f669d", 2),
        new uField("Border1032669d", 3),
        new uField("PolygonDrawable91a038cd", 4),
        new uField("PolygonDrawablea9a9dafc", 5),
        new uField("PolygonDrawableeef8c432", 6));
}

uClassType* FuseDrawingPolygons_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPolygons_bundle", options);
    type->fp_build_ = FuseDrawingPolygons_bundle_build;
    type->fp_cctor_ = FuseDrawingPolygons_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102c669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102d669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border102f669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::Border1032669d_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawable91a038cd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawablea9a9dafc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPolygons_bundle::PolygonDrawableeef8c432_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Drawing.Primitives\0.47.7\.uno\package
// -------------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle :0
// {
// static FuseDrawingPrimitives_bundle() :0
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle08de7d46_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[59/*"uniform vec...*/], ::STRINGS[60/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[21/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle0dcbf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[62/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle205f8541_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[69/*"uniform vec...*/], ::STRINGS[70/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 21, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[66/*"x"*/]));
    FuseDrawingPrimitives_bundle::Circle3e0df8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle54d7f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circle5628667c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[75/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circle65ae6e77_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[77/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[78/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circle663708ab_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[80/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[50/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circle6b9cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[61/*"uniform vec...*/], ::STRINGS[81/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 26, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circle85b410a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform vec...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circle940fd686_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform vec...*/], ::STRINGS[85/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[56/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle940fd687_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[87/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[63/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle9aeeb57e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[89/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circleb380f1e1_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[71/*"uniform vec...*/], ::STRINGS[90/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circlec306f9dc_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[76/*"uniform vec...*/], ::STRINGS[91/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[78/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circlec38f9410_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[79/*"uniform vec...*/], ::STRINGS[92/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[50/*"s"*/]));
    FuseDrawingPrimitives_bundle::Circlec977f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[86/*"uniform vec...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[63/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circlee03cf8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform vec...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circleecb159f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform vec...*/], ::STRINGS[96/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleecb259f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform vec...*/], ::STRINGS[97/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circleecb759f0_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[98/*"uniform vec...*/], ::STRINGS[99/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circlef701f8a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[100/*"uniform vec...*/], ::STRINGS[101/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[102/*"z"*/]));
    FuseDrawingPrimitives_bundle::Circlef84740e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform vec...*/], ::STRINGS[103/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlef8cfdb17_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform vec...*/], ::STRINGS[105/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/]));
    FuseDrawingPrimitives_bundle::Rectangle00651c5e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[107/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle00751c56_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[106/*"uniform flo...*/], ::STRINGS[108/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle25324dea_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle3a9f3720_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[112/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[23/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle3d3bf019_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[113/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/]));
    FuseDrawingPrimitives_bundle::Rectangle45b4058e_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[115/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[64/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle45b40595_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[114/*"uniform flo...*/], ::STRINGS[116/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[64/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle52a8d94f_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[111/*"uniform flo...*/], ::STRINGS[117/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[23/*"t"*/]));
    FuseDrawingPrimitives_bundle::Rectangle656cd6a6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[119/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8b02eec5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"uniform flo...*/], ::STRINGS[121/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangle8b02eec6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[120/*"uniform flo...*/], ::STRINGS[122/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea7edc285_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[123/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/]));
    FuseDrawingPrimitives_bundle::Rectanglecfed64b4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform flo...*/], ::STRINGS[125/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[126/*"B"*/]));
    FuseDrawingPrimitives_bundle::Rectangled051d7f6_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform flo...*/], ::STRINGS[128/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[129/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangled051d7fd_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform flo...*/], ::STRINGS[130/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[65/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[129/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectanglee7f706e3_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[124/*"uniform flo...*/], ::STRINGS[131/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 23, ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[22/*"q"*/], ::STRINGS[56/*"r"*/], ::STRINGS[50/*"s"*/], ::STRINGS[23/*"t"*/], ::STRINGS[63/*"u"*/], ::STRINGS[64/*"v"*/], ::STRINGS[126/*"B"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[59] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "float q(vec2 r, vec2 s, float t){\n"
        "    vec2 u = (r * e) - f;\n"
        "    float v = dot(u, s) / t;\n"
        "    return (v - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    vec2 s = r + c;\n"
        "    n = q(s / e, l, m);\n"
        "    o = r;\n"
        "    gl_Position = d * vec4(s, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D p;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(p, vec2(n, 0.5)) * (clamp(0.5 - (((length(o) - h) * i) * j), float(0), float(1)) * float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[61] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 D = a * d;\n"
        "    vec2 E = D + e;\n"
        "    vec2 F = ((((g * (E / g)) - h) / i) * j) + k;\n"
        "    z = m + (F * l);\n"
        "    A = F;\n"
        "    B = D;\n"
        "    gl_Position = f * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((min(dot(B, w), min(dot(B, x), dot(B, y))) * t) * u), float(0), float(1)))) * v;\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[56] = uString::Const("r");
    ::STRINGS[50] = uString::Const("s");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[63] = uString::Const("u");
    ::STRINGS[64] = uString::Const("v");
    ::STRINGS[65] = uString::Const("w");
    ::STRINGS[66] = uString::Const("x");
    ::STRINGS[67] = uString::Const("y");
    ::STRINGS[68] = uString::Const("C");
    ::STRINGS[69] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * d;\n"
        "    vec2 z = y + e;\n"
        "    vec2 A = ((((g * (z / g)) - h) / i) * j) + k;\n"
        "    u = m + (A * l);\n"
        "    v = A;\n"
        "    w = y;\n"
        "    gl_Position = f * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[70] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying vec2 u, v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 y = (c ? vec4(float(0)) : texture2D(x, b ? (o + (fract(u) * n)) : v)) * p;\n"
        "    gl_FragColor = (vec4(y.xyz * y.w, y.w) * (clamp(0.5 - (((length(w) - q) * r) * s), float(0), float(1)) * float(1))) * t;\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    l = m;\n"
        "    gl_Position = d * vec4(m + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(l) - e) - f) - g) * h) * i), float(0), float(1)) * float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    o = p;\n"
        "    gl_Position = d * vec4(p + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(o, l), min(dot(o, m), dot(o, n))) * h) * i), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float e, f, g;\n"
        "uniform vec2 i, j, k;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(l) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(l, i), max(dot(l, j), dot(l, k))) * f) * g), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 B = a * d;\n"
        "    vec2 C = B + e;\n"
        "    vec2 D = ((((g * (C / g)) - h) / i) * j) + k;\n"
        "    x = m + (D * l);\n"
        "    y = D;\n"
        "    z = B;\n"
        "    gl_Position = f * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((min(dot(z, u), min(dot(z, v), dot(z, w))) * r) * s), float(0), float(1)))) * t;\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("A");
    ::STRINGS[79] = uString::Const("uniform vec2 b, c, e, f, g, l;\n"
        "uniform mat4 d;\n"
        "uniform float m;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "float t(vec2 u, vec2 v, float w){\n"
        "    vec2 x = (u * e) - f;\n"
        "    float y = dot(x, v) / w;\n"
        "    return (y - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    q = t(v / e, l, m);\n"
        "    r = u;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(r, n), max(dot(r, o), dot(r, p))) * i) * j), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform vec2 o, n, w, x, y;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(z) * n)) : A)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - (((abs((length(B) - q) - r) - s) * t) * u), float(0), float(1)) * clamp(0.5 - ((max(dot(B, w), max(dot(B, x), dot(B, y))) * t) * u), float(0), float(1)))) * v;\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 k = a * b;\n"
        "    j = k;\n"
        "    gl_Position = d * vec4(k + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(j) - e) * f) * g), float(0), float(1)) * float(1))) * i;\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "float s(vec2 t, vec2 u, float v){\n"
        "    vec2 w = (t * e) - f;\n"
        "    float x = dot(w, u) / v;\n"
        "    return (x - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 t = a * b;\n"
        "    vec2 u = t + c;\n"
        "    p = s(u / e, n, o);\n"
        "    q = t;\n"
        "    gl_Position = d * vec4(u, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(r, vec2(p, 0.5)) * (clamp(0.5 - (((abs((length(q) - h) - i) - j) * k) * l), float(0), float(1)) * float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("uniform vec2 b, c, e, f, g, n;\n"
        "uniform mat4 d;\n"
        "uniform float o;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "float v(vec2 w, vec2 x, float y){\n"
        "    vec2 z = (w * e) - f;\n"
        "    float A = dot(z, x) / y;\n"
        "    return (A - g.x) / g.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    s = v(x / e, n, o);\n"
        "    t = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[87] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(s, 0.5)) * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(t, p), max(dot(t, q), dot(t, r))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    m = n;\n"
        "    gl_Position = d * vec4(n + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(m, j), min(dot(m, k), dot(m, l))) * f) * g), float(0), float(1)))) * i;\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform float e, f, g;\n"
        "uniform vec2 i, j, k;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(l) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((min(dot(l, i), min(dot(l, j), dot(l, k))) * f) * g), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform vec2 o, n, u, v, w;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((length(z) - q) * r) * s), float(0), float(1)) * clamp(0.5 - ((max(dot(z, u), max(dot(z, v), dot(z, w))) * r) * s), float(0), float(1)))) * t;\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 n, o, p;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((length(r) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(r, n), min(dot(r, o), dot(r, p))) * i) * j), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 p, q, r;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(s, 0.5)) * (clamp(0.5 - (((abs((length(t) - h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(t, p), min(dot(t, q), dot(t, r))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float e, f, g, h, i, k;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * (clamp(0.5 - (((abs((length(o) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(o, l), max(dot(o, m), dot(o, n))) * h) * i), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    n = o;\n"
        "    gl_Position = d * vec4(o + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(n) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((min(dot(n, k), min(dot(n, l), dot(n, m))) * h) * i), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(n) - e) - f) - g) * h) * i), float(0), float(1)) * clamp(0.5 - ((max(dot(n, k), max(dot(n, l), dot(n, m))) * h) * i), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    k = l;\n"
        "    gl_Position = d * vec4(l + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e, f, g, h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * (clamp(0.5 - (((abs((length(k) - e) - f) - g) * h) * i), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform vec2 d, e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 A = a * d;\n"
        "    vec2 B = A + e;\n"
        "    vec2 C = ((((g * (B / g)) - h) / i) * j) + k;\n"
        "    w = m + (C * l);\n"
        "    x = C;\n"
        "    y = A;\n"
        "    gl_Position = f * vec4(B, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float q, r, s, t, u, v;\n"
        "\n"
        "uniform sampler2D z;\n"
        "\n"
        "varying vec2 w, x, y;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 A = (c ? vec4(float(0)) : texture2D(z, b ? (o + (fract(w) * n)) : x)) * p;\n"
        "    gl_FragColor = (vec4(A.xyz * A.w, A.w) * (clamp(0.5 - (((abs((length(y) - q) - r) - s) * t) * u), float(0), float(1)) * float(1))) * v;\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("z");
    ::STRINGS[103] = uString::Const("uniform float e, f, g, i;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (h * (clamp(0.5 - (((length(m) - e) * f) * g), float(0), float(1)) * clamp(0.5 - ((max(dot(m, j), max(dot(m, k), dot(m, l))) * f) * g), float(0), float(1)))) * i;\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform vec2 b, c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = a * b;\n"
        "    i = j;\n"
        "    gl_Position = d * vec4(j + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[105] = uString::Const("uniform float e, f, g;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 i;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = h * (clamp(0.5 - (((length(i) - e) * f) * g), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = p;\n"
        "    o = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(p, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float p = clamp(0.5 - (((abs((distance(n, o) - m) - h) - i) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = l * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = l * clamp(0.5 - (((abs((distance(n, o) - m) - h) - i) * j) * k), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    l = e[int(c)];\n"
        "    m = o;\n"
        "    n = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(o, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (j * clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float e[d], o;\n"
        "uniform vec2 f, h, i, j, n;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "float u(vec2 v, vec2 w, float x){\n"
        "    vec2 y = (v * h) - i;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 v = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = u(v / h, n, o);\n"
        "    r = v;\n"
        "    s = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(t, vec2(q, 0.5)) * clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform float h, i, k;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float l;\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float o = clamp(0.5 - (((distance(m, n) - l) * h) * i), float(0), float(1));\n"
        "    gl_FragColor = (j * (((o * o) * o) * ((o * ((o * float(6)) - float(15))) + float(10)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[114] = uString::Const("uniform float e[d], q;\n"
        "uniform vec2 f, h, i, j, p;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "float w(vec2 x, vec2 y, float z){\n"
        "    vec2 A = (x * h) - i;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - j.x) / j.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = w(x / h, p, q);\n"
        "    t = x;\n"
        "    u = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float x = clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * o;\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform float k, l, m, n, o;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * clamp(0.5 - (((abs((distance(t, u) - r) - k) - l) * m) * n), float(0), float(1))) * o;\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("uniform float k, l, m;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying float p, q;\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float v = clamp(0.5 - (((distance(r, s) - p) * k) * l), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(t, vec2(q, 0.5)) * (((v * v) * v) * ((v * ((v * float(6)) - float(15))) + float(10)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[118] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    k = e[int(c)];\n"
        "    l = n;\n"
        "    m = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(n, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j * clamp(0.5 - (((distance(l, m) - k) * h) * i), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("uniform float e[d];\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = q;\n"
        "    p = vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f;\n"
        "    gl_Position = g * vec4(q, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float h, i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (l * clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform float h, i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float q = clamp(0.5 - (((abs((distance(o, p) - n) - h) - i) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = (l * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("uniform float h, i;\n"
        "uniform vec4 j;\n"
        "\n"
        "varying float k;\n"
        "varying vec2 l, m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float n = clamp(0.5 - (((distance(l, m) - k) * h) * i), float(0), float(1));\n"
        "    gl_FragColor = j * (((n * n) * n) * ((n * ((n * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[124] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 C = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 D = ((((j * (C / j)) - k) / l) * m) + n;\n"
        "    w = g[int(c)];\n"
        "    x = p + (D * o);\n"
        "    y = D;\n"
        "    z = C;\n"
        "    A = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    gl_FragColor = (vec4(C.xyz * C.w, C.w) * clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1))) * v;\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("B");
    ::STRINGS[127] = uString::Const("uniform float g[d];\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 E = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 F = ((((j * (E / j)) - k) / l) * m) + n;\n"
        "    y = g[int(c)];\n"
        "    z = p + (F * o);\n"
        "    A = F;\n"
        "    B = E;\n"
        "    C = vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h;\n"
        "    gl_Position = i * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    float F = clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1));\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * (((F * F) * F) * ((F * ((F * float(6)) - float(15))) + float(10)))) * x;\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("D");
    ::STRINGS[130] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * clamp(0.5 - (((abs((distance(B, C) - y) - t) - u) * v) * w), float(0), float(1))) * x;\n"
        "}\n"
        "");
    ::STRINGS[131] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float t, u, v;\n"
        "\n"
        "uniform sampler2D B;\n"
        "\n"
        "varying float w;\n"
        "varying vec2 x, y, z, A;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 C = (f ? vec4(float(0)) : texture2D(B, e ? (r + (fract(x) * q)) : y)) * s;\n"
        "    float D = clamp(0.5 - (((distance(z, A) - w) * t) * u), float(0), float(1));\n"
        "    gl_FragColor = (vec4(C.xyz * C.w, C.w) * (((D * D) * D) * ((D * ((D * float(6)) - float(15))) + float(10)))) * v;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle08de7d46_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle0dcbf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle205f8541_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle3e0df8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle54d7f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle5628667c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle65ae6e77_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle663708ab_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle6b9cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle85b410a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle940fd686_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle940fd687_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circle9aeeb57e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleb380f1e1_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec306f9dc_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec38f9410_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlec977f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlee03cf8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb159f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb259f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circleecb759f0_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef701f8a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef84740e3_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Circlef8cfdb17_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle00651c5e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle00751c56_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle25324dea_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle3a9f3720_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle3d3bf019_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle45b4058e_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle45b40595_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle52a8d94f_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle656cd6a6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8b02eec5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangle8b02eec6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglea7edc285_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglecfed64b4_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangled051d7f6_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectangled051d7fd_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseDrawingPrimitives_bundle::Rectanglee7f706e3_, uFieldFlagsStatic);
    type->Reflection.SetFields(40,
        new uField("Circle08de7d46", 0),
        new uField("Circle0dcbf8a6", 1),
        new uField("Circle205f8541", 2),
        new uField("Circle3e0df8a6", 3),
        new uField("Circle54d7f8a6", 4),
        new uField("Circle5628667c", 5),
        new uField("Circle65ae6e77", 6),
        new uField("Circle663708ab", 7),
        new uField("Circle6b9cf8a6", 8),
        new uField("Circle85b410a6", 9),
        new uField("Circle940fd686", 10),
        new uField("Circle940fd687", 11),
        new uField("Circle9aeeb57e", 12),
        new uField("Circleb380f1e1", 13),
        new uField("Circlec306f9dc", 14),
        new uField("Circlec38f9410", 15),
        new uField("Circlec977f8a6", 16),
        new uField("Circlee03cf8a6", 17),
        new uField("Circleecb159f0", 18),
        new uField("Circleecb259f0", 19),
        new uField("Circleecb759f0", 20),
        new uField("Circlef701f8a6", 21),
        new uField("Circlef84740e3", 22),
        new uField("Circlef8cfdb17", 23),
        new uField("Rectangle00651c5e", 24),
        new uField("Rectangle00751c56", 25),
        new uField("Rectangle25324dea", 26),
        new uField("Rectangle3a9f3720", 27),
        new uField("Rectangle3d3bf019", 28),
        new uField("Rectangle45b4058e", 29),
        new uField("Rectangle45b40595", 30),
        new uField("Rectangle52a8d94f", 31),
        new uField("Rectangle656cd6a6", 32),
        new uField("Rectangle8b02eec5", 33),
        new uField("Rectangle8b02eec6", 34),
        new uField("Rectanglea7edc285", 35),
        new uField("Rectanglecfed64b4", 36),
        new uField("Rectangled051d7f6", 37),
        new uField("Rectangled051d7fd", 38),
        new uField("Rectanglee7f706e3", 39));
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 40;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle08de7d46_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0dcbf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle205f8541_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle3e0df8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle54d7f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5628667c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle65ae6e77_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle663708ab_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle6b9cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle85b410a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle940fd686_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle940fd687_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle9aeeb57e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleb380f1e1_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec306f9dc_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec38f9410_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlec977f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee03cf8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb159f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb259f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleecb759f0_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef701f8a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef84740e3_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef8cfdb17_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle00651c5e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle00751c56_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle25324dea_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle3a9f3720_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle3d3bf019_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle45b4058e_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle45b40595_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle52a8d94f_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle656cd6a6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8b02eec5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle8b02eec6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea7edc285_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglecfed64b4_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangled051d7f6_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangled051d7fd_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglee7f706e3_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Effects\0.47.7\.uno\package
// --------------------------------------------------------------------------------

// public static generated class FuseEffects_bundle :0
// {
// static FuseEffects_bundle() :0
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitterec98f148_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform mat...*/], ::STRINGS[133/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[11/*"h"*/]));
    FuseEffects_bundle::Blur289a5370_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[24/*"uniform mat...*/], ::STRINGS[25/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/]));
    FuseEffects_bundle::Desaturate1f514108_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[30/*"uniform mat...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[9/*"f"*/]));
    FuseEffects_bundle::Duotonef0ae9d3a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[132/*"uniform mat...*/], ::STRINGS[135/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[11/*"h"*/]));
    FuseEffects_bundle::EffectHelpers0ae20243_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[136/*"uniform vec...*/], ::STRINGS[137/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[18/*"m"*/]));
    FuseEffects_bundle::EffectHelpersa4726cf5_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[138/*"attribute v...*/], ::STRINGS[139/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[11/*"h"*/]));
    FuseEffects_bundle::EffectHelpersf4e3f746_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform vec...*/], ::STRINGS[141/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[23/*"t"*/]));
    FuseEffects_bundle::EffectHelpersf791727a_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[142/*"attribute v...*/], ::STRINGS[143/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::Halftone1ff68c3c_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[144/*"uniform mat...*/], ::STRINGS[145/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[22/*"q"*/]));
    FuseEffects_bundle::Mask85b813a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[147/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseEffects_bundle::Maske38913a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[148/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
    FuseEffects_bundle::Maskfa5313a2_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[149/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[132] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[133] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[24] = uString::Const("uniform mat4 c, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (c * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[25] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, d);\n"
        "}\n"
        "");
    ::STRINGS[30] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[134] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform vec3 c, d;\n"
        "uniform float e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 i = texture2D(h, g);\n"
        "    vec4 j = vec4(i.xyz / max(i.w, 1e-05), i.w);\n"
        "    gl_FragColor = vec4(mix(j.xyz, mix(c, d, sqrt(dot(j.xyz * j.xyz, vec3(0.299, 0.587, 0.114)))).xyz, e), j.w);\n"
        "}\n"
        "");
    ::STRINGS[136] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[138] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[140] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[23] = uString::Const("t");
    ::STRINGS[142] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[144] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[145] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[22] = uString::Const("q");
    ::STRINGS[146] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[147] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blitterec98f148_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Blur289a5370_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Desaturate1f514108_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Duotonef0ae9d3a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpers0ae20243_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersa4726cf5_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersf4e3f746_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::EffectHelpersf791727a_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Halftone1ff68c3c_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Mask85b813a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maske38913a2_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseEffects_bundle::Maskfa5313a2_, uFieldFlagsStatic);
    type->Reflection.SetFields(12,
        new uField("Blitterec98f148", 0),
        new uField("Blur289a5370", 1),
        new uField("Desaturate1f514108", 2),
        new uField("Duotonef0ae9d3a", 3),
        new uField("EffectHelpers0ae20243", 4),
        new uField("EffectHelpersa4726cf5", 5),
        new uField("EffectHelpersf4e3f746", 6),
        new uField("EffectHelpersf791727a", 7),
        new uField("Halftone1ff68c3c", 8),
        new uField("Mask85b813a2", 9),
        new uField("Maske38913a2", 10),
        new uField("Maskfa5313a2", 11));
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blitterec98f148_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Blur289a5370_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate1f514108_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Duotonef0ae9d3a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers0ae20243_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersa4726cf5_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersf4e3f746_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpersf791727a_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Halftone1ff68c3c_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Mask85b813a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maske38913a2_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseEffects_bundle::Maskfa5313a2_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Elements\0.47.7\.uno\package
// ---------------------------------------------------------------------------------

// public static generated class FuseElements_bundle :0
// {
// static FuseElements_bundle() :0
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::CacheHelper6627cb47_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[150/*"uniform vec...*/], ::STRINGS[151/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[10/*"g"*/]));
    FuseElements_bundle::ElementBatch2ee7bdf7_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform mat...*/], ::STRINGS[153/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[9/*"f"*/]));
    FuseElements_bundle::ElementDraw14d18f42_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
    FuseElements_bundle::RepeatBaker259b1803_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform vec...*/], ::STRINGS[155/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[8/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle12a651af_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[156/*"uniform flo...*/], ::STRINGS[157/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[10/*"g"*/], ::STRINGS[11/*"h"*/], ::STRINGS[12/*"i"*/], ::STRINGS[13/*"j"*/], ::STRINGS[17/*"k"*/], ::STRINGS[14/*"l"*/], ::STRINGS[18/*"m"*/], ::STRINGS[19/*"n"*/], ::STRINGS[20/*"o"*/], ::STRINGS[21/*"p"*/], ::STRINGS[56/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[150] = uString::Const("uniform vec2 b;\n"
        "uniform mat4 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = vec2(a.x, 1.0 - a.y);\n"
        "    gl_Position = d * (c * vec4(a * b, float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("uniform float e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = vec4(h.xyz * e, h.w * e);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[10] = uString::Const("g");
    ::STRINGS[152] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[153] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[0] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::STRINGS[154] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = (a * b) / c;\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[155] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, fract(d));\n"
        "}\n"
        "");
    ::STRINGS[156] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[157] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[11] = uString::Const("h");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[13] = uString::Const("j");
    ::STRINGS[17] = uString::Const("k");
    ::STRINGS[14] = uString::Const("l");
    ::STRINGS[18] = uString::Const("m");
    ::STRINGS[19] = uString::Const("n");
    ::STRINGS[20] = uString::Const("o");
    ::STRINGS[21] = uString::Const("p");
    ::STRINGS[56] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::CacheHelper6627cb47_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementBatch2ee7bdf7_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::ElementDraw14d18f42_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::RepeatBaker259b1803_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseElements_bundle::Scale9Rectangle12a651af_, uFieldFlagsStatic);
    type->Reflection.SetFields(5,
        new uField("CacheHelper6627cb47", 0),
        new uField("ElementBatch2ee7bdf7", 1),
        new uField("ElementDraw14d18f42", 2),
        new uField("RepeatBaker259b1803", 3),
        new uField("Scale9Rectangle12a651af", 4));
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::CacheHelper6627cb47_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementBatch2ee7bdf7_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::ElementDraw14d18f42_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker259b1803_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle12a651af_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Nodes\0.47.7\.uno\package
// ------------------------------------------------------------------------------

// public static generated class FuseNodes_bundle :0
// {
// static FuseNodes_bundle() :0
static void FuseNodes_bundle__cctor__fn(uType* __type)
{
    FuseNodes_bundle::DrawHelpers53a11bf4_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[158/*"uniform vec...*/], ::STRINGS[159/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/]));
}

static void FuseNodes_bundle_build(uType* type)
{
    ::STRINGS[158] = uString::Const("uniform vec2 c, b;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = d * vec4(c + (a * b), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[159] = uString::Const("uniform vec4 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = e;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseNodes_bundle::DrawHelpers53a11bf4_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("DrawHelpers53a11bf4", 0));
}

uClassType* FuseNodes_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseNodes_bundle", options);
    type->fp_build_ = FuseNodes_bundle_build;
    type->fp_cctor_ = FuseNodes_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseNodes_bundle::DrawHelpers53a11bf4_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Reactive.JavaScript\0.47.7\.uno\package
// --------------------------------------------------------------------------------------------

// public static generated class FuseReactiveJavaScript_bundle :0
// {
// static FuseReactiveJavaScript_bundle() :0
static void FuseReactiveJavaScript_bundle__cctor__fn(uType* __type)
{
    FuseReactiveJavaScript_bundle::Diagnostics9ff1c38b_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[160/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[161/*"diagnostics...*/]);
    FuseReactiveJavaScript_bundle::es6promisemin3716a881_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[160/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[162/*"es6-promise...*/]);
    FuseReactiveJavaScript_bundle::Observableff67834e_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[160/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[163/*"observable-...*/]);
    FuseReactiveJavaScript_bundle::setTimeoutb974978c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[160/*"Fuse.Reacti...*/]))->GetFile(::STRINGS[164/*"settimeout-...*/]);
}

static void FuseReactiveJavaScript_bundle_build(uType* type)
{
    ::STRINGS[160] = uString::Const("Fuse.Reactive.JavaScript");
    ::STRINGS[161] = uString::Const("diagnostics-d4e0f048.js");
    ::STRINGS[162] = uString::Const("es6-promise.min-2f37680e.js");
    ::STRINGS[163] = uString::Const("observable-939c44fe.js");
    ::STRINGS[164] = uString::Const("settimeout-d1321edb.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Diagnostics9ff1c38b_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::es6promisemin3716a881_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::Observableff67834e_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::FuseReactiveJavaScript_bundle::setTimeoutb974978c_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("Diagnostics9ff1c38b", 0),
        new uField("es6promisemin3716a881", 1),
        new uField("Observableff67834e", 2),
        new uField("setTimeoutb974978c", 3));
}

uClassType* FuseReactiveJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseReactiveJavaScript_bundle", options);
    type->fp_build_ = FuseReactiveJavaScript_bundle_build;
    type->fp_cctor_ = FuseReactiveJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Diagnostics9ff1c38b_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::es6promisemin3716a881_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::Observableff67834e_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseReactiveJavaScript_bundle::setTimeoutb974978c_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Text\0.47.7\.uno\package
// -----------------------------------------------------------------------------

// public static generated class FuseText_bundle :0
// {
// static FuseText_bundle() :0
static void FuseText_bundle__cctor__fn(uType* __type)
{
    FuseText_bundle::Rendererf7d1bb01_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[165/*"uniform mat...*/], ::STRINGS[166/*"uniform vec...*/], 1, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 6, ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[10/*"g"*/]));
}

static void FuseText_bundle_build(uType* type)
{
    ::STRINGS[165] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[166] = uString::Const("uniform vec4 e;\n"
        "\n"
        "uniform sampler2D g;\n"
        "\n"
        "varying vec2 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 h = texture2D(g, f);\n"
        "    gl_FragColor = c ? (e * vec4(h.x)) : h;\n"
        "}\n"
        "");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[10] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::FuseText_bundle::Rendererf7d1bb01_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Rendererf7d1bb01", 0));
}

uClassType* FuseText_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseText_bundle", options);
    type->fp_build_ = FuseText_bundle_build;
    type->fp_cctor_ = FuseText_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> FuseText_bundle::Rendererf7d1bb01_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class HashableWeakReference :2092
// {
static void HashableWeakReference_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::HashableWeakReference, _reference), 0);
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)HashableWeakReference__New1_fn, 0, true, type, 1, ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL)),
        new uFunction("TryGetTarget", NULL, (void*)HashableWeakReference__TryGetTarget_fn, 0, false, ::g::Uno::Bool_typeof(), 1, uObject_typeof()->ByRef()));
}

uType* HashableWeakReference_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(HashableWeakReference);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("HashableWeakReference", options);
    type->fp_build_ = HashableWeakReference_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))HashableWeakReference__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))HashableWeakReference__GetHashCode_fn;
    return type;
}

// public HashableWeakReference(Uno.WeakReference<object> reference) :2095
void HashableWeakReference__ctor__fn(HashableWeakReference* __this, ::g::Uno::WeakReference* reference)
{
    __this->ctor_(reference);
}

// public override sealed bool Equals(object that) :2114
void HashableWeakReference__Equals_fn(HashableWeakReference* __this, uObject* that, bool* __retval)
{
    uStackFrame __("HashableWeakReference", "Equals(object)");

    if (::g::Uno::Object::ReferenceEquals(__this, that))
        return *__retval = true, void();

    uObject* a = NULL;
    uObject* b = NULL;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&a)))
        return *__retval = false, void();

    if (!uIs(that, __this->__type) || !uPtr(uPtr(uCast<HashableWeakReference*>(that, __this->__type))->_reference)->TryGetTarget((uObject**)(&b)))
        return *__retval = false, void();

    return *__retval = ::g::Uno::Object::Equals(uPtr(a), b), void();
}

// public override sealed int GetHashCode() :2105
void HashableWeakReference__GetHashCode_fn(HashableWeakReference* __this, int* __retval)
{
    uStackFrame __("HashableWeakReference", "GetHashCode()");
    uObject* obj;

    if (!uPtr(__this->_reference)->TryGetTarget((uObject**)(&obj)))
        return *__retval = 0, void();

    return *__retval = ::g::Uno::Object::GetHashCode(uPtr(obj)), void();
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) :2095
void HashableWeakReference__New1_fn(::g::Uno::WeakReference* reference, HashableWeakReference** __retval)
{
    *__retval = HashableWeakReference::New1(reference);
}

// public bool TryGetTarget(object& obj) :2100
void HashableWeakReference__TryGetTarget_fn(HashableWeakReference* __this, uObject** obj, bool* __retval)
{
    *__retval = __this->TryGetTarget(obj);
}

// public HashableWeakReference(Uno.WeakReference<object> reference) [instance] :2095
void HashableWeakReference::ctor_(::g::Uno::WeakReference* reference)
{
    _reference = reference;
}

// public bool TryGetTarget(object& obj) [instance] :2100
bool HashableWeakReference::TryGetTarget(uObject** obj)
{
    uStackFrame __("HashableWeakReference", "TryGetTarget(object&)");
    return uPtr(_reference)->TryGetTarget((uObject**)obj);
}

// public HashableWeakReference New(Uno.WeakReference<object> reference) [static] :2095
HashableWeakReference* HashableWeakReference::New1(::g::Uno::WeakReference* reference)
{
    HashableWeakReference* obj1 = (HashableWeakReference*)uNew(HashableWeakReference_typeof());
    obj1->ctor_(reference);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor :285
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor() :285
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[167/*"FillColor"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor_build(uType* type)
{
    ::STRINGS[167] = uString::Const("FillColor");
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor() :285
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :291
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->FillColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :288
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor New() :285
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :290
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :292
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetFillColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :293
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor() [instance] :285
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor New() [static] :285
OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_FillColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message :265
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message() :265
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[168/*"Message"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message_build(uType* type)
{
    ::STRINGS[168] = uString::Const("Message");
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    ::TYPES[4] = ::g::Uno::String_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message() :265
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :271
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->Message(), void();
}

// public override sealed Uno.UX.Selector get_Name() :268
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message New() :265
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::New1();
}

// public override sealed Uno.Type get_PropertyType() :270
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this, uType** __retval)
{
    return *__retval = ::TYPES[4/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :272
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetMessage(uCast<uString*>(v, ::TYPES[4/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :273
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message() [instance] :265
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message New() [static] :265
OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_Message_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo :275
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo() :275
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[169/*"ShowMonitor...*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo_build(uType* type)
{
    ::STRINGS[169] = uString::Const("ShowMonitorInfo");
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo() :275
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :281
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->ShowMonitorInfo()), void();
}

// public override sealed Uno.UX.Selector get_Name() :278
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo New() :275
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::New1();
}

// public override sealed Uno.Type get_PropertyType() :280
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :282
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetShowMonitorInfo(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :283
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo() [instance] :275
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo New() [static] :275
OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_ShowMonitorInfo_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor :295
// {
// static OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor() :295
static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::Singleton_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::New1();
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[170/*"StrokeColor"*/]);
}

static void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor_build(uType* type)
{
    ::STRINGS[170] = uString::Const("StrokeColor");
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    ::TYPES[5] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor", options);
    type->fp_build_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor_build;
    type->fp_ctor_ = (void*)OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__New1_fn;
    type->fp_cctor_ = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor() :295
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__ctor_1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :301
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__GetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->StrokeColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :298
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_Name_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::_name(), void();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor New() :295
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__New1_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor** __retval)
{
    *__retval = OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :300
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_PropertyType_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :302
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__SetAsObject_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetStrokeColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :303
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::Singleton_;

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor() [instance] :295
void OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::ctor_1()
{
    ctor_();
}

// public generated OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor New() [static] :295
OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor::New1()
{
    OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor* obj1 = (OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor*)uNew(OutracksSimulatorClientUno_accessor_Outracks_Simulator_ErrorToast_StrokeColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\package
// --------------------------------------------------------------------------------------------------------------------------

// public static generated class OutracksSimulatorClientUno_bundle :0
// {
// static OutracksSimulatorClientUno_bundle() :0
static void OutracksSimulatorClientUno_bundle__cctor__fn(uType* __type)
{
    OutracksSimulatorClientUno_bundle::fightb50376a4_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[171/*"Outracks.Si...*/]))->GetFile(::STRINGS[172/*"fight-8c16f...*/]);
}

static void OutracksSimulatorClientUno_bundle_build(uType* type)
{
    ::STRINGS[171] = uString::Const("Outracks.Simulator.Client.Uno");
    ::STRINGS[172] = uString::Const("fight-8c16f395.png");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::OutracksSimulatorClientUno_bundle::fightb50376a4_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("fightb50376a4", 0));
}

uClassType* OutracksSimulatorClientUno_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("OutracksSimulatorClientUno_bundle", options);
    type->fp_build_ = OutracksSimulatorClientUno_bundle_build;
    type->fp_cctor_ = OutracksSimulatorClientUno_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> OutracksSimulatorClientUno_bundle::fightb50376a4_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsShape_Color_Property :331
// {
static void OutracksSimulatorClientUno_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(::g::OutracksSimulatorClientUno_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) :334
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :336
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Get1_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) :334
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsShape_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :335
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :337
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__Set1_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsShape_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :338
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance] :334
void OutracksSimulatorClientUno_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static] :334
OutracksSimulatorClientUno_FuseControlsShape_Color_Property* OutracksSimulatorClientUno_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsShape_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsShape_Color_Property*)uNew(OutracksSimulatorClientUno_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property :305
// {
static void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[7] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[7/*Fuse.Controls.TextControl*/], offsetof(::g::OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :308
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :310
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Get1_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :308
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :309
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :311
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__Set1_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[7/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :312
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :308
void OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :308
OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property*)uNew(OutracksSimulatorClientUno_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property :340
// {
static void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.Stroke*/], offsetof(::g::OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :343
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :345
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Get1_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :343
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :344
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_Object_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :346
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__Set1_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[9/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :347
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :343
void OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :343
OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property* obj1 = (OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property*)uNew(OutracksSimulatorClientUno_FuseDrawingStroke_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property :322
// {
static void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Elements.Element*/], offsetof(::g::OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) :325
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :327
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Get1_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) :325
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :326
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_Object_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :328
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__Set1_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property", "Set(Uno.UX.PropertyObject,float,Uno.UX.IPropertyListener)");
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[11/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :329
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance] :325
void OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static] :325
OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property* obj1 = (OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property*)uNew(OutracksSimulatorClientUno_FuseElementsElement_Opacity_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property :314
// {
static void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[15] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[15/*Fuse.Triggers.WhileBool*/], offsetof(::g::OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :317
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__ctor_3_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :319
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Get1_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :317
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :318
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__get_Object_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :320
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property__Set1_fn(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[15/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :317
void OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :317
OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property* obj1 = (OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property*)uNew(OutracksSimulatorClientUno_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property :358
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Outracks.Simulator.ErrorToast*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :361
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :363
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->FillColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :361
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :362
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :364
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetFillColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :365
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :361
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::ctor_3(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :361
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_FillColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property :349
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Outracks.Simulator.ErrorToast*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :352
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :354
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->Message(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :352
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :353
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :355
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetMessage(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :356
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :352
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::ctor_3(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :352
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_Message_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property :376
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Outracks.Simulator.ErrorToast*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :379
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :381
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->ShowMonitorInfo(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :379
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :380
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :382
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetShowMonitorInfo(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :383
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :379
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::ctor_3(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :379
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_ShowMonitorInfo_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\.uno\ux11\$.uno
// -----------------------------------------------------------------------------------------------------------------------------

// internal sealed class OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property :367
// {
static void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build(uType* type)
{
    ::TYPES[16] = ::g::Outracks::Simulator::ErrorToast_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[16/*Outracks.Simulator.ErrorToast*/], offsetof(::g::OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", options);
    type->fp_build_ = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :370
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__ctor_3_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :372
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Get1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->StrokeColor(), void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) :370
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__New1_fn(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector* name, OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property** __retval)
{
    *__retval = OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :371
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_Object_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :373
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__Set1_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Outracks::Simulator::ErrorToast*>(obj, ::TYPES[16/*Outracks.Simulator.ErrorToast*/]))->SetStrokeColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :374
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property__get_SupportsOriginSetter_fn(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [instance] :370
void OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::ctor_3(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property New(Outracks.Simulator.ErrorToast obj, Uno.UX.Selector name) [static] :370
OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property::New1(::g::Outracks::Simulator::ErrorToast* obj, ::g::Uno::UX::Selector name)
{
    OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property* obj1 = (OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property*)uNew(OutracksSimulatorClientUno_OutracksSimulatorErrorToast_StrokeColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// C:\Users\marti\AppData\Local\Fusetools\Packages\UnoCore\0.47.13\.uno\package
// ----------------------------------------------------------------------------

// public static generated class UnoCore_bundle :0
// {
// static UnoCore_bundle() :0
static void UnoCore_bundle__cctor__fn(uType* __type)
{
    UnoCore_bundle::SdfFontShadere233cf94_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[173/*"uniform mat...*/], ::STRINGS[174/*"uniform flo...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[8/*"e"*/], ::STRINGS[9/*"f"*/], ::STRINGS[12/*"i"*/]));
    UnoCore_bundle::SpriteFontShaderf6f3aa43_ = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram::Create(::STRINGS[175/*"uniform mat...*/], ::STRINGS[176/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[10/*"g"*/]));
}

static void UnoCore_bundle_build(uType* type)
{
    ::STRINGS[173] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, b;\n"
        "attribute vec4 c;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = b;\n"
        "    h = c;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[174] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D i;\n"
        "\n"
        "varying vec2 g;\n"
        "varying vec4 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float j = smoothstep(e, f, texture2D(i, g).x);\n"
        "    if (j < 0.15) discard;\n"
        "    gl_FragColor = h * vec4(float(1), float(1), float(1), j);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[8] = uString::Const("e");
    ::STRINGS[9] = uString::Const("f");
    ::STRINGS[12] = uString::Const("i");
    ::STRINGS[175] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[176] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SdfFontShadere233cf94_, uFieldFlagsStatic,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram_typeof(), (uintptr_t)&::g::UnoCore_bundle::SpriteFontShaderf6f3aa43_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("SdfFontShadere233cf94", 0),
        new uField("SpriteFontShaderf6f3aa43", 1));
}

uClassType* UnoCore_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoCore_bundle", options);
    type->fp_build_ = UnoCore_bundle_build;
    type->fp_cctor_ = UnoCore_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SdfFontShadere233cf94_;
uSStrong< ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLProgram*> UnoCore_bundle::SpriteFontShaderf6f3aa43_;
// }

// C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\Packages\Outracks.Simulator.Client.Uno\0.1.0\$.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class WeakDictionary<TKey, TValue> :2129
// {
static void WeakDictionary_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Collections::Dictionary_typeof();
    ::TYPES[18] = ::g::Uno::WeakReference_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetPrecalc(
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL),
        type->T(1));
    type->SetFields(0,
        ::TYPES[17/*Uno.Collections.Dictionary`2*/]->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL), offsetof(::g::WeakDictionary, _dictionary), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("AsEnumerable", NULL, (void*)WeakDictionary__AsEnumerable_fn, 0, false, ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::HashableWeakReference_typeof(), type->T(1), NULL), NULL), 0),
        new uFunction("Clear", NULL, (void*)WeakDictionary__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Item", NULL, (void*)WeakDictionary__get_Item_fn, 0, false, type->T(1), 1, type->T(0)),
        new uFunction("set_Item", NULL, (void*)WeakDictionary__set_Item_fn, 0, false, uVoid_typeof(), 2, type->T(0), type->T(1)),
        new uFunction(".ctor", type, (void*)WeakDictionary__New1_fn, 0, true, type, 0),
        new uFunction("Remove", NULL, (void*)WeakDictionary__Remove_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::HashableWeakReference_typeof()),
        new uFunction("TryGetValue", NULL, (void*)WeakDictionary__TryGetValue_fn, 0, false, ::g::Uno::Bool_typeof(), 2, type->T(0), type->T(1)->ByRef()));
}

uType* WeakDictionary_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 2;
    options.PrecalcCount = 2;
    options.ObjectSize = sizeof(WeakDictionary);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("WeakDictionary`2", options);
    type->fp_build_ = WeakDictionary_build;
    type->fp_ctor_ = (void*)WeakDictionary__New1_fn;
    return type;
}

// public generated WeakDictionary() :2129
void WeakDictionary__ctor__fn(WeakDictionary* __this)
{
    __this->ctor_();
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() :2133
void WeakDictionary__AsEnumerable_fn(WeakDictionary* __this, uObject** __retval)
{
    *__retval = __this->AsEnumerable();
}

// public void Clear() :2138
void WeakDictionary__Clear_fn(WeakDictionary* __this)
{
    __this->Clear();
}

// private static HashableWeakReference GetKey(TKey obj) :2159
void WeakDictionary__GetKey_fn(uType* __type, void* obj, ::g::HashableWeakReference** __retval)
{
    return *__retval = ::g::HashableWeakReference::New1((::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[18/*Uno.WeakReference<object>*/], uBoxPtr(__type->T(0), obj))), void();
}

// public TValue get_Item(TKey key) :2155
void WeakDictionary__get_Item_fn(WeakDictionary* __this, void* key, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(1/*TValue*/),
    };
    uStackFrame __("WeakDictionary`2", "get_Item(TKey)");
    uT ret5(__types[0], U_ALLOCA(__types[0]->ValueSize));
    ::g::HashableWeakReference* ret6;
    return __retval.Store((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret6), ret6), &ret5), ret5)), void();
}

// public void set_Item(TKey key, TValue value) :2156
void WeakDictionary__set_Item_fn(WeakDictionary* __this, void* key, void* value)
{
    uStackFrame __("WeakDictionary`2", "set_Item(TKey,TValue)");
    ::g::HashableWeakReference* ret7;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret7), ret7), value);
}

// public generated WeakDictionary New() :2129
void WeakDictionary__New1_fn(uType* __type, WeakDictionary** __retval)
{
    *__retval = WeakDictionary::New1(__type);
}

// public bool Remove(HashableWeakReference key) :2148
void WeakDictionary__Remove_fn(WeakDictionary* __this, ::g::HashableWeakReference* key, bool* __retval)
{
    *__retval = __this->Remove(key);
}

// public bool TryGetValue(TKey key, TValue& value) :2143
void WeakDictionary__TryGetValue_fn(WeakDictionary* __this, void* key, uTRef value, bool* __retval)
{
    uStackFrame __("WeakDictionary`2", "TryGetValue(TKey,TValue&)");
    bool ret3;
    ::g::HashableWeakReference* ret4;
    return *__retval = (::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_dictionary), (WeakDictionary__GetKey_fn(__this->__type, key, &ret4), ret4), value, &ret3), ret3), void();
}

// public generated WeakDictionary() [instance] :2129
void WeakDictionary::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.Dictionary<HashableWeakReference, TValue>*/),
    };
    _dictionary = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(__types[0]));
}

// public Uno.Collections.IEnumerable<Uno.Collections.KeyValuePair<HashableWeakReference, TValue>> AsEnumerable() [instance] :2133
uObject* WeakDictionary::AsEnumerable()
{
    uStackFrame __("WeakDictionary`2", "AsEnumerable()");
    return (uObject*)_dictionary;
}

// public void Clear() [instance] :2138
void WeakDictionary::Clear()
{
    uStackFrame __("WeakDictionary`2", "Clear()");
    uPtr(_dictionary)->Clear();
}

// public bool Remove(HashableWeakReference key) [instance] :2148
bool WeakDictionary::Remove(::g::HashableWeakReference* key)
{
    uStackFrame __("WeakDictionary`2", "Remove(HashableWeakReference)");
    bool ret2;
    return (::g::Uno::Collections::Dictionary__Remove_fn(uPtr(_dictionary), key, &ret2), ret2);
}

// public generated WeakDictionary New() [static] :2129
WeakDictionary* WeakDictionary::New1(uType* __type)
{
    WeakDictionary* obj1 = (WeakDictionary*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

} // ::g
