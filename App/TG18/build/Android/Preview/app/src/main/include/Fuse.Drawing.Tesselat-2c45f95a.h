// This file was generated based on '../../../Packages/Fuse.Drawing.Polygons/0.47.7/collections/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselat-d5e92693.h>
#include <Fuse.Drawing.Tesselat-f9156882.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{namespace Collections{struct VertexQueue;}}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{
namespace Collections{

// internal sealed class VertexQueue :482
// {
::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue_type* VertexQueue_typeof();
void VertexQueue__ctor_1_fn(VertexQueue* __this);
void VertexQueue__Leq1_fn(VertexQueue* __this, ::g::Fuse::Drawing::Tesselation::Vertex* a, ::g::Fuse::Drawing::Tesselation::Vertex* b, bool* __retval);
void VertexQueue__New1_fn(VertexQueue** __retval);

struct VertexQueue : ::g::Fuse::Drawing::Tesselation::Collections::PriorityQueue
{
    void ctor_1();
    static VertexQueue* New1();
};
// }

}}}}} // ::g::Fuse::Drawing::Tesselation::Collections
