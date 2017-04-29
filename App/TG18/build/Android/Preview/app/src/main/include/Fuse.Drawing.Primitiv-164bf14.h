// This file was generated based on '../../../Packages/Fuse.Drawing.Primitives/0.47.7/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Primitiv-aa258e11.h>
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// internal sealed class StrokeCoverage :210
// {
uType* StrokeCoverage_typeof();
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this);
void StrokeCoverage__New1_fn(StrokeCoverage** __retval);

struct StrokeCoverage : ::g::Fuse::Drawing::Primitives::Coverage
{
    float Center;
    float Radius;

    void ctor_1();
    static StrokeCoverage* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
