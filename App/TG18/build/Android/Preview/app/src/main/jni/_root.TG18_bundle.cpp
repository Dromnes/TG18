// This file was generated based on D:/TG18/TG18_code/App/TG18/TG18.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.TG18_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[2];

namespace g{

// public static generated class TG18_bundle :0
// {
// static TG18_bundle() :0
static void TG18_bundle__cctor__fn(uType* __type)
{
    TG18_bundle::Built628a32b2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"TG18"*/]))->GetFile(::STRINGS[1/*"built-bd5db...*/]);
}

static void TG18_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TG18");
    ::STRINGS[1] = uString::Const("built-bd5dbbbb.ttf");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::TG18_bundle::Built628a32b2_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Built628a32b2", 0));
}

uClassType* TG18_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("TG18_bundle", options);
    type->fp_build_ = TG18_bundle_build;
    type->fp_cctor_ = TG18_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> TG18_bundle::Built628a32b2_;
// }

} // ::g
