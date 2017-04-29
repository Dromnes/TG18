// This file was generated based on '../../../Packages/Fuse.Drawing.Polygons/0.47.7/meshes/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Tesselat-730395ed.h>
#include <Fuse.Drawing.Tesselat-fd70c210.h>
#include <Uno.Collections.IEnumerable-1.h>
namespace g{namespace Fuse{namespace Drawing{namespace Tesselation{struct EdgesEnumerable;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Tesselation{

// internal sealed class EdgesEnumerable :611
// {
::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable_type* EdgesEnumerable_typeof();
void EdgesEnumerable__ctor_1_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* head);
void EdgesEnumerable__GetNext_fn(EdgesEnumerable* __this, ::g::Fuse::Drawing::Tesselation::HalfEdge* v, ::g::Fuse::Drawing::Tesselation::HalfEdge** __retval);
void EdgesEnumerable__New1_fn(::g::Fuse::Drawing::Tesselation::HalfEdge* head, EdgesEnumerable** __retval);

struct EdgesEnumerable : ::g::Fuse::Drawing::Tesselation::Collections::LinkedListEnumerable
{
    uStrong< ::g::Fuse::Drawing::Tesselation::HalfEdge*> _head;

    void ctor_1(::g::Fuse::Drawing::Tesselation::HalfEdge* head);
    static EdgesEnumerable* New1(::g::Fuse::Drawing::Tesselation::HalfEdge* head);
};
// }

}}}} // ::g::Fuse::Drawing::Tesselation
