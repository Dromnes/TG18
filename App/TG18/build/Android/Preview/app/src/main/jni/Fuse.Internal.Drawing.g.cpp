// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-7451141e.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing-7b3f23a7.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-c05daa33.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Runtime.Implement-4541d9a7.h>
#include <Uno.Runtime.Implement-f3527fda.h>
#include <Uno.Vector.h>
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// C:\Users\marti\AppData\Local\Fusetools\Packages\Fuse.Controls\0.47.7\$.uno
// --------------------------------------------------------------------------

// internal sealed class SolidRectangle :118
// {
// static SolidRectangle() :118
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

static void SolidRectangle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[5] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c930343d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c951343d), 0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, _draw_c993343d), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_LocalTransform_c993343d_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c8ee343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c930343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c951343d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Internal::Drawing::SolidRectangle, DrawElement_VertexData_c993343d_7_2_1), 0,
        type, (uintptr_t)&::g::Fuse::Internal::Drawing::SolidRectangle::Impl_, uFieldFlagsStatic);
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_build_ = SolidRectangle_build;
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    return type;
}

// public generated SolidRectangle() :118
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) :122
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls() :118
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New() :118
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance] :118
void SolidRectangle::ctor_()
{
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance] :122
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "DrawElement(Fuse.DrawContext,Fuse.Elements.Element,Fuse.Drawing.Brush,float)");
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;

    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c993343d_4_9_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_c993343d_16_8_9 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_c993343d.BlendEnabled(true);
        _draw_c993343d.DepthTestEnabled(false);
        _draw_c993343d.CullFace(uPtr(dc)->CullFace());
        _draw_c993343d.BlendSrcAlpha(7);
        _draw_c993343d.BlendDstRgb(3);
        _draw_c993343d.Const(0, DP_c993343d_16_8_9.NeedFract);
        _draw_c993343d.Const(1, DP_c993343d_16_8_9.Texture == NULL);
        _draw_c993343d.Use();
        _draw_c993343d.Attrib1(2, 2, DrawElement_VertexData_c993343d_7_2_1, 8, 0);
        _draw_c993343d.Uniform12(3, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c993343d.Uniform2(4, uPtr(element)->ActualSize());
        _draw_c993343d.Uniform2(5, DP_c993343d_16_8_9.Origin);
        _draw_c993343d.Uniform2(6, DP_c993343d_16_8_9.Size);
        _draw_c993343d.Uniform2(7, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_c993343d_16_8_9.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_c993343d_16_8_9.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_c993343d.Uniform2(8, (ind3 = DP_c993343d_16_8_9.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_c993343d.Uniform2(9, DP_c993343d_16_8_9.TexCoordScale1);
        _draw_c993343d.Uniform2(10, DP_c993343d_16_8_9.TexCoordBias1);
        _draw_c993343d.Uniform2(11, DP_c993343d_16_8_9.TexCoordScale2);
        _draw_c993343d.Uniform2(12, DP_c993343d_16_8_9.TexCoordBias2);
        _draw_c993343d.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_c993343d.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_c993343d.Uniform(15, opacity);
        _draw_c993343d.Uniform12(16, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c993343d_4_9_5, element->WorldTransform()) : LocalTransform_c993343d_4_9_5);
        _draw_c993343d.Sampler3(17, DP_c993343d_16_8_9.Texture, DP_c993343d_16_8_9.SamplerState);
        _draw_c993343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c930343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        _draw_c930343d.BlendEnabled(true);
        _draw_c930343d.DepthTestEnabled(false);
        _draw_c930343d.CullFace(uPtr(dc)->CullFace());
        _draw_c930343d.BlendSrcAlpha(7);
        _draw_c930343d.BlendDstRgb(3);
        _draw_c930343d.Use();
        _draw_c930343d.Attrib1(0, 2, DrawElement_VertexData_c930343d_7_2_1, 8, 0);
        _draw_c930343d.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c930343d.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_c930343d.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c930343d_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_c930343d_4_9_2);
        _draw_c930343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c951343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        ::g::Uno::Float2 angleSlope_c951343d_16_20_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Angle()), ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        float angleLen_c951343d_16_19_9 = ::g::Uno::Math::Abs1(element->ActualSize().X * ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Angle())) + ::g::Uno::Math::Abs1(element->ActualSize().Y * ::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Angle()));
        _draw_c951343d.BlendEnabled(true);
        _draw_c951343d.DepthTestEnabled(false);
        _draw_c951343d.CullFace(uPtr(dc)->CullFace());
        _draw_c951343d.BlendSrcAlpha(7);
        _draw_c951343d.BlendDstRgb(3);
        _draw_c951343d.Use();
        _draw_c951343d.Attrib1(0, 2, DrawElement_VertexData_c951343d_7_2_1, 8, 0);
        _draw_c951343d.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c951343d.Uniform2(2, uPtr(element)->ActualSize());
        _draw_c951343d.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(element->ActualSize(), 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope_c951343d_16_20_8, angleLen_c951343d_16_19_9), 2.0f)) : ::g::Uno::Float2__op_Multiply2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->StartPoint(), element->ActualSize()));
        _draw_c951343d.Uniform2(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_c951343d.Uniform(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_c951343d.Uniform(6, opacity);
        _draw_c951343d.Uniform12(7, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c951343d_4_9_2, element->WorldTransform()) : LocalTransform_c951343d_4_9_2);
        _draw_c951343d.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleSlope_c951343d_16_20_8 : ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_c951343d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->HasAngle() ? angleLen_c951343d_16_19_9 : ::g::Uno::Vector::Length(::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Subtraction2(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->EndPoint(), uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->StartPoint()), element->ActualSize())));
        _draw_c951343d.Sampler3(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        _draw_c951343d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_c8ee343d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_c993343d_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_c993343d_4_9_3, DrawElement_LocalTransform_c993343d_4_9_4);
        _draw_c930343d.BlendEnabled(true);
        _draw_c930343d.DepthTestEnabled(false);
        _draw_c930343d.CullFace(uPtr(dc)->CullFace());
        _draw_c930343d.BlendSrcAlpha(7);
        _draw_c930343d.BlendDstRgb(3);
        _draw_c930343d.Use();
        _draw_c930343d.Attrib1(0, 2, DrawElement_VertexData_c8ee343d_7_2_1, 8, 0);
        _draw_c930343d.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_c930343d.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind5 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind5.X, ind5.Y, ind5.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[4/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_c930343d.Uniform12(3, (element != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_c8ee343d_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_c8ee343d_4_9_2);
        _draw_c930343d.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance] :118
void SolidRectangle::init_DrawCalls()
{
    uStackFrame __("Fuse.Internal.Drawing.SolidRectangle", "init_DrawCalls()");
    uArray* Vertices_c993343d_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[5/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_c993343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_LocalTransform_c993343d_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_c993343d_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_c993343d_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_c930343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_VertexData_c951343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    DrawElement_VertexData_c8ee343d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_c993343d_7_1_0), 0);
    _draw_c993343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5953675f());
    _draw_c930343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5950675f());
    _draw_c951343d = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle5951675f());
}

// public generated SolidRectangle New() [static] :118
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj6 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj6->ctor_();
    return obj6;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
