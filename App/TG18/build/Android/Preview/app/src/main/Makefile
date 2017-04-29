# This file was generated based on '../../../Packages/UnoCore/0.47.13/targets/android/app/src/main/Makefile'.
# WARNING: Changes might be lost if you edit this file directly.

CC = arm-linux-androideabi-gcc
CXX = arm-linux-androideabi-g++
STRIP = arm-linux-androideabi-strip
UNO = C:/Users/marti/AppData/Local/Fusetools/Fuse/App/app-0.36.1.12010/uno.exe
NDK_DIR = C:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle
SYSROOT_DIR = $(NDK_DIR)/platforms/android-9/arch-arm
SONAME = libTG18.so
ABI = armeabi-v7a

CFLAGS = -O3 -g -DNDEBUG
INCLUDE_DIRS = -Iinclude -IC:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/include -IC:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle/sources/android/support/include -IC:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/0.47.7 -IC:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Text/0.47.7/harfbuzz/include
LD_DIRS = -LC:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a -LC:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle/sources/cxx-stl/stlport/libs/armeabi-v7a -LC:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/lib/Android -LC:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Text/0.47.7/harfbuzz/lib/Android
LD_LIBS = -landroid -llog -lstlport_shared -lV8Simple -lEGL -lGLESv2 -lz
STRIP_FLAGS = 

COMMON_FLAGS = \
	$(CFLAGS) \
	$(INCLUDE_DIRS) \
	--sysroot=$(SYSROOT_DIR) \
	-DANDROID \
	-fdata-sections \
	-ffunction-sections \
	-finline-limit=64 \
	-fno-strict-aliasing \
	-fomit-frame-pointer \
	-fpic \
	-fsigned-char \
	-funwind-tables \
	-isystem $(SYSROOT_DIR)/usr/include \
	-march=armv7-a \
	-mfloat-abi=softfp \
	-mfpu=vfpv3-d16 \
	-mthumb \
	-no-canonical-prefixes \
	-Wa,--noexecstack \
	-Wno-psabi

CXX_FLAGS = \
	$(COMMON_FLAGS) \
	-fexceptions \
	-frtti \
	-isystem C:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle/sources/cxx-stl/stlport/stlport \
	-Wno-invalid-offsetof \
	-std=c++11

CC_FLAGS = \
	$(COMMON_FLAGS) \
	-std=c99

LD_FLAGS = \
	$(CXX_FLAGS) \
	$(LD_DIRS) \
	$(LD_LIBS) \
	-Wl,--fix-cortex-a8 \
	-Wl,--gc-sections \
	-Wl,--no-undefined \
	-Wl,-z,noexecstack \
	-Wl,-z,now \
	-Wl,-z,relro

STATIC_LIBS = \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libuImage.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libpng.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libjpeg.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libfreetype.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libXliMain.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libXliPlatform.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/UnoCore/0.47.13/prebuilt/Android/lib/armeabi-v7a/libuBase.a \
	C:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Text/0.47.7/harfbuzz/lib/Android/libharfbuzz.a

all: libs/$(ABI)/$(SONAME)
all: libs/$(ABI)/libstlport_shared.so
all: libs/$(ABI)/libV8Simple.so
all: libs/$(ABI)/gdbserver
all: libs/$(ABI)/gdb.setup

libs/$(ABI)/gdbserver: | libs/$(ABI)
	$(UNO) cp $(NDK_DIR)/prebuilt/android-arm/gdbserver/gdbserver libs/$(ABI)

libs/$(ABI)/gdb.setup: gdb.setup | libs/$(ABI)
	$(UNO) cp gdb.setup libs/$(ABI)

libs/$(ABI)/$(SONAME): .uno/Uno/_invoke.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_mainMobile.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Memory.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/ObjectModel.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Support.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Base64.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Reflection.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/EntryPoints.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/JNIHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Graphics/GLHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Cpp/posix_mutex.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Cpp/posix_reset_event.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Cpp/posix_semaphore.cpp.o
libs/$(ABI)/$(SONAME): .uno/Implementation/Cpp/posix_thread.cpp.o
libs/$(ABI)/$(SONAME): .uno/BootstrapperImpl_Android.cpp.o
libs/$(ABI)/$(SONAME): .uno/hb-ft-cached.cc.o
libs/$(ABI)/$(SONAME): .uno/Source/pugixml.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.ControlPage.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.CustomButton.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TBuilt.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_accessor_C-e7614448.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_accessor_C-74c29487.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_accessor_C-e42fa7f7.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_accessor_C-f781f23f.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_accessor_F-4d6e0f33.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_bundle.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_ControlPag-b96bb017.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_ControlPag-fd9bf86b.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_CustomButt-b94d6bfe.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_CustomButt-e8820225.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_FuseContro-371e305b.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_FuseContro-76864997.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_FuseContro-1a43e8c1.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.TG18_FuseContro-e9ebd714.cpp.o
libs/$(ABI)/$(SONAME): .uno/OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ImportServices.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ShaderGenerator.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Fonts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Images.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Models.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Splines.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Diagnostics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.IO.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.EventSources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.InteropServices.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Threading.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Calendars.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Data.Json.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Data.Xml.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Geometry.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Sockets.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Testing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Java.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Types.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Wrappers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Animations.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Preview.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Resources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.Simple.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Motion.Simulation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Tesselation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Designer.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.Actions.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Effects.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Native.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.FallbackTextEdit.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.FuseTextRenderer.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.NavigationInternal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Navigation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Layouts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Text.Bidirectional.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Text.Edit.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Text.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Bindings.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.iOS.Bindings.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.FileSystem.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Physics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Selection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Storage.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.WebSocket.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Cache.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.TextureLoader.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Neovisionaries.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Polyfills.Window.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.By-653f4dff.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.FileCache.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Ge-bdd57e78.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Bytecode.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Protocol.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Ru-45f97a53.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Ru-3d4976ee.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Reflection.Native.g.cpp.o
libs/$(ABI)/$(SONAME): $(STATIC_LIBS) Makefile link.x | libs/$(ABI)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(SONAME) -o .uno/$(SONAME) link.x $(STATIC_LIBS)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/$(SONAME) .uno/$(SONAME)

libs/$(ABI)/libstlport_shared.so: C:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so | libs/$(ABI)
	$(UNO) cp C:/Users/marti/AppData/Local/Fusetools/Fuse/Android/AndroidSDK/ndk-bundle/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so libs/$(ABI)/libstlport_shared.so

libs/$(ABI)/libV8Simple.so: C:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/lib/Android/libV8Simple.so | libs/$(ABI)
	$(UNO) cp C:/Users/marti/AppData/Local/Fusetools/Packages/Fuse.Scripting.V8/0.47.7/lib/Android/libV8Simple.so libs/$(ABI)/libV8Simple.so

.uno/Uno/_invoke.cpp.o: include/Uno/ObjectModel.h
.uno/Uno/_invoke.cpp.o: jni/Uno/_invoke.cpp flags.txt | .uno/Uno
	echo Uno/_invoke.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_invoke.cpp.o -c jni/Uno/_invoke.cpp

.uno/Uno/_mainMobile.cpp.o: include/Uno/Support.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.Exception.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno/_mainMobile.cpp.o: include/Uno.String.h
.uno/Uno/_mainMobile.cpp.o: include/Outracks.Simulator.Ge-bdd57e78.h
.uno/Uno/_mainMobile.cpp.o: jni/Uno/_mainMobile.cpp flags.txt | .uno/Uno
	echo Uno/_mainMobile.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_mainMobile.cpp.o -c jni/Uno/_mainMobile.cpp

.uno/Uno/Memory.cpp.o: include/Uno/_internal.h
.uno/Uno/Memory.cpp.o: include/Uno/Support.h
.uno/Uno/Memory.cpp.o: include/Uno.Type.h
.uno/Uno/Memory.cpp.o: include/Uno.String.h
.uno/Uno/Memory.cpp.o: jni/Uno/Memory.cpp flags.txt | .uno/Uno
	echo Uno/Memory.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Memory.cpp.o -c jni/Uno/Memory.cpp

.uno/Uno/ObjectModel.cpp.o: include/Uno/_internal.h
.uno/Uno/ObjectModel.cpp.o: include/Uno/Support.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Bool.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Byte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Char.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Float.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Int.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Object.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.SByte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Short.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.String.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.UShort.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Delegate.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Type.h
.uno/Uno/ObjectModel.cpp.o: jni/Uno/ObjectModel.cpp flags.txt | .uno/Uno
	echo Uno/ObjectModel.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/ObjectModel.cpp.o -c jni/Uno/ObjectModel.cpp

.uno/Uno/Support.cpp.o: include/Uno.Byte.h
.uno/Uno/Support.cpp.o: include/Uno.Buffer.h
.uno/Uno/Support.cpp.o: include/Uno/Support.h
.uno/Uno/Support.cpp.o: jni/Uno/Support.cpp flags.txt | .uno/Uno
	echo Uno/Support.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Support.cpp.o -c jni/Uno/Support.cpp

.uno/Uno/Base64.cpp.o: include/Uno.h
.uno/Uno/Base64.cpp.o: jni/Uno/Base64.cpp flags.txt | .uno/Uno
	echo Uno/Base64.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Base64.cpp.o -c jni/Uno/Base64.cpp

.uno/Uno/Reflection.cpp.o: include/Uno/Reflection.h
.uno/Uno/Reflection.cpp.o: include/Uno/Support.h
.uno/Uno/Reflection.cpp.o: include/Uno.Int.h
.uno/Uno/Reflection.cpp.o: include/Uno.Bool.h
.uno/Uno/Reflection.cpp.o: include/Uno.String.h
.uno/Uno/Reflection.cpp.o: include/Uno.Exception.h
.uno/Uno/Reflection.cpp.o: include/Uno.Type.h
.uno/Uno/Reflection.cpp.o: jni/Uno/Reflection.cpp flags.txt | .uno/Uno
	echo Uno/Reflection.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Reflection.cpp.o -c jni/Uno/Reflection.cpp

.uno/Uno/EntryPoints.cpp.o: include/Uno/AndroidCommon.h
.uno/Uno/EntryPoints.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/EntryPoints.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/EntryPoints.cpp.o: include/Android.Base.JNI.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.EventSou-1ddd7161.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Platform.EventSou-fc56fb86.h
.uno/Uno/EntryPoints.cpp.o: include/Uno.Compiler.ExportTa-6520c73b.h
.uno/Uno/EntryPoints.cpp.o: jni/Uno/EntryPoints.cpp flags.txt | .uno/Uno
	echo Uno/EntryPoints.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/EntryPoints.cpp.o -c jni/Uno/EntryPoints.cpp

.uno/Uno/JNIHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/JNIHelper.cpp.o: jni/Uno/JNIHelper.cpp flags.txt | .uno/Uno
	echo Uno/JNIHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/JNIHelper.cpp.o -c jni/Uno/JNIHelper.cpp

.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno.Exception.h
.uno/Uno/Graphics/GLHelper.cpp.o: jni/Uno/Graphics/GLHelper.cpp flags.txt | .uno/Uno/Graphics
	echo Uno/Graphics/GLHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Graphics/GLHelper.cpp.o -c jni/Uno/Graphics/GLHelper.cpp

.uno/Implementation/Cpp/posix_mutex.cpp.o: jni/Implementation/Cpp/posix_mutex.cpp flags.txt | .uno/Implementation/Cpp
	echo Implementation/Cpp/posix_mutex.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Cpp/posix_mutex.cpp.o -c jni/Implementation/Cpp/posix_mutex.cpp

.uno/Implementation/Cpp/posix_reset_event.cpp.o: include/Implementation/CPP/posix_reset_event.h
.uno/Implementation/Cpp/posix_reset_event.cpp.o: jni/Implementation/Cpp/posix_reset_event.cpp flags.txt | .uno/Implementation/Cpp
	echo Implementation/Cpp/posix_reset_event.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Cpp/posix_reset_event.cpp.o -c jni/Implementation/Cpp/posix_reset_event.cpp

.uno/Implementation/Cpp/posix_semaphore.cpp.o: include/Implementation/CPP/posix_semaphore.h
.uno/Implementation/Cpp/posix_semaphore.cpp.o: jni/Implementation/Cpp/posix_semaphore.cpp flags.txt | .uno/Implementation/Cpp
	echo Implementation/Cpp/posix_semaphore.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Cpp/posix_semaphore.cpp.o -c jni/Implementation/Cpp/posix_semaphore.cpp

.uno/Implementation/Cpp/posix_thread.cpp.o: include/Uno/Uno.h
.uno/Implementation/Cpp/posix_thread.cpp.o: include/Implementation/Cpp/posix_thread.h
.uno/Implementation/Cpp/posix_thread.cpp.o: jni/Implementation/Cpp/posix_thread.cpp flags.txt | .uno/Implementation/Cpp
	echo Implementation/Cpp/posix_thread.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Implementation/Cpp/posix_thread.cpp.o -c jni/Implementation/Cpp/posix_thread.cpp

.uno/BootstrapperImpl_Android.cpp.o: include/BootstrapperImpl_Android.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.JNI.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.Types.Bridge.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Expe-5896eac2.h
.uno/BootstrapperImpl_Android.cpp.o: jni/BootstrapperImpl_Android.cpp flags.txt | .uno
	echo BootstrapperImpl_Android.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/BootstrapperImpl_Android.cpp.o -c jni/BootstrapperImpl_Android.cpp

.uno/hb-ft-cached.cc.o: include/hb-ft-cached.h
.uno/hb-ft-cached.cc.o: jni/hb-ft-cached.cc flags.txt | .uno
	echo hb-ft-cached.cc
	$(CXX) $(CXX_FLAGS) -o .uno/hb-ft-cached.cc.o -c jni/hb-ft-cached.cc

.uno/Source/pugixml.cpp.o: include/Source/pugixml.hpp
.uno/Source/pugixml.cpp.o: jni/Source/pugixml.cpp flags.txt | .uno/Source
	echo Source/pugixml.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Source/pugixml.cpp.o -c jni/Source/pugixml.cpp

.uno/_root.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNat-bee5a1ee.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNav-9486ecb9.h
.uno/_root.g.cpp.o: include/_root.FuseControlsNav-e8d8cce8.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPan-7758f368.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-31ca59b0.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-3928cc2d.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-5f1f0b5f.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-6f551473.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-74d25d36.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-7a2c9334.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-8cad4d83.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-940454f5.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-9c9b741d.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-9f6c7a6f.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-a53c7983.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-b89ad79a.h
.uno/_root.g.cpp.o: include/_root.FuseControlsPri-ea097e7.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-2ea08c40.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-433e3292.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-85ab218f.h
.uno/_root.g.cpp.o: include/_root.FuseControlsScr-dbade381.h
.uno/_root.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPoly-6c38537d.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPrim-2efb5481.h
.uno/_root.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseNodes_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseReactiveJav-9fd7535.h
.uno/_root.g.cpp.o: include/_root.FuseText_bundle.h
.uno/_root.g.cpp.o: include/_root.HashableWeakReference.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-2e217d39.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-4f267733.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-5a59dc8.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-729d617c.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-80299246.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-8e96328f.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-b3d5472e.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-b3dc562d.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-b8ae3149.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-bb535129.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-c62f3e4f.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-ddb73d9.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-e96864e6.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulat-f928ee7f.h
.uno/_root.g.cpp.o: include/_root.UnoCore_bundle.h
.uno/_root.g.cpp.o: include/_root.WeakDictionary-2.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/_root.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/_root.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/_root.g.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/_root.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/_root.g.cpp.o: include/Outracks.Simulator.ErrorToast.h
.uno/_root.g.cpp.o: include/Uno.Bool.h
.uno/_root.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/_root.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/_root.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/_root.g.cpp.o: include/Uno.Float4.h
.uno/_root.g.cpp.o: include/Uno.Int.h
.uno/_root.g.cpp.o: include/Uno.IO.Bundle.h
.uno/_root.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.g.cpp.o: include/Uno.Object.h
.uno/_root.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/_root.g.cpp.o: include/Uno.String.h
.uno/_root.g.cpp.o: include/Uno.Type.h
.uno/_root.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.g.cpp.o: include/Uno.UX.Selector.h
.uno/_root.g.cpp.o: include/Uno.WeakReference-1.h
.uno/_root.g.cpp.o: jni/_root.g.cpp flags.txt | .uno
	echo _root.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.g.cpp.o -c jni/_root.g.cpp

.uno/_root.ControlPage.cpp.o: include/_root.ControlPage.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_accessor_C-74c29487.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_accessor_C-e7614448.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_accessor_F-4d6e0f33.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_ControlPag-b96bb017.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_ControlPag-fd9bf86b.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_FuseContro-1a43e8c1.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_FuseContro-371e305b.h
.uno/_root.ControlPage.cpp.o: include/_root.TG18_FuseContro-e9ebd714.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.Text.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Layouts.DefaultLayout.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Layouts.Dock.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Layouts.Layout.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.Constan-b24df705.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.Constant.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Reactive.Property.h
.uno/_root.ControlPage.cpp.o: include/Fuse.Visual.h
.uno/_root.ControlPage.cpp.o: include/Uno.Bool.h
.uno/_root.ControlPage.cpp.o: include/Uno.Float.h
.uno/_root.ControlPage.cpp.o: include/Uno.Object.h
.uno/_root.ControlPage.cpp.o: include/Uno.String.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.NameTable.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.Property.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.Property-1.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.Selector.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.Size.h
.uno/_root.ControlPage.cpp.o: include/Uno.UX.Unit.h
.uno/_root.ControlPage.cpp.o: jni/_root.ControlPage.cpp flags.txt | .uno
	echo _root.ControlPage.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.ControlPage.cpp.o -c jni/_root.ControlPage.cpp

.uno/_root.CustomButton.cpp.o: include/_root.CustomButton.h
.uno/_root.CustomButton.cpp.o: include/_root.TBuilt.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_accessor_C-e42fa7f7.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_accessor_C-f781f23f.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_CustomButt-b94d6bfe.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_CustomButt-e8820225.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_FuseContro-371e305b.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_FuseContro-76864997.h
.uno/_root.CustomButton.cpp.o: include/_root.TG18_FuseContro-e9ebd714.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Animations.Animator.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Animations.Change-1.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.Constan-b24df705.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.Constant.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Reactive.Property.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/_root.CustomButton.cpp.o: include/Fuse.Visual.h
.uno/_root.CustomButton.cpp.o: include/Uno.Bool.h
.uno/_root.CustomButton.cpp.o: include/Uno.Double.h
.uno/_root.CustomButton.cpp.o: include/Uno.Float.h
.uno/_root.CustomButton.cpp.o: include/Uno.Object.h
.uno/_root.CustomButton.cpp.o: include/Uno.String.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.NameTable.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.Property.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.Property-1.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.CustomButton.cpp.o: include/Uno.UX.Selector.h
.uno/_root.CustomButton.cpp.o: jni/_root.CustomButton.cpp flags.txt | .uno
	echo _root.CustomButton.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.CustomButton.cpp.o -c jni/_root.CustomButton.cpp

.uno/_root.MainView.cpp.o: include/_root.ControlPage.h
.uno/_root.MainView.cpp.o: include/_root.CustomButton.h
.uno/_root.MainView.cpp.o: include/_root.MainView.h
.uno/_root.MainView.cpp.o: include/_root.TG18_bundle.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.Easing.h
.uno/_root.MainView.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.ClientPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Page.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.PageControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.BrushConverter.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.Brushes.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.Colors.h
.uno/_root.MainView.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.TranslationModes.h
.uno/_root.MainView.cpp.o: include/Fuse.FileSystem.FileS-6b49afc1.h
.uno/_root.MainView.cpp.o: include/Fuse.Font.h
.uno/_root.MainView.cpp.o: include/Fuse.IScalingMode.h
.uno/_root.MainView.cpp.o: include/Fuse.ITranslationMode.h
.uno/_root.MainView.cpp.o: include/Fuse.Node.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.-3a1f9142.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.-c1882362.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/_root.MainView.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/_root.MainView.cpp.o: include/Fuse.ScalingModes.h
.uno/_root.MainView.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/_root.MainView.cpp.o: include/Fuse.TranslationModes.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Actions-c1198770.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.Actions-ec2327b1.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.IScrolledLength.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.IScrolledLengths.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/_root.MainView.cpp.o: include/Fuse.Triggers.WhileKe-9dca693c.h
.uno/_root.MainView.cpp.o: include/Fuse.Visual.h
.uno/_root.MainView.cpp.o: include/Fuse.WebSocket.WebSoc-1af68aa9.h
.uno/_root.MainView.cpp.o: include/FuseJS.Base64.h
.uno/_root.MainView.cpp.o: include/FuseJS.Bundle.h
.uno/_root.MainView.cpp.o: include/FuseJS.Environment.h
.uno/_root.MainView.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/_root.MainView.cpp.o: include/FuseJS.Globals.h
.uno/_root.MainView.cpp.o: include/FuseJS.Lifecycle.h
.uno/_root.MainView.cpp.o: include/FuseJS.UserEvents.h
.uno/_root.MainView.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.IList-1.h
.uno/_root.MainView.cpp.o: include/Uno.Float.h
.uno/_root.MainView.cpp.o: include/Uno.Float4.h
.uno/_root.MainView.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.MainView.cpp.o: include/Uno.Object.h
.uno/_root.MainView.cpp.o: include/Uno.String.h
.uno/_root.MainView.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.FileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Resource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Size.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Unit.h
.uno/_root.MainView.cpp.o: jni/_root.MainView.cpp flags.txt | .uno
	echo _root.MainView.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.cpp.o -c jni/_root.MainView.cpp

.uno/_root.TBuilt.cpp.o: include/_root.MainView.h
.uno/_root.TBuilt.cpp.o: include/_root.TBuilt.h
.uno/_root.TBuilt.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.TBuilt.cpp.o: include/Fuse.Font.h
.uno/_root.TBuilt.cpp.o: jni/_root.TBuilt.cpp flags.txt | .uno
	echo _root.TBuilt.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TBuilt.cpp.o -c jni/_root.TBuilt.cpp

.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/_root.ControlPage.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/_root.TG18_accessor_C-e7614448.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.Float4.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.Object.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.String.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.Type.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_accessor_C-e7614448.cpp.o: jni/_root.TG18_accessor_C-e7614448.cpp flags.txt | .uno
	echo _root.TG18_accessor_C-e7614448.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_accessor_C-e7614448.cpp.o -c jni/_root.TG18_accessor_C-e7614448.cpp

.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/_root.ControlPage.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/_root.TG18_accessor_C-74c29487.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.Float4.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.Object.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.String.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.Type.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_accessor_C-74c29487.cpp.o: jni/_root.TG18_accessor_C-74c29487.cpp flags.txt | .uno
	echo _root.TG18_accessor_C-74c29487.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_accessor_C-74c29487.cpp.o -c jni/_root.TG18_accessor_C-74c29487.cpp

.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/_root.CustomButton.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/_root.TG18_accessor_C-e42fa7f7.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.Object.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.String.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.Type.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_accessor_C-e42fa7f7.cpp.o: jni/_root.TG18_accessor_C-e42fa7f7.cpp flags.txt | .uno
	echo _root.TG18_accessor_C-e42fa7f7.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_accessor_C-e42fa7f7.cpp.o -c jni/_root.TG18_accessor_C-e42fa7f7.cpp

.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/_root.CustomButton.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/_root.TG18_accessor_C-f781f23f.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.Float4.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.Object.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.String.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.Type.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_accessor_C-f781f23f.cpp.o: jni/_root.TG18_accessor_C-f781f23f.cpp flags.txt | .uno
	echo _root.TG18_accessor_C-f781f23f.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_accessor_C-f781f23f.cpp.o -c jni/_root.TG18_accessor_C-f781f23f.cpp

.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/_root.TG18_accessor_F-4d6e0f33.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Fuse.Controls.Page.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.Object.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.String.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.Type.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_accessor_F-4d6e0f33.cpp.o: jni/_root.TG18_accessor_F-4d6e0f33.cpp flags.txt | .uno
	echo _root.TG18_accessor_F-4d6e0f33.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_accessor_F-4d6e0f33.cpp.o -c jni/_root.TG18_accessor_F-4d6e0f33.cpp

.uno/_root.TG18_bundle.cpp.o: include/_root.TG18_bundle.h
.uno/_root.TG18_bundle.cpp.o: include/Uno.IO.Bundle.h
.uno/_root.TG18_bundle.cpp.o: include/Uno.IO.BundleFile.h
.uno/_root.TG18_bundle.cpp.o: include/Uno.String.h
.uno/_root.TG18_bundle.cpp.o: jni/_root.TG18_bundle.cpp flags.txt | .uno
	echo _root.TG18_bundle.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_bundle.cpp.o -c jni/_root.TG18_bundle.cpp

.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/_root.ControlPage.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/_root.TG18_ControlPag-b96bb017.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_ControlPag-b96bb017.cpp.o: jni/_root.TG18_ControlPag-b96bb017.cpp flags.txt | .uno
	echo _root.TG18_ControlPag-b96bb017.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_ControlPag-b96bb017.cpp.o -c jni/_root.TG18_ControlPag-b96bb017.cpp

.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/_root.ControlPage.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/_root.TG18_ControlPag-fd9bf86b.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_ControlPag-fd9bf86b.cpp.o: jni/_root.TG18_ControlPag-fd9bf86b.cpp flags.txt | .uno
	echo _root.TG18_ControlPag-fd9bf86b.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_ControlPag-fd9bf86b.cpp.o -c jni/_root.TG18_ControlPag-fd9bf86b.cpp

.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/_root.CustomButton.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/_root.TG18_CustomButt-b94d6bfe.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_CustomButt-b94d6bfe.cpp.o: jni/_root.TG18_CustomButt-b94d6bfe.cpp flags.txt | .uno
	echo _root.TG18_CustomButt-b94d6bfe.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_CustomButt-b94d6bfe.cpp.o -c jni/_root.TG18_CustomButt-b94d6bfe.cpp

.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/_root.CustomButton.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/_root.TG18_CustomButt-e8820225.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_CustomButt-e8820225.cpp.o: jni/_root.TG18_CustomButt-e8820225.cpp flags.txt | .uno
	echo _root.TG18_CustomButt-e8820225.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_CustomButt-e8820225.cpp.o -c jni/_root.TG18_CustomButt-e8820225.cpp

.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/_root.TG18_FuseContro-371e305b.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/Fuse.Controls.Panel.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_FuseContro-371e305b.cpp.o: jni/_root.TG18_FuseContro-371e305b.cpp flags.txt | .uno
	echo _root.TG18_FuseContro-371e305b.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_FuseContro-371e305b.cpp.o -c jni/_root.TG18_FuseContro-371e305b.cpp

.uno/_root.TG18_FuseContro-76864997.cpp.o: include/_root.TG18_FuseContro-76864997.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_FuseContro-76864997.cpp.o: jni/_root.TG18_FuseContro-76864997.cpp flags.txt | .uno
	echo _root.TG18_FuseContro-76864997.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_FuseContro-76864997.cpp.o -c jni/_root.TG18_FuseContro-76864997.cpp

.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: include/_root.TG18_FuseContro-1a43e8c1.h
.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_FuseContro-1a43e8c1.cpp.o: jni/_root.TG18_FuseContro-1a43e8c1.cpp flags.txt | .uno
	echo _root.TG18_FuseContro-1a43e8c1.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_FuseContro-1a43e8c1.cpp.o -c jni/_root.TG18_FuseContro-1a43e8c1.cpp

.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/_root.TG18_FuseContro-e9ebd714.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/Uno.Bool.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/Uno.UX.PropertyObject.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: include/Uno.UX.Selector.h
.uno/_root.TG18_FuseContro-e9ebd714.cpp.o: jni/_root.TG18_FuseContro-e9ebd714.cpp flags.txt | .uno
	echo _root.TG18_FuseContro-e9ebd714.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.TG18_FuseContro-e9ebd714.cpp.o -c jni/_root.TG18_FuseContro-e9ebd714.cpp

.uno/OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLStringName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/OpenGL.g.cpp.o: include/Uno.Float.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/OpenGL.g.cpp.o: include/Uno.Int.h
.uno/OpenGL.g.cpp.o: include/Uno.Int4.h
.uno/OpenGL.g.cpp.o: include/Uno.String.h
.uno/OpenGL.g.cpp.o: include/Uno/Support.h
.uno/OpenGL.g.cpp.o: jni/OpenGL.g.cpp flags.txt | .uno
	echo OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/OpenGL.g.cpp.o -c jni/OpenGL.g.cpp

.uno/Uno.g.cpp.o: include/Uno.Action.h
.uno/Uno.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.g.cpp.o: include/Uno.Action-10.h
.uno/Uno.g.cpp.o: include/Uno.Action-11.h
.uno/Uno.g.cpp.o: include/Uno.Action-12.h
.uno/Uno.g.cpp.o: include/Uno.Action-13.h
.uno/Uno.g.cpp.o: include/Uno.Action-14.h
.uno/Uno.g.cpp.o: include/Uno.Action-15.h
.uno/Uno.g.cpp.o: include/Uno.Action-16.h
.uno/Uno.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.g.cpp.o: include/Uno.Action-3.h
.uno/Uno.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.g.cpp.o: include/Uno.Action-5.h
.uno/Uno.g.cpp.o: include/Uno.Action-6.h
.uno/Uno.g.cpp.o: include/Uno.Action-7.h
.uno/Uno.g.cpp.o: include/Uno.Action-8.h
.uno/Uno.g.cpp.o: include/Uno.Action-9.h
.uno/Uno.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.g.cpp.o: include/Uno.Application.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.g.cpp.o: include/Uno.Array.h
.uno/Uno.g.cpp.o: include/Uno.Attribute.h
.uno/Uno.g.cpp.o: include/Uno.Bool.h
.uno/Uno.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.g.cpp.o: include/Uno.Byte.h
.uno/Uno.g.cpp.o: include/Uno.Byte2.h
.uno/Uno.g.cpp.o: include/Uno.Byte4.h
.uno/Uno.g.cpp.o: include/Uno.Char.h
.uno/Uno.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.g.cpp.o: include/Uno.Collections.ReadO-9f0438b5.h
.uno/Uno.g.cpp.o: include/Uno.Color.h
.uno/Uno.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.g.cpp.o: include/Uno.DateTime.h
.uno/Uno.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.g.cpp.o: include/Uno.Double.h
.uno/Uno.g.cpp.o: include/Uno.Enum.h
.uno/Uno.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.g.cpp.o: include/Uno.Exception.h
.uno/Uno.g.cpp.o: include/Uno.FakeTime.h
.uno/Uno.g.cpp.o: include/Uno.FlagsAttribute.h
.uno/Uno.g.cpp.o: include/Uno.Float.h
.uno/Uno.g.cpp.o: include/Uno.Float2.h
.uno/Uno.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.g.cpp.o: include/Uno.Float3.h
.uno/Uno.g.cpp.o: include/Uno.Float3x3.h
.uno/Uno.g.cpp.o: include/Uno.Float4.h
.uno/Uno.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.g.cpp.o: include/Uno.Func-10.h
.uno/Uno.g.cpp.o: include/Uno.Func-11.h
.uno/Uno.g.cpp.o: include/Uno.Func-12.h
.uno/Uno.g.cpp.o: include/Uno.Func-13.h
.uno/Uno.g.cpp.o: include/Uno.Func-14.h
.uno/Uno.g.cpp.o: include/Uno.Func-15.h
.uno/Uno.g.cpp.o: include/Uno.Func-16.h
.uno/Uno.g.cpp.o: include/Uno.Func-17.h
.uno/Uno.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.g.cpp.o: include/Uno.Func-4.h
.uno/Uno.g.cpp.o: include/Uno.Func-5.h
.uno/Uno.g.cpp.o: include/Uno.Func-6.h
.uno/Uno.g.cpp.o: include/Uno.Func-7.h
.uno/Uno.g.cpp.o: include/Uno.Func-8.h
.uno/Uno.g.cpp.o: include/Uno.Func-9.h
.uno/Uno.g.cpp.o: include/Uno.GC.h
.uno/Uno.g.cpp.o: include/Uno.Generic.h
.uno/Uno.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Int.h
.uno/Uno.g.cpp.o: include/Uno.Int2.h
.uno/Uno.g.cpp.o: include/Uno.Int3.h
.uno/Uno.g.cpp.o: include/Uno.Int4.h
.uno/Uno.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.g.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.g.cpp.o: include/Uno.Long.h
.uno/Uno.g.cpp.o: include/Uno.Math.h
.uno/Uno.g.cpp.o: include/Uno.Matrix.h
.uno/Uno.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Uno.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.g.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno.g.cpp.o: include/Uno.Object.h
.uno/Uno.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.g.cpp.o: include/Uno.ObsoleteAttribute.h
.uno/Uno.g.cpp.o: include/Uno.OverflowException.h
.uno/Uno.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.g.cpp.o: include/Uno.Quaternion.h
.uno/Uno.g.cpp.o: include/Uno.Rect.h
.uno/Uno.g.cpp.o: include/Uno.Recti.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-118b56a9.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-12bca14.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-c0938fca.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-cf057571.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-d21e2a02.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-d86e6f2e.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implement-ed322a11.h
.uno/Uno.g.cpp.o: include/Uno.SByte.h
.uno/Uno.g.cpp.o: include/Uno.SByte2.h
.uno/Uno.g.cpp.o: include/Uno.SByte4.h
.uno/Uno.g.cpp.o: include/Uno.Short.h
.uno/Uno.g.cpp.o: include/Uno.Short2.h
.uno/Uno.g.cpp.o: include/Uno.Short4.h
.uno/Uno.g.cpp.o: include/Uno.String.h
.uno/Uno.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.g.cpp.o: include/Uno.Tuple.h
.uno/Uno.g.cpp.o: include/Uno.Tuple-2.h
.uno/Uno.g.cpp.o: include/Uno.Type.h
.uno/Uno.g.cpp.o: include/Uno.UInt.h
.uno/Uno.g.cpp.o: include/Uno.ULong.h
.uno/Uno.g.cpp.o: include/Uno.UShort.h
.uno/Uno.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.g.cpp.o: include/Uno.UShort4.h
.uno/Uno.g.cpp.o: include/Uno.Vector.h
.uno/Uno.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Uno.g.cpp.o: include/Uno.WeakReferenceAttribute.h
.uno/Uno.g.cpp.o: include/Uno/Support.h
.uno/Uno.g.cpp.o: jni/Uno.g.cpp flags.txt | .uno
	echo Uno.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.g.cpp.o -c jni/Uno.g.cpp

.uno/Uno.Collections.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Array.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-18cb71f3.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-9a5126db.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-a59832d1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-b5c5c402.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-c31dd20b.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dicti-c7b6fb8d.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Empty-f7cc83bb.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Empty-fa377ee0.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Enume-70f6b5a9.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashS-d2de44e2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-468b1241.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Linke-627ba071.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Linke-cccb5d56.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTyp-34d2bd15.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OfTyp-3a6d5f44.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Order-626a6106.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-338f7fba.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-b0fcad24.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Prior-faf91ab2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-b1299f84.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ReadO-9f0438b5.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Selec-88607f03.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Selec-fdeaf39e.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-2893a14b.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Union-5dd79d16.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Union-63c0f11.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Where-b5d516b1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Where-fe54fbf4.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Float.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Generic.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Int.h
.uno/Uno.Collections.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Math.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Object.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Uno.Collections.g.cpp.o: include/Uno.String.h
.uno/Uno.Collections.g.cpp.o: jni/Uno.Collections.g.cpp flags.txt | .uno
	echo Uno.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Collections.g.cpp.o -c jni/Uno.Collections.g.cpp

.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerFi-6fa01b19.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerLi-a2ceb52d.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerMe-226c9096.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerPa-7514d44e.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.HideFrom-17579a62.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.IgnoreMa-ff7ec744.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.MainClas-af34189d.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.UxGenera-f32ccc9.h
.uno/Uno.Compiler.g.cpp.o: jni/Uno.Compiler.g.cpp flags.txt | .uno
	echo Uno.Compiler.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.g.cpp.o -c jni/Uno.Compiler.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Java.Object.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-87692731.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-b0b1a2cc.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-cbe6413a.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-dbc929da.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-e81058d2.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-f337964.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTa-f7892212.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Object.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.String.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-30818a7f.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-9640877b.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-96da0577.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitiv-a8209171.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-10dbc4d1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-1b6e2e31.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-30689ad4.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-395aa7e5.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-93003f54.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-c41d003c.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.Native.-cfc43b5b.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Controls.VideoIm-13a41ae7.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Internal.Android-6ee5a63a.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Java.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Neovisionaries.WebSocketClient.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Char.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-4cc36c3e.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-6520c73b.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Double.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Float.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Int.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Long.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Platform.AndroidDisplay.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Short.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.Android.g.cpp.o: include/Uno.Compiler.ExportTa-2adaffe3.h
.uno/Uno.Compiler.ExportTargetInterop.Android.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.Android.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.Android.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.Android.g.cpp

.uno/Uno.Compiler.ImportServices.g.cpp.o: include/Uno.Compiler.ImportSe-121ba015.h
.uno/Uno.Compiler.ImportServices.g.cpp.o: jni/Uno.Compiler.ImportServices.g.cpp flags.txt | .uno
	echo Uno.Compiler.ImportServices.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ImportServices.g.cpp.o -c jni/Uno.Compiler.ImportServices.g.cpp

.uno/Uno.Compiler.ShaderGenerator.g.cpp.o: include/Uno.Compiler.ShaderGe-1728612e.h
.uno/Uno.Compiler.ShaderGenerator.g.cpp.o: jni/Uno.Compiler.ShaderGenerator.g.cpp flags.txt | .uno
	echo Uno.Compiler.ShaderGenerator.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ShaderGenerator.g.cpp.o -c jni/Uno.Compiler.ShaderGenerator.g.cpp

.uno/Uno.Content.Fonts.g.cpp.o: include/_root.UnoCore_bundle.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Char.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Bit-37dac05f.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Bit-d334a7e5.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Cpp-de3af34d.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Def-4a6def7f.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Fon-2d909829.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Ren-93b3e294.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Sdf-fcdf4d8e.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Spr-ac459106.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Tex-257638a0.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.Tex-d2fe174c.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Double.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAt-1f8449a6.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Math.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implement-c1cd04fd.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno/Support.h
.uno/Uno.Content.Fonts.g.cpp.o: jni/Uno.Content.Fonts.g.cpp flags.txt | .uno
	echo Uno.Content.Fonts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Fonts.g.cpp.o -c jni/Uno.Content.Fonts.g.cpp

.uno/Uno.Content.Images.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Images.g.cpp.o: jni/Uno.Content.Images.g.cpp flags.txt | .uno
	echo Uno.Content.Images.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Images.g.cpp.o -c jni/Uno.Content.Images.g.cpp

.uno/Uno.Content.Models.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.Ve-20c98a9c.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Models.g.cpp.o: jni/Uno.Content.Models.g.cpp flags.txt | .uno
	echo Uno.Content.Models.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Models.g.cpp.o -c jni/Uno.Content.Models.g.cpp

.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.K-6d710a70.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.K-e872f060.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.L-120d6cb.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.L-122d6cb.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.L-123d6cb.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.L-134d6cb.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.L-f7c8ed96.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.Spline-1.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Double.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Math.h
.uno/Uno.Content.Splines.g.cpp.o: jni/Uno.Content.Splines.g.cpp flags.txt | .uno
	echo Uno.Content.Splines.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Splines.g.cpp.o -c jni/Uno.Content.Splines.g.cpp

.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AllocateEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Alway-db12420b.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Asser-7ca79286.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EnterEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EventType.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ExitEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.FreeEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.IdMap-1.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Never-48520b9a.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Profile.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileData.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Double.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Long.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implement-908c1ea1.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implement-b02250e8.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.String.h
.uno/Uno.Diagnostics.g.cpp.o: jni/Uno.Diagnostics.g.cpp flags.txt | .uno
	echo Uno.Diagnostics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Diagnostics.g.cpp.o -c jni/Uno.Diagnostics.g.cpp

.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLStringName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Char.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CubeFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureA-cdadf24a.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureCube.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAt-1f8449a6.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Math.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implement-56fe5cfa.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implement-8c65ef1f.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.String.h
.uno/Uno.Graphics.g.cpp.o: include/Uno/Support.h
.uno/Uno.Graphics.g.cpp.o: jni/Uno.Graphics.g.cpp flags.txt | .uno
	echo Uno.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Graphics.g.cpp.o -c jni/Uno.Graphics.g.cpp

.uno/Uno.IO.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.IO.g.cpp.o: include/Uno.Array.h
.uno/Uno.IO.g.cpp.o: include/Uno.Bool.h
.uno/Uno.IO.g.cpp.o: include/Uno.Byte.h
.uno/Uno.IO.g.cpp.o: include/Uno.Char.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.IO.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.IO.g.cpp.o: include/Uno.Double.h
.uno/Uno.IO.g.cpp.o: include/Uno.Float.h
.uno/Uno.IO.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.IO.g.cpp.o: include/Uno.GC.h
.uno/Uno.IO.g.cpp.o: include/Uno.Int.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Directory.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.File.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-569b126c.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-91d0e8b3.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnum-e90742ab.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerable.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemEnumerator.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.IOException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Path.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StringReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StringWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Uno.IO.g.cpp.o: include/Uno.Long.h
.uno/Uno.IO.g.cpp.o: include/Uno.Math.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Object.h
.uno/Uno.IO.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implement-ed322a11.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implement-fe570c35.h
.uno/Uno.IO.g.cpp.o: include/Uno.String.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.IO.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.IO.g.cpp.o: include/Uno.UInt.h
.uno/Uno.IO.g.cpp.o: include/Uno.ULong.h
.uno/Uno.IO.g.cpp.o: include/Uno/Support.h
.uno/Uno.IO.g.cpp.o: jni/Uno.IO.g.cpp flags.txt | .uno
	echo Uno.IO.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.IO.g.cpp.o -c jni/Uno.IO.g.cpp

.uno/Uno.Platform.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Platform.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Uno.Platform.g.cpp.o: include/Android.Bootstrapper.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Double.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Float.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.AndroidDisplay.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ClosingEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Display.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Displays.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventSou-1ddd7161.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventSou-295e6cc0.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.FrameCha-7feb1e04.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.OSFrame.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerCursor.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInpu-b36b7d02.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implement-2c3e8c94.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implement-f509f747.h
.uno/Uno.Platform.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Platform.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno.Platform.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Platform.g.cpp.o: jni/Uno.Platform.g.cpp flags.txt | .uno
	echo Uno.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.g.cpp.o -c jni/Uno.Platform.g.cpp

.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventSou-1ddd7161.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventSou-295e6cc0.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.EventSou-fc56fb86.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.Platform.OSFrame.h
.uno/Uno.Platform.EventSources.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.EventSources.g.cpp.o: jni/Uno.Platform.EventSources.g.cpp flags.txt | .uno
	echo Uno.Platform.EventSources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.EventSources.g.cpp.o -c jni/Uno.Platform.EventSources.g.cpp

.uno/Uno.Reflection.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppField.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppFunction.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppReflection.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IField.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IFunction.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.String.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Type.h
.uno/Uno.Reflection.g.cpp.o: jni/Uno.Reflection.g.cpp flags.txt | .uno
	echo Uno.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Reflection.g.cpp.o -c jni/Uno.Reflection.g.cpp

.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-12bca14.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-7b5e00e3.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-908c1ea1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-b02250e8.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-c0938fca.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-d86e6f2e.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-ed322a11.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-f509f747.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implement-fe570c35.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Base64.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Support.h
.uno/Uno.Runtime.Implementation.g.cpp.o: jni/Uno.Runtime.Implementation.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.g.cpp.o -c jni/Uno.Runtime.Implementation.g.cpp

.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Math.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-118b56a9.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-2ba4b8a4.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-2c3e8c94.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-7dfef248.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-aa4726e.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-ac8fca1c.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-c1cd04fd.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-cf057571.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-d21e2a02.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-f5bc651f.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-f5f2ed32.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implement-fe570c35.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: jni/Uno.Runtime.Implementation.Internal.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.Internal.g.cpp.o -c jni/Uno.Runtime.Implementation.Internal.g.cpp

.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureA-cdadf24a.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-3f0cccc8.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-56fe5cfa.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-5e8872c0.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-8c65ef1f.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implement-b29fb75.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o -c jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp

.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.Runtime.InteropSe-5053ab55.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: include/Uno.Runtime.InteropSe-bb3b6e34.h
.uno/Uno.Runtime.InteropServices.g.cpp.o: jni/Uno.Runtime.InteropServices.g.cpp flags.txt | .uno
	echo Uno.Runtime.InteropServices.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.InteropServices.g.cpp.o -c jni/Uno.Runtime.InteropServices.g.cpp

.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Text.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Text.g.cpp.o: include/Uno.Runtime.Implement-fe570c35.h
.uno/Uno.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Ascii.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Base64.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilderElement.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Encoding.h
.uno/Uno.Text.g.cpp.o: jni/Uno.Text.g.cpp flags.txt | .uno
	echo Uno.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Text.g.cpp.o -c jni/Uno.Text.g.cpp

.uno/Uno.Threading.g.cpp.o: include/Implementation/Cpp/posix_mutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Dicti-a59832d1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Dicti-c31dd20b.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Int.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Object.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Threading.g.cpp.o: include/Uno.String.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.AutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Cancell-24c95bd.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Cancell-aca909eb.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Concurr-8340a947.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Concurr-928e25ca.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.EventResetMode.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.EventWaitHandle.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future--718c3e8a.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.FutureState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-5604a813.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-7a7b99f9.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-8f89e3ba.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispat-d40599f9.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ITaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.MainThr-dde56bf.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-9750f380.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-b67394d0.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Pthread-d9dd2118.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PthreadHelpers.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.SyncDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Task.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskDelegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskFuture-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskStatus.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-154dcc3.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-4baa0769.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-c17e82e1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadP-da4652e9.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadS-2ac1152a.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Uno.Threading.g.cpp.o: include/Uno/Support.h
.uno/Uno.Threading.g.cpp.o: jni/Uno.Threading.g.cpp flags.txt | .uno
	echo Uno.Threading.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Threading.g.cpp.o -c jni/Uno.Threading.g.cpp

.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.Time.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Time.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.g.cpp.o: include/Uno.Object.h
.uno/Uno.Time.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Gr-84d9ce92.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Ti-849b9fc2.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.We-b079318f.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Ye-fb0acc8f.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.CalendarSystem.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Constants.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DeviceTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Duration.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.FixedDateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.HashCodeHelper.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDate.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.OffsetDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDa-b76721c4.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetD-81e1be6e.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Type.h
.uno/Uno.Time.g.cpp.o: jni/Uno.Time.g.cpp flags.txt | .uno
	echo Uno.Time.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.g.cpp.o -c jni/Uno.Time.g.cpp

.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Gr-84d9ce92.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Ti-849b9fc2.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.We-b079318f.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Ye-fb0acc8f.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.Calendars.g.cpp.o: jni/Uno.Time.Calendars.g.cpp flags.txt | .uno
	echo Uno.Time.Calendars.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Calendars.g.cpp.o -c jni/Uno.Time.Calendars.g.cpp

.uno/Uno.Time.Text.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Float.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Math.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.OffsetDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.FixedFo-b0ea4ea1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.IPatternPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDa-87dcd33e.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDa-b76721c4.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDa-cc1b753b.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTi-a09c7c42.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.NumberPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetD-57729ae8.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetD-81e1be6e.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetP-a6f87167.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetP-eecc7da7.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.ParseResult-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.PatternPart-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.RangeNu-daac4a51.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SeparatorPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SignPart-1.h
.uno/Uno.Time.Text.g.cpp.o: jni/Uno.Time.Text.g.cpp flags.txt | .uno
	echo Uno.Time.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Text.g.cpp.o -c jni/Uno.Time.Text.g.cpp

.uno/Uno.UX.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.UX.g.cpp.o: include/Uno.Bool.h
.uno/Uno.UX.g.cpp.o: include/Uno.Byte.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Exception.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float.h
.uno/Uno.UX.g.cpp.o: include/Uno.Float2.h
.uno/Uno.UX.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.UX.g.cpp.o: include/Uno.Int.h
.uno/Uno.UX.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.Long.h
.uno/Uno.UX.g.cpp.o: include/Uno.Object.h
.uno/Uno.UX.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.String.h
.uno/Uno.UX.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Uno.UX.g.cpp.o: include/Uno.Type.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Resource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Selector.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.SelectorRegistry.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.SimulatedProperties.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Size2.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.StreamExtensions.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Template.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Unit.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXAutoNameTabl-7a420049.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXComponentsAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXConstructorAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXContentAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXExpressionAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXFileNameAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXFreestandingAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXGlobalModuleAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXGlobalResour-7e3e6930.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXLineNumberAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXNameAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXPrimaryAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXSourceFileNa-54a524bf.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBinding-277f5428.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBinding-d6fbe43e.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXVerbatimAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Uno.UX.g.cpp.o: jni/Uno.UX.g.cpp flags.txt | .uno
	echo Uno.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.UX.g.cpp.o -c jni/Uno.UX.g.cpp

.uno/Uno.Data.Json.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Char.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Data.Json.JsonWriter.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Int.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Object.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.String.h
.uno/Uno.Data.Json.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Data.Json.g.cpp.o: jni/Uno.Data.Json.g.cpp flags.txt | .uno
	echo Uno.Data.Json.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Data.Json.g.cpp.o -c jni/Uno.Data.Json.g.cpp

.uno/Uno.Data.Xml.g.cpp.o: include/Source/pugixml.hpp
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Action.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Char.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.IList-468b1241.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.Attribut-ab403e5a.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.ParseOptions.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.TargetSp-9b6b748d.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.ValidationHelper.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttri-719074fd.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttribute.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlAttri-f709872f.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlCharacterData.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlComment.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDeclaration.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDocument.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlDocum-fbf1b2e1.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlElement.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlEncoding.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlEncodingHelper.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlException.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlLinke-832990d3.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlLinkedNode.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNode.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeC-69d6d72f.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeH-28bde911.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeHandle.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeImpl.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlNodeType.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlProce-79ea99da.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlText.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlValue.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Data.Xml.XmlValueType.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Double.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Float.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Int.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Long.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Object.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.String.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Data.Xml.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.Data.Xml.g.cpp.o: jni/Uno.Data.Xml.g.cpp flags.txt | .uno
	echo Uno.Data.Xml.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Data.Xml.g.cpp.o -c jni/Uno.Data.Xml.g.cpp

.uno/Uno.Geometry.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision2D.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.CubicBezier.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Vertex.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerable.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerator.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Int.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Math.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Vector.h
.uno/Uno.Geometry.g.cpp.o: jni/Uno.Geometry.g.cpp flags.txt | .uno
	echo Uno.Geometry.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Geometry.g.cpp.o -c jni/Uno.Geometry.g.cpp

.uno/Uno.Net.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Uno.Net.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Net.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.Net.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.g.cpp.o: include/Uno.Char.h
.uno/Uno.Net.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Uno.Net.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Net.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.Dns.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.Sockets.Socke-3cd1adc4.h
.uno/Uno.Net.g.cpp.o: include/Uno.Object.h
.uno/Uno.Net.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Net.g.cpp.o: include/Uno/JNIHelper.h
.uno/Uno.Net.g.cpp.o: jni/Uno.Net.g.cpp flags.txt | .uno
	echo Uno.Net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.g.cpp.o -c jni/Uno.Net.g.cpp

.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.NetworkHelpers.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socke-3cd1adc4.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socke-7dd56d25.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketFlags.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketHelpers.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Sockets.g.cpp.o: jni/Uno.Net.Sockets.g.cpp flags.txt | .uno
	echo Uno.Net.Sockets.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Sockets.g.cpp.o -c jni/Uno.Net.Sockets.g.cpp

.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers-54d398dd.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.com.fuse.Expe-5896eac2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Char.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.GC.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Absolute-2991523.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HashParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfo.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfoParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpDefa-a7f6a683.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-1ab6fc8e.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-2734f246.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-499e72b1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-6b90921b.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-91b98dc2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageCache.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-e44dc24.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpStat-91d6200b.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implemen-2d861a1a.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implemen-4331d10a.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidR-9c865bd5.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidS-5e790df2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.QueryParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemePa-d035f77f.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemeParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriForma-b1a049cf.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriScheme.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriSchemeType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UserInfoParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: jni/Uno.Net.Http.g.cpp flags.txt | .uno
	echo Uno.Net.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.g.cpp.o -c jni/Uno.Net.Http.g.cpp

.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Array.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpMess-91b98dc2.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implemen-2d861a1a.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implemen-4331d10a.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: jni/Uno.Net.Http.Implementation.g.cpp flags.txt | .uno
	echo Uno.Net.Http.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.Implementation.g.cpp.o -c jni/Uno.Net.Http.Implementation.g.cpp

.uno/Uno.Testing.g.cpp.o: include/Uno.Action.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Int.h
.uno/Uno.Testing.g.cpp.o: include/Uno.String.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.NamedTestMethod.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.Registry.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.TestAttribute.h
.uno/Uno.Testing.g.cpp.o: jni/Uno.Testing.g.cpp flags.txt | .uno
	echo Uno.Testing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Testing.g.cpp.o -c jni/Uno.Testing.g.cpp

.uno/Java.g.cpp.o: include/Java.Object.h
.uno/Java.g.cpp.o: jni/Java.g.cpp flags.txt | .uno
	echo Java.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Java.g.cpp.o -c jni/Java.g.cpp

.uno/Android.g.cpp.o: include/Android.Bootstrapper.h
.uno/Android.g.cpp.o: include/BootstrapperImpl_Android.h
.uno/Android.g.cpp.o: jni/Android.g.cpp flags.txt | .uno
	echo Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.g.cpp.o -c jni/Android.g.cpp

.uno/Android.Base.g.cpp.o: include/Android.Base.AndroidB-55118587.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-30818a7f.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-9640877b.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-96da0577.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-a8209171.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitiv-ca6a2aad.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers-54d398dd.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Android.Base.g.cpp.o: include/Java.Object.h
.uno/Android.Base.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.g.cpp.o: include/Uno.Char.h
.uno/Android.Base.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Android.Base.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Android.Base.g.cpp.o: include/Uno.Double.h
.uno/Android.Base.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.g.cpp.o: include/Uno.Float.h
.uno/Android.Base.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.g.cpp.o: include/Uno.Math.h
.uno/Android.Base.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.g.cpp.o: include/Uno.SByte.h
.uno/Android.Base.g.cpp.o: include/Uno.Short.h
.uno/Android.Base.g.cpp.o: include/Uno.String.h
.uno/Android.Base.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.g.cpp.o: include/Uno/JNIHelper.h
.uno/Android.Base.g.cpp.o: jni/Android.Base.g.cpp flags.txt | .uno
	echo Android.Base.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.g.cpp.o -c jni/Android.Base.g.cpp

.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-30818a7f.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-3fa6710f.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-468275ae.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-4b8a5e07.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-848b8849.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-8dc189db.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-9640877b.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-96a4896f.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-96da0577.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-a8209171.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-ca6a2aad.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-d0deec22.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-e07be494.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitiv-e6edd745.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jweak.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujbyte.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujchar.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujint.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Base.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Primitives.g.cpp.o: jni/Android.Base.Primitives.g.cpp flags.txt | .uno
	echo Android.Base.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Primitives.g.cpp.o -c jni/Android.Base.Primitives.g.cpp

.uno/Android.Base.Types.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-30818a7f.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-9640877b.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-96da0577.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitiv-a8209171.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers-54d398dd.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Types.g.cpp.o: jni/Android.Base.Types.g.cpp flags.txt | .uno
	echo Android.Base.Types.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Types.g.cpp.o -c jni/Android.Base.Types.g.cpp

.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-96da0577.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitiv-e07be494.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers-54d398dd.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers-6f14a58b.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Wrappers.g.cpp.o: jni/Android.Base.Wrappers.g.cpp flags.txt | .uno
	echo Android.Base.Wrappers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Wrappers.g.cpp.o -c jni/Android.Base.Wrappers.g.cpp

.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.AndroidB-55118587.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-30818a7f.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitiv-a8209171.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.com.fuse.Expe-5896eac2.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Bool.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Exception.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Int.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Long.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Type.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: jni/Android.com.fuse.ExperimentalHttp.g.cpp flags.txt | .uno
	echo Android.com.fuse.ExperimentalHttp.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o -c jni/Android.com.fuse.ExperimentalHttp.g.cpp

.uno/Fuse.g.cpp.o: include/_root.FuseNodes_bundle.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.g.cpp.o: include/Fuse.AlternateRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/Fuse.g.cpp.o: include/Fuse.App.h
.uno/Fuse.g.cpp.o: include/Fuse.App.RootViewHost.h
.uno/Fuse.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.g.cpp.o: include/Fuse.ComputeException.h
.uno/Fuse.g.cpp.o: include/Fuse.Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Computer-1.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Default-e6102a36.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.INativeViewRoot.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.TreeRen-f1d031eb.h
.uno/Fuse.g.cpp.o: include/Fuse.Deferred.h
.uno/Fuse.g.cpp.o: include/Fuse.DeferredManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.Temporal.h
.uno/Fuse.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.Elements.ITreeRenderer.h
.uno/Fuse.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty1Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link.h
.uno/Fuse.g.cpp.o: include/Fuse.FastProperty2Link-1.h
.uno/Fuse.g.cpp.o: include/Fuse.FileSourceConverter.h
.uno/Fuse.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Float2Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Float3Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Float4Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPoolImpl.h
.uno/Fuse.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.g.cpp.o: include/Fuse.IBeginRemoveVisu-428528f1.h
.uno/Fuse.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IDeferred.h
.uno/Fuse.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.ILoading.h
.uno/Fuse.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.g.cpp.o: include/Fuse.INameListener.h
.uno/Fuse.g.cpp.o: include/Fuse.InheritViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.INotifyUnrooted.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.FocusNavig-815405e7.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.TextService.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FontFac-ce1c8c0c.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.SystemFont.h
.uno/Fuse.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.g.cpp.o: include/Fuse.IObject.h
.uno/Fuse.g.cpp.o: include/Fuse.IParentObserver.h
.uno/Fuse.g.cpp.o: include/Fuse.IProperties.h
.uno/Fuse.g.cpp.o: include/Fuse.IRaw.h
.uno/Fuse.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.g.cpp.o: include/Fuse.IScriptException.h
.uno/Fuse.g.cpp.o: include/Fuse.ITemplateObserver.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.g.cpp.o: include/Fuse.IUpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.JSFileSource.h
.uno/Fuse.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
.uno/Fuse.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.Flags.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.g.cpp.o: include/Fuse.MarginBoxDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.g.cpp.o: include/Fuse.Marshal.IConverter.h
.uno/Fuse.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.g.cpp.o: include/Fuse.MobileBootstrapping.h
.uno/Fuse.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.DataFinder.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.DataWatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.FirstDataEnumerator.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.IDataEnumerator.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.IDataListener.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.ISiblingDataProvider.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.ISubtreeDataProvider.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeGroup.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeGroupBase.h
.uno/Fuse.g.cpp.o: include/Fuse.NumberComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.g.cpp.o: include/Fuse.PerspectiveFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.AppEvents.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.g.cpp.o: include/Fuse.RenderTargetEntry.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringInto-8d69fdcc.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.RequiresRootedException.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.Resour-628dd08f.h
.uno/Fuse.g.cpp.o: include/Fuse.RootPanel.h
.uno/Fuse.g.cpp.o: include/Fuse.RootStage.h
.uno/Fuse.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.IdentityMode.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Script-27b2f32f.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.Script-6731f3bf.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.g.cpp.o: include/Fuse.Shear.h
.uno/Fuse.g.cpp.o: include/Fuse.Size2Computer.h
.uno/Fuse.g.cpp.o: include/Fuse.SizeComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.Stage.h
.uno/Fuse.g.cpp.o: include/Fuse.StringComputer.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.Style.h
.uno/Fuse.g.cpp.o: include/Fuse.SystemFont.Weight.h
.uno/Fuse.g.cpp.o: include/Fuse.TestDeferredManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.g.cpp.o: include/Fuse.Timer.h
.uno/Fuse.g.cpp.o: include/Fuse.Toast.h
.uno/Fuse.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.SizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-53aa3ad2.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-689c6616.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-a0eb9bb.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes-bb76b1d1.h
.uno/Fuse.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateAction.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateDispatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.ViewportHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.CancelInt-fe0ed2d2.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestRecord.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.HitTestTr-c7ce7669.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.InteractionItem.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.ParameterProperty.h
.uno/Fuse.g.cpp.o: include/Fuse.Visual.VisualBits.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.g.cpp.o: include/Fuse.VisualListCache.h
.uno/Fuse.g.cpp.o: include/Fuse.WrapException.h
.uno/Fuse.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLError.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/Fuse.g.cpp.o: include/Uno.Action.h
.uno/Fuse.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.g.cpp.o: include/Uno.AggregateException.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Fuse.g.cpp.o: include/Uno.Array.h
.uno/Fuse.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.g.cpp.o: include/Uno.Char.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dicti-c31dd20b.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dicti-c7b6fb8d.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-468b1241.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Prior-338f7fba.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Prior-faf91ab2.h
.uno/Fuse.g.cpp.o: include/Uno.Color.h
.uno/Fuse.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.g.cpp.o: include/Uno.Data.Json.JsonWriter.h
.uno/Fuse.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.g.cpp.o: include/Uno.Double.h
.uno/Fuse.g.cpp.o: include/Uno.Enum.h
.uno/Fuse.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.g.cpp.o: include/Uno.Float.h
.uno/Fuse.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.g.cpp.o: include/Uno.Func-4.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.g.cpp.o: include/Uno.Int.h
.uno/Fuse.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Fuse.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.g.cpp.o: include/Uno.Math.h
.uno/Fuse.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.g.cpp.o: include/Uno.Object.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Display.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Displays.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.EventSou-1ddd7161.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.TextInpu-b36b7d02.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-7b5e00e3.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.g.cpp.o: include/Uno.SByte.h
.uno/Fuse.g.cpp.o: include/Uno.Short.h
.uno/Fuse.g.cpp.o: include/Uno.String.h
.uno/Fuse.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Concurr-8340a947.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.g.cpp.o: include/Uno.Type.h
.uno/Fuse.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.g.cpp.o: jni/Fuse.g.cpp flags.txt | .uno
	echo Fuse.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.g.cpp.o -c jni/Fuse.g.cpp

.uno/Fuse.Platform.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Platform.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.AppEvents.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.InterApp.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.StatusB-4b932ee5.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.StatusBarStyle.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemU-2dda44ea.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemU-52af75f8.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SystemUIID.h
.uno/Fuse.Platform.g.cpp.o: include/Fuse.Platform.SysUIState.h
.uno/Fuse.Platform.g.cpp.o: include/Java.Object.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Platform.EventSou-fc56fb86.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Platform.g.cpp.o: include/Uno.String.h
.uno/Fuse.Platform.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Platform.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Platform.g.cpp.o: jni/Fuse.Platform.g.cpp flags.txt | .uno
	echo Fuse.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Platform.g.cpp.o -c jni/Fuse.Platform.g.cpp

.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Anima-274f2a53.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Anima-e9ae07a6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attractor-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Avera-305e2e65.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Avera-69ebb933.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conti-237ce7cc.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conti-ec3af5f8.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-4b66c24c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-617d916.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-a8bf4db1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Conve-daadb0d3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Converter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterSize2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Creat-8582fdaa.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cubic-91d6ff19.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cycle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleWaveform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-27a52eb9.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-466b7598.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-bbeebbf.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-c98dc46d.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-dc3d539a.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Discr-f6a5303b.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-1f408e3f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-23c27569.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-242be8c2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-2c5078d4.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-3ade8068.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-4a464677.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-52f7b299.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-539c1dc8.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-55f833b3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5d4a49f2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5db9224c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-5fdbf403.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-62b7a82a.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-687ea1ee.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-6a9dd18a.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-6bea1173.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-6fde72be.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-7b83483d.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-7d50bfe9.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-7ed49a72.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-9114caac.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-93ecfeb0.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-a039b2fe.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-a1695f2b.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-a4ea8482.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-c5c503ca.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-d098c5d6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-de34aa38.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-e1d6ae.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-e81d96aa.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-f1616cb6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easin-ff942cb6.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunction.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.FastM-a9e42315.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IBase-9ca29815.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerMaster.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IPlay-a6d2aa79.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ITrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IUnwr-4bbb3b04.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Keyfr-21c28d4e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Keyframe.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.KeyframeTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-123cd386.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-3036c7e9.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-b0454a4e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Maste-c2207b01.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Mixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerBase.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixOp.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothi-f1206999.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenA-29177d3f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Playe-f7ddf41d.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Player.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayerPart.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Range-66a56b28.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.RangeAdapter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resiz-d21195f5.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Rotate.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekDirection.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekResult.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Skew.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Spin.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SpinState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SplineTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Splin-f30280ee.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Track-a276dc49.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trans-828622e8.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trans-8bdd6c45.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trans-c0a4dfab.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-93c253f8.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-957ef503.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Trigg-e37e6e4c.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Destinati-4dac9e7e.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.MotionDes-8a59fed5.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-856a768f.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Motion.Simulatio-8bde8aa1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.String.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Animations.g.cpp.o: jni/Fuse.Animations.g.cpp flags.txt | .uno
	echo Fuse.Animations.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Animations.g.cpp.o -c jni/Fuse.Animations.g.cpp

.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.String.h
.uno/Fuse.Preview.g.cpp.o: jni/Fuse.Preview.g.cpp flags.txt | .uno
	echo Fuse.Preview.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Preview.g.cpp.o -c jni/Fuse.Preview.g.cpp

.uno/Fuse.Internal.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Internal.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-6ee5a63a.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-7afd435.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-a4831c85.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Android-ec81a617.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Cache-2.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.CacheItem-2.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.CacheRef-2.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DoubleBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DrawManager.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float3Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float4Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FloatBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FontFac-ce1c8c0c.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FuseConfig.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.IImageC-53d8106a.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.MiniLis-e63b46ff.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.MiniList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.RectPacker.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Size2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizeBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SkylineNode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SystemFont.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageS-79a2b6af.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageS-b717b1e2.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MultiD-b22363c3.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.System-9344cef3.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.SystemFont.Style.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.SystemFont.Weight.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Linke-cccb5d56.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Internal.g.cpp.o: jni/Fuse.Internal.g.cpp flags.txt | .uno
	echo Fuse.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.g.cpp.o -c jni/Fuse.Internal.g.cpp

.uno/Fuse.Internal.Drawing.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFil-7451141e.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Internal.Drawing-7b3f23a7.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.Drawing.g.cpp.o: jni/Fuse.Internal.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Internal.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.Drawing.g.cpp.o -c jni/Fuse.Internal.Drawing.g.cpp

.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.Htt-f498a617.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.TextureL-f03d7306.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Double-f19868b9.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Expira-a40dcc7d.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-214c95de.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-7f821d83.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileIm-8d4e925e.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FloatR-8462316d.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Generi-7dd8e81e.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-9048e22b.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-d2f4087f.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpIm-e460f726.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IDefer-4b42132d.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-6dc9bfa3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-79a2b6af.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-b717b1e2.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageS-f56f730b.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IMemoryResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IntRes-ff499516.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IResou-2735a9f9.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ISoftDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Loadin-5c364ae8.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Loadin-a1639a48.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MultiD-b22363c3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Numeri-53809181.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Policy-5bfdd4a6.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ProxyI-1cad75e.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Resour-5d2656b6.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Resour-628dd08f.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Resour-775defa3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBool.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat2.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat4.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceObject.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceString.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Resour-f8ac1baa.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Retain-ef7b1060.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.System-9344cef3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.Textur-8608eb2d.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Resources.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.String.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Resources.g.cpp.o: jni/Fuse.Resources.g.cpp flags.txt | .uno
	echo Fuse.Resources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Resources.g.cpp.o -c jni/Fuse.Resources.g.cpp

.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.AppIni-f89bd768.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.AppInitialized.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.CodeModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Double-23a614ea.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.EventE-8be4e110.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Factor-af5af8f3.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IModuleProvider.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-2477afff.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-3c81522e.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-45198518.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-4519851b.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-64d2c207.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-df28c6c9.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCall-eef85ed.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSObjectUtils.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-23dfe193.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-8bbe2585.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-d5022f1e.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-df4175fe.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-e68cd234.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-f3c8e77e.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Native-fcfd22ff.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Result-f129cd22.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-27b2f32f.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-6731f3bf.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-bc981f92.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Script-ea1a8f8f.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptEventArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptProperty.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.String-6e34b3a3.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueC-4cd5cc17.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-4.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Concurr-928e25ca.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispat-8f89e3ba.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Tuple.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Tuple-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Scripting.g.cpp.o: jni/Fuse.Scripting.g.cpp flags.txt | .uno
	echo Fuse.Scripting.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.g.cpp.o -c jni/Fuse.Scripting.g.cpp

.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.ArrayHandle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Aut-5025f72a.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Con-e9a9e908.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Deb-4065056d.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Deb-58993fee.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Deb-6aa6585a.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Deb-8cb6e92e.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Error.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Handle.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Mar-eb2a7783.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-2031bba9.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-282e399.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-42b33fd6.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-5139ae16.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-513ccff2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-651ec3cf.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-79f0d8a1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-8d2440d9.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-962a9b9b.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-9e60cc3d.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-cff51134.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-e2ad9683.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Sim-f08b2d41.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Debug.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.V8S-31f3ec34.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.V8S-3521bd2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Runtime.InteropSe-5053ab55.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.IDispat-8f89e3ba.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Scripting.V8.g.cpp.o: jni/Fuse.Scripting.V8.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.g.cpp.o -c jni/Fuse.Scripting.V8.g.cpp

.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Handle.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-2031bba9.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-282e399.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-42b33fd6.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-5139ae16.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-513ccff2.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-651ec3cf.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-79f0d8a1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-8d2440d9.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-962a9b9b.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-9c8bae95.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-9e60cc3d.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-acafc2c4.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-b8ab7723.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-cff51134.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-e2ad9683.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-e75ceb4.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Sim-f08b2d41.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Debug.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: jni/Fuse.Scripting.V8.Simple.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.Simple.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.Simple.g.cpp.o -c jni/Fuse.Scripting.V8.Simple.g.cpp

.uno/Fuse.Input.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Capture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CustomPoin-be858f6a.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGained.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLost.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusNavig-815405e7.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredi-248b93af.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredi-7e5e39dc.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPrediction.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.HitTestHelpers.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IGesture.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.INotifyFocus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IPointerEv-2da5d72b.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-51addd69.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-8757fa55.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusabl-e60027f4.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.Ca-4c573cf.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.De-9ef19394.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELHolder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELStatus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.Po-745da8f6.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnt-133e3c6c.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeft.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWhe-2f1235d9.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWhe-a5bbc093.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.SelectionQuery.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextService.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.String.h
.uno/Fuse.Input.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Input.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Input.g.cpp.o: jni/Fuse.Input.g.cpp flags.txt | .uno
	echo Fuse.Input.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.g.cpp.o -c jni/Fuse.Input.g.cpp

.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnt-133e3c6c.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWhe-2f1235d9.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWhe-a5bbc093.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.Attache-b211b62c.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.Attache-d28d7114.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.Attache-d2f6fa9c.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Input.UX.g.cpp.o: jni/Fuse.Input.UX.g.cpp flags.txt | .uno
	echo Fuse.Input.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.UX.g.cpp.o -c jni/Fuse.Input.UX.g.cpp

.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.INotifyUnrooted.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IProperties.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IRaw.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.NameRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Add.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ArrayMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BinaryO-58f3f505.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BinaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Case.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ClassInstance.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Closure.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ClosureArgs.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ClosureHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Conditional.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Constan-b24df705.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Constant.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Data.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataSubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataToR-d46de42a.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataToResource.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Divide.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Each.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Equal.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventRecord.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Express-c8917901.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Functio-c6792cb6.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FunctionMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.GreaterOrEqual.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.GreaterThan.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IEventHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IEventRecord.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InfixOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InnerLi-25f01151.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InnerListener.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instance.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-58eb965c.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instant-e91fb2fb.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Instantiator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObservable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ISubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IWriteable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScr-e8845bef.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScript.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LazyObs-bf65a558.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LessOrEqual.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LessThan.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ListMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LogicalAnd.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.LogicalOr.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Match.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Max.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Member.-411936c6.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Member.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Min.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Multiply.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Name.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Negate.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.NotEqual.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.NullCoalesce.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ObjectMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-20f9da5.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-258665e3.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-449c533c.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-44b05324.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-773d07dc.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-7efa6418.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-87d533dc.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-922e79c.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-acb5a0ea.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.Add.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.Clear.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.NewAt.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.Set.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observa-d25b27dc.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Propert-46d161dc.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Property.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.PropertyBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Quatern-86ad1bb1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Quatern-c87683ea.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Resourc-d34b0fa6.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Resource.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ResourceBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Rootabl-c73b22db.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Select.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Snapsho-2c59e608.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Snapshot.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Subtract.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Ternary-4a73a6ec.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.TernaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.This.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadW-16741eac.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadW-753c8bf1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadW-7728f767.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadWorker.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ToLower.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ToUpper.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.UnaryOp-ca38d18.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.UnaryOperator.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueFo-56db492b.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueForwarder.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueMirror.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ValueObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Vector2.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Vector3.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Vector4.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileCount.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileCount.Range.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileEmpty.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileNotEmpty.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.With.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Resources.Resour-628dd08f.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.AppInitialized.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.External.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IScriptObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Script-27b2f32f.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptMethod.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptModule.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.ScriptProperty.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.WrapException.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-a59832d1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-c31dd20b.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dicti-c7b6fb8d.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int3.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int4.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Concurr-8340a947.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.EventWaitHandle.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.ManualResetEvent.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Reactive.g.cpp.o: jni/Fuse.Reactive.g.cpp flags.txt | .uno
	echo Fuse.Reactive.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.g.cpp.o -c jni/Fuse.Reactive.g.cpp

.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/_root.FuseReactiveJav-9fd7535.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.MarshalException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-3a1f9142.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-493d0fb5.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-5895e150.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-7854331c.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-c1882362.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-c2e1ed6c.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-c8e04678.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-cc916ec6.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.-d41fe095.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.EventE-8be4e110.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-4.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.StringReader.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMess-2734f246.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMess-91b98dc2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpStat-91d6200b.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.InvalidR-9c865bd5.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: jni/Fuse.Reactive.FuseJS.g.cpp flags.txt | .uno
	echo Fuse.Reactive.FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.FuseJS.g.cpp.o -c jni/Fuse.Reactive.FuseJS.g.cpp

.uno/Fuse.Motion.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.DelayFunc-5feedff5.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.DelayFunction.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Destinati-4dac9e7e.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionDes-8a59fed5.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-23d91a78.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-566660c2.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-8bde8aa1.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-906f30a9.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-a58c577b.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-bdef395c.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-c58f2415.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-d31a266b.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.Simulatio-e290569c.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.SpringFun-26a3f09f.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Motion.SpringFunction.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.Timer.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Motion.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Motion.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.g.cpp.o: jni/Fuse.Motion.g.cpp flags.txt | .uno
	echo Fuse.Motion.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.g.cpp.o -c jni/Fuse.Motion.g.cpp

.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.MotionUnit.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.OverflowType.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-23d91a78.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-3c9694a.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-531b35ba.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-566660c2.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-856a768f.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-8bde8aa1.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-906f30a9.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-92cee221.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-a58c577b.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-bdef395c.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-c58f2415.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-d31a266b.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Fuse.Motion.Simulatio-e290569c.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Motion.Simulation.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Motion.Simulation.g.cpp.o: jni/Fuse.Motion.Simulation.g.cpp flags.txt | .uno
	echo Fuse.Motion.Simulation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Motion.Simulation.g.cpp.o -c jni/Fuse.Motion.Simulation.g.cpp

.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawingPoly-6c38537d.h
.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BezierOp.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Border.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BrushConverter.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brushes.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ButtCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Cache-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ClosePath.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Colors.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Contour.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourTerminator.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.CurveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.EllipseFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.HorizontalLineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFil-7451141e.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGr-2d748711.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGr-73a0d944.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCapImpl.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoin.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoinImpl.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MiterJoin.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MoveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConse-21300809.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConse-b4bb2bb7.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConse-cf030f8.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeom-418a124e.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeom-c88dbb96.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeom-eaebd424.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Polygon.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonDrawable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonFiller.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RectangleFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RegularP-7d799f0a.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RendererContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RepeatBaker.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RoundCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SmoothCurveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StarFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAdjustment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAlignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselat-d5e92693.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselat-f2f460b4.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselat-fd70c210.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Token.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Util.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.VerticalLineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.WindingRules.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.WrapMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageS-6dc9bfa3.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dicti-c31dd20b.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dicti-c7b6fb8d.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Empty-fa377ee0.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.Ve-20c98a9c.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Collision2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.CubicBezier.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.g.cpp.o: jni/Fuse.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.g.cpp.o -c jni/Fuse.Drawing.g.cpp

.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-2397723b.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-34379962.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-382a9995.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-61a632d3.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-64c13853.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-81698804.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-8abe4a9a.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal-e0fc3853.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Internal.g.cpp.o: jni/Fuse.Drawing.Internal.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Internal.g.cpp.o -c jni/Fuse.Drawing.Internal.g.cpp

.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Contour.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-2c45f95a.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-3ee8123a.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-4fc00954.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-56fff27f.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-8b9fc7af.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-8f5ff2c4.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-9ee02cbd.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-bddb2361.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-d5e92693.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-e8a2cabf.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-f2f460b4.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-f81b8d7b.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-f9156882.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselat-fd70c210.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: jni/Fuse.Drawing.Tesselation.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Tesselation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Tesselation.g.cpp.o -c jni/Fuse.Drawing.Tesselation.g.cpp

.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-2c45f95a.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-35c2b98a.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-3ee8123a.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-4fc00954.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-730395ed.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-8b9fc7af.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-b4d568ec.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-d5e92693.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-f9156882.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselat-fd70c210.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: jni/Fuse.Drawing.Tesselation.Collections.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Tesselation.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o -c jni/Fuse.Drawing.Tesselation.Collections.g.cpp

.uno/Fuse.Drawing.Primitives.g.cpp.o: include/_root.FuseDrawingPrim-2efb5481.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFil-7451141e.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-2397723b.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-34379962.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-61a632d3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal-e0fc3853.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-121a4c11.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-164bf14.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-21a3c883.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-40ac2b8d.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-4d4d2ed7.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-4ea40cde.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-69732c94.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-8d3906c1.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-93f3b2a.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-9824b782.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-aa258e11.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: jni/Fuse.Drawing.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Primitives.g.cpp.o -c jni/Fuse.Drawing.Primitives.g.cpp

.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Advance-10f630eb.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ChildEx-6f197f3f.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ColorAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Compone-a76b5eef.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Default-d39ea5dd.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Default-fb109acd.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Designe-b66220e7.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DragDro-a1959723.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Extensi-be967562.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.GroupAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HideAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HidesAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.IconAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.InlineAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Interva-bf07e042.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Optiona-2df946e2.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Priorit-b9881c13.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RangeAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Recursi-7809058d.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Require-3a2281b2.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Spawnab-2461b3d3.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.SpawnsAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Thickne-80aca1ee.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.Transit-f8a661c2.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.UnoHostInterface.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.String.h
.uno/Fuse.Designer.g.cpp.o: jni/Fuse.Designer.g.cpp flags.txt | .uno
	echo Fuse.Designer.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Designer.g.cpp.o -c jni/Fuse.Designer.g.cpp

.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Anima-274f2a53.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Playe-f7ddf41d.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trans-8bdd6c45.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-93c253f8.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-957ef503.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Trigg-e37e6e4c.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ITextEditControl.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-44108024.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-5cd486b5.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-c30b1c3e.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigat-d4ced927.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollP-b5c8f9f8.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInp-2ad76625.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInp-99f63cb6.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInp-aeee3f69.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Preplac-247bd81c.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-ba21f3a3.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-bdb3602c.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Navig-d2503dd0.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Navigation.Routi-985a8d5a.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PendingRemoveVisual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Platform.SystemU-52af75f8.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.IThreadWorker.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions-dbbca1cb.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions-ec2327b1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.AddingAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Android.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Busy.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyOn.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTas-29d338e2.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTask.Type.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskMatch.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.BusyTaskModule.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Complet-74999c02.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Completed.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Complet-fae3aabf.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ContainingText.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IBusyHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Interac-6bd1994c.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.iOS.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IProgress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-58e37172.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-5f432f1b.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-98626b56.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScroll-a084fbf4.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScrolledLength.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IScrolledLengths.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IVisibility.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.KeyPressHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutA-26c2d2e5.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-26738dd1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-5c476e09.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-7e77e515.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-8c989cfe.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-9dffdf50.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-b64ddb63.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutT-b774ec2e.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnBackButton.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnKeyPress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserE-60db16f0.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserEvent.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageBeginLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageLoaded.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Progres-6c72ee30.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PullToReload.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PulseTr-b668fdd1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PulseTrigger-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.RangeAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Removin-6e73e5ec.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Scrolled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrolledArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrolledWhere.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Scrolli-4e51a6a8.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Scrolli-d6ad18f5.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollRegion.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGr-5960259b.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TextInp-db4356ba.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Transit-742f76c2.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Transition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TransitionGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TransitionMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger-32d26589.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger-509483c6.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TriggerPlayState.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBusy.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCo-eeca308.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEn-8a453f15.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.Range.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileInteracting.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKe-9dca693c.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKe-e286b5d.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileNotFocused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePageLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileScrollable.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileScrolled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileString.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileStringTest.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValueStatic.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileVi-4c3809e8.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileVisible.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWi-2e7b7d8e.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWi-403bcf40.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWi-b6203d01.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowSize.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WindowS-69720886.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: jni/Fuse.Triggers.g.cpp flags.txt | .uno
	echo Fuse.Triggers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.g.cpp.o -c jni/Fuse.Triggers.g.cpp

.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.HTML.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Collapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Hide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IHide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IShow.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadHtml.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadUrl.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pause.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Play.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlayTo.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pulse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Reload.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Resume.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Show.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Stop.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Toggle.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-10ca8acd.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-19aca435.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-1c5d7b33.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-1dda770c.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-1ecbf880.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-254e6a02.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-27912a3b.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-2bea2999.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-442c79fe.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-4e380e56.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-504f1beb.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-53b6ae74.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-598112db.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-5a595422.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-6e8373b3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-770d983.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-a9e252c4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-b140479e.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-c1198770.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-c9bb231d.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-cea11b76.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-d3d6294.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-d5e73d8f.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-dbbca1cb.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-dd0879e5.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-ec2327b1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-f0c555a.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-f3a67441.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-f84ec3c1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-fda38800.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions-fe42da8a.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutT-26738dd1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutT-7e77e515.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.CancelInt-fe0ed2d2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.VisualEventMode.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: jni/Fuse.Triggers.Actions.g.cpp flags.txt | .uno
	echo Fuse.Triggers.Actions.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.Actions.g.cpp.o -c jni/Fuse.Triggers.Actions.g.cpp

.uno/Fuse.Elements.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Designer.UnoHostInterface.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AspectConstraint.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizi-852ccdae.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Cache.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheHelper.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheTile.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CachingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.DisplayHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-293c2016.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-312bbda3.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-34d52777.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-36f7b512.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-6f76e752.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-79e29ab.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-9472ffe4.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-a1c6a3b2.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-aa07fc1c.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-b6fdf9f4.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatch.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-c235cef8.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element-d750183.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Explici-aa468cb6.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.FillAsp-5558472f.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HeightFunction.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.IElemen-96365734.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Interac-8bb1897f.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITreeRenderer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutF-5aff1535.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutFunction.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutM-97d0d66d.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutM-9dc16eb3.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterAttr.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LimitBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.NoImpli-28df30cc.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Optiona-bfaf403b.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Perspec-2f0f2958.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Preplac-247bd81c.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SingleV-cbfa2cd7.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Standar-e4f2b29a.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-36b8a655.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-3e6c9633.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-94150c5f.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transfo-b801686b.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-2a970980.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-68d746a1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-8fb43b23.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-97de34cd.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-b1893703.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Transla-c429c6ad.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Viewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ViewportMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.WidthFunction.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.XFunction.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.YFunction.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastProperty1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.InheritViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Internal.RectPacker.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ITransformRelative.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PerspectiveFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Reactive.Expression.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Reactive.UnaryOperator.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RelativeTransform-1.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ViewportHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Visual.HitTestTr-c7ce7669.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.Linke-cccb5d56.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.String.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Elements.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Elements.g.cpp.o: jni/Fuse.Elements.g.cpp flags.txt | .uno
	echo Fuse.Elements.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.g.cpp.o -c jni/Fuse.Elements.g.cpp

.uno/Fuse.Elements.Internal.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Interna-9286b3e9.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Interna-a1031a0d.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.Internal.g.cpp.o: jni/Fuse.Elements.Internal.g.cpp flags.txt | .uno
	echo Fuse.Elements.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.Internal.g.cpp.o -c jni/Fuse.Elements.Internal.g.cpp

.uno/Fuse.Effects.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.BasicEffect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Blur.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Desaturate.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShad-882510a4.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Duotone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectHelpers.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Halftone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.MaskMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.String.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Effects.g.cpp.o: jni/Fuse.Effects.g.cpp flags.txt | .uno
	echo Fuse.Effects.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Effects.g.cpp.o -c jni/Fuse.Effects.g.cpp

.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsNav-9486ecb9.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPan-7758f368.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-31ca59b0.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-3928cc2d.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-5f1f0b5f.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-6f551473.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-74d25d36.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-7a2c9334.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-8cad4d83.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-940454f5.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-9c9b741d.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-9f6c7a6f.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-a53c7983.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-b89ad79a.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsPri-ea097e7.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-2ea08c40.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-433e3292.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-85ab218f.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControlsScr-dbade381.h
.uno/Fuse.Controls.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Keyframe.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Trans-8bdd6c45.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Binding.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.AutoCap-abbe846.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.AutoCorrectHint.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BackButton.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomB-75d36dc1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomF-1d6dc8b2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Buffere-210977db.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.Template1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.Template2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ClientPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Container.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Default-e6102a36.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNav-578d0c74.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNavigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Element-1e48168c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Ellipse.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Extensions.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Fallbac-b543e85b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FileVideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FillRule.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FitMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FreezeDrawable.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Graphic-394625e0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Graphic-e79b25e0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Grid.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.HTML.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ImageElementDraw.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.INativeViewRoot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IProxyH-7358c3c0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IProxyHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ISourceReceiver.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ITextEditControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ITextRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.JavaScriptCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Keyfram-c31799e9.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LoadHtmlCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MobileT-db246482.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MobileT-e3385715.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MobileTextEdit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayoutPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-13840398.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-16eda318.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-19daa2c9.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-1b6e2e31.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-30689ad4.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-355d1d00.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-3ccb803a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-3d9a7064.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-3f63d28f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-450f50d5.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-512ed932.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-5a2a71a1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-6192a210.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-6474ff45.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-65c81a89.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-8162c4d8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-871e7c58.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-8f7a6cff.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-93003f54.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-989644c6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-9a58568d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-9bf352de.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-a2a1b1b5.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-a6c69fa2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-a97101ca.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-ab35427a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-b5d9b8f4.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-be9bb5b2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-c41d003c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-cfc43b5b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-e7e10bd6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-ea24053b.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-ec20dc1e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.-fc980861.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ITextEdit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Native.IViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeV-672079ed.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeV-6e069611.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeV-fa724406.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-3b526f57.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-3e92fae4.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-44108024.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-447b1e85.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-4b439754.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-4bf90958.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-54db86cf.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-5cd486b5.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-5e487033.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-6b8f71d0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-7504607c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-78593a0c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-7edfbc3e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-b140f655.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-b96bf0b7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-bebba826.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-c30b1c3e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-d4ced927.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-d91a6af7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigat-df1927fb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationBar.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Navigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigatorSwipe.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Number.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Page.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageFreeze.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageInd-dffb02e0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Path.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PathScaleMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PathShape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Placeholder.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Primiti-12648004.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl2D.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RemoveType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ReuseType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RightFr-4a64745c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Router_-4e223b13.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollP-40b272d3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollP-b5c8f9f8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-891eb8ae.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-95122af8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-954e2ccc.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-9a0d9880.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollV-9a1c9880.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shadow.-c0eec7d2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shadow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.Watcher.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.SingleV-5ec28542.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.SingleV-6a131ba3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.SingleV-7336d188.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.SingleViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.Template2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Star.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StatusB-19c248bb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.Template2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextBlock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextBox.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextCon-1f7e7581.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextCon-a7d219c6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextEditRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInp-2ad76625.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInp-99f63cb6.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInp-aeee3f69.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInp-f73683b4.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInput.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputHint.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TopFram-913999ac.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRen-91a46396.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TreeRen-f1d031eb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.URISche-802d8909.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.UrlVideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Video.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.VideoIm-7291347a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.VideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Viewbox.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WrapPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.PathGeom-418a124e.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.PathGeom-eaebd424.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitiv-4d4d2ed7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.RendererContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.WindingRules.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element-a1c6a3b2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Interna-9286b3e9.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ITreeRenderer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.LayoutM-9dc16eb3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FastProperty2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.LinearR-c7364e91.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Swiped.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ILoading.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ILoadingStatic.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusNavig-815405e7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Drawing-7b3f23a7.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.DrawManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.IImageC-53d8106a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.GridChildOrder.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Motion.ScrollViewMotion.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Activ-ba581989.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Activ-ff905cbb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Allow-96c44606.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Enter-e6d0da19.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Expli-b29b2019.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Histo-b609392.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.IBase-6ef44c1d.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.IRouterOutlet.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Linea-538b6e7a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ModifyRouteHow.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-5565398f.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-896d01fb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-90c1eee8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-981191bf.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-ba21f3a3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-bdb3602c.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navig-d2503dd0.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Route-b21d265.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Router.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RouterModify.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Routi-985a8d5a.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Struc-cf29dee4.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Visua-4f488356.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Visua-b0ea7b98.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.NodeGroupBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.SystemU-52af75f8.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Constan-b24df705.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Constant.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Property.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.This.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-6dc9bfa3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-79a2b6af.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageS-b717b1e2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.Double-23a614ea.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.String-6e34b3a3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.Toggle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions-dbbca1cb.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions-ec2327b1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions-f84ec3c1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.BusyTaskMatch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Progres-6c72ee30.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Transition.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ViewportHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.VisualContext.h
.uno/Fuse.Controls.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Size.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Size2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Unit.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.g.cpp.o: jni/Fuse.Controls.g.cpp flags.txt | .uno
	echo Fuse.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.g.cpp.o -c jni/Fuse.Controls.g.cpp

.uno/Fuse.Controls.Native.g.cpp.o: include/_root.FuseControlsNat-bee5a1ee.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.AutoCap-abbe846.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.AutoCorrectHint.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-10260f28.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-13840398.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-314e1ab3.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-355d1d00.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-375d3f95.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-3d9a7064.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-3df466d7.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-450f50d5.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-512ed932.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-55ad419c.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-56e5d440.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-5dd0448b.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-6474ff45.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-65c81a89.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-8f7a6cff.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-989644c6.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-a6c69fa2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-a97101ca.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-ab35427a.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-b096ad14.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-b876feeb.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-be9bb5b2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.Blitter.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-d324479e.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-d943f2ed.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-ea24053b.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-ec20dc1e.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.-fc980861.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ILeafView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ITextEdit.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.ITextView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IView.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.Native.IViewHost.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextInp-99f63cb6.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextInp-f73683b4.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextInputHint.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.Native.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Controls.Native.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.Native.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.g.cpp.o: jni/Fuse.Controls.Native.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.g.cpp.o -c jni/Fuse.Controls.Native.g.cpp

.uno/Fuse.Controls.Native.Android.g.cpp.o: include/_root.FuseControlsNat-bee5a1ee.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.AutoCap-abbe846.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.AutoCorrectHint.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-10dbc4d1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-13840398.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-19daa2c9.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-1b6e2e31.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-26dc0a28.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-30689ad4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-375d3f95.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-395aa7e5.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-3ccb803a.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-4b960356.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-55ad419c.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-5a2a71a1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-6192a210.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-65c81a89.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-660d7551.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-6823caff.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-80e392be.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-8162c4d8.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-93003f54.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-9707eda8.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-98e8148f.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-9bf352de.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-a587d3c0.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-b096ad14.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-c41d003c.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-c7f65b6c.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-cfc43b5b.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-e709cf1b.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-e75cc055.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-e7e10bd6.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-ea24053b.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-ec20dc1e.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-eef2833d.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.Native.-f1022ed0.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextInp-99f63cb6.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextInp-f73683b4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextInputHint.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.MultiD-b22363c3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Resources.System-9344cef3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.Native.Android.g.cpp.o: jni/Fuse.Controls.Native.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.Android.g.cpp.o -c jni/Fuse.Controls.Native.Android.g.cpp

.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-16eda318.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-3f63d28f.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-65c81a89.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-871e7c58.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-9a58568d.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-a2a1b1b5.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-b5d9b8f4.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-ea24053b.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Controls.Native.-ec20dc1e.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Native.iOS.g.cpp.o: jni/Fuse.Controls.Native.iOS.g.cpp flags.txt | .uno
	echo Fuse.Controls.Native.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Native.iOS.g.cpp.o -c jni/Fuse.Controls.Native.iOS.g.cpp

.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphic-4aac5bf3.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.Graphics.g.cpp.o: jni/Fuse.Controls.Graphics.g.cpp flags.txt | .uno
	echo Fuse.Controls.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Graphics.g.cpp.o -c jni/Fuse.Controls.Graphics.g.cpp

.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Controls.Primiti-12648004.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Drawing.Primitiv-4d4d2ed7.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Controls.Primitives.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.Primitives.g.cpp.o: jni/Fuse.Controls.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Controls.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Primitives.g.cpp.o -c jni/Fuse.Controls.Primitives.g.cpp

.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-1cb9b15a.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-1cf6d893.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-29284033.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-2b9c5ccc.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-3ce6c70f.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-621b7c13.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-6bab3816.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-7945f3a7.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-aab0fffa.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-ade64285.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-b29d65f6.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-d168b3a.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Fallbac-f95a972b.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.Interna-a1031a0d.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.VisualBounds.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: jni/Fuse.Controls.FallbackTextEdit.g.cpp flags.txt | .uno
	echo Fuse.Controls.FallbackTextEdit.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.FallbackTextEdit.g.cpp.o -c jni/Fuse.Controls.FallbackTextEdit.g.cpp

.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-1cf6d893.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-31850d8b.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-3ce6c70f.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-6bab3816.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-ade64285.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-cf6c96e7.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-d496c746.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-d6d15bea.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.Fallbac-d88dc6fd.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.Fon-2d909829.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.Spr-ac459106.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.Tex-257638a0.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o: jni/Fuse.Controls.FallbackTextRenderer.g.cpp flags.txt | .uno
	echo Fuse.Controls.FallbackTextRenderer.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.FallbackTextRenderer.g.cpp.o -c jni/Fuse.Controls.FallbackTextRenderer.g.cpp

.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-1a17aa63.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-4b903040.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-52d0aecf.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-55401bfe.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-78bdbf6a.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-c7156c79.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-d514f2df.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-e0933af9.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-effa9cec.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-f2d8624d.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.FuseTex-fdf18f45.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Internal.Cache-2.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Internal.FontFac-ce1c8c0c.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Bidirectional.Run.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Bidirectional.Runs.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.FallingBackFontFace.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Font.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.FontFace.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.LazyFontFace.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Measure.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.PositionedRun.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Renderer.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Shape.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.ShapedRun.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Substring.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Truncate.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Text.Wrap.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Threading.IDispat-8f89e3ba.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Controls.FuseTextRenderer.g.cpp.o: jni/Fuse.Controls.FuseTextRenderer.g.cpp flags.txt | .uno
	echo Fuse.Controls.FuseTextRenderer.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.FuseTextRenderer.g.cpp.o -c jni/Fuse.Controls.FuseTextRenderer.g.cpp

.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/_root.FuseControlsNav-e8d8cce8.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Animations.Trans-8bdd6c45.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-3b526f57.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-3e92fae4.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-4bf90958.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-5e487033.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-7504607c.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-7edfbc3e.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-b96bf0b7.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Navigat-d91a6af7.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Page.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Actions-a9e252c4.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Actions-ec2327b1.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Transit-742f76c2.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Controls.NavigationInternal.g.cpp.o: jni/Fuse.Controls.NavigationInternal.g.cpp flags.txt | .uno
	echo Fuse.Controls.NavigationInternal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.NavigationInternal.g.cpp.o -c jni/Fuse.Controls.NavigationInternal.g.cpp

.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/_root.FuseControlsVideo_bundle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-2107a26f.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-278c0045.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-284bd560.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-2db1f1e.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-6387b742.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-7291347a.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-78f63b56.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-bb298f12.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-be834fb0.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-c4c99a37.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-cc5828bc.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Controls.VideoIm-f711c366.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.BusyTask.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.BusyTaskActivity.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.VideoImpl.g.cpp.o: jni/Fuse.Controls.VideoImpl.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.g.cpp.o -c jni/Fuse.Controls.VideoImpl.g.cpp

.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-13a41ae7.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-5d086a80.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-663e85df.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-78f63b56.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-bb298f12.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Controls.VideoIm-cc5828bc.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Controls.VideoImpl.Android.g.cpp.o: jni/Fuse.Controls.VideoImpl.Android.g.cpp flags.txt | .uno
	echo Fuse.Controls.VideoImpl.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.VideoImpl.Android.g.cpp.o -c jni/Fuse.Controls.VideoImpl.Android.g.cpp

.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Animations.Anima-274f2a53.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.RangeControl2D.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollP-40b272d3.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollP-b5c8f9f8.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Interac-8bb1897f.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Circula-9540c317.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker-63ebb43e.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerTrigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.double2.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleClicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTapped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTappedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleT-fe4d5869.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.EdgeSwi-6f66aa89.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-1fb74f35.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-2634f6cd.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-40f52e14.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-4ebf99fc.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-5ee863d1.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-8014833b.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-b40f9dda.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Interna-d11b2f49.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ISizeConstraint.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInViewCommon.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LinearR-c7364e91.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPre-dd6de702.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.PanGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.PointerCapture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.PointerCaptureOn.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Pressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Released.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.RotateGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollableGoto.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scrolle-aa988f9c.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollTo.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SetSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Swiped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGe-776b1f69.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ToggleS-bac6e013.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TransformGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileCl-41538da9.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileHovering.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileSwiping.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ZoomGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnt-133e3c6c.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerWhe-2f1235d9.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-3c9694a.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-856a768f.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-906f30a9.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-92cee221.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Motion.Simulatio-a58c577b.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringInto-8d69fdcc.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.g.cpp.o: jni/Fuse.Gestures.g.cpp flags.txt | .uno
	echo Fuse.Gestures.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.g.cpp.o -c jni/Fuse.Gestures.g.cpp

.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-1fb74f35.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-2634f6cd.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-40f52e14.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-45d198d0.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-4ebf99fc.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-5ee863d1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-8014833b.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-b40f9dda.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-cace70c8.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-d11b2f49.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Interna-e8e4a78e.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.SwipeGe-776b1f69.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.CaptureType.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Gesture.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GestureRequest.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Gestures.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.GestureType.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.LayoutPriority.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-3c9694a.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-856a768f.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-8bde8aa1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-92cee221.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Motion.Simulatio-bdef395c.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: jni/Fuse.Gestures.Internal.g.cpp flags.txt | .uno
	echo Fuse.Gestures.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.Internal.g.cpp.o -c jni/Fuse.Gestures.Internal.g.cpp

.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.Anima-274f2a53.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Interna-5ee863d1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.SwipeGe-776b1f69.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Json.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.MotionConfig.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.NavigationMotion.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-3c9694a.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-625f2f9b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-856a768f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-92cee221.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Motion.Simulatio-a58c577b.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activ-2c58c273.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activated.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activ-ba581989.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Activ-ff905cbb.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Allow-96c44606.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackB-bb3d9d11.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackF-474a16c6.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Deact-dff1431e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Deactivated.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Direc-a636f54.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Enter-58096783.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Enter-e6d0da19.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Exiti-5497b5ec.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Expli-b29b2019.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoForward.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Hiera-14d792a9.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Histo-b609392.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IBase-6ef44c1d.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPage-680831c5.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPage-bc066382.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IRouterOutlet.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ISeek-5e75bfda.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Linea-538b6e7a.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ModifyRouteHow.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-5565398f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-59d0e775.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-7bfa875e.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-896d01fb.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-90b5b121.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-90c1eee8.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-981191bf.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-a2eacdbd.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-adff794c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateToggle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-ba21f3a3.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-bdb3602c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-cf4a7cb0.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-d2503dd0.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navig-d3aeb022.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavTriggerUtil.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.OutletType.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageE-240783e6.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageExpression.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageR-ae858a14.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-b21d265.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Route-dbaafdf.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Router.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RouterModify.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Routi-985a8d5a.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.RoutingResult.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SnapTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Struc-cf29dee4.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Struc-e50a61f1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Visua-4f488356.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Visua-b0ea7b98.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-19639125.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-2b1763fb.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-361ff13c.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-55b8facb.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-8bec3276.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileActive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-b8230eb3.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.While-bd15b6ce.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileCanGoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInactive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IContext.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Reactive.IListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Resources.Resour-628dd08f.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.PulseTr-b668fdd1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.PulseTrigger-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.VisualEvent-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Navigation.g.cpp.o: jni/Fuse.Navigation.g.cpp flags.txt | .uno
	echo Fuse.Navigation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Navigation.g.cpp.o -c jni/Fuse.Navigation.g.cpp

.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Controls.LayoutControl.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Optiona-bfaf403b.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.CircleLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLa-fd8c822.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefaultLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Definiti-bd4fc4e3.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridChildOrder.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Metric.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-468b1241.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.Obser-e1062ea9.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.String.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Layouts.g.cpp.o: jni/Fuse.Layouts.g.cpp flags.txt | .uno
	echo Fuse.Layouts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Layouts.g.cpp.o -c jni/Fuse.Layouts.g.cpp

.uno/Fuse.Text.g.cpp.o: include/_root.FuseText_bundle.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Internal.Cache-2.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Internal.CacheItem-2.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Internal.FontFac-ce1c8c0c.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Internal.RectPacker.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Resources.System-9344cef3.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Batch.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Bidirectional.Run.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.FallingBackFont.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.FallingBackFontFace.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Font.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.FontFace.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Glyph.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.GlyphAtlas.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.GlyphTexture.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Implementat-1d309026.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Implementat-34a2369f.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Implementat-3d5a4dbc.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.LazyFont.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.LazyFontFace.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.LineBreaks.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Measure.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.PositionedGlyph.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.PositionedRun.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Quad.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.RenderedGlyph.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Renderer.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Renderer.Sh-30caff4.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Shape.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.ShapedRun.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.ShapedRun.P-9f9f608e.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.SinglyLinke-52e3641d.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.SinglyLinkedList-1.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Substring.C-75d83875.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Substring.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Substring.L-51cfd25b.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Substring.L-5736d25e.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.SubstringExtensions.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.SubTexture.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.TextDirection.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.TextureAtlas.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Truncate.h
.uno/Fuse.Text.g.cpp.o: include/Fuse.Text.Wrap.h
.uno/Fuse.Text.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Text.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Runtime.Implement-ed322a11.h
.uno/Fuse.Text.g.cpp.o: include/Uno.String.h
.uno/Fuse.Text.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Text.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Text.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Text.g.cpp.o: include/Uno.UShort2.h
.uno/Fuse.Text.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Text.g.cpp.o: jni/Fuse.Text.g.cpp flags.txt | .uno
	echo Fuse.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Text.g.cpp.o -c jni/Fuse.Text.g.cpp

.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.Bidirection-81e36185.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.Bidirection-a3032277.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.Bidirectional.Run.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.Bidirectional.Runs.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.ShapedRun.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.SinglyLinkedList-1.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.Substring.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Fuse.Text.TextDirection.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Collections.Stack-1.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: include/Uno.String.h
.uno/Fuse.Text.Bidirectional.g.cpp.o: jni/Fuse.Text.Bidirectional.g.cpp flags.txt | .uno
	echo Fuse.Text.Bidirectional.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Text.Bidirectional.g.cpp.o -c jni/Fuse.Text.Bidirectional.g.cpp

.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Fuse.Text.Bidirection-a3032277.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Fuse.Text.Bidirectional.Run.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Fuse.Text.Substring.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Java.Object.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o: jni/Fuse.Text.Bidirectional.Implementation.g.cpp flags.txt | .uno
	echo Fuse.Text.Bidirectional.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Text.Bidirectional.Implementation.g.cpp.o -c jni/Fuse.Text.Bidirectional.Implementation.g.cpp

.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.Bidirectional.Run.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.Edit.Caret.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.Edit.CaretContext.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.Edit.CaretIndex.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.PositionedGlyph.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.PositionedRun.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.ShapedRun.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Fuse.Text.SubstringExtensions.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Text.Edit.g.cpp.o: include/Uno.String.h
.uno/Fuse.Text.Edit.g.cpp.o: jni/Fuse.Text.Edit.g.cpp flags.txt | .uno
	echo Fuse.Text.Edit.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Text.Edit.g.cpp.o -c jni/Fuse.Text.Edit.g.cpp

.uno/Fuse.Text.Implementation.g.cpp.o: include/Android.Base.Primitiv-95b7b52.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Font.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Glyph.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-1d309026.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-34a2369f.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-3a5ba083.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-3d5a4dbc.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-496d0d1d.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-4b1bb6eb.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-5759aed4.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-7d30e5b4.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-836005eb.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Implementat-8de68d27.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.PositionedGlyph.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.RenderedGlyph.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.Substring.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Fuse.Text.TextDirection.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/hb-ft-cached.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Java.Object.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Runtime.Implement-ed322a11.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Text.Implementation.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Text.Implementation.g.cpp.o: jni/Fuse.Text.Implementation.g.cpp flags.txt | .uno
	echo Fuse.Text.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Text.Implementation.g.cpp.o -c jni/Fuse.Text.Implementation.g.cpp

.uno/Fuse.Android.g.cpp.o: include/_root.FuseControlsNat-bee5a1ee.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.AppRoot.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Bitmap.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Blitter.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Canvas.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.GLUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLa-a3e5b16a.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StaticLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarHelper.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextControlLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextPaint.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRend-b0a6766a.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtil-d9bbd2fb.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextUtils.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.App.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-30689ad4.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-a587d3c0.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-c7645e49.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-e709cf1b.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Native.-f1022ed0.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextTruncation.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.ICommonViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Platform.SystemUI.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Android.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ArgumentOutOfRang-fec1f9ca.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ULong.h
.uno/Fuse.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.g.cpp.o: jni/Fuse.Android.g.cpp flags.txt | .uno
	echo Fuse.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.g.cpp.o -c jni/Fuse.Android.g.cpp

.uno/Fuse.Android.Bindings.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Fuse.Android.Bindings-d5e7e547.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.Compiler.ExportTa-f337964.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Android.Bindings.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.Bindings.g.cpp.o: jni/Fuse.Android.Bindings.g.cpp flags.txt | .uno
	echo Fuse.Android.Bindings.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Bindings.g.cpp.o -c jni/Fuse.Android.Bindings.g.cpp

.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls-112d446d.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls-1ee18226.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.URISche-802d8909.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Navigation.Histo-b609392.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Android.Controls.g.cpp.o: jni/Fuse.Android.Controls.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.g.cpp.o -c jni/Fuse.Android.Controls.g.cpp

.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-112d446d.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-12325021.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Fuse.Android.Controls-1ee18226.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Java.Object.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o: jni/Fuse.Android.Controls.WebViewUtils.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.WebViewUtils.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.WebViewUtils.g.cpp.o -c jni/Fuse.Android.Controls.WebViewUtils.g.cpp

.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.StatusBarConfig.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Platform.StatusB-4b932ee5.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Platform.StatusBarStyle.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.iOS.g.cpp.o: jni/Fuse.iOS.g.cpp flags.txt | .uno
	echo Fuse.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.iOS.g.cpp.o -c jni/Fuse.iOS.g.cpp

.uno/Fuse.iOS.Bindings.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Fuse.iOS.Bindings.Blitter.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Fuse.IRenderViewport.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Float.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.VertexAt-c05daa33.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Int.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Runtime.Implement-4541d9a7.h
.uno/Fuse.iOS.Bindings.g.cpp.o: include/Uno.Runtime.Implement-f3527fda.h
.uno/Fuse.iOS.Bindings.g.cpp.o: jni/Fuse.iOS.Bindings.g.cpp flags.txt | .uno
	echo Fuse.iOS.Bindings.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.iOS.Bindings.g.cpp.o -c jni/Fuse.iOS.Bindings.g.cpp

.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.AndroidPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.DirectoryInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileAttributes.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-484cdd9f.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-484ddd9f.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-6b49afc1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-d1dad6d8.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileS-e69416b1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileStatus.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.FileSystemInfo.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.Nothing.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.PathTools.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.FileSystem.UnifiedPaths.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Native-e68cd234.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.Result-f129cd22.h
.uno/Fuse.FileSystem.g.cpp.o: include/Fuse.Scripting.ValueC-4cd5cc17.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Char.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Double.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Int.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Long.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Object.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.String.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Constants.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Duration.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.Instant.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.FileSystem.g.cpp.o: include/Uno/Support.h
.uno/Fuse.FileSystem.g.cpp.o: jni/Fuse.FileSystem.g.cpp flags.txt | .uno
	echo Fuse.FileSystem.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.FileSystem.g.cpp.o -c jni/Fuse.FileSystem.g.cpp

.uno/Fuse.Physics.g.cpp.o: include/Fuse.Animations.Anima-274f2a53.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEnt-133e3c6c.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPre-46d8c90c.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerRel-d13a8586.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerWhe-2f1235d9.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Axis2D.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Body.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.BodyAttr.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Draggable.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.EnteredForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ExitedForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFie-26b24f8.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFie-d2e5a612.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFie-d7827ed3.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldTrigger.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.InForceF-5270285f.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.IRule.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.PointAttractor.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Spring.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.WhileDragging.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.World.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Physics.g.cpp.o: jni/Fuse.Physics.g.cpp flags.txt | .uno
	echo Fuse.Physics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Physics.g.cpp.o -c jni/Fuse.Physics.g.cpp

.uno/Fuse.Selection.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.IArray.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Marshal.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Reactive.IObservable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Reactive.ISubscription.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ExecutionThread.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.IEvent-d7a82197.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptClass.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMember.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Scripting.ScriptMethod-1.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Deselected.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Select-1fd43471.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Select-8204e282.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Select-883d80e5.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selectable.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selected.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.Selection.How.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.SelectionEvent.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.SelectMode.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.ToggleSelection.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Selection.WhileSelected.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Selection.g.cpp.o: include/Fuse.Visual.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Action-3.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.String.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Fuse.Selection.g.cpp.o: include/Uno.UX.Selector.h
.uno/Fuse.Selection.g.cpp.o: jni/Fuse.Selection.g.cpp flags.txt | .uno
	echo Fuse.Selection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Selection.g.cpp.o -c jni/Fuse.Selection.g.cpp

.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Scripting.Result-f129cd22.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.Applicat-b50c08a9.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.Applicat-ee8f098e.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.StorageModule.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.String.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Storage.g.cpp.o: jni/Fuse.Storage.g.cpp flags.txt | .uno
	echo Fuse.Storage.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Storage.g.cpp.o -c jni/Fuse.Storage.g.cpp

.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.ModuleResult.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.IWebSo-db8c24dd.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.Native-2c3e7343.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.Native-604be279.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.WebSoc-1af68aa9.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.WebSoc-7a414494.h
.uno/Fuse.WebSocket.g.cpp.o: include/Fuse.WebSocket.WebSocketClient.h
.uno/Fuse.WebSocket.g.cpp.o: include/Neovisionaries.WebSocketClient.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Action.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Int.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.Object.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.String.h
.uno/Fuse.WebSocket.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.WebSocket.g.cpp.o: jni/Fuse.WebSocket.g.cpp flags.txt | .uno
	echo Fuse.WebSocket.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.WebSocket.g.cpp.o -c jni/Fuse.WebSocket.g.cpp

.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.IC-add03308.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.IC-daf5e82b.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.BinaryLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Htt-f498a617.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Int-87489639.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Loader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.LoaderConst.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.TextLoader.h
.uno/Experimental.Http.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Char.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dicti-a9ba497d.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-2734f246.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMess-91b98dc2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.String.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Experimental.Http.g.cpp.o: jni/Experimental.Http.g.cpp flags.txt | .uno
	echo Experimental.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.g.cpp.o -c jni/Experimental.Http.g.cpp

.uno/Experimental.Http.Internal.g.cpp.o: include/Experimental.Http.Int-87489639.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.DateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: jni/Experimental.Http.Internal.g.cpp flags.txt | .uno
	echo Experimental.Http.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.Internal.g.cpp.o -c jni/Experimental.Http.Internal.g.cpp

.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.IC-add03308.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.IC-daf5e82b.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ProxyStream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.String.h
.uno/Experimental.Cache.g.cpp.o: jni/Experimental.Cache.g.cpp flags.txt | .uno
	echo Experimental.Cache.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Cache.g.cpp.o -c jni/Experimental.Cache.g.cpp

.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-1ab9da57.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-239f4f6d.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-4e2f4c54.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureL-f03d7306.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Int.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.String.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno/Support.h
.uno/Experimental.TextureLoader.g.cpp.o: jni/Experimental.TextureLoader.g.cpp flags.txt | .uno
	echo Experimental.TextureLoader.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.TextureLoader.g.cpp.o -c jni/Experimental.TextureLoader.g.cpp

.uno/Neovisionaries.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Neovisionaries.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Neovisionaries.g.cpp.o: include/Java.Object.h
.uno/Neovisionaries.g.cpp.o: include/Neovisionaries.WebSocketClient.h
.uno/Neovisionaries.g.cpp.o: include/Uno.Action.h
.uno/Neovisionaries.g.cpp.o: include/Uno.Action-1.h
.uno/Neovisionaries.g.cpp.o: include/Uno.Byte.h
.uno/Neovisionaries.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Neovisionaries.g.cpp.o: include/Uno.String.h
.uno/Neovisionaries.g.cpp.o: include/Uno/JNIHelper.h
.uno/Neovisionaries.g.cpp.o: jni/Neovisionaries.g.cpp flags.txt | .uno
	echo Neovisionaries.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Neovisionaries.g.cpp.o -c jni/Neovisionaries.g.cpp

.uno/Polyfills.Window.g.cpp.o: include/Fuse.Scripting.Module.h
.uno/Polyfills.Window.g.cpp.o: include/Polyfills.Window.WindowModule.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Bool.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.Object.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.String.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Polyfills.Window.g.cpp.o: include/Uno.UX.Resource.h
.uno/Polyfills.Window.g.cpp.o: jni/Polyfills.Window.g.cpp flags.txt | .uno
	echo Polyfills.Window.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Polyfills.Window.g.cpp.o -c jni/Polyfills.Window.g.cpp

.uno/FuseJS.g.cpp.o: include/Fuse.AndroidProperties.h
.uno/FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/FuseJS.g.cpp.o: include/Fuse.Node.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.ApplicationState.h
.uno/FuseJS.g.cpp.o: include/Fuse.Platform.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Native-e68cd234.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.Result-f129cd22.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/FuseJS.g.cpp.o: include/Fuse.Scripting.ValueC-4cd5cc17.h
.uno/FuseJS.g.cpp.o: include/Fuse.UpdateManager.h
.uno/FuseJS.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Base64.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Bundle.ReadClosure.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Environment.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl.h
.uno/FuseJS.g.cpp.o: include/FuseJS.FileReaderImpl-c53a76b9.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Globals.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Latin1Helpers.h
.uno/FuseJS.g.cpp.o: include/FuseJS.Lifecycle.h
.uno/FuseJS.g.cpp.o: include/FuseJS.RaiseEvent.h
.uno/FuseJS.g.cpp.o: include/FuseJS.UserEvents.h
.uno/FuseJS.g.cpp.o: include/Uno.Action.h
.uno/FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/FuseJS.g.cpp.o: include/Uno.Char.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/FuseJS.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Int.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.Bundle.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/FuseJS.g.cpp.o: include/Uno.IO.File.h
.uno/FuseJS.g.cpp.o: include/Uno.Object.h
.uno/FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/FuseJS.g.cpp.o: include/Uno.String.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Ascii.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Base64.h
.uno/FuseJS.g.cpp.o: include/Uno.Text.Utf8.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/FuseJS.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/FuseJS.g.cpp.o: include/Uno.UX.Selector.h
.uno/FuseJS.g.cpp.o: jni/FuseJS.g.cpp flags.txt | .uno
	echo FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/FuseJS.g.cpp.o -c jni/FuseJS.g.cpp

.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-2e217d39.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-4f267733.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-5a59dc8.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-729d617c.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-80299246.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-8e96328f.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-b3d5472e.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-b3dc562d.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-b8ae3149.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-bb535129.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-c62f3e4f.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-ddb73d9.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-e96864e6.h
.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulat-f928ee7f.h
.uno/Outracks.Simulator.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Outracks.Simulator.g.cpp.o: include/Android.Base.Wrappers-f1c8189.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.App.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.AppBase.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ButtonBase.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ClientPanel.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Grid.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ScrollDirections.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ScrollViewBase.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextAlignment.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextBox.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextInput.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextInputControl.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextWrapping.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Diagnostic.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.DiagnosticHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.DiagnosticType.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.DrawContext.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.Colors.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Font.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerWhe-a5bbc093.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Layer.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Node.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.NodeGroupBase.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.BindingMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.Constan-b24df705.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.DataBinding.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.IExpression.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.Property.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Reactive.This.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.RootViewport.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Time.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Timer.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Toast.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Triggers.AddingAnimation.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Triggers.Removin-6e73e5ec.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Visual.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.VisualEventArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ag-b2968c6d.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ap-1650505d.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ap-999e7f5a.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Application.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Apply-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ArrayStream.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bundle.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.By-2468a4c9.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.By-30ed2d55.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.By-c6309127.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.By-f964b10f.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ChangeIp.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Closure.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-33b10b30.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-86f5f845.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-883cc57.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-ace6329f.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-b47b0508.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Co-c715bdc9.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connected.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connecting.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Context.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.De-2d97e856.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DeviceInfo.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Di-21d6f27f.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Di-289155e3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Di-bb741075.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Du-e06814bd.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.En-3a89fa78.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.En-5625ea01.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ErrorToast.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Exceptions.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fa-5db051cf.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fa-8d0d447f.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fa-920345f4.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fa-dde75e4a.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FakeApp.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Faulted.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Flasher.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fo-a0fb4ba5.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Fo-a0fb4ba6.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ge-19efe557.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.GoOffline.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Idle.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IE-4f9891a4.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.In-991d97c3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.In-b3e552d1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.InputMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IS-553170fc.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Lo-fa2e4809.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ModalDialog.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.No-16ff05e1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Of-5bccded0.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-2072d9a4.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-2f2b13f3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-3426b3cc.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-3494b812.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-53d722cb.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-5981e2f7.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-7aa936e3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-9e9a9b3b.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-c197dd.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Pr-d2b1abe0.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ProxyClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Reifying.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ru-83cb90bb.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ru-a075d45f.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ru-aaa9d249.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ru-ffe7b02.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Running.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Se-6bc686d2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Sh-80a6ce89.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Sh-bbec5a41.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Si-334a0169.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.St-a40ac2e1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.State.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Ta-9b1bb554.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Task-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Tasks.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Un-d3f047b3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Us-39932f4a.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Wa-93fe7492.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.AggregateException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Array.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IList-468b1241.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ReadO-9f0438b5.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Color.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Compiler.ExportTa-8df74b00.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.EventArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.EventHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float3.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float4.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IDisposable.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.Bundle.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.BundleFile.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.Directory.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.File.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.Stream.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Long.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Math.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.Applicat-e6eaed1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.ApplicationState.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.CoreApp.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.Display.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.Displays.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Monitor.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.ThreadStart.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.NameTable.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Property.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.PropertyAccessor.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Resource.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Selector.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Size.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Unit.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno/JNIHelper.h
.uno/Outracks.Simulator.g.cpp.o: jni/Outracks.Simulator.g.cpp flags.txt | .uno
	echo Outracks.Simulator.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.g.cpp.o -c jni/Outracks.Simulator.g.cpp

.uno/Outracks.Simulator.By-653f4dff.cpp.o: include/Outracks.Simulator.ArrayStream.h
.uno/Outracks.Simulator.By-653f4dff.cpp.o: include/Outracks.Simulator.By-653f4dff.h
.uno/Outracks.Simulator.By-653f4dff.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.By-653f4dff.cpp.o: include/Uno.IO.Stream.h
.uno/Outracks.Simulator.By-653f4dff.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.By-653f4dff.cpp.o: jni/Outracks.Simulator.By-653f4dff.cpp flags.txt | .uno
	echo Outracks.Simulator.By-653f4dff.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.By-653f4dff.cpp.o -c jni/Outracks.Simulator.By-653f4dff.cpp

.uno/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.By-653f4dff.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.FileCache.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.FileCache.cpp.o: jni/Outracks.Simulator.FileCache.cpp flags.txt | .uno
	echo Outracks.Simulator.FileCache.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.FileCache.cpp.o -c jni/Outracks.Simulator.FileCache.cpp

.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Outracks.Simulator.Ge-bdd57e78.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Outracks.Simulator.Re-2b3df3ca.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Outracks.Simulator.Re-a21b65d4.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Outracks.Simulator.Re-b043ce10.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Outracks.Simulator.Ru-83cb90bb.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.IO.Bundle.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.Net.IPAddress.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Ge-bdd57e78.cpp.o: jni/Outracks.Simulator.Ge-bdd57e78.cpp flags.txt | .uno
	echo Outracks.Simulator.Ge-bdd57e78.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Ge-bdd57e78.cpp.o -c jni/Outracks.Simulator.Ge-bdd57e78.cpp

.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-18d1ffff.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-2468a4c9.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-2cc1f852.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-3094ecc5.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-30ed2d55.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-332e5e29.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-34a88bb9.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-366d63fd.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-432dacf8.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-478e2e7d.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-4a66cbfe.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-4cc4a0ce.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-4f00c975.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-5cf50015.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-5d8fce5d.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-5fd5f13f.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-6147e3c.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-64e7d8c8.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-6ac3d923.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-6dfaa4ef.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-6e882f39.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-719649ac.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-7bf5e5dd.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-839e8938.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-a3fa08e3.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-a5e76993.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-abf8704a.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-af6d410d.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-ba778869.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-c64cc76.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-ca1a4a0f.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d3b0fadf.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d3cd009d.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d66f8f6f.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d6e9c54e.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d8be24e6.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-d9d4d015.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-db647b13.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-e8b43d1f.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-f964b10f.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.In-991d97c3.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.In-b3e552d1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.No-16ff05e1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Se-6bc686d2.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.St-a40ac2e1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: jni/Outracks.Simulator.Bytecode.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Bytecode.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Bytecode.g.cpp.o -c jni/Outracks.Simulator.Bytecode.g.cpp

.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.By-30ed2d55.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Closure.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.In-991d97c3.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.No-16ff05e1.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-2072d9a4.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-2f2b13f3.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-3426b3cc.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-3494b812.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-53d722cb.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-5981e2f7.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-7aa936e3.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-9e9a9b3b.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-c197dd.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Pr-d2b1abe0.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: jni/Outracks.Simulator.Protocol.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Protocol.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Protocol.g.cpp.o -c jni/Outracks.Simulator.Protocol.g.cpp

.uno/Outracks.Simulator.Runtime.g.cpp.o: include/_root.HashableWeakReference.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/_root.WeakDictionary-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-18d1ffff.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-2468a4c9.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-2cc1f852.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-3094ecc5.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-30ed2d55.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-332e5e29.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-34a88bb9.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-366d63fd.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-432dacf8.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-478e2e7d.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-4a66cbfe.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-4cc4a0ce.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-4f00c975.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-5cf50015.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-5d8fce5d.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-6147e3c.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-6dfaa4ef.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-6e882f39.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-719649ac.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-7bf5e5dd.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-a3fa08e3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-a5e76993.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-af6d410d.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-ba778869.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-c64cc76.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d3b0fadf.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d3cd009d.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d66f8f6f.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d6e9c54e.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d8be24e6.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-d9d4d015.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-f964b10f.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Context.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-22f86bf1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-2bdd2abb.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-65f5f20f.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-6c6ff8f4.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-83cb90bb.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-9e76715f.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-a075d45f.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-a33439c6.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-aaa9d249.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-c33922e0.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-e0fde170.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-f6bc51c8.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Ru-ffe7b02.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-10.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-11.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-12.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-13.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-14.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-15.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-16.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-4.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-5.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-6.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-7.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-8.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-9.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.ArgumentException.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.Debug-71284d3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-10.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-11.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-12.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-13.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-14.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-15.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-16.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-17.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-4.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-5.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-6.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-7.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-8.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-9.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.SByte.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Short.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UShort.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.Property.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.Selector.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.SimulatedProperties.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: jni/Outracks.Simulator.Runtime.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.g.cpp.o -c jni/Outracks.Simulator.Runtime.g.cpp

.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/_root.WeakDictionary-2.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/Outracks.Simulator.Ru-7e7d87e8.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o: jni/Outracks.Simulator.Ru-7e7d87e8.cpp flags.txt | .uno
	echo Outracks.Simulator.Ru-7e7d87e8.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Ru-7e7d87e8.cpp.o -c jni/Outracks.Simulator.Ru-7e7d87e8.cpp

.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Outracks.Simulator.Ru-45f97a53.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.Action-3.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.UX.IPropertyListener.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.UX.Property.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.UX.PropertyObject.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: include/Uno.UX.Selector.h
.uno/Outracks.Simulator.Ru-45f97a53.cpp.o: jni/Outracks.Simulator.Ru-45f97a53.cpp flags.txt | .uno
	echo Outracks.Simulator.Ru-45f97a53.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Ru-45f97a53.cpp.o -c jni/Outracks.Simulator.Ru-45f97a53.cpp

.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: include/Outracks.Simulator.Ru-3d4976ee.h
.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Ru-3d4976ee.cpp.o: jni/Outracks.Simulator.Ru-3d4976ee.cpp flags.txt | .uno
	echo Outracks.Simulator.Ru-3d4976ee.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Ru-3d4976ee.cpp.o -c jni/Outracks.Simulator.Ru-3d4976ee.cpp

.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.By-2468a4c9.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.By-4cc4a0ce.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.By-6147e3c.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.By-d66f8f6f.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Re-8b040bf3.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Action-3.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-3.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-4.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-5.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: jni/Outracks.Simulator.Reflection.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Reflection.g.cpp.o -c jni/Outracks.Simulator.Reflection.g.cpp

.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.By-2468a4c9.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.By-4cc4a0ce.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.By-6147e3c.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.By-d66f8f6f.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.By-fabdbfb1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Im-c984c489.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-1a1b5f94.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-1f564055.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-2b3df3ca.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-2bb974e.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-47fe8c97.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-5b46a538.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-5beeada7.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-63a73cc1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-7d65992e.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-a21b65d4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Re-b043ce10.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Ru-22f86bf1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Ru-65f5f20f.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Ru-f6bc51c8.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.Enume-975d23de.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List--a77a08a2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Enum.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2x2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3x3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4x4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.TextureCube.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Long.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppField.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppFunction.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppReflection.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IField.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IFunction.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Runtime.Implement-c5fadc0b.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ULong.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: jni/Outracks.Simulator.Reflection.Native.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Reflection.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Reflection.Native.g.cpp.o -c jni/Outracks.Simulator.Reflection.Native.g.cpp

include/Uno.h: include/Uno/ObjectModel.h
include/Uno.h: include/Uno/Reflection.h



include/Uno/_internal.h: include/Uno/ObjectModel.h
include/Uno/_internal.h: include/Uno/_gc.h

include/Uno/GraphicsContext.h: include/Uno/Support.h

include/Uno/Memory.h: include/Uno/_config.h

include/Uno/ObjectModel.h: include/Uno/Memory.h
include/Uno/ObjectModel.h: include/Uno/Reflection.h

include/Uno/Support.h: include/Uno.Int2.h
include/Uno/Support.h: include/Uno.Float2.h

include/Uno/Uno.h: include/Uno.h
include/Uno/Uno.h: include/Uno/Support.h

include/Uno/XliInterop.h: include/Uno/Support.h


include/Uno/Reflection.h: include/Uno/Memory.h


include/Uno/JNIHelper.h: include/Uno/Uno.h
include/Uno/JNIHelper.h: include/Uno/AndroidCommon.h

include/Uno/Graphics/GLHelper.h: include/Uno/AndroidCommon.h




include/Implementation/Cpp/posix_thread.h: include/Uno.Threading.Thread.h






include/_root.FuseControls_bundle.h: include/Uno.h

include/_root.FuseControlsNat-bee5a1ee.h: include/Uno.h

include/_root.FuseControlsNav-e8d8cce8.h: include/Uno.Bool.h
include/_root.FuseControlsNav-e8d8cce8.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsNav-9486ecb9.h: include/Uno.Float4.h
include/_root.FuseControlsNav-9486ecb9.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPan-7758f368.h: include/Uno.h

include/_root.FuseControlsPri-8cad4d83.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsPri-7a2c9334.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsPri-6f551473.h: include/Uno.h

include/_root.FuseControlsPri-3928cc2d.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPri-3928cc2d.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-a53c7983.h: include/Uno.Float4.h
include/_root.FuseControlsPri-a53c7983.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-74d25d36.h: include/Uno.String.h
include/_root.FuseControlsPri-74d25d36.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-940454f5.h: include/Uno.Float4.h
include/_root.FuseControlsPri-940454f5.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-ea097e7.h: include/Fuse.Drawing.Brush.h
include/_root.FuseControlsPri-ea097e7.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-31ca59b0.h: include/Uno.Float4.h
include/_root.FuseControlsPri-31ca59b0.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-9c9b741d.h: include/Uno.Float.h
include/_root.FuseControlsPri-9c9b741d.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-9f6c7a6f.h: include/Uno.Float.h
include/_root.FuseControlsPri-9f6c7a6f.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-5f1f0b5f.h: include/Uno.Float.h
include/_root.FuseControlsPri-5f1f0b5f.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsPri-b89ad79a.h: include/Uno.Bool.h
include/_root.FuseControlsPri-b89ad79a.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScr-2ea08c40.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsScr-85ab218f.h: include/Uno.UX.PropertyAccessor.h

include/_root.FuseControlsScr-dbade381.h: include/Uno.Bool.h
include/_root.FuseControlsScr-dbade381.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsScr-433e3292.h: include/Uno.Bool.h
include/_root.FuseControlsScr-433e3292.h: include/Uno.UX.Property-1.h

include/_root.FuseControlsVideo_bundle.h: include/Uno.h

include/_root.FuseDrawing_bundle.h: include/Uno.h

include/_root.FuseDrawingPoly-6c38537d.h: include/Uno.h

include/_root.FuseDrawingPrim-2efb5481.h: include/Uno.h

include/_root.FuseEffects_bundle.h: include/Uno.h

include/_root.FuseElements_bundle.h: include/Uno.h

include/_root.FuseNodes_bundle.h: include/Uno.h

include/_root.FuseReactiveJav-9fd7535.h: include/Uno.h

include/_root.FuseText_bundle.h: include/Uno.h

include/_root.HashableWeakReference.h: include/Uno.Object.h

include/_root.OutracksSimulat-b3dc562d.h: include/Uno.UX.PropertyAccessor.h

include/_root.OutracksSimulat-729d617c.h: include/Uno.UX.PropertyAccessor.h

include/_root.OutracksSimulat-f928ee7f.h: include/Uno.UX.PropertyAccessor.h

include/_root.OutracksSimulat-c62f3e4f.h: include/Uno.UX.PropertyAccessor.h

include/_root.OutracksSimulat-8e96328f.h: include/Uno.h

include/_root.OutracksSimulat-5a59dc8.h: include/Uno.Float4.h
include/_root.OutracksSimulat-5a59dc8.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-b8ae3149.h: include/Uno.String.h
include/_root.OutracksSimulat-b8ae3149.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-2e217d39.h: include/Uno.Float4.h
include/_root.OutracksSimulat-2e217d39.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-b3d5472e.h: include/Uno.Float.h
include/_root.OutracksSimulat-b3d5472e.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-e96864e6.h: include/Uno.Bool.h
include/_root.OutracksSimulat-e96864e6.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-ddb73d9.h: include/Uno.Float4.h
include/_root.OutracksSimulat-ddb73d9.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-4f267733.h: include/Uno.String.h
include/_root.OutracksSimulat-4f267733.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-bb535129.h: include/Uno.Bool.h
include/_root.OutracksSimulat-bb535129.h: include/Uno.UX.Property-1.h

include/_root.OutracksSimulat-80299246.h: include/Uno.Float4.h
include/_root.OutracksSimulat-80299246.h: include/Uno.UX.Property-1.h

include/_root.UnoCore_bundle.h: include/Uno.h

include/_root.WeakDictionary-2.h: include/Uno.Object.h

include/_root.ControlPage.h: include/Fuse.Animations.IResize.h
include/_root.ControlPage.h: include/Fuse.Binding.h
include/_root.ControlPage.h: include/Fuse.Controls.Page.h
include/_root.ControlPage.h: include/Fuse.IActualPlacement.h
include/_root.ControlPage.h: include/Fuse.INotifyUnrooted.h
include/_root.ControlPage.h: include/Fuse.IProperties.h
include/_root.ControlPage.h: include/Fuse.Node.h
include/_root.ControlPage.h: include/Fuse.Scripting.IScriptObject.h
include/_root.ControlPage.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.ControlPage.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.ControlPage.h: include/Fuse.Triggers.Actions-19aca435.h
include/_root.ControlPage.h: include/Uno.Collections.ICollection-1.h
include/_root.ControlPage.h: include/Uno.Collections.IEnumerable-1.h
include/_root.ControlPage.h: include/Uno.Collections.IList-1.h
include/_root.ControlPage.h: include/Uno.Float4.h
include/_root.ControlPage.h: include/Uno.UX.IPropertyListener.h

include/_root.CustomButton.h: include/Fuse.Animations.IResize.h
include/_root.CustomButton.h: include/Fuse.Binding.h
include/_root.CustomButton.h: include/Fuse.Controls.Panel.h
include/_root.CustomButton.h: include/Fuse.IActualPlacement.h
include/_root.CustomButton.h: include/Fuse.INotifyUnrooted.h
include/_root.CustomButton.h: include/Fuse.IProperties.h
include/_root.CustomButton.h: include/Fuse.Node.h
include/_root.CustomButton.h: include/Fuse.Scripting.IScriptObject.h
include/_root.CustomButton.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.CustomButton.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.CustomButton.h: include/Fuse.Triggers.Actions-19aca435.h
include/_root.CustomButton.h: include/Uno.Collections.ICollection-1.h
include/_root.CustomButton.h: include/Uno.Collections.IEnumerable-1.h
include/_root.CustomButton.h: include/Uno.Collections.IList-1.h
include/_root.CustomButton.h: include/Uno.Float4.h
include/_root.CustomButton.h: include/Uno.UX.IPropertyListener.h

include/_root.MainView.h: include/Fuse.App.h
include/_root.MainView.h: include/Fuse.IProperties.h

include/_root.TBuilt.h: include/Fuse.Animations.IResize.h
include/_root.TBuilt.h: include/Fuse.Binding.h
include/_root.TBuilt.h: include/Fuse.Controls.Text.h
include/_root.TBuilt.h: include/Fuse.IActualPlacement.h
include/_root.TBuilt.h: include/Fuse.INotifyUnrooted.h
include/_root.TBuilt.h: include/Fuse.IProperties.h
include/_root.TBuilt.h: include/Fuse.Node.h
include/_root.TBuilt.h: include/Fuse.Scripting.IScriptObject.h
include/_root.TBuilt.h: include/Fuse.Triggers.Actions.IHide.h
include/_root.TBuilt.h: include/Fuse.Triggers.Actions.IShow.h
include/_root.TBuilt.h: include/Fuse.Triggers.Actions-19aca435.h
include/_root.TBuilt.h: include/Fuse.Triggers.IValue-1.h
include/_root.TBuilt.h: include/Uno.Collections.ICollection-1.h
include/_root.TBuilt.h: include/Uno.Collections.IEnumerable-1.h
include/_root.TBuilt.h: include/Uno.Collections.IList-1.h
include/_root.TBuilt.h: include/Uno.String.h
include/_root.TBuilt.h: include/Uno.UX.IPropertyListener.h

include/_root.TG18_accessor_C-e7614448.h: include/Uno.UX.PropertyAccessor.h

include/_root.TG18_accessor_C-74c29487.h: include/Uno.UX.PropertyAccessor.h

include/_root.TG18_accessor_C-e42fa7f7.h: include/Uno.UX.PropertyAccessor.h

include/_root.TG18_accessor_C-f781f23f.h: include/Uno.UX.PropertyAccessor.h

include/_root.TG18_accessor_F-4d6e0f33.h: include/Uno.UX.PropertyAccessor.h

include/_root.TG18_bundle.h: include/Uno.h

include/_root.TG18_ControlPag-b96bb017.h: include/Uno.Float4.h
include/_root.TG18_ControlPag-b96bb017.h: include/Uno.UX.Property-1.h

include/_root.TG18_ControlPag-fd9bf86b.h: include/Uno.Float4.h
include/_root.TG18_ControlPag-fd9bf86b.h: include/Uno.UX.Property-1.h

include/_root.TG18_CustomButt-b94d6bfe.h: include/Uno.String.h
include/_root.TG18_CustomButt-b94d6bfe.h: include/Uno.UX.Property-1.h

include/_root.TG18_CustomButt-e8820225.h: include/Uno.Float4.h
include/_root.TG18_CustomButt-e8820225.h: include/Uno.UX.Property-1.h

include/_root.TG18_FuseContro-371e305b.h: include/Uno.Float4.h
include/_root.TG18_FuseContro-371e305b.h: include/Uno.UX.Property-1.h

include/_root.TG18_FuseContro-76864997.h: include/Uno.Float4.h
include/_root.TG18_FuseContro-76864997.h: include/Uno.UX.Property-1.h

include/_root.TG18_FuseContro-1a43e8c1.h: include/Uno.Float4.h
include/_root.TG18_FuseContro-1a43e8c1.h: include/Uno.UX.Property-1.h

include/_root.TG18_FuseContro-e9ebd714.h: include/Uno.String.h
include/_root.TG18_FuseContro-e9ebd714.h: include/Uno.UX.Property-1.h

include/OpenGL.GL.h: include/Uno.h

include/OpenGL.GLBlendEquation.h: include/Uno.Int.h

include/OpenGL.GLBlendingFactor.h: include/Uno.Int.h

include/OpenGL.GLBufferHandle.h: include/Uno.Object.h

include/OpenGL.GLBufferTarget.h: include/Uno.Int.h

include/OpenGL.GLBufferUsage.h: include/Uno.Int.h

include/OpenGL.GLClearBufferMask.h: include/Uno.Int.h

include/OpenGL.GLCullFaceMode.h: include/Uno.Int.h

include/OpenGL.GLDataType.h: include/Uno.Int.h

include/OpenGL.GLDepthFunction.h: include/Uno.Int.h

include/OpenGL.GLEnableCap.h: include/Uno.Int.h

include/OpenGL.GLError.h: include/Uno.Int.h

include/OpenGL.GLFramebufferAttachment.h: include/Uno.Int.h

include/OpenGL.GLFramebufferHandle.h: include/Uno.Object.h

include/OpenGL.GLFramebufferStatus.h: include/Uno.Int.h

include/OpenGL.GLFramebufferTarget.h: include/Uno.Int.h

include/OpenGL.GLFrontFaceDirection.h: include/Uno.Int.h

include/OpenGL.GLIndexType.h: include/Uno.Int.h

include/OpenGL.GLInteger4Name.h: include/Uno.Int.h

include/OpenGL.GLIntegerName.h: include/Uno.Int.h

include/OpenGL.GLPixelFormat.h: include/Uno.Int.h

include/OpenGL.GLPixelType.h: include/Uno.Int.h

include/OpenGL.GLPrimitiveType.h: include/Uno.Int.h

include/OpenGL.GLProgramHandle.h: include/Uno.Object.h

include/OpenGL.GLProgramParameter.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferHandle.h: include/Uno.Object.h

include/OpenGL.GLRenderbufferStorage.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferTarget.h: include/Uno.Int.h

include/OpenGL.GLShaderHandle.h: include/Uno.Object.h

include/OpenGL.GLShaderParameter.h: include/Uno.Int.h

include/OpenGL.GLShaderType.h: include/Uno.Int.h

include/OpenGL.GLStringName.h: include/Uno.Int.h

include/OpenGL.GLTextureHandle.h: include/Uno.Object.h

include/OpenGL.GLTextureParameterName.h: include/Uno.Int.h

include/OpenGL.GLTextureParameterValue.h: include/Uno.Int.h

include/OpenGL.GLTextureTarget.h: include/Uno.Int.h

include/OpenGL.GLTextureUnit.h: include/Uno.Int.h

include/Uno.Action.h: include/Uno.Delegate.h

include/Uno.Action-1.h: include/Uno.Delegate.h

include/Uno.Action-2.h: include/Uno.Delegate.h

include/Uno.Action-3.h: include/Uno.Delegate.h

include/Uno.Action-4.h: include/Uno.Delegate.h

include/Uno.Action-5.h: include/Uno.Delegate.h

include/Uno.Action-6.h: include/Uno.Delegate.h

include/Uno.Action-7.h: include/Uno.Delegate.h

include/Uno.Action-8.h: include/Uno.Delegate.h

include/Uno.Action-9.h: include/Uno.Delegate.h

include/Uno.Action-10.h: include/Uno.Delegate.h

include/Uno.Action-11.h: include/Uno.Delegate.h

include/Uno.Action-12.h: include/Uno.Delegate.h

include/Uno.Action-13.h: include/Uno.Delegate.h

include/Uno.Action-14.h: include/Uno.Delegate.h

include/Uno.Action-15.h: include/Uno.Delegate.h

include/Uno.Action-16.h: include/Uno.Delegate.h

include/Uno.AggregateException.h: include/Uno.Exception.h

include/Uno.Application.h: include/Uno.Platform.CoreApp.h

include/Uno.ArgumentException.h: include/Uno.Exception.h

include/Uno.ArgumentNullException.h: include/Uno.ArgumentException.h

include/Uno.ArgumentOutOfRang-fec1f9ca.h: include/Uno.ArgumentException.h

include/Uno.Array.h: include/Uno.h

include/Uno.Attribute.h: include/Uno.Object.h

include/Uno.Bool.h: include/Uno.Object.h

include/Uno.Buffer.h: include/Uno.Object.h

include/Uno.Byte.h: include/Uno.Object.h

include/Uno.Byte2.h: include/Uno.Object.h

include/Uno.Byte4.h: include/Uno.Object.h

include/Uno.Char.h: include/Uno.Object.h

include/Uno.Color.h: include/Uno.h

include/Uno.Comparison-1.h: include/Uno.Delegate.h

include/Uno.DateTime.h: include/Uno.Object.h

include/Uno.Delegate.h: include/Uno.Object.h

include/Uno.Double.h: include/Uno.Object.h

include/Uno.Enum.h: include/Uno.h

include/Uno.EventArgs.h: include/Uno.Object.h

include/Uno.EventHandler.h: include/Uno.Delegate.h

include/Uno.EventHandler-1.h: include/Uno.Delegate.h

include/Uno.Exception.h: include/Uno.Object.h

include/Uno.FakeTime.h: include/Uno.Object.h

include/Uno.FlagsAttribute.h: include/Uno.Attribute.h

include/Uno.Float.h: include/Uno.Object.h

include/Uno.Float2.h: include/Uno.Object.h

include/Uno.Float2x2.h: include/Uno.Object.h

include/Uno.Float3.h: include/Uno.Object.h

include/Uno.Float3x3.h: include/Uno.Object.h

include/Uno.Float4.h: include/Uno.Object.h

include/Uno.Float4x4.h: include/Uno.Object.h

include/Uno.FormatException.h: include/Uno.Exception.h

include/Uno.Func-1.h: include/Uno.Delegate.h

include/Uno.Func-2.h: include/Uno.Delegate.h

include/Uno.Func-3.h: include/Uno.Delegate.h

include/Uno.Func-4.h: include/Uno.Delegate.h

include/Uno.Func-5.h: include/Uno.Delegate.h

include/Uno.Func-6.h: include/Uno.Delegate.h

include/Uno.Func-7.h: include/Uno.Delegate.h

include/Uno.Func-8.h: include/Uno.Delegate.h

include/Uno.Func-9.h: include/Uno.Delegate.h

include/Uno.Func-10.h: include/Uno.Delegate.h

include/Uno.Func-11.h: include/Uno.Delegate.h

include/Uno.Func-12.h: include/Uno.Delegate.h

include/Uno.Func-13.h: include/Uno.Delegate.h

include/Uno.Func-14.h: include/Uno.Delegate.h

include/Uno.Func-15.h: include/Uno.Delegate.h

include/Uno.Func-16.h: include/Uno.Delegate.h

include/Uno.Func-17.h: include/Uno.Delegate.h

include/Uno.GC.h: include/Uno.h

include/Uno.Generic.h: include/Uno.h

include/Uno.IDisposable.h: include/Uno.Object.h

include/Uno.IndexOutOfRangeException.h: include/Uno.Exception.h

include/Uno.Int.h: include/Uno.Object.h

include/Uno.Int2.h: include/Uno.Object.h

include/Uno.Int3.h: include/Uno.Object.h

include/Uno.Int4.h: include/Uno.Object.h

include/Uno.IntPtr.h: include/Uno.Object.h

include/Uno.InvalidCastException.h: include/Uno.Exception.h

include/Uno.InvalidOperationException.h: include/Uno.Exception.h

include/Uno.Long.h: include/Uno.Object.h

include/Uno.Math.h: include/Uno.h

include/Uno.Matrix.h: include/Uno.h

include/Uno.NotImplementedException.h: include/Uno.Exception.h

include/Uno.NotSupportedException.h: include/Uno.Exception.h

include/Uno.NullReferenceException.h: include/Uno.Exception.h

include/Uno.Object.h: include/Uno.h

include/Uno.ObjectDisposedException.h: include/Uno.Exception.h

include/Uno.ObsoleteAttribute.h: include/Uno.Attribute.h

include/Uno.OverflowException.h: include/Uno.Exception.h

include/Uno.Predicate-1.h: include/Uno.Delegate.h

include/Uno.Quaternion.h: include/Uno.h

include/Uno.Rect.h: include/Uno.Object.h

include/Uno.Recti.h: include/Uno.Object.h

include/Uno.SByte.h: include/Uno.Object.h

include/Uno.SByte2.h: include/Uno.Object.h

include/Uno.SByte4.h: include/Uno.Object.h

include/Uno.Short.h: include/Uno.Object.h

include/Uno.Short2.h: include/Uno.Object.h

include/Uno.Short4.h: include/Uno.Object.h

include/Uno.String.h: include/Uno.Object.h

include/Uno.Tuple.h: include/Uno.h

include/Uno.Tuple-2.h: include/Uno.Object.h

include/Uno.Type.h: include/Uno.Object.h

include/Uno.UInt.h: include/Uno.Object.h

include/Uno.ULong.h: include/Uno.Object.h

include/Uno.UShort.h: include/Uno.Object.h

include/Uno.UShort2.h: include/Uno.Object.h

include/Uno.UShort4.h: include/Uno.Object.h

include/Uno.Vector.h: include/Uno.h

include/Uno.WeakReference-1.h: include/Uno.Object.h

include/Uno.WeakReferenceAttribute.h: include/Uno.Attribute.h

include/Uno.Collections.Dicti-b5c5c402.h: include/Uno.Object.h

include/Uno.Collections.Dicti-9a5126db.h: include/Uno.Int.h

include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dicti-b5c5c402.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dicti-a9ba497d.h

include/Uno.Collections.Empty-fa377ee0.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Empty-fa377ee0.h: include/Uno.Object.h

include/Uno.Collections.Empty-f7cc83bb.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Empty-f7cc83bb.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Empty-f7cc83bb.h: include/Uno.IDisposable.h
include/Uno.Collections.Empty-f7cc83bb.h: include/Uno.Object.h

include/Uno.Collections.Enume-975d23de.h: include/Uno.h

include/Uno.Collections.Stack-2893a14b.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Stack-2893a14b.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Stack-2893a14b.h: include/Uno.IDisposable.h
include/Uno.Collections.Stack-2893a14b.h: include/Uno.Object.h

include/Uno.Collections.Queue-b1299f84.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Queue-b1299f84.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Queue-b1299f84.h: include/Uno.IDisposable.h
include/Uno.Collections.Queue-b1299f84.h: include/Uno.Object.h

include/Uno.Collections.List--a77a08a2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.List--a77a08a2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.List--a77a08a2.h: include/Uno.IDisposable.h
include/Uno.Collections.List--a77a08a2.h: include/Uno.Object.h

include/Uno.Collections.HashS-d2de44e2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.HashS-d2de44e2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.HashS-d2de44e2.h: include/Uno.IDisposable.h
include/Uno.Collections.HashS-d2de44e2.h: include/Uno.Object.h

include/Uno.Collections.Linke-627ba071.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Linke-627ba071.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Linke-627ba071.h: include/Uno.IDisposable.h
include/Uno.Collections.Linke-627ba071.h: include/Uno.Object.h

include/Uno.Collections.Dicti-c7b6fb8d.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dicti-c7b6fb8d.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dicti-c7b6fb8d.h: include/Uno.IDisposable.h
include/Uno.Collections.Dicti-c7b6fb8d.h: include/Uno.Object.h

include/Uno.Collections.Dicti-18cb71f3.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dicti-18cb71f3.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dicti-18cb71f3.h: include/Uno.IDisposable.h
include/Uno.Collections.Dicti-18cb71f3.h: include/Uno.Object.h

include/Uno.Collections.Dicti-a9ba497d.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dicti-a9ba497d.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dicti-a9ba497d.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dicti-a9ba497d.h: include/Uno.IDisposable.h
include/Uno.Collections.Dicti-a9ba497d.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.HashSet-1.h: include/Uno.Object.h
include/Uno.Collections.HashSet-1.h: include/Uno.Collections.HashS-d2de44e2.h

include/Uno.Collections.ICollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ICollection-1.h: include/Uno.Object.h

include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Object.h

include/Uno.Collections.IEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.IList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IList-1.h: include/Uno.Object.h

include/Uno.Collections.IList-468b1241.h: include/Uno.h

include/Uno.Collections.Dicti-a59832d1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dicti-a59832d1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dicti-a59832d1.h: include/Uno.Object.h
include/Uno.Collections.Dicti-a59832d1.h: include/Uno.Collections.Dicti-18cb71f3.h

include/Uno.Collections.KeyValuePair-2.h: include/Uno.Object.h

include/Uno.Collections.Enume-70f6b5a9.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.Linke-cccb5d56.h: include/Uno.Object.h

include/Uno.Collections.List-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.List-1.h: include/Uno.Object.h
include/Uno.Collections.List-1.h: include/Uno.Collections.List--a77a08a2.h

include/Uno.Collections.Obser-e1062ea9.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Obser-e1062ea9.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Obser-e1062ea9.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.Obser-e1062ea9.h: include/Uno.Object.h

include/Uno.Collections.OfTyp-34d2bd15.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.OfTyp-34d2bd15.h: include/Uno.Object.h

include/Uno.Collections.OfTyp-3a6d5f44.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.OfTyp-3a6d5f44.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.OfTyp-3a6d5f44.h: include/Uno.IDisposable.h
include/Uno.Collections.OfTyp-3a6d5f44.h: include/Uno.Object.h

include/Uno.Collections.Order-626a6106.h: include/Uno.Object.h

include/Uno.Collections.Prior-faf91ab2.h: include/Uno.Collections.Prior-b0fcad24.h
include/Uno.Collections.Prior-faf91ab2.h: include/Uno.Object.h

include/Uno.Collections.Prior-b0fcad24.h: include/Uno.Object.h

include/Uno.Collections.Prior-338f7fba.h: include/Uno.Int.h

include/Uno.Collections.Queue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Queue-1.h: include/Uno.Object.h
include/Uno.Collections.Queue-1.h: include/Uno.Collections.Queue-b1299f84.h

include/Uno.Collections.ReadO-9f0438b5.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ReadO-9f0438b5.h: include/Uno.Object.h

include/Uno.Collections.Selec-88607f03.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Selec-88607f03.h: include/Uno.Object.h

include/Uno.Collections.Selec-fdeaf39e.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Selec-fdeaf39e.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Selec-fdeaf39e.h: include/Uno.IDisposable.h
include/Uno.Collections.Selec-fdeaf39e.h: include/Uno.Object.h

include/Uno.Collections.Stack-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Stack-1.h: include/Uno.Object.h

include/Uno.Collections.Union-5dd79d16.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Union-5dd79d16.h: include/Uno.Object.h

include/Uno.Collections.Union-63c0f11.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Union-63c0f11.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Union-63c0f11.h: include/Uno.IDisposable.h
include/Uno.Collections.Union-63c0f11.h: include/Uno.Object.h

include/Uno.Collections.Dicti-c31dd20b.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dicti-c31dd20b.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dicti-c31dd20b.h: include/Uno.Object.h
include/Uno.Collections.Dicti-c31dd20b.h: include/Uno.Collections.Dicti-c7b6fb8d.h

include/Uno.Collections.Where-b5d516b1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Where-b5d516b1.h: include/Uno.Object.h

include/Uno.Collections.Where-fe54fbf4.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Where-fe54fbf4.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Where-fe54fbf4.h: include/Uno.IDisposable.h
include/Uno.Collections.Where-fe54fbf4.h: include/Uno.Object.h

include/Uno.Compiler.CallerFi-6fa01b19.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerLi-a2ceb52d.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerMe-226c9096.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerPa-7514d44e.h: include/Uno.Attribute.h

include/Uno.Compiler.HideFrom-17579a62.h: include/Uno.Attribute.h

include/Uno.Compiler.IgnoreMa-ff7ec744.h: include/Uno.Attribute.h

include/Uno.Compiler.MainClas-af34189d.h: include/Uno.Attribute.h

include/Uno.Compiler.UxGenera-f32ccc9.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-e81058d2.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-b0b1a2cc.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-f337964.h: include/Uno.h

include/Uno.Compiler.ExportTa-cbe6413a.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-87692731.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-dbc929da.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-f7892212.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTa-6520c73b.h: include/Uno.h

include/Uno.Compiler.ExportTa-4cc36c3e.h: include/Uno.h

include/Uno.Compiler.ExportTa-8df74b00.h: include/Uno.h

include/Uno.Compiler.ExportTa-2adaffe3.h: include/Uno.Attribute.h

include/Uno.Compiler.ImportSe-121ba015.h: include/Uno.Attribute.h

include/Uno.Compiler.ShaderGe-1728612e.h: include/Uno.Attribute.h

include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.Bit-37dac05f.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.Bit-d334a7e5.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.IDisposable.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Object.h

include/Uno.Content.Fonts.Bit-d334a7e5.h: include/Uno.Object.h

include/Uno.Content.Fonts.CppFontFace.h: include/Uno.Content.Fonts.FontFace.h
include/Uno.Content.Fonts.CppFontFace.h: include/Uno.IDisposable.h

include/Uno.Content.Fonts.Cpp-de3af34d.h: include/Uno.Object.h

include/Uno.Content.Fonts.Def-4a6def7f.h: include/Uno.Content.Fonts.Tex-257638a0.h
include/Uno.Content.Fonts.Def-4a6def7f.h: include/Uno.Float4x4.h

include/Uno.Content.Fonts.FontFace.h: include/Uno.IDisposable.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Object.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Content.Fonts.Ren-93b3e294.h

include/Uno.Content.Fonts.Fon-2d909829.h: include/Uno.h

include/Uno.Content.Fonts.Bit-37dac05f.h: include/Uno.Float2.h
include/Uno.Content.Fonts.Bit-37dac05f.h: include/Uno.Object.h
include/Uno.Content.Fonts.Bit-37dac05f.h: include/Uno.UShort2.h

include/Uno.Content.Fonts.Ren-93b3e294.h: include/Uno.Float2.h
include/Uno.Content.Fonts.Ren-93b3e294.h: include/Uno.Object.h

include/Uno.Content.Fonts.Sdf-fcdf4d8e.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.Sdf-fcdf4d8e.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Uno.Content.Fonts.Spr-ac459106.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.Spr-ac459106.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Byte4.h
include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextShader.h: include/Uno.Object.h

include/Uno.Content.Fonts.Tex-d2fe174c.h: include/Uno.Float4x4.h
include/Uno.Content.Fonts.Tex-d2fe174c.h: include/Uno.Graphics.VertexAt-1f8449a6.h
include/Uno.Content.Fonts.Tex-d2fe174c.h: include/Uno.Object.h

include/Uno.Content.Fonts.Tex-257638a0.h: include/Uno.Object.h
include/Uno.Content.Fonts.Tex-257638a0.h: include/Uno.Float4x4.h

include/Uno.Content.Images.Bitmap.h: include/Uno.Int2.h
include/Uno.Content.Images.Bitmap.h: include/Uno.Object.h

include/Uno.Content.Models.IndexArray.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMesh.h: include/Uno.Object.h

include/Uno.Content.Models.Ve-20c98a9c.h: include/Uno.Object.h

include/Uno.Content.Splines.K-e872f060.h: include/Uno.Object.h

include/Uno.Content.Splines.K-6d710a70.h: include/Uno.Content.Splines.K-e872f060.h
include/Uno.Content.Splines.K-6d710a70.h: include/Uno.Content.Splines.Spline-1.h
include/Uno.Content.Splines.K-6d710a70.h: include/Uno.Object.h

include/Uno.Content.Splines.L-134d6cb.h: include/Uno.Content.Splines.K-6d710a70.h
include/Uno.Content.Splines.L-134d6cb.h: include/Uno.Float.h

include/Uno.Content.Splines.L-122d6cb.h: include/Uno.Content.Splines.K-6d710a70.h
include/Uno.Content.Splines.L-122d6cb.h: include/Uno.Float2.h

include/Uno.Content.Splines.L-123d6cb.h: include/Uno.Content.Splines.K-6d710a70.h
include/Uno.Content.Splines.L-123d6cb.h: include/Uno.Float3.h

include/Uno.Content.Splines.L-120d6cb.h: include/Uno.Content.Splines.K-6d710a70.h
include/Uno.Content.Splines.L-120d6cb.h: include/Uno.Float4.h

include/Uno.Content.Splines.L-f7c8ed96.h: include/Uno.Content.Splines.K-6d710a70.h
include/Uno.Content.Splines.L-f7c8ed96.h: include/Uno.Float4x4.h

include/Uno.Content.Splines.Spline-1.h: include/Uno.Object.h

include/Uno.Diagnostics.AllocateEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.Alway-db12420b.h: include/Uno.Attribute.h

include/Uno.Diagnostics.Asser-7ca79286.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Clock.h: include/Uno.h

include/Uno.Diagnostics.Debug.h: include/Uno.h

include/Uno.Diagnostics.Debug-71284d3.h: include/Uno.Int.h

include/Uno.Diagnostics.EnterEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.EventType.h: include/Uno.Int.h

include/Uno.Diagnostics.ExitEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.FreeEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.IdMap-1.h: include/Uno.Object.h

include/Uno.Diagnostics.LogHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Never-48520b9a.h: include/Uno.Attribute.h

include/Uno.Diagnostics.Profile.h: include/Uno.h

include/Uno.Diagnostics.ProfileData.h: include/Uno.Object.h

include/Uno.Diagnostics.ProfileEvent.h: include/Uno.Object.h

include/Uno.Graphics.BlendEquation.h: include/Uno.Int.h

include/Uno.Graphics.BlendOperand.h: include/Uno.Int.h

include/Uno.Graphics.BufferUsage.h: include/Uno.Int.h

include/Uno.Graphics.CompareFunc.h: include/Uno.Int.h

include/Uno.Graphics.CubeFace.h: include/Uno.Int.h

include/Uno.Graphics.DeviceBuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.DeviceBuffer.h: include/Uno.Object.h

include/Uno.Graphics.Format.h: include/Uno.Int.h

include/Uno.Graphics.FormatHelpers.h: include/Uno.h

include/Uno.Graphics.Framebuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.Framebuffer.h: include/Uno.Object.h

include/Uno.Graphics.FramebufferFlags.h: include/Uno.Int.h

include/Uno.Graphics.IndexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.IndexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.IndexType.h: include/Uno.Int.h

include/Uno.Graphics.PolygonFace.h: include/Uno.Int.h

include/Uno.Graphics.PolygonWinding.h: include/Uno.Int.h

include/Uno.Graphics.PrimitiveType.h: include/Uno.Int.h

include/Uno.Graphics.RenderTarget.h: include/Uno.IDisposable.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Int2.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Object.h

include/Uno.Graphics.SamplerState.h: include/Uno.Object.h

include/Uno.Graphics.Texture2D.h: include/Uno.IDisposable.h
include/Uno.Graphics.Texture2D.h: include/Uno.Int2.h
include/Uno.Graphics.Texture2D.h: include/Uno.Object.h

include/Uno.Graphics.TextureA-cdadf24a.h: include/Uno.Int.h

include/Uno.Graphics.TextureCube.h: include/Uno.IDisposable.h
include/Uno.Graphics.TextureCube.h: include/Uno.Object.h

include/Uno.Graphics.TextureFilter.h: include/Uno.Int.h

include/Uno.Graphics.TextureHelpers.h: include/Uno.h

include/Uno.Graphics.VertexAt-1f8449a6.h: include/Uno.Object.h

include/Uno.Graphics.VertexAt-c05daa33.h: include/Uno.Int.h

include/Uno.Graphics.VertexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.VertexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.VideoTexture.h: include/Uno.IDisposable.h
include/Uno.Graphics.VideoTexture.h: include/Uno.Object.h

include/Uno.IO.BinaryReader.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryReader.h: include/Uno.Object.h

include/Uno.IO.BinaryWriter.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryWriter.h: include/Uno.Object.h

include/Uno.IO.Bundle.h: include/Uno.Object.h

include/Uno.IO.BundleFile.h: include/Uno.Object.h

include/Uno.IO.CppXliStream.h: include/Uno.IDisposable.h
include/Uno.IO.CppXliStream.h: include/Uno.IO.Stream.h

include/Uno.IO.CppXliStreamHandle.h: include/Uno.Object.h

include/Uno.IO.Directory.h: include/Uno.h

include/Uno.IO.EndOfStreamException.h: include/Uno.IO.IOException.h

include/Uno.IO.File.h: include/Uno.h

include/Uno.IO.FileMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerable.h: include/Uno.String.h

include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.IDisposable.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.Object.h
include/Uno.IO.FileSystemEnumerator.h: include/Uno.String.h

include/Uno.IO.FileSystemEnum-91d0e8b3.h: include/CppXliFileSystemEnumerator.h
include/Uno.IO.FileSystemEnum-91d0e8b3.h: include/Uno.Object.h

include/Uno.IO.FileSystemEnum-569b126c.h: include/Uno.h

include/Uno.IO.FileSystemEnum-e90742ab.h: include/Uno.Int.h

include/Uno.IO.FileSystemImpl.h: include/Uno.h

include/Uno.IO.IOException.h: include/Uno.Exception.h

include/Uno.IO.MemoryStream.h: include/Uno.IDisposable.h
include/Uno.IO.MemoryStream.h: include/Uno.IO.Stream.h

include/Uno.IO.Path.h: include/Uno.h

include/Uno.IO.SeekOrigin.h: include/Uno.Int.h

include/Uno.IO.Stream.h: include/Uno.IDisposable.h
include/Uno.IO.Stream.h: include/Uno.Object.h

include/Uno.IO.StreamReader.h: include/Uno.IDisposable.h
include/Uno.IO.StreamReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StreamWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StreamWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.StringReader.h: include/Uno.IDisposable.h
include/Uno.IO.StringReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StringWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StringWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.TextReader.h: include/Uno.IDisposable.h
include/Uno.IO.TextReader.h: include/Uno.Object.h

include/Uno.IO.TextWriter.h: include/Uno.IDisposable.h
include/Uno.IO.TextWriter.h: include/Uno.Object.h

include/Uno.IO.UserDirectory.h: include/Uno.Int.h

include/Uno.Platform.AndroidDisplay.h: include/Uno.Platform.Display.h

include/Uno.Platform.ApplicationState.h: include/Uno.Int.h

include/Uno.Platform.Applicat-e6eaed1.h: include/Uno.Delegate.h

include/Uno.Platform.ClosingEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.CoreApp.h: include/Uno.Object.h

include/Uno.Platform.Display.h: include/Uno.Object.h

include/Uno.Platform.Displays.h: include/Uno.h

include/Uno.Platform.EventModifiers.h: include/Uno.Int.h

include/Uno.Platform.FrameCha-7feb1e04.h: include/Uno.EventArgs.h
include/Uno.Platform.FrameCha-7feb1e04.h: include/Uno.Rect.h

include/Uno.Platform.Key.h: include/Uno.Int.h

include/Uno.Platform.KeyEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.OSFrame.h: include/Uno.Object.h

include/Uno.Platform.PointerCursor.h: include/Uno.Int.h

include/Uno.Platform.PointerType.h: include/Uno.Int.h

include/Uno.Platform.TextInpu-b36b7d02.h: include/Uno.EventArgs.h

include/Uno.Platform.TimerEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.WheelDeltaMode.h: include/Uno.Int.h

include/Uno.Platform.Window.h: include/Uno.Platform.OSFrame.h

include/Uno.Platform.EventSou-1ddd7161.h: include/Uno.h

include/Uno.Platform.EventSou-fc56fb86.h: include/Uno.h

include/Uno.Platform.EventSou-295e6cc0.h: include/Uno.h

include/Uno.Reflection.CppField.h: include/Uno.Object.h
include/Uno.Reflection.CppField.h: include/Uno.Reflection.IField.h

include/Uno.Reflection.CppFunction.h: include/Uno.Object.h
include/Uno.Reflection.CppFunction.h: include/Uno.Reflection.IFunction.h

include/Uno.Reflection.CppReflection.h: include/Uno.Object.h

include/Uno.Reflection.IField.h: include/Uno.Object.h

include/Uno.Reflection.IFunction.h: include/Uno.Object.h

include/Uno.Runtime.Implement-d86e6f2e.h: include/Uno.h

include/Uno.Runtime.Implement-12bca14.h: include/Uno.h

include/Uno.Runtime.Implement-ed322a11.h: include/Uno.h

include/Uno.Runtime.Implement-908c1ea1.h: include/Uno.h

include/Uno.Runtime.Implement-b02250e8.h: include/Uno.h

include/Uno.Runtime.Implement-c0938fca.h: include/Uno.h

include/Uno.Runtime.Implement-7b5e00e3.h: include/Uno.Object.h

include/Uno.Runtime.Implement-f509f747.h: include/Uno.Object.h

include/Uno.Runtime.Implement-fe570c35.h: include/Uno.h

include/Uno.Runtime.Implement-c5fadc0b.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implement-c5fadc0b.h: include/Uno.Object.h

include/Uno.Runtime.Implement-7dfef248.h: include/Uno.Collections.IEnumerator.h
include/Uno.Runtime.Implement-7dfef248.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Runtime.Implement-7dfef248.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implement-7dfef248.h: include/Uno.Object.h

include/Uno.Runtime.Implement-d21e2a02.h: include/Uno.Collections.ICollection-1.h
include/Uno.Runtime.Implement-d21e2a02.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implement-d21e2a02.h: include/Uno.Collections.IList-1.h
include/Uno.Runtime.Implement-d21e2a02.h: include/Uno.Object.h

include/Uno.Runtime.Implement-f3527fda.h: include/Uno.h

include/Uno.Runtime.Implement-c1cd04fd.h: include/Uno.Object.h

include/Uno.Runtime.Implement-f5bc651f.h: include/Uno.Int.h

include/Uno.Runtime.Implement-2ba4b8a4.h: include/Uno.Runtime.Implement-118b56a9.h

include/Uno.Runtime.Implement-ac8fca1c.h: include/Uno.Runtime.Implement-118b56a9.h

include/Uno.Runtime.Implement-118b56a9.h: include/Uno.Object.h

include/Uno.Runtime.Implement-cf057571.h: include/Uno.Object.h

include/Uno.Runtime.Implement-aa4726e.h: include/Uno.h

include/Uno.Runtime.Implement-f5f2ed32.h: include/Uno.Int.h

include/Uno.Runtime.Implement-2c3e8c94.h: include/Uno.h

include/Uno.Runtime.Implement-b29fb75.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implement-b29fb75.h: include/Uno.Object.h

include/Uno.Runtime.Implement-5e8872c0.h: include/Uno.Object.h

include/Uno.Runtime.Implement-3f0cccc8.h: include/Uno.Exception.h

include/Uno.Runtime.Implement-56fe5cfa.h: include/Uno.h

include/Uno.Runtime.Implement-8c65ef1f.h: include/Uno.h

include/Uno.Runtime.Implement-4541d9a7.h: include/Uno.Object.h

include/Uno.Runtime.InteropSe-5053ab55.h: include/Uno.Object.h

include/Uno.Runtime.InteropSe-bb3b6e34.h: include/Uno.Int.h

include/Uno.Text.Ascii.h: include/Uno.h

include/Uno.Text.Base64.h: include/Uno.h

include/Uno.Text.Decoder.h: include/Uno.Object.h

include/Uno.Text.Encoding.h: include/Uno.Object.h

include/Uno.Text.StringBuilder.h: include/Uno.Object.h

include/Uno.Text.StringBuilderElement.h: include/Uno.Object.h

include/Uno.Text.Utf8.h: include/Uno.h

include/Uno.Text.UTF8Decoder.h: include/Uno.Text.Decoder.h

include/Uno.Text.UTF8Encoding.h: include/Uno.Text.Encoding.h

include/Uno.Threading.IDispat-d40599f9.h: include/Uno.Object.h

include/Uno.Threading.IDispat-5604a813.h: include/Uno.Object.h

include/Uno.Threading.IDispat-7a7b99f9.h: include/Uno.Object.h

include/Uno.Threading.AutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.AutoResetEvent.h: include/Uno.Threading.EventWaitHandle.h

include/Uno.Threading.Cancell-aca909eb.h: include/Uno.Object.h

include/Uno.Threading.Cancell-24c95bd.h: include/Uno.Object.h

include/Uno.Threading.Future--718c3e8a.h: include/Uno.Object.h

include/Uno.Threading.Concurr-928e25ca.h: include/Uno.Collections.ICollection-1.h
include/Uno.Threading.Concurr-928e25ca.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Threading.Concurr-928e25ca.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Threading.Concurr-928e25ca.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Threading.Concurr-928e25ca.h: include/Uno.Object.h

include/Uno.Threading.Concurr-8340a947.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-da4652e9.h: include/Uno.Threading.ThreadP-c17e82e1.h

include/Uno.Threading.EventResetMode.h: include/Uno.Int.h

include/Uno.Threading.EventWaitHandle.h: include/Implementation/Cpp/posix_reset_event.h
include/Uno.Threading.EventWaitHandle.h: include/Implementation/CPP/posix_reset_event.h
include/Uno.Threading.EventWaitHandle.h: include/Uno.IDisposable.h
include/Uno.Threading.EventWaitHandle.h: include/Uno.Object.h

include/Uno.Threading.Future.h: include/Uno.IDisposable.h
include/Uno.Threading.Future.h: include/Uno.Object.h

include/Uno.Threading.Future-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Future-1.h: include/Uno.Threading.Future.h

include/Uno.Threading.FutureState.h: include/Uno.Int.h

include/Uno.Threading.IDispatcher.h: include/Uno.Object.h

include/Uno.Threading.IDispat-8f89e3ba.h: include/Uno.h

include/Uno.Threading.ITaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ITaskScheduler.h: include/Uno.Object.h

include/Uno.Threading.MainThr-dde56bf.h: include/Uno.Attribute.h

include/Uno.Threading.ManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.ManualResetEvent.h: include/Uno.Threading.EventWaitHandle.h

include/Uno.Threading.Monitor.h: include/Uno.h

include/Uno.Threading.Mutex.h: include/Uno.IDisposable.h
include/Uno.Threading.Mutex.h: include/Uno.Object.h

include/Uno.Threading.Pthread-9750f380.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-4baa0769.h: include/Uno.Threading.ThreadP-c17e82e1.h

include/Uno.Threading.Promise-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Promise-1.h: include/Uno.Object.h
include/Uno.Threading.Promise-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.PthreadHelpers.h: include/Implementation/Cpp/posix_mutex.h
include/Uno.Threading.PthreadHelpers.h: include/Implementation/Cpp/posix_reset_event.h
include/Uno.Threading.PthreadHelpers.h: include/Implementation/Cpp/posix_thread.h
include/Uno.Threading.PthreadHelpers.h: include/Uno.h

include/Uno.Threading.Pthread-b67394d0.h: include/Implementation/Cpp/posix_reset_event.h
include/Uno.Threading.Pthread-b67394d0.h: include/Uno.Object.h

include/Uno.Threading.SyncDispatcher.h: include/Uno.Object.h
include/Uno.Threading.SyncDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Threading.Task.h: include/Uno.IDisposable.h
include/Uno.Threading.Task.h: include/Uno.Object.h

include/Uno.Threading.TaskDelegate.h: include/Uno.Delegate.h

include/Uno.Threading.TaskFuture-1.h: include/Uno.IDisposable.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Object.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.TaskStatus.h: include/Uno.Int.h

include/Uno.Threading.Thread.h: include/Uno.Object.h

include/Uno.Threading.Pthread-d9dd2118.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPool.h: include/Uno.Object.h

include/Uno.Threading.ThreadP-154dcc3.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadP-154dcc3.h: include/Uno.Object.h
include/Uno.Threading.ThreadP-154dcc3.h: include/Uno.Threading.ITaskScheduler.h

include/Uno.Threading.ThreadStart.h: include/Uno.Delegate.h

include/Uno.Threading.ThreadS-2ac1152a.h: include/Uno.Exception.h

include/Uno.Threading.ThreadP-c17e82e1.h: include/Uno.Object.h

include/Uno.Time.CalendarSystem.h: include/Uno.Object.h

include/Uno.Time.Constants.h: include/Uno.h

include/Uno.Time.Converter.h: include/Uno.h

include/Uno.Time.DateTimeZone.h: include/Uno.Object.h
include/Uno.Time.DateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.DeviceTimeZone.h: include/Uno.Time.DateTimeZone.h

include/Uno.Time.Duration.h: include/Uno.Object.h

include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.DateTimeZone.h
include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.HashCodeHelper.h: include/Uno.h

include/Uno.Time.Instant.h: include/Uno.Object.h

include/Uno.Time.LocalDate.h: include/Uno.Object.h

include/Uno.Time.LocalDateTime.h: include/Uno.Object.h
include/Uno.Time.LocalDateTime.h: include/Uno.Time.Instant.h

include/Uno.Time.LocalTime.h: include/Uno.Object.h

include/Uno.Time.Offset.h: include/Uno.Object.h

include/Uno.Time.OffsetDateTime.h: include/Uno.Object.h
include/Uno.Time.OffsetDateTime.h: include/Uno.Time.Offset.h

include/Uno.Time.Preconditions.h: include/Uno.h

include/Uno.Time.ZonedDateTime.h: include/Uno.Object.h
include/Uno.Time.ZonedDateTime.h: include/Uno.Time.Offset.h

include/Uno.Time.Calendars.Era.h: include/Uno.Object.h

include/Uno.Time.Calendars.Gr-84d9ce92.h: include/Uno.Time.Calendars.Ye-fb0acc8f.h

include/Uno.Time.Calendars.Ti-849b9fc2.h: include/Uno.h

include/Uno.Time.Calendars.We-b079318f.h: include/Uno.Object.h

include/Uno.Time.Calendars.Ye-fb0acc8f.h: include/Uno.Object.h
include/Uno.Time.Calendars.Ye-fb0acc8f.h: include/Uno.Time.Instant.h

include/Uno.Time.Text.FixedFo-b0ea4ea1.h: include/Uno.Object.h

include/Uno.Time.Text.IPatternPart-1.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDa-87dcd33e.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDatePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDa-cc1b753b.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDa-b76721c4.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTi-a09c7c42.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.NumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.OffsetP-eecc7da7.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetD-57729ae8.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetD-57729ae8.h: include/Uno.Time.Offset.h

include/Uno.Time.Text.OffsetD-81e1be6e.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetP-a6f87167.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetP-a6f87167.h: include/Uno.Time.Offset.h
include/Uno.Time.Text.OffsetP-a6f87167.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.OffsetP-a6f87167.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.ParseResult-1.h: include/Uno.Object.h

include/Uno.Time.Text.PatternPart-2.h: include/Uno.Object.h
include/Uno.Time.Text.PatternPart-2.h: include/Uno.Time.Text.IPatternPart-1.h

include/Uno.Time.Text.RangeNu-daac4a51.h: include/Uno.Int.h
include/Uno.Time.Text.RangeNu-daac4a51.h: include/Uno.Object.h
include/Uno.Time.Text.RangeNu-daac4a51.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.RangeNu-daac4a51.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Char.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SignPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.UX.BundleFileSource.h: include/Uno.UX.FileSource.h

include/Uno.UX.Expression-1.h: include/Uno.Delegate.h

include/Uno.UX.FileSource.h: include/Uno.Object.h

include/Uno.UX.IPropertyListener.h: include/Uno.Object.h
include/Uno.UX.IPropertyListener.h: include/Uno.UX.Selector.h

include/Uno.UX.NameTable.h: include/Uno.Object.h

include/Uno.UX.Property.h: include/Uno.UX.PropertyAccessor.h
include/Uno.UX.Property.h: include/Uno.UX.Selector.h

include/Uno.UX.Property-1.h: include/Uno.UX.Property.h

include/Uno.UX.PropertyAccessor.h: include/Uno.Object.h
include/Uno.UX.PropertyAccessor.h: include/Uno.UX.Selector.h

include/Uno.UX.PropertyObject.h: include/Uno.Object.h

include/Uno.UX.Resource.h: include/Uno.Object.h

include/Uno.UX.Selector.h: include/Uno.Object.h

include/Uno.UX.SelectorRegistry.h: include/Uno.h

include/Uno.UX.SimulatedProperties.h: include/Uno.h

include/Uno.UX.Size.h: include/Uno.Object.h

include/Uno.UX.Size2.h: include/Uno.Object.h
include/Uno.UX.Size2.h: include/Uno.UX.Size.h

include/Uno.UX.StreamExtensions.h: include/Uno.h

include/Uno.UX.Template.h: include/Uno.Object.h

include/Uno.UX.Unit.h: include/Uno.Int.h

include/Uno.UX.UXAutoNameTabl-7a420049.h: include/Uno.Attribute.h

include/Uno.UX.UXComponentsAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXConstructorAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXContentAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXExpressionAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXFileNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXFreestandingAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXGlobalModuleAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXGlobalResour-7e3e6930.h: include/Uno.Attribute.h

include/Uno.UX.UXLineNumberAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXPrimaryAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXSourceFileNa-54a524bf.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBinding-d6fbe43e.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBinding-277f5428.h: include/Uno.Attribute.h

include/Uno.UX.UXVerbatimAttribute.h: include/Uno.Attribute.h

include/Uno.UX.ValueChangedArgs-1.h: include/Uno.EventArgs.h

include/Uno.UX.ValueChangedHandler-1.h: include/Uno.Delegate.h

include/Uno.Data.Json.JsonWriter.h: include/Uno.h

include/Uno.Data.Xml.Attribut-ab403e5a.h: include/Uno.Object.h

include/Uno.Data.Xml.ParseOptions.h: include/Uno.UInt.h

include/Uno.Data.Xml.TargetSp-9b6b748d.h: include/Uno.Object.h

include/Uno.Data.Xml.ValidationHelper.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlAttribute.h: include/Uno.Data.Xml.XmlNode.h

include/Uno.Data.Xml.XmlAttri-f709872f.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlAttri-f709872f.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlAttri-f709872f.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlAttri-f709872f.h: include/Uno.Data.Xml.XmlAttribute.h
include/Uno.Data.Xml.XmlAttri-f709872f.h: include/Uno.Data.Xml.XmlNodeC-69d6d72f.h

include/Uno.Data.Xml.XmlAttri-719074fd.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlCharacterData.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlComment.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlDeclaration.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlDocument.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlDocum-fbf1b2e1.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlElement.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlEncoding.h: include/Uno.Int.h

include/Uno.Data.Xml.XmlEncodingHelper.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlException.h: include/Uno.Exception.h

include/Uno.Data.Xml.XmlLinkedNode.h: include/Uno.Data.Xml.XmlNode.h

include/Uno.Data.Xml.XmlLinke-832990d3.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlLinke-832990d3.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlLinke-832990d3.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlLinke-832990d3.h: include/Uno.Data.Xml.XmlLinkedNode.h
include/Uno.Data.Xml.XmlLinke-832990d3.h: include/Uno.Data.Xml.XmlNodeC-69d6d72f.h

include/Uno.Data.Xml.XmlNode.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeC-69d6d72f.h: include/Uno.Collections.ICollection-1.h
include/Uno.Data.Xml.XmlNodeC-69d6d72f.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Data.Xml.XmlNodeC-69d6d72f.h: include/Uno.Collections.IList-1.h
include/Uno.Data.Xml.XmlNodeC-69d6d72f.h: include/Uno.Data.Xml.XmlNode.h
include/Uno.Data.Xml.XmlNodeC-69d6d72f.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeHandle.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeH-28bde911.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeImpl.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlNodeType.h: include/Uno.Int.h

include/Uno.Data.Xml.XmlProce-79ea99da.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlText.h: include/Uno.Data.Xml.XmlLinkedNode.h

include/Uno.Data.Xml.XmlValue.h: include/Uno.Object.h

include/Uno.Data.Xml.XmlValueType.h: include/Uno.Int.h

include/Uno.Geometry.Box.h: include/Uno.Float3.h
include/Uno.Geometry.Box.h: include/Uno.Object.h

include/Uno.Geometry.Collision.h: include/Uno.h

include/Uno.Geometry.Collision2D.h: include/Uno.h

include/Uno.Geometry.CubicBezier.h: include/Uno.Object.h

include/Uno.Geometry.Ray.h: include/Uno.Float3.h
include/Uno.Geometry.Ray.h: include/Uno.Object.h

include/Uno.Geometry.Triangle2D.h: include/Uno.Float2.h
include/Uno.Geometry.Triangle2D.h: include/Uno.Object.h

include/Uno.Geometry.Vertex.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.IDisposable.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Object.h

include/Uno.Net.Dns.h: include/Uno.Object.h

include/Uno.Net.EndPoint.h: include/Uno.Object.h

include/Uno.Net.IPAddress.h: include/Uno.Object.h

include/Uno.Net.IPEndPoint.h: include/Uno.Net.EndPoint.h

include/Uno.Net.NetworkHelpers.h: include/Uno.Object.h

include/Uno.Net.Sockets.AddressFamily.h: include/Uno.Int.h

include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IO.Stream.h

include/Uno.Net.Sockets.ProtocolType.h: include/Uno.Int.h

include/Uno.Net.Sockets.SelectMode.h: include/Uno.Int.h

include/Uno.Net.Sockets.Socket.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.Socket.h: include/Uno.Object.h

include/Uno.Net.Sockets.Socke-3cd1adc4.h: include/Uno.Exception.h

include/Uno.Net.Sockets.SocketFlags.h: include/Uno.Int.h

include/Uno.Net.Sockets.Socke-7dd56d25.h: include/Uno.Object.h

include/Uno.Net.Sockets.SocketHelpers.h: include/Uno.Object.h

include/Uno.Net.Sockets.SocketShutdown.h: include/Uno.Int.h

include/Uno.Net.Sockets.SocketType.h: include/Uno.Int.h

include/Uno.Net.Http.Absolute-2991523.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-6b90921b.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-e44dc24.h: include/Uno.Object.h

include/Uno.Net.Http.HashParser.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfo.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfoParser.h: include/Uno.Object.h

include/Uno.Net.Http.HttpDefa-a7f6a683.h: include/Uno.Object.h
include/Uno.Net.Http.HttpDefa-a7f6a683.h: include/Uno.Threading.IDispatcher.h

include/Uno.Net.Http.HttpMessageCache.h: include/Uno.h

include/Uno.Net.Http.HttpMess-2734f246.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMess-2734f246.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-91b98dc2.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMess-91b98dc2.h: include/Uno.Object.h

include/Uno.Net.Http.HttpRequestState.h: include/Uno.Int.h

include/Uno.Net.Http.HttpResponseType.h: include/Uno.Int.h

include/Uno.Net.Http.HttpStat-91d6200b.h: include/Uno.h

include/Uno.Net.Http.InvalidR-9c865bd5.h: include/Uno.Exception.h

include/Uno.Net.Http.InvalidS-5e790df2.h: include/Uno.Exception.h

include/Uno.Net.Http.HttpMess-1ab6fc8e.h: include/Uno.Object.h

include/Uno.Net.Http.QueryParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemeParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemePa-d035f77f.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMess-499e72b1.h: include/Uno.h

include/Uno.Net.Http.UriForma-b1a049cf.h: include/Uno.Exception.h

include/Uno.Net.Http.UriScheme.h: include/Uno.Object.h

include/Uno.Net.Http.UriSchemeType.h: include/Uno.Int.h

include/Uno.Net.Http.UserInfoParser.h: include/Uno.Object.h

include/Uno.Net.Http.Implemen-2d861a1a.h: include/Android.Base.Wrappers-54d398dd.h
include/Uno.Net.Http.Implemen-2d861a1a.h: include/Android.com.fuse.Expe-5896eac2.h
include/Uno.Net.Http.Implemen-2d861a1a.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implemen-2d861a1a.h: include/Uno.Net.Http.Implemen-4331d10a.h

include/Uno.Net.Http.Implemen-4331d10a.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implemen-4331d10a.h: include/Uno.Object.h

include/Uno.Testing.NamedTestMethod.h: include/Uno.Object.h

include/Uno.Testing.Registry.h: include/Uno.Object.h

include/Uno.Testing.TestAttribute.h: include/Uno.Attribute.h

include/Java.Object.h: include/Uno.Object.h

include/Android.Bootstrapper.h: include/Uno.h

include/Android.Base.AndroidB-55118587.h: include/Uno.Type.h
include/Android.Base.AndroidB-55118587.h: include/Uno.Exception.h
include/Android.Base.AndroidB-55118587.h: include/Uno.h

include/Android.Base.JNI.h: include/Uno.Exception.h
include/Android.Base.JNI.h: include/Uno.h
include/Android.Base.JNI.h: include/Uno/JNIHelper.h

include/Android.Base.JNI.RefType.h: include/Uno.Int.h

include/Android.Base.Primitiv-9640877b.h: include/Uno.Object.h

include/Android.Base.Primitiv-ca6a2aad.h: include/Uno.Object.h

include/Android.Base.Primitiv-96a4896f.h: include/Uno.Object.h

include/Android.Base.Primitiv-30818a7f.h: include/Uno.Object.h

include/Android.Base.Primitiv-96da0577.h: include/Uno.Object.h

include/Android.Base.Primitiv-468275ae.h: include/Uno.Object.h

include/Android.Base.Primitives.jweak.h: include/Uno.Object.h

include/Android.Base.Primitiv-8dc189db.h: include/Uno.Object.h

include/Android.Base.Primitives.ujbyte.h: include/Uno.Object.h

include/Android.Base.Primitives.ujchar.h: include/Uno.Object.h

include/Android.Base.Primitiv-a8209171.h: include/Uno.Object.h

include/Android.Base.Primitiv-e6edd745.h: include/Uno.Object.h

include/Android.Base.Primitiv-848b8849.h: include/Uno.Object.h

include/Android.Base.Primitives.ujint.h: include/Uno.Object.h

include/Android.Base.Primitives.ujlong.h: include/Uno.Object.h

include/Android.Base.Primitiv-95b7b52.h: include/Uno.Object.h

include/Android.Base.Primitiv-d0deec22.h: include/Uno.Object.h

include/Android.Base.Primitiv-4b8a5e07.h: include/Uno.Object.h

include/Android.Base.Primitiv-3fa6710f.h: include/Uno.Object.h

include/Android.Base.Primitiv-e07be494.h: include/Uno.Object.h

include/Android.Base.Types.Arrays.h: include/Android.Base.JNI.h
include/Android.Base.Types.Arrays.h: include/Uno.h

include/Android.Base.Types.Bridge.h: include/Android.Base.JNI.h
include/Android.Base.Types.Bridge.h: include/Uno.Exception.h
include/Android.Base.Types.Bridge.h: include/Uno.h

include/Android.Base.Types.ByteBuffer.h: include/Android.Base.JNI.h
include/Android.Base.Types.ByteBuffer.h: include/Uno.h

include/Android.Base.Types.String.h: include/Android.Base.JNI.h
include/Android.Base.Types.String.h: include/Uno.h

include/Android.Base.Wrappers-6f14a58b.h: include/Uno.Attribute.h

include/Android.Base.Wrappers-54d398dd.h: include/Uno.Object.h

include/Android.Base.Wrappers-f1c8189.h: include/Uno.h

include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.AndroidB-55118587.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.JNI.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.Wrappers-54d398dd.h
include/Android.Base.Wrappers.JWrapper.h: include/Java.Object.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Exception.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.IDisposable.h

include/Android.com.fuse.Expe-5896eac2.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Expe-5896eac2.h: include/Android.Base.Wrappers-54d398dd.h
include/Android.com.fuse.Expe-5896eac2.h: include/Uno.IDisposable.h

include/Fuse.AlternateRoot.h: include/Fuse.Behavior.h
include/Fuse.AlternateRoot.h: include/Fuse.Binding.h
include/Fuse.AlternateRoot.h: include/Fuse.INotifyUnrooted.h
include/Fuse.AlternateRoot.h: include/Fuse.IProperties.h
include/Fuse.AlternateRoot.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.AlternateRoot.h: include/Uno.Collections.ICollection-1.h
include/Fuse.AlternateRoot.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.AlternateRoot.h: include/Uno.Collections.IList-1.h

include/Fuse.AndroidProperties.h: include/Uno.h

include/Fuse.App.h: include/Fuse.AppBase.h
include/Fuse.App.h: include/Fuse.IProperties.h

include/Fuse.AppBase.h: include/Fuse.IProperties.h
include/Fuse.AppBase.h: include/Uno.Application.h
include/Fuse.AppBase.h: include/Uno.Float4.h

include/Fuse.Behavior.h: include/Fuse.Binding.h
include/Fuse.Behavior.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Behavior.h: include/Fuse.IProperties.h
include/Fuse.Behavior.h: include/Fuse.Node.h
include/Fuse.Behavior.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Behavior.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Behavior.h: include/Uno.Collections.IList-1.h

include/Fuse.Binding.h: include/Uno.Object.h

include/Fuse.CacheFramebuffer.h: include/Uno.Object.h

include/Fuse.Visual.CancelInt-fe0ed2d2.h: include/Uno.Int.h

include/Fuse.ComputeException.h: include/Uno.Exception.h

include/Fuse.Computer.h: include/Uno.Object.h

include/Fuse.Computer-1.h: include/Fuse.Computer.h

include/Fuse.Node.DataFinder.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Node.DataFinder.h: include/Uno.Object.h

include/Fuse.Node.DataWatcher.h: include/Fuse.Node.DataFinder.h
include/Fuse.Node.DataWatcher.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Node.DataWatcher.h: include/Fuse.Node.IDataListener.h

include/Fuse.Deferred.h: include/Fuse.Behavior.h
include/Fuse.Deferred.h: include/Fuse.Binding.h
include/Fuse.Deferred.h: include/Fuse.IDeferred.h
include/Fuse.Deferred.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Deferred.h: include/Fuse.IProperties.h
include/Fuse.Deferred.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Deferred.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Deferred.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Deferred.h: include/Uno.Collections.IList-1.h

include/Fuse.DeferredManager.h: include/Uno.h

include/Fuse.Diagnostic.h: include/Uno.Object.h

include/Fuse.DiagnosticHandler.h: include/Uno.Delegate.h

include/Fuse.Diagnostics.h: include/Uno.h

include/Fuse.DiagnosticType.h: include/Uno.Int.h

include/Fuse.DrawContext.h: include/Uno.Int4.h
include/Fuse.DrawContext.h: include/Uno.Object.h

include/Fuse.DrawHelpers.h: include/Uno.Float2.h
include/Fuse.DrawHelpers.h: include/Uno.Object.h
include/Fuse.DrawHelpers.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.FastMatrix.h: include/Uno.Float4x4.h
include/Fuse.FastMatrix.h: include/Uno.Object.h

include/Fuse.FastProperty1.h: include/Uno.Int.h

include/Fuse.FastProperty1Link.h: include/Uno.Object.h

include/Fuse.FastProperty1Link-1.h: include/Fuse.FastProperty1Link.h

include/Fuse.FastProperty2.h: include/Uno.Int.h

include/Fuse.FastProperty2Link.h: include/Uno.Object.h

include/Fuse.FastProperty2Link-1.h: include/Fuse.FastProperty2Link.h

include/Fuse.FileSourceConverter.h: include/Fuse.Marshal.IConverter.h
include/Fuse.FileSourceConverter.h: include/Uno.Object.h

include/Fuse.Node.FirstDataEnumerator.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Node.FirstDataEnumerator.h: include/Uno.Object.h

include/Fuse.FixedViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IRenderViewport.h
include/Fuse.FixedViewport.h: include/Fuse.IViewport.h
include/Fuse.FixedViewport.h: include/Uno.Float2.h
include/Fuse.FixedViewport.h: include/Uno.Object.h

include/Fuse.LayoutParams.Flags.h: include/Uno.Int.h

include/Fuse.Float2Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float2Computer.h: include/Uno.Float2.h

include/Fuse.Float3Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float3Computer.h: include/Uno.Float3.h

include/Fuse.Float4Computer.h: include/Fuse.Computer-1.h
include/Fuse.Float4Computer.h: include/Uno.Float4.h

include/Fuse.Font.h: include/Uno.Object.h

include/Fuse.FramebufferPool.h: include/Uno.h

include/Fuse.FramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.FramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.FrustumViewport.h: include/Uno.Float4x4.h
include/Fuse.FrustumViewport.h: include/Uno.Object.h

include/Fuse.GraphicsWorker.h: include/Uno.h

include/Fuse.TranslationModes-bb76b1d1.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-bb76b1d1.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-bb76b1d1.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.HitTestCallback.h: include/Uno.Delegate.h

include/Fuse.HitTestContext.h: include/Uno.Float2.h
include/Fuse.HitTestContext.h: include/Uno.Geometry.Ray.h
include/Fuse.HitTestContext.h: include/Uno.Object.h

include/Fuse.Visual.HitTestRecord.h: include/Uno.Object.h

include/Fuse.HitTestResult.h: include/Uno.Object.h

include/Fuse.Visual.HitTestTr-c7ce7669.h: include/Uno.Int.h

include/Fuse.IActualPlacement.h: include/Uno.Object.h
include/Fuse.IActualPlacement.h: include/Uno.Float3.h

include/Fuse.IArray.h: include/Uno.Object.h

include/Fuse.IBeginRemoveVisu-428528f1.h: include/Uno.Object.h

include/Fuse.ICommonViewport.h: include/Uno.Object.h
include/Fuse.ICommonViewport.h: include/Uno.Float2.h
include/Fuse.ICommonViewport.h: include/Uno.Float4x4.h

include/Fuse.Marshal.IConverter.h: include/Uno.Object.h

include/Fuse.Node.IDataEnumerator.h: include/Uno.Object.h

include/Fuse.Node.IDataListener.h: include/Uno.Object.h

include/Fuse.IDeferred.h: include/Uno.Object.h

include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.IScalingMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.ITransformMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Uno.Object.h

include/Fuse.IFrustum.h: include/Uno.Object.h
include/Fuse.IFrustum.h: include/Uno.Float2.h
include/Fuse.IFrustum.h: include/Uno.Float3.h
include/Fuse.IFrustum.h: include/Uno.Float4x4.h

include/Fuse.ILoading.h: include/Uno.Object.h

include/Fuse.ILoadingStatic.h: include/Uno.h

include/Fuse.INameListener.h: include/Uno.Object.h
include/Fuse.INameListener.h: include/Uno.UX.Selector.h

include/Fuse.InheritViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.InheritViewport.h: include/Fuse.IRenderViewport.h
include/Fuse.InheritViewport.h: include/Uno.Object.h

include/Fuse.INotifyUnrooted.h: include/Uno.Object.h

include/Fuse.Visual.InteractionItem.h: include/Uno.Object.h

include/Fuse.InvalidateLayoutReason.h: include/Uno.Int.h

include/Fuse.IObject.h: include/Uno.Object.h

include/Fuse.IParentObserver.h: include/Uno.Object.h

include/Fuse.IProperties.h: include/Uno.Object.h

include/Fuse.IRaw.h: include/Uno.Object.h

include/Fuse.IRenderViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IRenderViewport.h: include/Uno.Object.h
include/Fuse.IRenderViewport.h: include/Uno.Float2.h
include/Fuse.IRenderViewport.h: include/Uno.Float3.h
include/Fuse.IRenderViewport.h: include/Uno.Float4x4.h

include/Fuse.IScalingMode.h: include/Fuse.ITransformMode.h
include/Fuse.IScalingMode.h: include/Uno.Object.h
include/Fuse.IScalingMode.h: include/Uno.Float3.h

include/Fuse.IScriptException.h: include/Uno.Object.h

include/Fuse.Node.ISiblingDataProvider.h: include/Uno.Object.h

include/Fuse.Node.ISubtreeDataProvider.h: include/Uno.Object.h

include/Fuse.ITemplateObserver.h: include/Uno.Object.h

include/Fuse.ITransformMode.h: include/Uno.Object.h

include/Fuse.ITransformRelative.h: include/Uno.Object.h

include/Fuse.ITranslationMode.h: include/Fuse.ITransformMode.h
include/Fuse.ITranslationMode.h: include/Uno.Object.h
include/Fuse.ITranslationMode.h: include/Uno.Float3.h

include/Fuse.IUpdateListener.h: include/Uno.Object.h

include/Fuse.IViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.IViewport.h: include/Uno.Object.h
include/Fuse.IViewport.h: include/Uno.Float2.h
include/Fuse.IViewport.h: include/Uno.Geometry.Ray.h

include/Fuse.JSFileSource.h: include/Uno.UX.FileSource.h

include/Fuse.Json.h: include/Uno.h

include/Fuse.KeyboardBootstrapper.h: include/Uno.Object.h

include/Fuse.Layer.h: include/Uno.Int.h

include/Fuse.LayoutDependent.h: include/Uno.Int.h

include/Fuse.LayoutParams.h: include/Uno.Float2.h
include/Fuse.LayoutParams.h: include/Uno.Object.h

include/Fuse.LayoutPriority.h: include/Uno.h

include/Fuse.LayoutRole.h: include/Uno.Int.h

include/Fuse.TranslationModes-53aa3ad2.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-53aa3ad2.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-53aa3ad2.h: include/Uno.Object.h

include/Fuse.MarginBoxDependent.h: include/Uno.Int.h

include/Fuse.Marshal.h: include/Uno.h

include/Fuse.MarshalException.h: include/Uno.Exception.h

include/Fuse.MobileBootstrapping.h: include/Uno.Object.h

include/Fuse.NameRegistry.h: include/Uno.h

include/Fuse.Node.h: include/Fuse.Binding.h
include/Fuse.Node.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Node.h: include/Fuse.IProperties.h
include/Fuse.Node.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Node.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Node.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Node.h: include/Uno.Collections.IList-1.h
include/Fuse.Node.h: include/Uno.UX.PropertyObject.h
include/Fuse.Node.h: include/Uno.UX.Selector.h

include/Fuse.NodeGroup.h: include/Fuse.Binding.h
include/Fuse.NodeGroup.h: include/Fuse.INotifyUnrooted.h
include/Fuse.NodeGroup.h: include/Fuse.IProperties.h
include/Fuse.NodeGroup.h: include/Fuse.NodeGroupBase.h
include/Fuse.NodeGroup.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.NodeGroup.h: include/Uno.Collections.ICollection-1.h
include/Fuse.NodeGroup.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.NodeGroup.h: include/Uno.Collections.IList-1.h

include/Fuse.NodeGroupBase.h: include/Fuse.Behavior.h
include/Fuse.NodeGroupBase.h: include/Fuse.Binding.h
include/Fuse.NodeGroupBase.h: include/Fuse.INotifyUnrooted.h
include/Fuse.NodeGroupBase.h: include/Fuse.IProperties.h
include/Fuse.NodeGroupBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.NodeGroupBase.h: include/Uno.Collections.IList-1.h

include/Fuse.NumberComputer.h: include/Fuse.Computer-1.h
include/Fuse.NumberComputer.h: include/Uno.Double.h

include/Fuse.OrthographicFrustum.h: include/Fuse.IFrustum.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float2.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float4x4.h
include/Fuse.OrthographicFrustum.h: include/Uno.Object.h

include/Fuse.Visual.ParameterProperty.h: include/Uno.String.h
include/Fuse.Visual.ParameterProperty.h: include/Uno.UX.Property-1.h

include/Fuse.TranslationModes-a0eb9bb.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-a0eb9bb.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-a0eb9bb.h: include/Uno.Object.h

include/Fuse.PendingRemoveVisual.h: include/Uno.Object.h

include/Fuse.PerspectiveFrustum.h: include/Fuse.IFrustum.h
include/Fuse.PerspectiveFrustum.h: include/Uno.Object.h

include/Fuse.PlacedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.PlacedArgs.h: include/Uno.EventArgs.h
include/Fuse.PlacedArgs.h: include/Uno.Float2.h

include/Fuse.PlacedHandler.h: include/Uno.Delegate.h

include/Fuse.Properties.h: include/Uno.Object.h

include/Fuse.PropertyHandle.h: include/Uno.Object.h

include/Fuse.RelativeTransform-1.h: include/Fuse.Binding.h
include/Fuse.RelativeTransform-1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.RelativeTransform-1.h: include/Fuse.IProperties.h
include/Fuse.RelativeTransform-1.h: include/Fuse.ITransformRelative.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RelativeTransform-1.h: include/Fuse.Transform.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RelativeTransform-1.h: include/Uno.Collections.IList-1.h

include/Fuse.RenderTargetEntry.h: include/Uno.Int2.h
include/Fuse.RenderTargetEntry.h: include/Uno.Int4.h
include/Fuse.RenderTargetEntry.h: include/Uno.Object.h

include/Fuse.RequestBringIntoViewArgs.h: include/Uno.EventArgs.h

include/Fuse.RequestBringInto-8d69fdcc.h: include/Uno.Delegate.h

include/Fuse.RequiresRootedException.h: include/Uno.Exception.h

include/Fuse.RootPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.RootPanel.h: include/Fuse.Binding.h
include/Fuse.RootPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.RootPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.RootPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.RootPanel.h: include/Fuse.IProperties.h
include/Fuse.RootPanel.h: include/Fuse.Node.h
include/Fuse.RootPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RootPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.RootPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.RootPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.RootPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RootPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RootPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.RootPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.RootStage.h: include/Uno.Int.h

include/Fuse.App.RootViewHost.h: include/Fuse.Controls.INativeViewRoot.h
include/Fuse.App.RootViewHost.h: include/Uno.Object.h

include/Fuse.RootViewport.h: include/Fuse.Binding.h
include/Fuse.RootViewport.h: include/Fuse.ICommonViewport.h
include/Fuse.RootViewport.h: include/Fuse.INotifyUnrooted.h
include/Fuse.RootViewport.h: include/Fuse.IProperties.h
include/Fuse.RootViewport.h: include/Fuse.IViewport.h
include/Fuse.RootViewport.h: include/Fuse.Node.h
include/Fuse.RootViewport.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.RootViewport.h: include/Fuse.Visual.h
include/Fuse.RootViewport.h: include/Uno.Collections.ICollection-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.RootViewport.h: include/Uno.Collections.IList-1.h
include/Fuse.RootViewport.h: include/Uno.Float2.h
include/Fuse.RootViewport.h: include/Uno.IDisposable.h
include/Fuse.RootViewport.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Rotation.h: include/Fuse.Binding.h
include/Fuse.Rotation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Rotation.h: include/Fuse.IProperties.h
include/Fuse.Rotation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Rotation.h: include/Fuse.Transform.h
include/Fuse.Rotation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Rotation.h: include/Uno.Collections.IList-1.h
include/Fuse.Rotation.h: include/Uno.Float3.h

include/Fuse.Scaling.h: include/Fuse.Binding.h
include/Fuse.Scaling.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Scaling.h: include/Fuse.IProperties.h
include/Fuse.Scaling.h: include/Fuse.IScalingMode.h
include/Fuse.Scaling.h: include/Fuse.ITransformRelative.h
include/Fuse.Scaling.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Scaling.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Scaling.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Scaling.h: include/Uno.Collections.IList-1.h
include/Fuse.Scaling.h: include/Uno.Float3.h

include/Fuse.ScalingModes.h: include/Uno.h

include/Fuse.Shear.h: include/Fuse.Binding.h
include/Fuse.Shear.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Shear.h: include/Fuse.IProperties.h
include/Fuse.Shear.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Shear.h: include/Fuse.Transform.h
include/Fuse.Shear.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Shear.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Shear.h: include/Uno.Collections.IList-1.h
include/Fuse.Shear.h: include/Uno.Float2.h

include/Fuse.Size2Computer.h: include/Fuse.Computer-1.h
include/Fuse.Size2Computer.h: include/Uno.UX.Size2.h

include/Fuse.SizeComputer.h: include/Fuse.Computer-1.h
include/Fuse.SizeComputer.h: include/Uno.UX.Size.h

include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Object.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Float3.h

include/Fuse.Stage.h: include/Fuse.UpdateAction.h
include/Fuse.Stage.h: include/Uno.Object.h

include/Fuse.StringComputer.h: include/Fuse.Computer-1.h
include/Fuse.StringComputer.h: include/Uno.String.h

include/Fuse.SystemFont.Style.h: include/Uno.Int.h

include/Fuse.SystemFont.h: include/Fuse.Font.h

include/Fuse.Diagnostics.Temporal.h: include/Uno.IDisposable.h
include/Fuse.Diagnostics.Temporal.h: include/Uno.Object.h

include/Fuse.TestDeferredManager.h: include/Uno.h

include/Fuse.Time.h: include/Uno.h

include/Fuse.Timer.h: include/Uno.Object.h

include/Fuse.Toast.h: include/Uno.Object.h

include/Fuse.Transform.h: include/Fuse.Binding.h
include/Fuse.Transform.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Transform.h: include/Fuse.IProperties.h
include/Fuse.Transform.h: include/Fuse.Node.h
include/Fuse.Transform.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Transform.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Transform.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Transform.h: include/Uno.Collections.IList-1.h

include/Fuse.Translation.h: include/Fuse.Binding.h
include/Fuse.Translation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Translation.h: include/Fuse.IProperties.h
include/Fuse.Translation.h: include/Fuse.ITransformRelative.h
include/Fuse.Translation.h: include/Fuse.ITranslationMode.h
include/Fuse.Translation.h: include/Fuse.RelativeTransform-1.h
include/Fuse.Translation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Translation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Translation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Translation.h: include/Uno.Collections.IList-1.h

include/Fuse.TranslationModes.h: include/Uno.h

include/Fuse.UnhandledExceptionArgs.h: include/Uno.EventArgs.h

include/Fuse.UnhandledExceptionHandler.h: include/Uno.Delegate.h

include/Fuse.UpdateAction.h: include/Uno.Object.h

include/Fuse.UpdateDispatcher.h: include/Uno.Object.h
include/Fuse.UpdateDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.UpdateListener.h: include/Uno.Object.h

include/Fuse.UpdateManager.h: include/Uno.h

include/Fuse.UpdateStage.h: include/Uno.Int.h

include/Fuse.UserEvent.h: include/Fuse.Behavior.h
include/Fuse.UserEvent.h: include/Fuse.Binding.h
include/Fuse.UserEvent.h: include/Fuse.INotifyUnrooted.h
include/Fuse.UserEvent.h: include/Fuse.IProperties.h
include/Fuse.UserEvent.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.UserEvent.h: include/Uno.Collections.ICollection-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.UserEvent.h: include/Uno.Collections.IList-1.h

include/Fuse.UserEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.UserEventArgs.h: include/Uno.EventArgs.h

include/Fuse.UserEventDispatch.h: include/Uno.Object.h
include/Fuse.UserEventDispatch.h: include/Uno.UX.Selector.h

include/Fuse.UserEventHandler.h: include/Uno.Delegate.h

include/Fuse.ViewportHelpers.h: include/Uno.h

include/Fuse.Visual.h: include/Fuse.Binding.h
include/Fuse.Visual.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Visual.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Visual.h: include/Fuse.IProperties.h
include/Fuse.Visual.h: include/Fuse.LayoutParams.h
include/Fuse.Visual.h: include/Fuse.Node.h
include/Fuse.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Visual.h: include/Fuse.Visual.InteractionItem.h
include/Fuse.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Visual.h: include/Uno.Float2.h
include/Fuse.Visual.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Visual.h: include/Uno.Float3.h
include/Fuse.Visual.h: include/Uno.Float4.h
include/Fuse.Visual.h: include/Uno.Float4x4.h
include/Fuse.Visual.h: include/Uno.Geometry.Box.h
include/Fuse.Visual.h: include/Uno.Rect.h
include/Fuse.Visual.h: include/Uno.UX.Selector.h

include/Fuse.Visual.VisualBits.h: include/Uno.Int.h

include/Fuse.VisualBounds.h: include/Uno.Geometry.Box.h
include/Fuse.VisualBounds.h: include/Uno.Object.h

include/Fuse.VisualContext.h: include/Uno.Int.h

include/Fuse.VisualEvent-2.h: include/Uno.Object.h

include/Fuse.VisualEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.VisualEventArgs.h: include/Uno.EventArgs.h

include/Fuse.VisualEventHandler.h: include/Uno.Delegate.h

include/Fuse.VisualEventMode.h: include/Uno.Int.h

include/Fuse.VisualListCache.h: include/Uno.h

include/Fuse.SystemFont.Weight.h: include/Uno.Int.h

include/Fuse.TranslationModes-689c6616.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes-689c6616.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes-689c6616.h: include/Fuse.TranslationModes.SizeMode.h

include/Fuse.WrapException.h: include/Uno.Exception.h

include/Fuse.Platform.AppEvents.h: include/Uno.h

include/Fuse.Platform.ApplicationState.h: include/Uno.Int.h

include/Fuse.Platform.InterApp.h: include/Uno.h

include/Fuse.Platform.Lifecycle.h: include/Uno.h

include/Fuse.Platform.StatusB-4b932ee5.h: include/Uno.Int.h

include/Fuse.Platform.StatusBarStyle.h: include/Uno.Int.h

include/Fuse.Platform.SystemUI.h: include/Uno.h

include/Fuse.Platform.SystemUIID.h: include/Uno.Int.h

include/Fuse.Platform.SystemU-2dda44ea.h: include/Uno.Int.h

include/Fuse.Platform.SystemU-52af75f8.h: include/Uno.EventArgs.h
include/Fuse.Platform.SystemU-52af75f8.h: include/Uno.Rect.h

include/Fuse.Platform.SysUIState.h: include/Uno.Int.h

include/Fuse.Animations.Anima-274f2a53.h: include/Uno.Int.h

include/Fuse.Animations.Animator.h: include/Uno.UX.PropertyObject.h

include/Fuse.Animations.AnimatorState.h: include/Uno.Object.h

include/Fuse.Animations.Anima-e9ae07a6.h: include/Uno.Int.h

include/Fuse.Animations.Attractor-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Binding.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.IProperties.h
include/Fuse.Animations.Attractor-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.Attractor-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Avera-69ebb933.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Avera-69ebb933.h: include/Fuse.Animations.Maste-123cd386.h
include/Fuse.Animations.Avera-69ebb933.h: include/Fuse.Animations.Maste-c2207b01.h
include/Fuse.Animations.Avera-69ebb933.h: include/Uno.Object.h
include/Fuse.Animations.Avera-69ebb933.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Avera-305e2e65.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Avera-305e2e65.h: include/Fuse.Animations.Maste-b0454a4e.h

include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Easin-a039b2fe.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-6fde72be.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-23c27569.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-7b83483d.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-62b7a82a.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-e81d96aa.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Change-1.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Easin-7ed49a72.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-93ecfeb0.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-a1695f2b.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Conti-237ce7cc.h: include/Fuse.Animations.Track-a276dc49.h

include/Fuse.Animations.Conti-ec3af5f8.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Conti-ec3af5f8.h: include/Uno.Object.h

include/Fuse.Animations.Converter-1.h: include/Uno.Object.h
include/Fuse.Animations.Converter-1.h: include/Uno.Float4.h

include/Fuse.Animations.Conve-daadb0d3.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-daadb0d3.h: include/Uno.Double.h

include/Fuse.Animations.ConverterFloat.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat.h: include/Uno.Float.h

include/Fuse.Animations.Conve-4b66c24c.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-4b66c24c.h: include/Uno.Float2.h

include/Fuse.Animations.Conve-a8bf4db1.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-a8bf4db1.h: include/Uno.Float3.h

include/Fuse.Animations.Conve-617d916.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.Conve-617d916.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterSize.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize.h: include/Uno.UX.Size.h

include/Fuse.Animations.ConverterSize2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterSize2.h: include/Uno.UX.Size2.h

include/Fuse.Animations.Creat-8582fdaa.h: include/Uno.Object.h

include/Fuse.Animations.Cubic-91d6ff19.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-1f408e3f.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-d098c5d6.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-52f7b299.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Cycle-1.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.CycleState-1.h: include/Fuse.Animations.OpenA-29177d3f.h

include/Fuse.Animations.CycleWaveform.h: include/Uno.Int.h

include/Fuse.Animations.Discr-dc3d539a.h: include/Fuse.Animations.Discr-bbeebbf.h
include/Fuse.Animations.Discr-dc3d539a.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.Discr-dc3d539a.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.Discr-dc3d539a.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Discr-dc3d539a.h: include/Uno.Object.h

include/Fuse.Animations.Discr-f6a5303b.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Discr-f6a5303b.h: include/Fuse.Animations.Maste-123cd386.h
include/Fuse.Animations.Discr-f6a5303b.h: include/Fuse.Animations.Maste-c2207b01.h
include/Fuse.Animations.Discr-f6a5303b.h: include/Uno.Object.h
include/Fuse.Animations.Discr-f6a5303b.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Discr-466b7598.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Discr-466b7598.h: include/Fuse.Animations.Maste-b0454a4e.h

include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Discr-c98dc46d.h: include/Fuse.Animations.Discr-bbeebbf.h
include/Fuse.Animations.Discr-c98dc46d.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.Discr-c98dc46d.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Discr-c98dc46d.h: include/Uno.Object.h

include/Fuse.Animations.Discr-27a52eb9.h: include/Fuse.Animations.Track-a276dc49.h

include/Fuse.Animations.Discr-bbeebbf.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.Discr-bbeebbf.h: include/Uno.Object.h

include/Fuse.Animations.Easing.h: include/Uno.Object.h

include/Fuse.Animations.EasingFunction.h: include/Uno.Delegate.h

include/Fuse.Animations.Easin-7d50bfe9.h: include/Uno.h

include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.Conti-ec3af5f8.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Uno.Object.h

include/Fuse.Animations.Easin-5d4a49f2.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-9114caac.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-4a464677.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-539c1dc8.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-f1616cb6.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-242be8c2.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.FastM-a9e42315.h: include/Fuse.Binding.h
include/Fuse.Animations.FastM-a9e42315.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Animations.FastM-a9e42315.h: include/Fuse.IProperties.h
include/Fuse.Animations.FastM-a9e42315.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.FastM-a9e42315.h: include/Fuse.Transform.h
include/Fuse.Animations.FastM-a9e42315.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.FastM-a9e42315.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.FastM-a9e42315.h: include/Uno.Collections.IList-1.h

include/Fuse.Animations.Maste-3036c7e9.h: include/Uno.Object.h

include/Fuse.Animations.IBase-9ca29815.h: include/Uno.Object.h

include/Fuse.Animations.IMixer.h: include/Uno.Object.h

include/Fuse.Animations.IMixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.IMixerMaster.h: include/Uno.Object.h

include/Fuse.Animations.IPlay-a6d2aa79.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Animations.IPlay-a6d2aa79.h: include/Uno.Object.h

include/Fuse.Animations.IResize.h: include/Uno.Object.h
include/Fuse.Animations.IResize.h: include/Uno.Float2.h

include/Fuse.Animations.IResizeMode.h: include/Uno.Object.h

include/Fuse.Animations.ITrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.IUnwr-4bbb3b04.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Animations.IUnwr-4bbb3b04.h: include/Uno.Object.h

include/Fuse.Animations.Keyframe.h: include/Uno.Float4.h
include/Fuse.Animations.Keyframe.h: include/Uno.Object.h

include/Fuse.Animations.Keyfr-21c28d4e.h: include/Uno.Int.h

include/Fuse.Animations.KeyframeTrack.h: include/Uno.Object.h

include/Fuse.Animations.Easin-2c5078d4.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.MasterBase-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterBase-1.h: include/Uno.Object.h

include/Fuse.Animations.Maste-c2207b01.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Maste-c2207b01.h: include/Fuse.Animations.Maste-123cd386.h
include/Fuse.Animations.Maste-c2207b01.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.Maste-c2207b01.h: include/Uno.Object.h
include/Fuse.Animations.Maste-c2207b01.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Maste-123cd386.h: include/Uno.Object.h

include/Fuse.Animations.Maste-b0454a4e.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.Maste-b0454a4e.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.Maste-b0454a4e.h: include/Fuse.Transform.h

include/Fuse.Animations.Mixer.h: include/Uno.Object.h

include/Fuse.Animations.MixerBase.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.MixerBase.h: include/Uno.Object.h

include/Fuse.Animations.MixerHandle-1.h: include/Fuse.Animations.IMixerHandle-1.h
include/Fuse.Animations.MixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.MixOp.h: include/Uno.Int.h

include/Fuse.Animations.Move.h: include/Fuse.Animations.Trans-8bdd6c45.h
include/Fuse.Animations.Move.h: include/Fuse.Translation.h

include/Fuse.Animations.Nothing.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Nothi-f1206999.h: include/Fuse.Animations.Track-a276dc49.h

include/Fuse.Animations.OpenAnimator.h: include/Fuse.Animations.Animator.h

include/Fuse.Animations.OpenA-29177d3f.h: include/Fuse.Animations.AnimatorState.h

include/Fuse.Animations.Player.h: include/Fuse.IUpdateListener.h
include/Fuse.Animations.Player.h: include/Uno.Object.h

include/Fuse.Animations.Playe-f7ddf41d.h: include/Uno.Int.h

include/Fuse.Animations.PlayerPart.h: include/Uno.Object.h

include/Fuse.Animations.PlayMode.h: include/Uno.Int.h

include/Fuse.Animations.Splin-f30280ee.h: include/Uno.Delegate.h

include/Fuse.Animations.Easin-de34aa38.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-ff942cb6.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-3ade8068.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-687ea1ee.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-55f833b3.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-6bea1173.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-a4ea8482.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-c5c503ca.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-5db9224c.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Behavior.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Binding.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.IProperties.h
include/Fuse.Animations.RangeAdapter-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Animations.RangeAdapter-1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Animations.Range-66a56b28.h: include/Uno.h

include/Fuse.Animations.Resize.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.Resiz-d21195f5.h: include/Fuse.Animations.Track-a276dc49.h
include/Fuse.Animations.Resiz-d21195f5.h: include/Uno.Float4.h

include/Fuse.Animations.Rotate.h: include/Fuse.Animations.Trans-8bdd6c45.h
include/Fuse.Animations.Rotate.h: include/Fuse.Rotation.h

include/Fuse.Animations.Scale.h: include/Fuse.Animations.Trans-8bdd6c45.h
include/Fuse.Animations.Scale.h: include/Fuse.Scaling.h

include/Fuse.Animations.SeekDirection.h: include/Uno.Int.h

include/Fuse.Animations.Trigg-e37e6e4c.h: include/Uno.Int.h

include/Fuse.Animations.SeekResult.h: include/Uno.Int.h

include/Fuse.Animations.Easin-5fdbf403.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-e1d6ae.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Easin-6a9dd18a.h: include/Fuse.Animations.Easing.h

include/Fuse.Animations.Skew.h: include/Fuse.Animations.Trans-8bdd6c45.h
include/Fuse.Animations.Skew.h: include/Fuse.Shear.h

include/Fuse.Animations.Spin.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.SpinState.h: include/Fuse.Animations.OpenA-29177d3f.h

include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.Conti-ec3af5f8.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Uno.Object.h

include/Fuse.Animations.TrackAnimator.h: include/Fuse.Animations.Animator.h
include/Fuse.Animations.TrackAnimator.h: include/Uno.Float4.h

include/Fuse.Animations.Track-a276dc49.h: include/Fuse.Animations.AnimatorState.h
include/Fuse.Animations.Track-a276dc49.h: include/Uno.Float4.h

include/Fuse.Animations.TrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Trans-8bdd6c45.h: include/Fuse.Animations.TrackAnimator.h
include/Fuse.Animations.Trans-8bdd6c45.h: include/Uno.Float3.h
include/Fuse.Animations.Trans-8bdd6c45.h: include/Uno.Float4.h

include/Fuse.Animations.Trans-c0a4dfab.h: include/Fuse.Animations.Track-a276dc49.h

include/Fuse.Animations.Trans-828622e8.h: include/Uno.Int.h

include/Fuse.Animations.Trigg-93c253f8.h: include/Uno.Object.h

include/Fuse.Animations.Trigg-957ef503.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Animations.Trigg-957ef503.h: include/Fuse.Animations.IPlay-a6d2aa79.h
include/Fuse.Animations.Trigg-957ef503.h: include/Uno.Object.h

include/Fuse.Preview.ISelection.h: include/Uno.Object.h

include/Fuse.Preview.SelectionManager.h: include/Uno.h

include/Fuse.Internal.Android-7afd435.h: include/Uno.Object.h

include/Fuse.Internal.Android-6ee5a63a.h: include/Uno.h

include/Fuse.Internal.Blender-1.h: include/Uno.Object.h

include/Fuse.Internal.BlenderMap.h: include/Uno.Object.h

include/Fuse.Internal.Cache-2.h: include/Uno.IDisposable.h
include/Fuse.Internal.Cache-2.h: include/Uno.Object.h
include/Fuse.Internal.Cache-2.h: include/Fuse.Internal.CacheItem-2.h

include/Fuse.Internal.CacheItem-2.h: include/Uno.IDisposable.h
include/Fuse.Internal.CacheItem-2.h: include/Uno.Object.h

include/Fuse.Internal.CacheRef-2.h: include/Uno.IDisposable.h
include/Fuse.Internal.CacheRef-2.h: include/Uno.Object.h

include/Fuse.Internal.DoubleBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.DoubleBlender.h: include/Uno.Double.h

include/Fuse.Internal.DrawManager.h: include/Uno.h

include/Fuse.Internal.MiniLis-e63b46ff.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Internal.MiniLis-e63b46ff.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Internal.MiniLis-e63b46ff.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Internal.MiniLis-e63b46ff.h: include/Uno.IDisposable.h
include/Fuse.Internal.MiniLis-e63b46ff.h: include/Uno.Object.h

include/Fuse.Internal.Android-ec81a617.h: include/Fuse.Internal.Android-a4831c85.h
include/Fuse.Internal.Android-ec81a617.h: include/Uno.Object.h

include/Fuse.Internal.Float2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float2Blender.h: include/Uno.Float2.h

include/Fuse.Internal.Float3Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float3Blender.h: include/Uno.Float3.h

include/Fuse.Internal.Float4Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float4Blender.h: include/Uno.Float4.h

include/Fuse.Internal.FloatBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.FloatBlender.h: include/Uno.Float.h

include/Fuse.Internal.Android-a4831c85.h: include/Uno.Object.h

include/Fuse.Internal.FontFac-ce1c8c0c.h: include/Uno.Object.h

include/Fuse.Internal.FrustumMatrix.h: include/Uno.h

include/Fuse.Internal.FuseConfig.h: include/Uno.h

include/Fuse.Internal.IImageC-53d8106a.h: include/Uno.Object.h

include/Fuse.Internal.ImageContainer.h: include/Uno.Object.h

include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Collections.IList-1.h
include/Fuse.Internal.MiniList-1.h: include/Uno.Object.h

include/Fuse.Internal.RectPacker.h: include/Fuse.Internal.SkylineNode.h
include/Fuse.Internal.RectPacker.h: include/Uno.Int2.h
include/Fuse.Internal.RectPacker.h: include/Uno.Object.h

include/Fuse.Internal.ScalarBlender-1.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.ScalarBlender-1.h: include/Uno.Object.h

include/Fuse.Internal.Size2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Size2Blender.h: include/Uno.UX.Size2.h

include/Fuse.Internal.SizeBlender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.SizeBlender.h: include/Uno.UX.Size.h

include/Fuse.Internal.SizingContainer.h: include/Uno.Float4.h
include/Fuse.Internal.SizingContainer.h: include/Uno.Object.h

include/Fuse.Internal.SkylineNode.h: include/Uno.Int2.h
include/Fuse.Internal.SkylineNode.h: include/Uno.Object.h

include/Fuse.Internal.Statistics.h: include/Uno.h

include/Fuse.Internal.SystemFont.h: include/Uno.h

include/Fuse.Internal.VectorUtil.h: include/Uno.h

include/Fuse.Internal.Drawing-7b3f23a7.h: include/Uno.Float4x4.h
include/Fuse.Internal.Drawing-7b3f23a7.h: include/Uno.Object.h
include/Fuse.Internal.Drawing-7b3f23a7.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Resources.HttpIm-e460f726.h: include/Uno.Object.h

include/Fuse.Resources.FileIm-7f821d83.h: include/Uno.Object.h

include/Fuse.Resources.Loadin-5c364ae8.h: include/Uno.Int.h

include/Fuse.Resources.DisposalManager.h: include/Uno.h

include/Fuse.Resources.DisposalPolicy.h: include/Uno.Object.h

include/Fuse.Resources.DisposalRequest.h: include/Uno.Int.h

include/Fuse.Resources.Double-f19868b9.h: include/Fuse.Resources.IResou-2735a9f9.h
include/Fuse.Resources.Double-f19868b9.h: include/Fuse.Resources.Numeri-53809181.h
include/Fuse.Resources.Double-f19868b9.h: include/Uno.Double.h

include/Fuse.Resources.Expira-a40dcc7d.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.FileImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.FileIm-8d4e925e.h: include/Uno.h

include/Fuse.Resources.FileIm-214c95de.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.FileIm-214c95de.h: include/Fuse.Resources.Loadin-a1639a48.h

include/Fuse.Resources.FileResource.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.FloatR-8462316d.h: include/Fuse.Resources.IResou-2735a9f9.h
include/Fuse.Resources.FloatR-8462316d.h: include/Fuse.Resources.Numeri-53809181.h
include/Fuse.Resources.FloatR-8462316d.h: include/Uno.Float.h

include/Fuse.Resources.Generi-7dd8e81e.h: include/Fuse.Resources.IResou-2735a9f9.h
include/Fuse.Resources.Generi-7dd8e81e.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.HttpIm-9048e22b.h: include/Uno.h

include/Fuse.Resources.HttpIm-d2f4087f.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.HttpIm-d2f4087f.h: include/Fuse.Resources.Loadin-a1639a48.h

include/Fuse.Resources.IDefer-4b42132d.h: include/Uno.IDisposable.h
include/Fuse.Resources.IDefer-4b42132d.h: include/Uno.Object.h

include/Fuse.Resources.ImageSource.h: include/Uno.UX.PropertyObject.h
include/Fuse.Resources.ImageSource.h: include/Uno.Float2.h
include/Fuse.Resources.ImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.ImageS-f56f730b.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageS-b717b1e2.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Resources.ImageS-b717b1e2.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageS-79a2b6af.h: include/Uno.Delegate.h

include/Fuse.Resources.ImageS-6dc9bfa3.h: include/Uno.Int.h

include/Fuse.Resources.IMemoryResource.h: include/Uno.Object.h

include/Fuse.Resources.IntRes-ff499516.h: include/Fuse.Resources.IResou-2735a9f9.h
include/Fuse.Resources.IntRes-ff499516.h: include/Fuse.Resources.Numeri-53809181.h
include/Fuse.Resources.IntRes-ff499516.h: include/Uno.Int.h

include/Fuse.Resources.IResou-2735a9f9.h: include/Uno.Object.h

include/Fuse.Resources.ISoftDisposable.h: include/Uno.Object.h

include/Fuse.Resources.Loadin-a1639a48.h: include/Fuse.Resources.ImageSource.h
include/Fuse.Resources.Loadin-a1639a48.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.Loadin-a1639a48.h: include/Uno.Int2.h

include/Fuse.Resources.MemoryPolicy.h: include/Uno.Object.h

include/Fuse.Resources.MultiD-b22363c3.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.Numeri-53809181.h: include/Fuse.Resources.IResou-2735a9f9.h
include/Fuse.Resources.Numeri-53809181.h: include/Uno.Object.h

include/Fuse.Resources.Policy-5bfdd4a6.h: include/Fuse.Resources.IDefer-4b42132d.h
include/Fuse.Resources.Policy-5bfdd4a6.h: include/Uno.IDisposable.h
include/Fuse.Resources.Policy-5bfdd4a6.h: include/Uno.Object.h

include/Fuse.Resources.ProxyI-1cad75e.h: include/Uno.Object.h

include/Fuse.Resources.Resour-775defa3.h: include/Fuse.Binding.h

include/Fuse.Resources.ResourceBool.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceBool.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceBool.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceBool.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceBool.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Bool.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Collections.IList-1.h

include/Fuse.Resources.Resour-f8ac1baa.h: include/Uno.h

include/Fuse.Resources.ResourceFloat.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceFloat.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceFloat.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceFloat.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceFloat.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Float.h

include/Fuse.Resources.ResourceFloat2.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceFloat2.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceFloat2.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceFloat2.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceFloat2.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Float2.h

include/Fuse.Resources.ResourceFloat3.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceFloat3.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceFloat3.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceFloat3.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceFloat3.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Float3.h

include/Fuse.Resources.ResourceFloat4.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceFloat4.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceFloat4.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceFloat4.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceFloat4.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Float4.h

include/Fuse.Resources.ResourceObject.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceObject.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceObject.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceObject.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceObject.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Object.h

include/Fuse.Resources.Resour-628dd08f.h: include/Uno.h

include/Fuse.Resources.Resour-5d2656b6.h: include/Fuse.Behavior.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Fuse.Binding.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Fuse.IProperties.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.Resour-5d2656b6.h: include/Uno.Collections.IList-1.h

include/Fuse.Resources.ResourceString.h: include/Fuse.Binding.h
include/Fuse.Resources.ResourceString.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Resources.ResourceString.h: include/Fuse.IProperties.h
include/Fuse.Resources.ResourceString.h: include/Fuse.Resources.Resour-5d2656b6.h
include/Fuse.Resources.ResourceString.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Resources.ResourceString.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Resources.ResourceString.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Resources.ResourceString.h: include/Uno.Collections.IList-1.h
include/Fuse.Resources.ResourceString.h: include/Uno.String.h

include/Fuse.Resources.Retain-ef7b1060.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.System-9344cef3.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.Textur-8608eb2d.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Scripting.JSCall-eef85ed.h: include/Uno.Object.h

include/Fuse.Scripting.JSCall-4519851b.h: include/Uno.Object.h

include/Fuse.Scripting.JSCall-45198518.h: include/Uno.Object.h

include/Fuse.Scripting.AppInitialized.h: include/Uno.h

include/Fuse.Scripting.Array.h: include/Fuse.IArray.h
include/Fuse.Scripting.Array.h: include/Uno.Object.h

include/Fuse.Scripting.BoolChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.Bool.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Script-ea1a8f8f.h: include/Uno.Object.h

include/Fuse.Scripting.AppIni-f89bd768.h: include/Uno.Object.h

include/Fuse.Scripting.CodeModule.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Scripting.CodeModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Context.h: include/Uno.Object.h

include/Fuse.Scripting.Native-df4175fe.h: include/Uno.Object.h

include/Fuse.Scripting.Double-23a614ea.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.Double-23a614ea.h: include/Uno.Double.h
include/Fuse.Scripting.Double-23a614ea.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Native-d5022f1e.h: include/Uno.Object.h

include/Fuse.Scripting.Error.h: include/Uno.Exception.h

include/Fuse.Scripting.EventE-8be4e110.h: include/Uno.h

include/Fuse.Scripting.ExecutionThread.h: include/Uno.Int.h

include/Fuse.Scripting.External.h: include/Uno.Object.h

include/Fuse.Scripting.Factor-af5af8f3.h: include/Uno.Object.h

include/Fuse.Scripting.FileModule.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Scripting.FileModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.JSCall-2477afff.h: include/Uno.Object.h

include/Fuse.Scripting.JSCall-3c81522e.h: include/Uno.Object.h

include/Fuse.Scripting.JSCall-df28c6c9.h: include/Uno.Object.h

include/Fuse.Scripting.Function.h: include/Uno.Object.h

include/Fuse.Scripting.FutureFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.IEvent-d7a82197.h: include/Uno.Object.h

include/Fuse.Scripting.IModuleProvider.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptEvent.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptObject.h: include/Uno.Object.h

include/Fuse.Scripting.IThreadWorker.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.h: include/Uno.h

include/Fuse.Scripting.JSObjectUtils.h: include/Uno.h

include/Fuse.Scripting.Module.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Module.h: include/Uno.Object.h

include/Fuse.Scripting.ModuleResult.h: include/Uno.Object.h

include/Fuse.Scripting.NativeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Native-e68cd234.h

include/Fuse.Scripting.Native-23dfe193.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Scripting.Native-23dfe193.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Scripting.Native-23dfe193.h: include/Uno.IDisposable.h

include/Fuse.Scripting.NativeFunction.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.Native-f3c8e77e.h: include/Uno.Object.h

include/Fuse.Scripting.NativeMember.h: include/Uno.Object.h

include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.NativeModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.NativePromise-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.Native-e68cd234.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.JSCall-64d2c207.h: include/Uno.h

include/Fuse.Scripting.Object.h: include/Fuse.IObject.h
include/Fuse.Scripting.Object.h: include/Uno.Object.h

include/Fuse.Scripting.Native-8bbe2585.h: include/Uno.Object.h

include/Fuse.Scripting.Native-fcfd22ff.h: include/Uno.Object.h

include/Fuse.Scripting.Script-bc981f92.h: include/Uno.Object.h

include/Fuse.Scripting.Result-f129cd22.h: include/Uno.Delegate.h

include/Fuse.Scripting.ResultFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.ScriptClass.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.ScriptEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Scripting.ScriptException.h: include/Uno.Exception.h

include/Fuse.Scripting.ScriptMember.h: include/Uno.Object.h

include/Fuse.Scripting.ScriptMethod.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.ScriptMethod-1.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.Script-27b2f32f.h: include/Fuse.Scripting.ScriptMethod.h

include/Fuse.Scripting.ScriptModule.h: include/Fuse.Scripting.Module.h
include/Fuse.Scripting.ScriptModule.h: include/Uno.IDisposable.h

include/Fuse.Scripting.ScriptProperty.h: include/Fuse.Scripting.ScriptMember.h

include/Fuse.Scripting.Script-6731f3bf.h: include/Fuse.Scripting.ScriptProperty.h

include/Fuse.Scripting.String-6e34b3a3.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.String-6e34b3a3.h: include/Uno.String.h
include/Fuse.Scripting.String-6e34b3a3.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Value.h: include/Uno.h

include/Fuse.Scripting.ValueC-4cd5cc17.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Array.h: include/Fuse.IArray.h
include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.Array.h

include/Fuse.Scripting.V8.ArrayHandle.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Aut-5025f72a.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Aut-5025f72a.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Mar-eb2a7783.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Deb-58993fee.h: include/Fuse.Scripting.V8.Deb-8cb6e92e.h
include/Fuse.Scripting.V8.Deb-58993fee.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Deb-4065056d.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Deb-6aa6585a.h: include/Fuse.Scripting.V8.Deb-8cb6e92e.h
include/Fuse.Scripting.V8.Deb-6aa6585a.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.V8.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.V8.Debugger.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Debugger.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Con-e9a9e908.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Con-e9a9e908.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Error.h: include/Uno.h

include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.V8.Handle.h: include/Uno.h

include/Fuse.Scripting.V8.Marshaller.h: include/Uno.h

include/Fuse.Scripting.V8.Object.h: include/Fuse.IObject.h
include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.V8.Deb-8cb6e92e.h: include/Uno.Object.h

include/Fuse.Scripting.V8.V8S-31f3ec34.h: include/Uno.h

include/Fuse.Scripting.V8.V8S-3521bd2.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-2031bba9.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.Debug.h: include/Uno.h

include/Fuse.Scripting.V8.Sim-b8ab7723.h: include/Uno.h

include/Fuse.Scripting.V8.Sim-cff51134.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-8d2440d9.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-9c8bae95.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-e2ad9683.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-e75ceb4.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-962a9b9b.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-acafc2c4.h: include/Uno.Delegate.h

include/Fuse.Scripting.V8.Sim-651ec3cf.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-79f0d8a1.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-513ccff2.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Sim-9e60cc3d.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-5139ae16.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-282e399.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Sim-f08b2d41.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Sim-42b33fd6.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.Value.h: include/Uno.h

include/Fuse.Input.Capture.h: include/Uno.Object.h

include/Fuse.Input.Pointer.Ca-4c573cf.h: include/Uno.IDisposable.h
include/Fuse.Input.Pointer.Ca-4c573cf.h: include/Uno.Object.h

include/Fuse.Input.CaptureType.h: include/Uno.Int.h

include/Fuse.Input.CustomPoin-be858f6a.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.CustomPoin-be858f6a.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.Pointer.De-9ef19394.h: include/Fuse.Input.IPointerEv-2da5d72b.h
include/Fuse.Input.Pointer.De-9ef19394.h: include/Uno.Object.h

include/Fuse.Input.Focus.h: include/Uno.h

include/Fuse.Input.FocusDelegator.h: include/Uno.Delegate.h

include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedArgs.h
include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedHandler.h
include/Fuse.Input.FocusGained.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusGainedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.FocusGainedArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusGainedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostArgs.h
include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostHandler.h
include/Fuse.Input.FocusLost.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.FocusLostArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.FocusLostArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.FocusLostHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusNavig-815405e7.h: include/Uno.Int.h

include/Fuse.Input.FocusPrediction.h: include/Uno.h

include/Fuse.Input.FocusPredi-248b93af.h: include/Uno.h

include/Fuse.Input.Gesture.h: include/Uno.Object.h
include/Fuse.Input.Gesture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Input.GestureRequest.h: include/Uno.Int.h

include/Fuse.Input.Gestures.h: include/Uno.h

include/Fuse.Input.GestureType.h: include/Uno.Int.h

include/Fuse.Input.HitTestHelpers.h: include/Uno.h

include/Fuse.Input.IGesture.h: include/Uno.Object.h

include/Fuse.Input.INotifyFocus.h: include/Uno.Object.h

include/Fuse.Input.IPointerEv-2da5d72b.h: include/Uno.Object.h

include/Fuse.Input.IsFocusabl-8757fa55.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.IsFocusabl-8757fa55.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.IsFocusabl-e60027f4.h: include/Fuse.Input.IsFocusabl-51addd69.h
include/Fuse.Input.IsFocusabl-e60027f4.h: include/Fuse.Input.IsFocusabl-8757fa55.h
include/Fuse.Input.IsFocusabl-e60027f4.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.IsFocusabl-51addd69.h: include/Uno.Delegate.h

include/Fuse.Input.Keyboard.h: include/Uno.h

include/Fuse.Input.KeyEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.KeyEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedArgs.h
include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedHandler.h
include/Fuse.Input.KeyPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedArgs.h
include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedHandler.h
include/Fuse.Input.KeyReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.PELHolder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.PELStatus.h: include/Uno.Int.h

include/Fuse.Input.Pointer.h: include/Uno.h

include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnt-133e3c6c.h
include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredArgs.h
include/Fuse.Input.PointerEntered.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEnt-133e3c6c.h: include/Uno.Delegate.h

include/Fuse.Input.PointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.PointerEventArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.PointerEventData.h: include/Uno.Float2.h
include/Fuse.Input.PointerEventData.h: include/Uno.Object.h

include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftArgs.h
include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftHandler.h
include/Fuse.Input.PointerLeft.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerLeftHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedArgs.h
include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedHandler.h
include/Fuse.Input.PointerMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPre-46d8c90c.h
include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedArgs.h
include/Fuse.Input.PointerPressed.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerPre-46d8c90c.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.Po-745da8f6.h: include/Uno.Float2.h
include/Fuse.Input.Pointer.Po-745da8f6.h: include/Uno.Object.h

include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerRel-d13a8586.h
include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedArgs.h
include/Fuse.Input.PointerReleased.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerRel-d13a8586.h: include/Uno.Delegate.h

include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWhe-2f1235d9.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWhe-a5bbc093.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.PointerWhe-a5bbc093.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerWhe-a5bbc093.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerWhe-2f1235d9.h: include/Uno.Delegate.h

include/Fuse.Input.FocusPredi-7e5e39dc.h: include/Uno.Object.h

include/Fuse.Input.SelectionQuery.h: include/Uno.Object.h

include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredArgs.h
include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredHandler.h
include/Fuse.Input.TextEntered.h: include/Fuse.VisualEvent-2.h

include/Fuse.Input.TextEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Input.TextEnteredArgs.h: include/Fuse.VisualEventArgs.h

include/Fuse.Input.TextEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.TextService.h: include/Uno.h

include/Fuse.Input.UX.Attache-d2f6fa9c.h: include/Uno.h

include/Fuse.Input.UX.Attache-b211b62c.h: include/Uno.h

include/Fuse.Input.UX.Attache-d28d7114.h: include/Uno.h

include/Fuse.Reactive.Add.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Add.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.Observable.Add.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.ArrayMirror.h: include/Fuse.IArray.h
include/Fuse.Reactive.ArrayMirror.h: include/Fuse.IRaw.h
include/Fuse.Reactive.ArrayMirror.h: include/Fuse.Reactive.ListMirror.h

include/Fuse.Reactive.BinaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.BinaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.BindingMode.h: include/Uno.Int.h

include/Fuse.Reactive.Functio-c6792cb6.h: include/Uno.Object.h

include/Fuse.Reactive.Case.h: include/Uno.Object.h

include/Fuse.Reactive.ClassInstance.h: include/Uno.Object.h

include/Fuse.Reactive.Observable.Clear.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Closure.h: include/Fuse.Binding.h
include/Fuse.Reactive.Closure.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Closure.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Closure.h: include/Fuse.Node.h
include/Fuse.Reactive.Closure.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Closure.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Closure.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Closure.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.ClosureArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Reactive.ClosureArgs.h: include/Uno.EventArgs.h

include/Fuse.Reactive.ClosureHandler.h: include/Uno.Delegate.h

include/Fuse.Reactive.Conditional.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Conditional.h: include/Fuse.Reactive.TernaryOperator.h

include/Fuse.Reactive.Console.h: include/Uno.h

include/Fuse.Reactive.Constant.h: include/Fuse.Reactive.Constan-b24df705.h
include/Fuse.Reactive.Constant.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Constan-b24df705.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Constan-b24df705.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Instant-58eb965c.h: include/Uno.Object.h

include/Fuse.Reactive.Data.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Data.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.DataBinding.h: include/Fuse.INameListener.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.Express-c8917901.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.DataBinding.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataBinding.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.DataFinder.h
include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.IDataEnumerator.h
include/Fuse.Reactive.DataSubscription.h: include/Fuse.Node.IDataListener.h
include/Fuse.Reactive.DataSubscription.h: include/Uno.IDisposable.h

include/Fuse.Reactive.DataToResource.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.DataToResource.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Reactive.DataToR-d46de42a.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.DataToR-d46de42a.h: include/Fuse.Reactive.UnaryOp-ca38d18.h
include/Fuse.Reactive.DataToR-d46de42a.h: include/Uno.IDisposable.h

include/Fuse.Reactive.DebugLog.h: include/Uno.h

include/Fuse.Reactive.Divide.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Divide.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.Each.h: include/Fuse.Binding.h
include/Fuse.Reactive.Each.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Each.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Each.h: include/Fuse.ITemplateObserver.h
include/Fuse.Reactive.Each.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.Each.h: include/Fuse.Reactive.Instantiator.h
include/Fuse.Reactive.Each.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Each.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Each.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Each.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Each.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.Equal.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Equal.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.JavaScr-e8845bef.h: include/Uno.Object.h

include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.Express-c8917901.h
include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.IListener.h

include/Fuse.Reactive.EventRecord.h: include/Fuse.Reactive.IEventRecord.h
include/Fuse.Reactive.EventRecord.h: include/Fuse.Scripting.IEvent-d7a82197.h
include/Fuse.Reactive.EventRecord.h: include/Uno.Object.h
include/Fuse.Reactive.EventRecord.h: include/Uno.UX.Selector.h

include/Fuse.Reactive.Expression.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Expression.h: include/Uno.Object.h

include/Fuse.Reactive.Express-c8917901.h: include/Fuse.Binding.h
include/Fuse.Reactive.Express-c8917901.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.Express-c8917901.h: include/Fuse.Reactive.IListener.h

include/Fuse.Reactive.Observa-20f9da5.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.ThreadW-7728f767.h: include/Uno.Object.h

include/Fuse.Reactive.FunctionMirror.h: include/Fuse.Reactive.IEventHandler.h
include/Fuse.Reactive.FunctionMirror.h: include/Uno.Object.h

include/Fuse.Reactive.GreaterOrEqual.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.GreaterOrEqual.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.GreaterThan.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.GreaterThan.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.IContext.h: include/Uno.Object.h

include/Fuse.Reactive.IEventHandler.h: include/Uno.Object.h

include/Fuse.Reactive.IEventRecord.h: include/Uno.Object.h
include/Fuse.Reactive.IEventRecord.h: include/Uno.UX.Selector.h

include/Fuse.Reactive.IExpression.h: include/Uno.Object.h

include/Fuse.Reactive.IListener.h: include/Uno.Object.h

include/Fuse.Reactive.InfixOperator.h: include/Fuse.Reactive.BinaryOperator.h
include/Fuse.Reactive.InfixOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.InnerListener.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.InnerListener.h: include/Uno.IDisposable.h
include/Fuse.Reactive.InnerListener.h: include/Uno.Object.h

include/Fuse.Reactive.Observa-449c533c.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Observa-44b05324.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Instance.h: include/Fuse.Binding.h
include/Fuse.Reactive.Instance.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Instance.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Instance.h: include/Fuse.ITemplateObserver.h
include/Fuse.Reactive.Instance.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.Instance.h: include/Fuse.Reactive.Instantiator.h
include/Fuse.Reactive.Instance.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Instance.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Instance.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Instance.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Instance.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.Instantiator.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Binding.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.ITemplateObserver.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Instantiator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Instantiator.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.IObservable.h: include/Fuse.IArray.h
include/Fuse.Reactive.IObservable.h: include/Uno.Object.h

include/Fuse.Reactive.IObserver.h: include/Uno.Object.h

include/Fuse.Reactive.ISubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ISubscription.h: include/Uno.Object.h

include/Fuse.Reactive.ValueFo-56db492b.h: include/Uno.Object.h

include/Fuse.Reactive.IWriteable.h: include/Uno.IDisposable.h
include/Fuse.Reactive.IWriteable.h: include/Uno.Object.h

include/Fuse.Reactive.JavaScript.h: include/Fuse.Behavior.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Binding.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.IProperties.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Node.ISiblingDataProvider.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Reactive.ValueFo-56db492b.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.JavaScript.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.LazyObs-bf65a558.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.LazyObs-bf65a558.h: include/Fuse.Reactive.Observa-d25b27dc.h
include/Fuse.Reactive.LazyObs-bf65a558.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.LessOrEqual.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.LessOrEqual.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.LessThan.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.LessThan.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.ListMirror.h: include/Fuse.IArray.h
include/Fuse.Reactive.ListMirror.h: include/Fuse.IRaw.h
include/Fuse.Reactive.ListMirror.h: include/Fuse.Reactive.ValueMirror.h

include/Fuse.Reactive.LogicalAnd.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.LogicalAnd.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.LogicalOr.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.LogicalOr.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.Match.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Match.h: include/Fuse.Binding.h
include/Fuse.Reactive.Match.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Match.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Match.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Match.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Match.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Match.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Match.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.Max.h: include/Fuse.Reactive.BinaryOperator.h
include/Fuse.Reactive.Max.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Member.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Member.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Reactive.Member.-411936c6.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Member.-411936c6.h: include/Fuse.Reactive.UnaryOp-ca38d18.h
include/Fuse.Reactive.Member.-411936c6.h: include/Uno.IDisposable.h

include/Fuse.Reactive.ThreadW-753c8bf1.h: include/Uno.Object.h

include/Fuse.Reactive.Min.h: include/Fuse.Reactive.BinaryOperator.h
include/Fuse.Reactive.Min.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Multiply.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Multiply.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.Name.h: include/Fuse.Reactive.Constan-b24df705.h
include/Fuse.Reactive.Name.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Negate.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Negate.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Reactive.Observa-87d533dc.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Observable.NewAt.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.NotEqual.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.NotEqual.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.NullCoalesce.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.NullCoalesce.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.ObjectMirror.h: include/Fuse.IObject.h
include/Fuse.Reactive.ObjectMirror.h: include/Fuse.IRaw.h
include/Fuse.Reactive.ObjectMirror.h: include/Fuse.Reactive.ValueMirror.h

include/Fuse.Reactive.Observable.h: include/Fuse.IArray.h
include/Fuse.Reactive.Observable.h: include/Fuse.IRaw.h
include/Fuse.Reactive.Observable.h: include/Fuse.Reactive.IObservable.h
include/Fuse.Reactive.Observable.h: include/Fuse.Reactive.ListMirror.h

include/Fuse.Reactive.Instant-e91fb2fb.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Instant-e91fb2fb.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.Instant-e91fb2fb.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Observa-d25b27dc.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.Observa-d25b27dc.h: include/Uno.Object.h
include/Fuse.Reactive.Observa-d25b27dc.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.InnerLi-25f01151.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.InnerLi-25f01151.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.InnerLi-25f01151.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Observa-922e79c.h: include/Uno.Object.h

include/Fuse.Reactive.Property.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Property.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.PropertyBinding.h: include/Fuse.INameListener.h
include/Fuse.Reactive.PropertyBinding.h: include/Fuse.Reactive.DataBinding.h
include/Fuse.Reactive.PropertyBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.PropertyBinding.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.PropertyBinding.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.PropertyBinding.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.ThreadW-16741eac.h: include/Uno.Object.h

include/Fuse.Reactive.Observa-258665e3.h: include/Uno.Object.h

include/Fuse.Reactive.Quatern-86ad1bb1.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Quatern-86ad1bb1.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.WhileCount.Range.h: include/Uno.Int.h

include/Fuse.Reactive.Observa-7efa6418.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Observa-acb5a0ea.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Resource.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Resource.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.ResourceBinding.h: include/Fuse.INameListener.h
include/Fuse.Reactive.ResourceBinding.h: include/Fuse.Reactive.DataBinding.h
include/Fuse.Reactive.ResourceBinding.h: include/Fuse.Reactive.IContext.h
include/Fuse.Reactive.ResourceBinding.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.ResourceBinding.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.ResourceBinding.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.Resourc-d34b0fa6.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Resourc-d34b0fa6.h: include/Uno.Object.h

include/Fuse.Reactive.Rootabl-c73b22db.h: include/Fuse.Scripting.ScriptModule.h
include/Fuse.Reactive.Rootabl-c73b22db.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Select.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Reactive.Select.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Reactive.Select.h: include/Fuse.Binding.h
include/Fuse.Reactive.Select.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.Select.h: include/Fuse.IProperties.h
include/Fuse.Reactive.Select.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.Select.h: include/Fuse.Reactive.ValueFo-56db492b.h
include/Fuse.Reactive.Select.h: include/Fuse.Reactive.With.h
include/Fuse.Reactive.Select.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.Select.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.Select.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.Select.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.Observable.Set.h: include/Fuse.Reactive.Observa-922e79c.h

include/Fuse.Reactive.Snapshot.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.Snapshot.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Observa-773d07dc.h: include/Fuse.Reactive.ISubscription.h
include/Fuse.Reactive.Observa-773d07dc.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Observa-773d07dc.h: include/Uno.Object.h

include/Fuse.Reactive.BinaryO-58f3f505.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.BinaryO-58f3f505.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.BinaryO-58f3f505.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Quatern-c87683ea.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Quatern-c87683ea.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.Quatern-c87683ea.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Propert-46d161dc.h: include/Fuse.Reactive.IWriteable.h
include/Fuse.Reactive.Propert-46d161dc.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Propert-46d161dc.h: include/Uno.Object.h
include/Fuse.Reactive.Propert-46d161dc.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Reactive.UnaryOp-ca38d18.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.UnaryOp-ca38d18.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.UnaryOp-ca38d18.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Ternary-4a73a6ec.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Ternary-4a73a6ec.h: include/Fuse.Reactive.InnerListener.h
include/Fuse.Reactive.Ternary-4a73a6ec.h: include/Uno.IDisposable.h

include/Fuse.Reactive.Snapsho-2c59e608.h: include/Fuse.Reactive.IListener.h
include/Fuse.Reactive.Snapsho-2c59e608.h: include/Uno.IDisposable.h
include/Fuse.Reactive.Snapsho-2c59e608.h: include/Uno.Object.h

include/Fuse.Reactive.Subtract.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Subtract.h: include/Fuse.Reactive.InfixOperator.h

include/Fuse.Reactive.TernaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.TernaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.This.h: include/Fuse.Reactive.Constan-b24df705.h
include/Fuse.Reactive.This.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.ThreadWorker.h: include/Fuse.Scripting.IThreadWorker.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Object.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Threading.IDispatcher.h

include/Fuse.Reactive.ToLower.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.ToLower.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Reactive.ToUpper.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.ToUpper.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Reactive.UnaryOperator.h: include/Fuse.Reactive.Expression.h
include/Fuse.Reactive.UnaryOperator.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.ValueForwarder.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.ValueForwarder.h: include/Fuse.Reactive.ValueObserver.h
include/Fuse.Reactive.ValueForwarder.h: include/Uno.IDisposable.h

include/Fuse.Reactive.ValueMirror.h: include/Fuse.IRaw.h
include/Fuse.Reactive.ValueMirror.h: include/Uno.Object.h

include/Fuse.Reactive.ValueObserver.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.ValueObserver.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ValueObserver.h: include/Uno.Object.h

include/Fuse.Reactive.Vector2.h: include/Fuse.Reactive.BinaryOperator.h
include/Fuse.Reactive.Vector2.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Reactive.Vector3.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Vector3.h: include/Fuse.Reactive.TernaryOperator.h

include/Fuse.Reactive.Vector4.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Reactive.Vector4.h: include/Fuse.Reactive.Quatern-86ad1bb1.h

include/Fuse.Reactive.WhileCount.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Binding.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.IProperties.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Reactive.WhileCount.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.WhileCount.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.WhileCount.h: include/Uno.Collections.IList-1.h
include/Fuse.Reactive.WhileCount.h: include/Uno.Int2.h

include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Binding.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.IProperties.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.WhileCount.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.WhileEmpty.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.WhileEmpty.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.WhileEmpty.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Binding.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.IProperties.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Reactive.WhileCount.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.WhileNotEmpty.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.With.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Reactive.With.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Reactive.With.h: include/Fuse.Binding.h
include/Fuse.Reactive.With.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Reactive.With.h: include/Fuse.IProperties.h
include/Fuse.Reactive.With.h: include/Fuse.Node.ISubtreeDataProvider.h
include/Fuse.Reactive.With.h: include/Fuse.Reactive.ValueFo-56db492b.h
include/Fuse.Reactive.With.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Reactive.With.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Reactive.With.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Reactive.With.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Reactive.With.h: include/Uno.Collections.IList-1.h

include/Fuse.Reactive.FuseJS.Builtins.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-d41fe095.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-3a1f9142.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.FuseJS.-3a1f9142.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.-3a1f9142.h: include/Uno.IDisposable.h

include/Fuse.Reactive.FuseJS.-5895e150.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-c2e1ed6c.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-7854331c.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.FuseJS.Http.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.Http.h: include/Uno.IDisposable.h

include/Fuse.Reactive.FuseJS.-c8e04678.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-cc916ec6.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-493d0fb5.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.-c1882362.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Reactive.FuseJS.-c1882362.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Reactive.FuseJS.-c1882362.h: include/Uno.IDisposable.h

include/Fuse.Motion.DelayFunction.h: include/Fuse.Reactive.BinaryOperator.h
include/Fuse.Motion.DelayFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Motion.Destinati-4dac9e7e.h: include/Uno.Object.h

include/Fuse.Motion.MotionConfig.h: include/Uno.Float2.h
include/Fuse.Motion.MotionConfig.h: include/Uno.Object.h

include/Fuse.Motion.MotionDes-8a59fed5.h: include/Uno.Int.h

include/Fuse.Motion.MotionUnit.h: include/Uno.Int.h

include/Fuse.Motion.NavigationMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.OverflowType.h: include/Uno.Int.h

include/Fuse.Motion.ScrollViewMotion.h: include/Fuse.Motion.MotionConfig.h

include/Fuse.Motion.DelayFunc-5feedff5.h: include/Uno.Object.h

include/Fuse.Motion.SpringFunction.h: include/Fuse.Reactive.Expression.h
include/Fuse.Motion.SpringFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Motion.SpringFun-26a3f09f.h: include/Fuse.Reactive.IListener.h
include/Fuse.Motion.SpringFun-26a3f09f.h: include/Uno.Float4.h
include/Fuse.Motion.SpringFun-26a3f09f.h: include/Uno.IDisposable.h
include/Fuse.Motion.SpringFun-26a3f09f.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-c58f2415.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-c58f2415.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-c58f2415.h: include/Fuse.Motion.Simulatio-8bde8aa1.h
include/Fuse.Motion.Simulatio-c58f2415.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-23d91a78.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-23d91a78.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-23d91a78.h: include/Fuse.Motion.Simulatio-8bde8aa1.h
include/Fuse.Motion.Simulatio-23d91a78.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-906f30a9.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-906f30a9.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-906f30a9.h: include/Fuse.Motion.Simulatio-a58c577b.h
include/Fuse.Motion.Simulatio-906f30a9.h: include/Uno.Float2.h
include/Fuse.Motion.Simulatio-906f30a9.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-a58c577b.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-a58c577b.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-a58c577b.h: include/Uno.Float2.h
include/Fuse.Motion.Simulatio-a58c577b.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-8bde8aa1.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-8bde8aa1.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-8bde8aa1.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-d31a266b.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-d31a266b.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-d31a266b.h: include/Fuse.Motion.Simulatio-8bde8aa1.h
include/Fuse.Motion.Simulatio-d31a266b.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-566660c2.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-566660c2.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-566660c2.h: include/Fuse.Motion.Simulatio-8bde8aa1.h
include/Fuse.Motion.Simulatio-566660c2.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-e290569c.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-e290569c.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-e290569c.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-625f2f9b.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-625f2f9b.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-531b35ba.h: include/Uno.Int.h

include/Fuse.Motion.Simulatio-92cee221.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-3c9694a.h: include/Uno.Int.h

include/Fuse.Motion.Simulatio-856a768f.h: include/Uno.Object.h

include/Fuse.Motion.Simulatio-bdef395c.h: include/Fuse.Motion.Simulatio-625f2f9b.h
include/Fuse.Motion.Simulatio-bdef395c.h: include/Fuse.Motion.Simulatio-856a768f.h
include/Fuse.Motion.Simulatio-bdef395c.h: include/Fuse.Motion.Simulatio-8bde8aa1.h
include/Fuse.Motion.Simulatio-bdef395c.h: include/Uno.Object.h

include/Fuse.Drawing.Antialiasing.h: include/Uno.Int.h

include/Fuse.Drawing.BezierOp.h: include/Uno.h

include/Fuse.Drawing.Border.h: include/Uno.Float2.h
include/Fuse.Drawing.Border.h: include/Uno.Float4.h
include/Fuse.Drawing.Border.h: include/Uno.Object.h
include/Fuse.Drawing.Border.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.Brush.h: include/Uno.UX.PropertyObject.h
include/Fuse.Drawing.Brush.h: include/Uno.Float2.h

include/Fuse.Drawing.BrushConverter.h: include/Fuse.Marshal.IConverter.h
include/Fuse.Drawing.BrushConverter.h: include/Uno.Object.h

include/Fuse.Drawing.Brushes.h: include/Uno.h

include/Fuse.Drawing.ButtCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.Cache-1.h: include/Uno.Object.h

include/Fuse.Drawing.ClosePath.h: include/Fuse.Drawing.ContourTerminator.h
include/Fuse.Drawing.ClosePath.h: include/Uno.Float2.h

include/Fuse.Drawing.Colors.h: include/Uno.h

include/Fuse.Drawing.Contour.h: include/Uno.Float2.h
include/Fuse.Drawing.Contour.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerable.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerator.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.IDisposable.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Object.h

include/Fuse.Drawing.ContourTerminator.h: include/Fuse.Drawing.PathGeometry.h

include/Fuse.Drawing.CurveTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.CurveTo.h: include/Uno.Float2.h

include/Fuse.Drawing.ImageFil-7451141e.h: include/Uno.Float2.h
include/Fuse.Drawing.ImageFil-7451141e.h: include/Uno.Float4.h
include/Fuse.Drawing.ImageFil-7451141e.h: include/Uno.Graphics.SamplerState.h
include/Fuse.Drawing.ImageFil-7451141e.h: include/Uno.Object.h

include/Fuse.Drawing.DynamicBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.EllipseFactory.h: include/Uno.h

include/Fuse.Drawing.GradientStop.h: include/Uno.Float4.h
include/Fuse.Drawing.GradientStop.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.HorizontalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.ImageFil-7451141e.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.ILoading.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Internal.IImageC-53d8106a.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Drawing.ImageFill.h: include/Uno.Float4.h

include/Fuse.Drawing.ISolidColor.h: include/Uno.Object.h
include/Fuse.Drawing.ISolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.LinearGradient.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Drawing.LinearGr-73a0d944.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGr-73a0d944.h: include/Uno.Object.h
include/Fuse.Drawing.LinearGr-73a0d944.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.LinearGr-2d748711.h: include/Uno.Int.h

include/Fuse.Drawing.LineCap.h: include/Uno.Int.h

include/Fuse.Drawing.LineCapImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineCapImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineJoin.h: include/Uno.Int.h

include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.LineTo.h: include/Uno.Float2.h

include/Fuse.Drawing.MiterJoin.h: include/Fuse.Drawing.LineJoinImpl.h

include/Fuse.Drawing.MoveTo.h: include/Fuse.Drawing.ContourTerminator.h

include/Fuse.Drawing.NonConse-cf030f8.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.NonConse-cf030f8.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConse-cf030f8.h: include/Uno.Object.h

include/Fuse.Drawing.NonConse-b4bb2bb7.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.NonConse-b4bb2bb7.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.NonConse-b4bb2bb7.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConse-b4bb2bb7.h: include/Uno.IDisposable.h
include/Fuse.Drawing.NonConse-b4bb2bb7.h: include/Uno.Object.h

include/Fuse.Drawing.NonConse-21300809.h: include/Uno.h

include/Fuse.Drawing.PathGeometry.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Rect.h

include/Fuse.Drawing.PathGeom-418a124e.h: include/Uno.h

include/Fuse.Drawing.PathGeom-c88dbb96.h: include/Uno.Object.h

include/Fuse.Drawing.PathGeom-eaebd424.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeom-eaebd424.h: include/Uno.Float4.h
include/Fuse.Drawing.PathGeom-eaebd424.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeom-eaebd424.h: include/Uno.Rect.h
include/Fuse.Drawing.PathGeom-eaebd424.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Drawing.Polygon.h: include/Uno.Object.h

include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.PolygonFiller.h: include/Uno.IDisposable.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Rect.h

include/Fuse.Drawing.RectangleFactory.h: include/Uno.h

include/Fuse.Drawing.RegularP-7d799f0a.h: include/Uno.h

include/Fuse.Drawing.RendererContext.h: include/Uno.Float2.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Float4x4.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Object.h

include/Fuse.Drawing.RepeatBaker.h: include/Uno.Float2.h
include/Fuse.Drawing.RepeatBaker.h: include/Uno.Object.h
include/Fuse.Drawing.RepeatBaker.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.ResampleMode.h: include/Uno.Int.h

include/Fuse.Drawing.RoundCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.SmoothCurveTo.h: include/Fuse.Drawing.CurveTo.h

include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.SolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.StarFactory.h: include/Uno.h

include/Fuse.Drawing.StaticBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.StaticBrush.h
include/Fuse.Drawing.StaticSolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.Stroke.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Drawing.Stroke.h: include/Uno.UX.PropertyObject.h

include/Fuse.Drawing.StrokeAdjustment.h: include/Uno.Int.h

include/Fuse.Drawing.StrokeAlignment.h: include/Uno.Int.h

include/Fuse.Drawing.Token.h: include/Uno.Object.h

include/Fuse.Drawing.Util.h: include/Uno.Object.h

include/Fuse.Drawing.VerticalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.WindingRules.h: include/Uno.h

include/Fuse.Drawing.WrapMode.h: include/Uno.Int.h

include/Fuse.Drawing.Internal-8abe4a9a.h: include/Uno.Object.h

include/Fuse.Drawing.Internal-e0fc3853.h: include/Fuse.Drawing.Internal-34379962.h

include/Fuse.Drawing.Internal-64c13853.h: include/Fuse.Drawing.Internal-34379962.h

include/Fuse.Drawing.Internal-61a632d3.h: include/Fuse.Drawing.Internal-34379962.h

include/Fuse.Drawing.Internal-81698804.h: include/Fuse.Drawing.Internal-34379962.h

include/Fuse.Drawing.Internal-382a9995.h: include/Uno.Object.h

include/Fuse.Drawing.Internal-34379962.h: include/Uno.Object.h

include/Fuse.Drawing.Internal-2397723b.h: include/Fuse.Drawing.Internal-34379962.h

include/Fuse.Drawing.Tesselat-56fff27f.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-bddb2361.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-bddb2361.h: include/Fuse.Drawing.Tesselat-fd70c210.h
include/Fuse.Drawing.Tesselat-bddb2361.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselat-e8a2cabf.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-e8a2cabf.h: include/Fuse.Drawing.Tesselat-fd70c210.h
include/Fuse.Drawing.Tesselat-e8a2cabf.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Face.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-9ee02cbd.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-9ee02cbd.h: include/Fuse.Drawing.Tesselation.Face.h
include/Fuse.Drawing.Tesselat-9ee02cbd.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Geom.h: include/Uno.h

include/Fuse.Drawing.Tesselat-fd70c210.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Mesh.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-f2f460b4.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-f81b8d7b.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-f81b8d7b.h: include/Fuse.Drawing.Tesselat-fd70c210.h
include/Fuse.Drawing.Tesselat-f81b8d7b.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Sweep.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-d5e92693.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-8f5ff2c4.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-8f5ff2c4.h: include/Fuse.Drawing.Tesselat-d5e92693.h
include/Fuse.Drawing.Tesselat-8f5ff2c4.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselat-8b9fc7af.h: include/Fuse.Drawing.Tesselat-4fc00954.h
include/Fuse.Drawing.Tesselat-8b9fc7af.h: include/Fuse.Drawing.Tesselat-56fff27f.h

include/Fuse.Drawing.Tesselat-4fc00954.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-3ee8123a.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-b4d568ec.h: include/Fuse.Drawing.Tesselat-3ee8123a.h
include/Fuse.Drawing.Tesselat-b4d568ec.h: include/Fuse.Drawing.Tesselat-730395ed.h
include/Fuse.Drawing.Tesselat-b4d568ec.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselat-b4d568ec.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-730395ed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselat-730395ed.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-35c2b98a.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.Tesselat-35c2b98a.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.Tesselat-35c2b98a.h: include/Uno.IDisposable.h
include/Fuse.Drawing.Tesselat-35c2b98a.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-f9156882.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselat-2c45f95a.h: include/Fuse.Drawing.Tesselat-d5e92693.h
include/Fuse.Drawing.Tesselat-2c45f95a.h: include/Fuse.Drawing.Tesselat-f9156882.h

include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.Primitiv-8d3906c1.h: include/Fuse.Drawing.Primitiv-121a4c11.h

include/Fuse.Drawing.Primitiv-4ea40cde.h: include/Fuse.Drawing.Primitiv-121a4c11.h

include/Fuse.Drawing.Primitiv-aa258e11.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-9824b782.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-40ac2b8d.h: include/Fuse.Drawing.Primitiv-aa258e11.h

include/Fuse.Drawing.Primitiv-69732c94.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-93f3b2a.h: include/Fuse.Drawing.Primitiv-69732c94.h

include/Fuse.Drawing.Primitiv-4d4d2ed7.h: include/Uno.Graphics.VertexAt-1f8449a6.h
include/Fuse.Drawing.Primitiv-4d4d2ed7.h: include/Uno.Object.h
include/Fuse.Drawing.Primitiv-4d4d2ed7.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Drawing.Primitiv-21a3c883.h: include/Fuse.Drawing.Primitiv-9824b782.h

include/Fuse.Drawing.Primitiv-164bf14.h: include/Fuse.Drawing.Primitiv-aa258e11.h

include/Fuse.Drawing.Primitives.Wedge.h: include/Uno.Object.h

include/Fuse.Drawing.Primitiv-121a4c11.h: include/Fuse.Drawing.Primitiv-69732c94.h

include/Fuse.Designer.Advance-10f630eb.h: include/Uno.Attribute.h

include/Fuse.Designer.ChildEx-6f197f3f.h: include/Uno.Attribute.h

include/Fuse.Designer.ColorAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.Compone-a76b5eef.h: include/Uno.Attribute.h

include/Fuse.Designer.Default-fb109acd.h: include/Uno.Attribute.h

include/Fuse.Designer.Default-d39ea5dd.h: include/Uno.Attribute.h

include/Fuse.Designer.Designe-b66220e7.h: include/Uno.Attribute.h

include/Fuse.Designer.DragDro-a1959723.h: include/Uno.Attribute.h

include/Fuse.Designer.Extensi-be967562.h: include/Uno.Attribute.h

include/Fuse.Designer.GroupAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HideAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HidesAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.IconAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.InlineAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.Interva-bf07e042.h: include/Uno.Attribute.h

include/Fuse.Designer.Optiona-2df946e2.h: include/Uno.Attribute.h

include/Fuse.Designer.Priorit-b9881c13.h: include/Uno.Attribute.h

include/Fuse.Designer.RangeAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.Recursi-7809058d.h: include/Uno.Attribute.h

include/Fuse.Designer.Require-3a2281b2.h: include/Uno.Attribute.h

include/Fuse.Designer.Spawnab-2461b3d3.h: include/Uno.Attribute.h

include/Fuse.Designer.SpawnsAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.Thickne-80aca1ee.h: include/Uno.Attribute.h

include/Fuse.Designer.Transit-f8a661c2.h: include/Uno.Attribute.h

include/Fuse.Designer.UnoHostInterface.h: include/Uno.h

include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.IProperties.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.AddingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.AddingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.AddingAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Android.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Android.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Android.h: include/Fuse.Binding.h
include/Fuse.Triggers.Android.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Android.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Android.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Android.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Android.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Android.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Android.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Busy.h: include/Fuse.Behavior.h
include/Fuse.Triggers.Busy.h: include/Fuse.Binding.h
include/Fuse.Triggers.Busy.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Busy.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Busy.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Busy.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Busy.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Busy.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.BusyOn.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTask.h: include/Uno.Object.h

include/Fuse.Triggers.BusyTaskActivity.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTaskMatch.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTaskModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Triggers.BusyTaskModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Triggers.BusyTaskModule.h: include/Uno.IDisposable.h

include/Fuse.Triggers.Completed.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Completed.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Completed.h: include/Fuse.Binding.h
include/Fuse.Triggers.Completed.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Completed.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Completed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Completed.h: include/Fuse.Triggers.Complet-fae3aabf.h
include/Fuse.Triggers.Completed.h: include/Fuse.Triggers.PulseTrigger-1.h
include/Fuse.Triggers.Completed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Completed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Completed.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Complet-74999c02.h: include/Uno.Int.h

include/Fuse.Triggers.Complet-fae3aabf.h: include/Uno.EventArgs.h

include/Fuse.Triggers.BusyTas-29d338e2.h: include/Uno.Object.h

include/Fuse.Triggers.ContainingText.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.Binding.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.IProperties.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.ContainingText.h: include/Fuse.Triggers.WhileCo-eeca308.h
include/Fuse.Triggers.ContainingText.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.ContainingText.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.ContainingText.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.IScroll-58e37172.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-58e37172.h: include/Uno.Object.h

include/Fuse.Triggers.Trigger-509483c6.h: include/Uno.Object.h

include/Fuse.Triggers.StateGr-5960259b.h: include/Uno.Object.h

include/Fuse.Triggers.IBusyHandler.h: include/Uno.Object.h

include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IMediaPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.Binding.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Interac-6bd1994c.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.iOS.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.iOS.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.iOS.h: include/Fuse.Binding.h
include/Fuse.Triggers.iOS.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.iOS.h: include/Fuse.IProperties.h
include/Fuse.Triggers.iOS.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.iOS.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.iOS.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.iOS.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.iOS.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.IPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IProgress.h: include/Uno.Object.h

include/Fuse.Triggers.IPulseTrigger.h: include/Uno.Object.h

include/Fuse.Triggers.IScrolledLength.h: include/Uno.Object.h
include/Fuse.Triggers.IScrolledLength.h: include/Uno.Float2.h

include/Fuse.Triggers.IScrolledLengths.h: include/Uno.h

include/Fuse.Triggers.IValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.IVisibility.h: include/Uno.Object.h

include/Fuse.Triggers.KeyPressHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.IProperties.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float2.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float4x4.h

include/Fuse.Triggers.LayoutA-26c2d2e5.h: include/Uno.Int.h

include/Fuse.Triggers.LayoutTransition.h: include/Uno.h

include/Fuse.Triggers.LayoutT-b774ec2e.h: include/Fuse.Triggers.LayoutT-26738dd1.h
include/Fuse.Triggers.LayoutT-b774ec2e.h: include/Fuse.Triggers.LayoutT-7e77e515.h
include/Fuse.Triggers.LayoutT-b774ec2e.h: include/Fuse.VisualEvent-2.h

include/Fuse.Triggers.LayoutT-7e77e515.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.LayoutT-7e77e515.h: include/Fuse.VisualEventArgs.h

include/Fuse.Triggers.LayoutT-26738dd1.h: include/Uno.Delegate.h

include/Fuse.Triggers.OnBackButton.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.Binding.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.IProperties.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.OnBackButton.h: include/Fuse.Triggers.OnKeyPress.h
include/Fuse.Triggers.OnBackButton.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.OnBackButton.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.OnBackButton.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Binding.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.IProperties.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.OnKeyPress.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.OnKeyPress.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.OnKeyPress.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Binding.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.IProperties.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.OnUserEvent.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.OnUserEvent.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.OnUserEvent.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.OnUserEvent.h: include/Uno.UX.Selector.h

include/Fuse.Triggers.OnUserE-60db16f0.h: include/Uno.Int.h

include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Binding.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.IProperties.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.PageBeginLoading.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.PageBeginLoading.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.PageBeginLoading.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.PageLoaded.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.Binding.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.IProperties.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.PageLoaded.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.PageLoaded.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.PageLoaded.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.PageLoaded.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.IScroll-98626b56.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-98626b56.h: include/Uno.Object.h

include/Fuse.Triggers.IScroll-5f432f1b.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-5f432f1b.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutT-9dffdf50.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-9dffdf50.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutT-9dffdf50.h: include/Uno.Object.h

include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.Binding.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Progres-6c72ee30.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.PullToReload.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.Binding.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.IProperties.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.PullToReload.h: include/Fuse.Triggers.Scrolli-d6ad18f5.h
include/Fuse.Triggers.PullToReload.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.PullToReload.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.PullToReload.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.PullToReload.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Triggers.PulseTr-b668fdd1.h: include/Uno.Delegate.h

include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Binding.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.IProperties.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.PulseTrigger-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFloat.Range.h: include/Uno.Int.h

include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Binding.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.IProperties.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.RangeAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.RangeAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.RangeAnimation.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileKe-e286b5d.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.WhileKe-e286b5d.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.WhileKe-e286b5d.h: include/Uno.Object.h

include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.Binding.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.IBeginRemoveVisu-428528f1.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Removin-6e73e5ec.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.LayoutT-5c476e09.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Triggers.LayoutT-5c476e09.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutT-b64ddb63.h: include/Fuse.IScalingMode.h
include/Fuse.Triggers.LayoutT-b64ddb63.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-b64ddb63.h: include/Uno.Object.h

include/Fuse.Triggers.Scrolled.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Binding.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Triggers.PulseTrigger-1.h
include/Fuse.Triggers.Scrolled.h: include/Fuse.Triggers.ScrolledArgs.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Scrolled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.ScrolledArgs.h: include/Uno.EventArgs.h

include/Fuse.Triggers.ScrolledWhere.h: include/Uno.Int.h

include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.Binding.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.Scrolli-d6ad18f5.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Triggers.Scrolli-4e51a6a8.h: include/Uno.Int.h

include/Fuse.Triggers.ScrollRegion.h: include/Uno.Object.h

include/Fuse.Triggers.IScroll-a084fbf4.h: include/Fuse.Triggers.IScrolledLength.h
include/Fuse.Triggers.IScroll-a084fbf4.h: include/Uno.Object.h

include/Fuse.Triggers.Timeline.State.h: include/Uno.Int.h

include/Fuse.Triggers.State.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.State.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.State.h: include/Fuse.Binding.h
include/Fuse.Triggers.State.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.State.h: include/Fuse.IProperties.h
include/Fuse.Triggers.State.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.State.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.State.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.State.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateGroup.h: include/Fuse.Behavior.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Binding.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.IProperties.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.StateGroup.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.StateTransition.h: include/Uno.Int.h

include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.Binding.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.IProperties.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.TextInp-db4356ba.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Timeline.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Binding.h
include/Fuse.Triggers.Timeline.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Timeline.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Timeline.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Transition.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Transition.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Transition.h: include/Fuse.Binding.h
include/Fuse.Triggers.Transition.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Transition.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Triggers.Transition.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Transition.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Transition.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Transition.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Transit-742f76c2.h: include/Uno.Int.h

include/Fuse.Triggers.TransitionGroup.h: include/Uno.Object.h

include/Fuse.Triggers.TransitionMode.h: include/Uno.Int.h

include/Fuse.Triggers.Trigger.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.Trigger.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.Trigger.h: include/Fuse.IProperties.h
include/Fuse.Triggers.Trigger.h: include/Fuse.NodeGroupBase.h
include/Fuse.Triggers.Trigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.Trigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.Trigger-32d26589.h: include/Uno.Int.h

include/Fuse.Triggers.TriggerPlayState.h: include/Uno.Int.h

include/Fuse.Triggers.BusyTask.Type.h: include/Uno.Int.h

include/Fuse.Triggers.WhileBool.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Bool.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileBusy.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.Triggers.IBusyHandler.h
include/Fuse.Triggers.WhileBusy.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileBusy.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileBusy.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileBusy.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileCompleted.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileCo-eeca308.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Triggers.WhileEn-8a453f15.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileDisabled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Triggers.WhileEn-8a453f15.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileEnabled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileEn-8a453f15.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFailed.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Triggers.IBusyHandler.h
include/Fuse.Triggers.WhileFailed.h: include/Fuse.Triggers.WhileBusy.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFailed.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFalse.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFloat.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float2.h

include/Fuse.Triggers.WhileFocused.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFocused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFocused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileFocusWithin.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileInteracting.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileInteracting.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileInteracting.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileKe-9dca693c.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileLoading.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Triggers.IBusyHandler.h
include/Fuse.Triggers.WhileLoading.h: include/Fuse.Triggers.WhileBusy.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileLoading.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileNotFocused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileNotFocused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileNotFocused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePageLoading.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePageLoading.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePageLoading.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePaused.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePaused.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePaused.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhilePlaying.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileScrollable.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileScrollable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileScrollable.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.WhileScrollable.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Triggers.WhileScrolled.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileScrolled.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileScrolled.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileScrolled.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileScrolled.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileString.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileString.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileString.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileString.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileString.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileString.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileString.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileString.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileString.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileString.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileString.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.WhileString.h: include/Uno.String.h

include/Fuse.Triggers.WhileStringTest.h: include/Uno.Int.h

include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileTrue.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileValueStatic.h: include/Uno.h

include/Fuse.Triggers.WhileVisible.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileVisible.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileVisible.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileVisible.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileVisible.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileVi-4c3809e8.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Fuse.Triggers.WindowS-69720886.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileWi-2e7b7d8e.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Fuse.Triggers.WhileWi-2e7b7d8e.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileWi-403bcf40.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Fuse.Triggers.WhileWi-2e7b7d8e.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileWi-b6203d01.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Binding.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Triggers.WindowS-69720886.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Collections.IList-1.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Float2.h

include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.Binding.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.IProperties.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Triggers.WindowS-69720886.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WindowS-69720886.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Triggers.WindowS-69720886.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Triggers.WindowS-69720886.h: include/Uno.Collections.IList-1.h

include/Fuse.Triggers.LayoutT-8c989cfe.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutT-8c989cfe.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutT-8c989cfe.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-f0c555a.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-2bea2999.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Callback.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-254e6a02.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Collapse.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-d5e73d8f.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-504f1beb.h: include/Fuse.Triggers.Actions-10ca8acd.h
include/Fuse.Triggers.Actions-504f1beb.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-770d983.h: include/Fuse.Triggers.Actions-10ca8acd.h
include/Fuse.Triggers.Actions-770d983.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-1dda770c.h: include/Fuse.Triggers.Actions-10ca8acd.h
include/Fuse.Triggers.Actions-1dda770c.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-fe42da8a.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-c1198770.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Hide.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-19aca435.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IHide.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IShow.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-10ca8acd.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-f84ec3c1.h: include/Uno.Object.h

include/Fuse.Triggers.Actions-53b6ae74.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.Actions-53b6ae74.h: include/Uno.EventArgs.h

include/Fuse.Triggers.Actions-dd0879e5.h: include/Uno.Delegate.h

include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Triggers.Actions-442c79fe.h

include/Fuse.Triggers.Actions.LoadUrl.h: include/Fuse.Triggers.Actions-442c79fe.h

include/Fuse.Triggers.Actions.Pause.h: include/Fuse.Triggers.Actions-1c5d7b33.h

include/Fuse.Triggers.Actions.Play.h: include/Fuse.Triggers.Actions-1c5d7b33.h

include/Fuse.Triggers.Actions-1c5d7b33.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.PlayTo.h: include/Fuse.Triggers.Actions-1c5d7b33.h

include/Fuse.Triggers.Actions.Pulse.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-d3d6294.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-c9bb231d.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-6e8373b3.h: include/Fuse.Triggers.Actions-ec2327b1.h
include/Fuse.Triggers.Actions-6e8373b3.h: include/Uno.UX.Selector.h

include/Fuse.Triggers.Actions-4e380e56.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-a9e252c4.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Reload.h: include/Fuse.Triggers.Actions-442c79fe.h

include/Fuse.Triggers.Actions.Resume.h: include/Fuse.Triggers.Actions.Play.h

include/Fuse.Triggers.Actions-598112db.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Set-1.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Show.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions.Stop.h: include/Fuse.Triggers.Actions-1c5d7b33.h

include/Fuse.Triggers.Actions-27912a3b.h: include/Fuse.Triggers.Actions-442c79fe.h

include/Fuse.Triggers.Actions-cea11b76.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-1ecbf880.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.Toggle.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-f3a67441.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-fda38800.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Triggers.Actions-b140479e.h: include/Uno.Int.h

include/Fuse.Triggers.Actions-ec2327b1.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions-dbbca1cb.h: include/Uno.Int.h

include/Fuse.Triggers.Actions-5a595422.h: include/Uno.UX.PropertyObject.h

include/Fuse.Triggers.Actions-442c79fe.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Elements.Alignment.h: include/Uno.Int.h

include/Fuse.Elements.AlignmentHelpers.h: include/Uno.h

include/Fuse.Elements.Transfo-3e6c9633.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-3e6c9633.h: include/Uno.Object.h

include/Fuse.Elements.AspectConstraint.h: include/Uno.Int.h

include/Fuse.Elements.Element-293c2016.h: include/Uno.IDisposable.h
include/Fuse.Elements.Element-293c2016.h: include/Uno.Object.h
include/Fuse.Elements.Element-293c2016.h: include/Uno.Rect.h

include/Fuse.Elements.Transfo-36b8a655.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-36b8a655.h: include/Uno.Float2.h
include/Fuse.Elements.Transfo-36b8a655.h: include/Uno.Object.h

include/Fuse.Elements.BoxPlacement.h: include/Uno.Float2.h
include/Fuse.Elements.BoxPlacement.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizing.h: include/Uno.Object.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.Elements.BoxPlacement.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.BoxSizing.h: include/Uno.Float2.h
include/Fuse.Elements.BoxSizing.h: include/Uno.UX.Size.h

include/Fuse.Elements.Element-a1c6a3b2.h: include/Uno.Int.h

include/Fuse.Elements.Cache.h: include/Fuse.Elements.CacheTile.h
include/Fuse.Elements.Cache.h: include/Uno.Object.h
include/Fuse.Elements.Cache.h: include/Uno.Recti.h

include/Fuse.Elements.CacheHelper.h: include/Uno.Float2.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Object.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Elements.CacheTile.h: include/Uno.Float4x4.h
include/Fuse.Elements.CacheTile.h: include/Uno.Object.h
include/Fuse.Elements.CacheTile.h: include/Uno.Recti.h

include/Fuse.Elements.CachingMode.h: include/Uno.Int.h

include/Fuse.Elements.Transfo-94150c5f.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-94150c5f.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizi-852ccdae.h: include/Uno.Int.h

include/Fuse.Elements.Element-6f76e752.h: include/Uno.IDisposable.h
include/Fuse.Elements.Element-6f76e752.h: include/Uno.Object.h

include/Fuse.Elements.DisplayHelpers.h: include/Uno.h

include/Fuse.Elements.Element.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Element.h: include/Fuse.Binding.h
include/Fuse.Elements.Element.h: include/Fuse.Elements.Element-b6fdf9f4.h
include/Fuse.Elements.Element.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Element.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Elements.Element.h: include/Fuse.IProperties.h
include/Fuse.Elements.Element.h: include/Fuse.Node.h
include/Fuse.Elements.Element.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Elements.Element.h: include/Fuse.Visual.h
include/Fuse.Elements.Element.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Element.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Element.h: include/Uno.Float2.h
include/Fuse.Elements.Element.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size.h
include/Fuse.Elements.Element.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.h: include/Uno.Float3.h
include/Fuse.Elements.Element.h: include/Uno.Float4.h
include/Fuse.Elements.Element.h: include/Uno.Geometry.Box.h
include/Fuse.Elements.Element.h: include/Uno.Rect.h
include/Fuse.Elements.Element.h: include/Uno.Recti.h
include/Fuse.Elements.Element.h: include/Uno.UX.Size2.h

include/Fuse.Elements.ElementAtlas.h: include/Uno.Object.h

include/Fuse.Elements.Element-312bbda3.h: include/Uno.Object.h

include/Fuse.Elements.Element-aa07fc1c.h: include/Uno.h

include/Fuse.Elements.Element-36f7b512.h: include/Uno.Object.h

include/Fuse.Elements.Element-79e29ab.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.Element-79e29ab.h: include/Uno.Object.h

include/Fuse.Elements.ElementBatch.h: include/Fuse.Elements.IElemen-96365734.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Graphics.VertexAt-1f8449a6.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Elements.Element-d750183.h: include/Uno.Object.h
include/Fuse.Elements.Element-d750183.h: include/Uno.Recti.h

include/Fuse.Elements.ElementBatcher.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.Object.h

include/Fuse.Elements.Explici-aa468cb6.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Explici-aa468cb6.h: include/Uno.Object.h
include/Fuse.Elements.Explici-aa468cb6.h: include/Uno.UX.Size2.h

include/Fuse.Elements.FillAsp-5558472f.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.Element-b6fdf9f4.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element-b6fdf9f4.h: include/Uno.Float2.h
include/Fuse.Elements.Element-b6fdf9f4.h: include/Uno.Object.h

include/Fuse.Elements.HeightFunction.h: include/Fuse.Elements.LayoutFunction.h
include/Fuse.Elements.HeightFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Elements.HitTestMode.h: include/Uno.Int.h

include/Fuse.Elements.IElemen-96365734.h: include/Uno.Object.h
include/Fuse.Elements.IElemen-96365734.h: include/Uno.Float4x4.h
include/Fuse.Elements.IElemen-96365734.h: include/Uno.Rect.h

include/Fuse.Elements.Interac-8bb1897f.h: include/Fuse.Binding.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Fuse.IProperties.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Fuse.Transform.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Interac-8bb1897f.h: include/Uno.Float2.h

include/Fuse.Elements.ITransformOrigin.h: include/Uno.Object.h
include/Fuse.Elements.ITransformOrigin.h: include/Uno.Float3.h

include/Fuse.Elements.ITreeRenderer.h: include/Uno.Object.h
include/Fuse.Elements.ITreeRenderer.h: include/Fuse.LayoutParams.h

include/Fuse.Elements.LayoutFunction.h: include/Fuse.Reactive.IExpression.h
include/Fuse.Elements.LayoutFunction.h: include/Fuse.Reactive.UnaryOperator.h

include/Fuse.Elements.LayoutMasterAttr.h: include/Uno.h

include/Fuse.Elements.LayoutM-9dc16eb3.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.LayoutM-97d0d66d.h: include/Uno.Object.h

include/Fuse.Elements.LayoutMasterMode.h: include/Uno.Int.h

include/Fuse.Elements.LayoutF-5aff1535.h: include/Fuse.Reactive.IListener.h
include/Fuse.Elements.LayoutF-5aff1535.h: include/Fuse.Reactive.UnaryOp-ca38d18.h
include/Fuse.Elements.LayoutF-5aff1535.h: include/Uno.IDisposable.h

include/Fuse.Elements.LimitBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.NoImpli-28df30cc.h: include/Fuse.Elements.Standar-e4f2b29a.h

include/Fuse.Elements.Transla-2a970980.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-2a970980.h: include/Fuse.ITranslationMode.h
include/Fuse.Elements.Transla-2a970980.h: include/Uno.Object.h
include/Fuse.Elements.Transla-2a970980.h: include/Uno.Float3.h

include/Fuse.Elements.Optiona-bfaf403b.h: include/Uno.Int.h

include/Fuse.Elements.Perspec-2f0f2958.h: include/Uno.Int.h

include/Fuse.Elements.Transla-c429c6ad.h: include/Fuse.Elements.Transla-2a970980.h
include/Fuse.Elements.Transla-c429c6ad.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-c429c6ad.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.PreplacementArgs.h: include/Uno.EventArgs.h

include/Fuse.Elements.Preplac-247bd81c.h: include/Uno.Delegate.h

include/Fuse.Elements.Transla-b1893703.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Elements.Transla-b1893703.h: include/Uno.Object.h

include/Fuse.Elements.SimpleAlignment.h: include/Uno.Int.h

include/Fuse.Elements.SingleV-cbfa2cd7.h: include/Fuse.Elements.IElemen-96365734.h
include/Fuse.Elements.SingleV-cbfa2cd7.h: include/Uno.Object.h

include/Fuse.Elements.Transla-8fb43b23.h: include/Fuse.IScalingMode.h
include/Fuse.Elements.Transla-8fb43b23.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-8fb43b23.h: include/Uno.Object.h

include/Fuse.Elements.Standar-e4f2b29a.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.StretchDirection.h: include/Uno.Int.h

include/Fuse.Elements.StretchMode.h: include/Uno.Int.h

include/Fuse.Elements.StretchSizing.h: include/Uno.Int.h

include/Fuse.Elements.Transla-97de34cd.h: include/Uno.Object.h

include/Fuse.Elements.Transfo-b801686b.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.Transfo-b801686b.h: include/Uno.Object.h

include/Fuse.Elements.Element-34d52777.h: include/Uno.Float4x4.h
include/Fuse.Elements.Element-34d52777.h: include/Uno.IDisposable.h
include/Fuse.Elements.Element-34d52777.h: include/Uno.Object.h

include/Fuse.Elements.Transla-68d746a1.h: include/Fuse.Elements.Transla-2a970980.h
include/Fuse.Elements.Transla-68d746a1.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.Transla-68d746a1.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.TransformOrigins.h: include/Uno.h

include/Fuse.Elements.TranslationModes.h: include/Uno.h

include/Fuse.Elements.Viewport.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Viewport.h: include/Fuse.Binding.h
include/Fuse.Elements.Viewport.h: include/Fuse.Elements.Element.h
include/Fuse.Elements.Viewport.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Viewport.h: include/Fuse.ICommonViewport.h
include/Fuse.Elements.Viewport.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Elements.Viewport.h: include/Fuse.IProperties.h
include/Fuse.Elements.Viewport.h: include/Fuse.IRenderViewport.h
include/Fuse.Elements.Viewport.h: include/Fuse.IViewport.h
include/Fuse.Elements.Viewport.h: include/Fuse.Node.h
include/Fuse.Elements.Viewport.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Elements.Viewport.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Elements.Viewport.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Elements.Viewport.h: include/Uno.Collections.IList-1.h
include/Fuse.Elements.Viewport.h: include/Uno.Float4x4.h
include/Fuse.Elements.Viewport.h: include/Uno.Runtime.Implement-5e8872c0.h
include/Fuse.Elements.Viewport.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Elements.ViewportMode.h: include/Uno.Int.h

include/Fuse.Elements.Visibility.h: include/Uno.Int.h

include/Fuse.Elements.Element-9472ffe4.h: include/Uno.Float4x4.h
include/Fuse.Elements.Element-9472ffe4.h: include/Uno.IDisposable.h
include/Fuse.Elements.Element-9472ffe4.h: include/Uno.Object.h
include/Fuse.Elements.Element-9472ffe4.h: include/Uno.Rect.h

include/Fuse.Elements.Element-c235cef8.h: include/Uno.IDisposable.h
include/Fuse.Elements.Element-c235cef8.h: include/Uno.Object.h

include/Fuse.Elements.WidthFunction.h: include/Fuse.Elements.LayoutFunction.h
include/Fuse.Elements.WidthFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Elements.XFunction.h: include/Fuse.Elements.LayoutFunction.h
include/Fuse.Elements.XFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Elements.YFunction.h: include/Fuse.Elements.LayoutFunction.h
include/Fuse.Elements.YFunction.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Elements.Interna-a1031a0d.h: include/Uno.Float4x4.h
include/Fuse.Elements.Interna-a1031a0d.h: include/Uno.Object.h
include/Fuse.Elements.Interna-a1031a0d.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Elements.Interna-9286b3e9.h: include/Uno.Object.h
include/Fuse.Elements.Interna-9286b3e9.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.BasicEffect.h: include/Fuse.Binding.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Effects.Effect.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.IProperties.h
include/Fuse.Effects.BasicEffect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Rect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Recti.h

include/Fuse.Effects.DropShad-882510a4.h: include/Uno.Float4x4.h
include/Fuse.Effects.DropShad-882510a4.h: include/Uno.Object.h
include/Fuse.Effects.DropShad-882510a4.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.Blur.h: include/Fuse.Binding.h
include/Fuse.Effects.Blur.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Blur.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Blur.h: include/Fuse.IProperties.h
include/Fuse.Effects.Blur.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Blur.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Blur.h: include/Uno.Float4x4.h
include/Fuse.Effects.Blur.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.Desaturate.h: include/Fuse.Binding.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Desaturate.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Desaturate.h: include/Fuse.IProperties.h
include/Fuse.Effects.Desaturate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Desaturate.h: include/Uno.Float4x4.h
include/Fuse.Effects.Desaturate.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.DropShadow.h: include/Fuse.Binding.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.DropShadow.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.DropShadow.h: include/Fuse.IProperties.h
include/Fuse.Effects.DropShadow.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.DropShadow.h: include/Uno.Float4.h

include/Fuse.Effects.Duotone.h: include/Fuse.Binding.h
include/Fuse.Effects.Duotone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Duotone.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Duotone.h: include/Fuse.IProperties.h
include/Fuse.Effects.Duotone.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Duotone.h: include/Uno.Float3.h
include/Fuse.Effects.Duotone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Duotone.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.Effect.h: include/Fuse.Binding.h
include/Fuse.Effects.Effect.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Effect.h: include/Fuse.IProperties.h
include/Fuse.Effects.Effect.h: include/Fuse.Node.h
include/Fuse.Effects.Effect.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Effect.h: include/Uno.Collections.IList-1.h

include/Fuse.Effects.EffectHelpers.h: include/Uno.Object.h
include/Fuse.Effects.EffectHelpers.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.EffectType.h: include/Uno.Int.h

include/Fuse.Effects.Halftone.h: include/Fuse.Binding.h
include/Fuse.Effects.Halftone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Halftone.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Halftone.h: include/Fuse.IProperties.h
include/Fuse.Effects.Halftone.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Halftone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Halftone.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.Mask.h: include/Fuse.Binding.h
include/Fuse.Effects.Mask.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Mask.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Effects.Mask.h: include/Fuse.Internal.IImageC-53d8106a.h
include/Fuse.Effects.Mask.h: include/Fuse.IProperties.h
include/Fuse.Effects.Mask.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Effects.Mask.h: include/Uno.Collections.IList-1.h
include/Fuse.Effects.Mask.h: include/Uno.Float4x4.h
include/Fuse.Effects.Mask.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Effects.Mask.MaskMode.h: include/Uno.Int.h

include/Fuse.Controls.MobileT-db246482.h: include/Uno.UX.Template.h

include/Fuse.Controls.AutoCap-abbe846.h: include/Uno.Int.h

include/Fuse.Controls.AutoCorrectHint.h: include/Uno.Int.h

include/Fuse.Controls.BackButton.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BackButton.h: include/Fuse.Binding.h
include/Fuse.Controls.BackButton.h: include/Fuse.Controls.ButtonBase.h
include/Fuse.Controls.BackButton.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BackButton.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.BackButton.h: include/Fuse.IProperties.h
include/Fuse.Controls.BackButton.h: include/Fuse.Node.h
include/Fuse.Controls.BackButton.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BackButton.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BackButton.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Binding.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Controls.BottomF-1d6dc8b2.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.IProperties.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Node.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BottomB-75d36dc1.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Binding.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.IProperties.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Node.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.BottomF-1d6dc8b2.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Buffere-210977db.h: include/Uno.Object.h

include/Fuse.Controls.Button.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Button.h: include/Fuse.Binding.h
include/Fuse.Controls.Button.h: include/Fuse.Controls.ButtonBase.h
include/Fuse.Controls.Button.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Button.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Button.h: include/Fuse.IProperties.h
include/Fuse.Controls.Button.h: include/Fuse.Node.h
include/Fuse.Controls.Button.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Button.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Button.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Button.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Button.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ButtonBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.IProperties.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Node.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ButtonBase.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ButtonBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Circle.h: include/Fuse.Binding.h
include/Fuse.Controls.Circle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Circle.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Circle.h: include/Fuse.IProperties.h
include/Fuse.Controls.Circle.h: include/Fuse.Node.h
include/Fuse.Controls.Circle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Circle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Circle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ClientPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Controls.DockPanel.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IProperties.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Node.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ClientPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ClientPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ClientPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ClientPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Container.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Container.h: include/Fuse.Binding.h
include/Fuse.Controls.Container.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Container.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Container.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Container.h: include/Fuse.IProperties.h
include/Fuse.Controls.Container.h: include/Fuse.Node.h
include/Fuse.Controls.Container.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Container.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Container.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Container.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Container.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Container.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Container.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Container.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ContentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ContentControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Node.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ContentControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Control.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Control.h: include/Fuse.Binding.h
include/Fuse.Controls.Control.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Control.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Control.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Control.h: include/Fuse.IProperties.h
include/Fuse.Controls.Control.h: include/Fuse.Node.h
include/Fuse.Controls.Control.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Control.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Control.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Control.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.Gestures.Scroller.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.Input.IGesture.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.IProperties.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollV-954e2ccc.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Default-e6102a36.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.Default-e6102a36.h: include/Uno.Object.h

include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.IProperties.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Fuse.Triggers.WhileTrue.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollV-891eb8ae.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-447b1e85.h: include/Uno.Object.h

include/Fuse.Controls.NativeV-672079ed.h: include/Uno.IDisposable.h
include/Fuse.Controls.NativeV-672079ed.h: include/Uno.Object.h

include/Fuse.Controls.SingleV-5ec28542.h: include/Uno.IDisposable.h
include/Fuse.Controls.SingleV-5ec28542.h: include/Uno.Object.h

include/Fuse.Controls.DockPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.DockPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IProperties.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Node.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.DockPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Binding.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IProperties.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Node.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.EdgeNavigator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Element-1e48168c.h: include/Uno.Float.h
include/Fuse.Controls.Element-1e48168c.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Binding.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Controls.PathShape.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Ellipse.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IProperties.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Node.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Ellipse.h: include/Uno.Float2.h
include/Fuse.Controls.Ellipse.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.NativeV-fa724406.h: include/Uno.IDisposable.h
include/Fuse.Controls.NativeV-fa724406.h: include/Uno.Object.h

include/Fuse.Controls.SingleV-6a131ba3.h: include/Uno.IDisposable.h
include/Fuse.Controls.SingleV-6a131ba3.h: include/Uno.Object.h

include/Fuse.Controls.Extensions.h: include/Uno.h

include/Fuse.Controls.Fallbac-b543e85b.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.Fallbac-b543e85b.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.Fallbac-b543e85b.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.Fallbac-b543e85b.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Fallbac-b543e85b.h: include/Uno.Object.h

include/Fuse.Controls.FileVideoSource.h: include/Fuse.Controls.VideoSource.h

include/Fuse.Controls.FillRule.h: include/Uno.Int.h

include/Fuse.Controls.FitMode.h: include/Uno.Int.h

include/Fuse.Controls.FreezeDrawable.h: include/Uno.Float4x4.h
include/Fuse.Controls.FreezeDrawable.h: include/Uno.Object.h
include/Fuse.Controls.FreezeDrawable.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.GraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Binding.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.IProxyHost.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.ICommonViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IProperties.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IRenderViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Node.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Float4.h
include/Fuse.Controls.GraphicsView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Grid.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Grid.h: include/Fuse.Binding.h
include/Fuse.Controls.Grid.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Grid.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Grid.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Grid.h: include/Fuse.IProperties.h
include/Fuse.Controls.Grid.h: include/Fuse.Node.h
include/Fuse.Controls.Grid.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Grid.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Grid.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.HTML.h: include/Uno.UX.PropertyObject.h

include/Fuse.Controls.Image.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Image.h: include/Fuse.Binding.h
include/Fuse.Controls.Image.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Image.h: include/Fuse.Gestures.ISizeConstraint.h
include/Fuse.Controls.Image.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Image.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Image.h: include/Fuse.IProperties.h
include/Fuse.Controls.Image.h: include/Fuse.Node.h
include/Fuse.Controls.Image.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Image.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Image.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Image.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Image.h: include/Uno.Float2.h
include/Fuse.Controls.Image.h: include/Uno.Float4.h
include/Fuse.Controls.Image.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ImageElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Controls.ImageElementDraw.h: include/Uno.Object.h
include/Fuse.Controls.ImageElementDraw.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.INativeViewRoot.h: include/Uno.Object.h

include/Fuse.Controls.NativeV-6e069611.h: include/Uno.Int.h

include/Fuse.Controls.MobileT-e3385715.h: include/Uno.UX.Template.h

include/Fuse.Controls.IProxyHost.h: include/Uno.Object.h
include/Fuse.Controls.IProxyHost.h: include/Uno.Float4x4.h

include/Fuse.Controls.IProxyH-7358c3c0.h: include/Uno.h

include/Fuse.Controls.ISourceReceiver.h: include/Uno.Object.h

include/Fuse.Controls.ITextEditControl.h: include/Uno.Object.h

include/Fuse.Controls.ITextRenderer.h: include/Uno.Object.h
include/Fuse.Controls.ITextRenderer.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Float2.h
include/Fuse.Controls.ITextRenderer.h: include/Uno.Rect.h

include/Fuse.Controls.IWebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.IWebView.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.IWebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.IWebView.h: include/Uno.Object.h

include/Fuse.Controls.JavaScriptCall.h: include/Fuse.Controls.Buffere-210977db.h
include/Fuse.Controls.JavaScriptCall.h: include/Uno.Object.h

include/Fuse.Controls.Keyfram-c31799e9.h: include/Uno.h

include/Fuse.Controls.LayoutControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Binding.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Node.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.LayoutControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.LayoutControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.LoadHtmlCall.h: include/Fuse.Controls.Buffere-210977db.h
include/Fuse.Controls.LoadHtmlCall.h: include/Uno.Object.h

include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Binding.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Controls.ITextEditControl.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Controls.Native.-13840398.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Input.INotifyFocus.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.IProperties.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Node.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.MobileTextEdit.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.MobileTextEdit.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.MobileTextEdit.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.MobileTextEdit.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.MobileTextEdit.h: include/Uno.String.h
include/Fuse.Controls.MobileTextEdit.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.MultiLayout.h: include/Fuse.Behavior.h
include/Fuse.Controls.MultiLayout.h: include/Fuse.Binding.h
include/Fuse.Controls.MultiLayout.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.MultiLayout.h: include/Fuse.IProperties.h
include/Fuse.Controls.MultiLayout.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.MultiLayout.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.MultiLayout.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.MultiLayout.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IProperties.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Node.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.NativeViewHost.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Binding.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Controls.Native.-10260f28.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IProperties.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Node.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.NativeViewHost.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NativeViewHost.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NativeViewHost.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.NativeViewHost.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.NavigationBar.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IProperties.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Node.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.NavigationBar.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigationBar.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigationBar.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.NavigationBar.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Node.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Navigat-44108024.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-44108024.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-44108024.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Navigat-44108024.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.Navigat-44108024.h: include/Fuse.Navigation.Navig-ba21f3a3.h

include/Fuse.Controls.Navigat-6b8f71d0.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-b140f655.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-c30b1c3e.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-d4ced927.h: include/Uno.Delegate.h

include/Fuse.Controls.Navigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Navigator.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigator.h: include/Fuse.Controls.Navigat-44108024.h
include/Fuse.Controls.Navigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Navigator.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigator.h: include/Fuse.Internal.MiniList-1.h
include/Fuse.Controls.Navigator.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.Navigator.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.Navigator.h: include/Fuse.Node.h
include/Fuse.Controls.Navigator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Navigator.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Navigator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-df1927fb.h: include/Uno.Int.h

include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.Binding.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.IProperties.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.NodeGroupBase.h
include/Fuse.Controls.NavigatorSwipe.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.NavigatorSwipe.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-4b439754.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-bebba826.h: include/Uno.Int.h

include/Fuse.Controls.Navigat-5cd486b5.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Controls.Navigat-5cd486b5.h: include/Fuse.VisualEventArgs.h

include/Fuse.Controls.Navigat-54db86cf.h: include/Uno.Object.h

include/Fuse.Controls.Number.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Number.h: include/Fuse.Binding.h
include/Fuse.Controls.Number.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Number.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Number.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Number.h: include/Fuse.IProperties.h
include/Fuse.Controls.Number.h: include/Fuse.Node.h
include/Fuse.Controls.Number.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Number.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Number.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Number.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Number.h: include/Uno.Float.h
include/Fuse.Controls.Number.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Page.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Page.h: include/Fuse.Binding.h
include/Fuse.Controls.Page.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Page.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Page.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Page.h: include/Fuse.IProperties.h
include/Fuse.Controls.Page.h: include/Fuse.Node.h
include/Fuse.Controls.Page.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Page.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Page.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Page.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Page.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageControl.h: include/Fuse.Binding.h
include/Fuse.Controls.PageControl.h: include/Fuse.Controls.Navigat-44108024.h
include/Fuse.Controls.PageControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.PageControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.ISeek-5e75bfda.h
include/Fuse.Controls.PageControl.h: include/Fuse.Node.h
include/Fuse.Controls.PageControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Navigat-78593a0c.h: include/Uno.Object.h

include/Fuse.Controls.EdgeNav-578d0c74.h: include/Uno.Object.h

include/Fuse.Controls.PageFreeze.h: include/Uno.Int.h

include/Fuse.Controls.PageIndicator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Binding.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Controls.StackPanel.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IProperties.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.PageIndicator.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageIndicator.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageIndicator.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageIndicator.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Binding.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IProperties.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Node.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.Float4.h
include/Fuse.Controls.PageIndicatorDot.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PageInd-dffb02e0.h: include/Uno.UX.Template.h

include/Fuse.Controls.PageView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageView.h: include/Fuse.Binding.h
include/Fuse.Controls.PageView.h: include/Fuse.Controls.Navigator.h
include/Fuse.Controls.PageView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.PageView.h: include/Fuse.IProperties.h
include/Fuse.Controls.PageView.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.PageView.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageView.h: include/Fuse.Navigation.IRouterOutlet.h
include/Fuse.Controls.PageView.h: include/Fuse.Node.h
include/Fuse.Controls.PageView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PageView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PageView.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.PageView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PageView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PageView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PageView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Panel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Panel.h: include/Fuse.Binding.h
include/Fuse.Controls.Panel.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Panel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Panel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Panel.h: include/Fuse.IProperties.h
include/Fuse.Controls.Panel.h: include/Fuse.Node.h
include/Fuse.Controls.Panel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Panel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Panel.h: include/Uno.Float2.h
include/Fuse.Controls.Panel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Path.h: include/Fuse.Binding.h
include/Fuse.Controls.Path.h: include/Fuse.Controls.PathShape.h
include/Fuse.Controls.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Path.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Path.h: include/Fuse.IProperties.h
include/Fuse.Controls.Path.h: include/Fuse.Node.h
include/Fuse.Controls.Path.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Path.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Path.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Path.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Path.h: include/Uno.Float2.h
include/Fuse.Controls.Path.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.PathScaleMode.h: include/Uno.Int.h

include/Fuse.Controls.PathShape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PathShape.h: include/Fuse.Binding.h
include/Fuse.Controls.PathShape.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.PathShape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PathShape.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.PathShape.h: include/Fuse.IProperties.h
include/Fuse.Controls.PathShape.h: include/Fuse.Node.h
include/Fuse.Controls.PathShape.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.PathShape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PathShape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.PathShape.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.PathShape.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.PathShape.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.PathShape.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.PathShape.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.PathShape.h: include/Uno.Float2.h
include/Fuse.Controls.PathShape.h: include/Uno.Float4x4.h

include/Fuse.Controls.Placeholder.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Binding.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Placeholder.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Placeholder.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Placeholder.h: include/Fuse.IProperties.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Node.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Placeholder.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Placeholder.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Placeholder.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Placeholder.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RangeControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Binding.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.Native.-ec20dc1e.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Node.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Double.h
include/Fuse.Controls.RangeControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RangeControl2D.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Binding.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.IProperties.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Node.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.Float2.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Binding.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Rectangle.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IProperties.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Node.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Rectangle.h: include/Uno.Float4.h
include/Fuse.Controls.Rectangle.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Binding.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Controls.PathShape.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IProperties.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Node.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.Float2.h
include/Fuse.Controls.RegularPolygon.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.RemoveType.h: include/Uno.Int.h

include/Fuse.Controls.SingleV-7336d188.h: include/Uno.Int.h

include/Fuse.Controls.ReuseType.h: include/Uno.Int.h

include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Binding.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.IProperties.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Node.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.RightFr-4a64745c.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Router_-4e223b13.h: include/Uno.Double.h
include/Fuse.Controls.Router_-4e223b13.h: include/Uno.UX.Property-1.h

include/Fuse.Controls.ScrollDirections.h: include/Uno.Int.h

include/Fuse.Controls.ScrollP-40b272d3.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Controls.ScrollP-40b272d3.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollP-40b272d3.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Controls.ScrollP-b5c8f9f8.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.Native.-65c81a89.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.ScrollViewBase.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IProperties.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Binding.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Controls.Native.-65c81a89.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.IProperties.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Node.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollViewBase.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.Float2.h
include/Fuse.Controls.ScrollViewBase.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.ScrollV-95122af8.h: include/Uno.Int.h

include/Fuse.Controls.Shadow.h: include/Fuse.Behavior.h
include/Fuse.Controls.Shadow.h: include/Fuse.Binding.h
include/Fuse.Controls.Shadow.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Shadow.h: include/Fuse.IProperties.h
include/Fuse.Controls.Shadow.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Shadow.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Shadow.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Shadow.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Shadow.h: include/Uno.Float4.h

include/Fuse.Controls.Shadow.-c0eec7d2.h: include/Uno.Int.h

include/Fuse.Controls.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Shape.h: include/Fuse.Binding.h
include/Fuse.Controls.Shape.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Shape.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Shape.h: include/Fuse.IProperties.h
include/Fuse.Controls.Shape.h: include/Fuse.Node.h
include/Fuse.Controls.Shape.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Shape.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Shape.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Controls.Shape.h: include/Uno.Float2.h
include/Fuse.Controls.Shape.h: include/Uno.Float4.h
include/Fuse.Controls.Shape.h: include/Uno.UX.Selector.h

include/Fuse.Controls.SingleViewHost.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Binding.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.IProperties.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Node.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.SingleViewHost.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.SingleViewHost.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.SingleViewHost.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.SingleViewHost.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.SingleViewHost.h: include/Uno.IDisposable.h
include/Fuse.Controls.SingleViewHost.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Slider.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Slider.h: include/Fuse.Binding.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.Native.-ec20dc1e.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.RangeControl.h
include/Fuse.Controls.Slider.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Slider.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Slider.h: include/Fuse.IProperties.h
include/Fuse.Controls.Slider.h: include/Fuse.Node.h
include/Fuse.Controls.Slider.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Slider.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Slider.h: include/Uno.Double.h
include/Fuse.Controls.Slider.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.StackPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StackPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IProperties.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Node.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.StackPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Star.h: include/Fuse.Binding.h
include/Fuse.Controls.Star.h: include/Fuse.Controls.PathShape.h
include/Fuse.Controls.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Star.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Star.h: include/Fuse.IProperties.h
include/Fuse.Controls.Star.h: include/Fuse.Node.h
include/Fuse.Controls.Star.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Star.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Star.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Star.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Star.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Binding.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Controls.TopFram-913999ac.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.IProperties.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Node.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.StatusB-19c248bb.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Switch.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Switch.h: include/Fuse.Binding.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.Native.-ea24053b.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Controls.Switch.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Switch.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Switch.h: include/Fuse.IProperties.h
include/Fuse.Controls.Switch.h: include/Fuse.Node.h
include/Fuse.Controls.Switch.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Switch.h: include/Uno.Bool.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Switch.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Switch.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Slider.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.Graphic-394625e0.h: include/Uno.UX.Template.h

include/Fuse.Controls.TextCon-a7d219c6.h: include/Uno.UX.Template.h

include/Fuse.Controls.Switch.Template.h: include/Uno.Float4.h
include/Fuse.Controls.Switch.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.ScrollV-9a1c9880.h: include/Uno.UX.Template.h

include/Fuse.Controls.Button.Template.h: include/Uno.Float4.h
include/Fuse.Controls.Button.Template.h: include/Uno.UX.Template.h

include/Fuse.Controls.Button.Template1.h: include/Uno.UX.Template.h

include/Fuse.Controls.Slider.Template1.h: include/Uno.UX.Template.h

include/Fuse.Controls.TextCon-1f7e7581.h: include/Uno.UX.Template.h

include/Fuse.Controls.Graphic-e79b25e0.h: include/Uno.UX.Template.h

include/Fuse.Controls.ScrollV-9a0d9880.h: include/Uno.UX.Template.h

include/Fuse.Controls.Switch.Template1.h: include/Uno.UX.Template.h

include/Fuse.Controls.Slider.Template2.h: include/Uno.UX.Template.h

include/Fuse.Controls.Switch.Template2.h: include/Uno.UX.Template.h

include/Fuse.Controls.Button.Template2.h: include/Uno.UX.Template.h

include/Fuse.Controls.Text.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Text.h: include/Fuse.Binding.h
include/Fuse.Controls.Text.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.Text.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Text.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Text.h: include/Fuse.IProperties.h
include/Fuse.Controls.Text.h: include/Fuse.Node.h
include/Fuse.Controls.Text.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Text.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Text.h: include/Uno.String.h
include/Fuse.Controls.Text.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextAlignment.h: include/Uno.Int.h

include/Fuse.Controls.TextBlock.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Binding.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Controls.Text.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextBlock.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Node.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.String.h
include/Fuse.Controls.TextBlock.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextBox.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextBox.h: include/Fuse.Binding.h
include/Fuse.Controls.TextBox.h: include/Fuse.Controls.ITextEditControl.h
include/Fuse.Controls.TextBox.h: include/Fuse.Controls.TextInput.h
include/Fuse.Controls.TextBox.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextBox.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextBox.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextBox.h: include/Fuse.Node.h
include/Fuse.Controls.TextBox.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextBox.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextBox.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextBox.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextBox.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextBox.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextBox.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextBox.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextBox.h: include/Uno.Float4.h
include/Fuse.Controls.TextBox.h: include/Uno.String.h
include/Fuse.Controls.TextBox.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextControl.h: include/Fuse.Binding.h
include/Fuse.Controls.TextControl.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.TextControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextControl.h: include/Fuse.Node.h
include/Fuse.Controls.TextControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextControl.h: include/Uno.Float4.h
include/Fuse.Controls.TextControl.h: include/Uno.String.h
include/Fuse.Controls.TextControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Binding.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Controls.ITextEditControl.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextEdit.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Node.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.String.h
include/Fuse.Controls.TextEdit.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextEditRenderer.h: include/Fuse.Controls.Native.-512ed932.h
include/Fuse.Controls.TextEditRenderer.h: include/Uno.IDisposable.h
include/Fuse.Controls.TextEditRenderer.h: include/Uno.Object.h

include/Fuse.Controls.TextInput.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextInput.h: include/Fuse.Binding.h
include/Fuse.Controls.TextInput.h: include/Fuse.Controls.ITextEditControl.h
include/Fuse.Controls.TextInput.h: include/Fuse.Controls.TextInputControl.h
include/Fuse.Controls.TextInput.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextInput.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextInput.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextInput.h: include/Fuse.Node.h
include/Fuse.Controls.TextInput.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextInput.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextInput.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextInput.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextInput.h: include/Uno.String.h
include/Fuse.Controls.TextInput.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextInp-aeee3f69.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Controls.TextInp-aeee3f69.h: include/Fuse.VisualEventArgs.h

include/Fuse.Controls.TextInp-2ad76625.h: include/Uno.Delegate.h

include/Fuse.Controls.TextInp-f73683b4.h: include/Uno.Int.h

include/Fuse.Controls.TextInp-99f63cb6.h: include/Uno.Int.h

include/Fuse.Controls.TextInputControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Binding.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Controls.LayoutControl.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Node.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextInputControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextInputControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextInputControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextInputControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextInputControl.h: include/Uno.String.h
include/Fuse.Controls.TextInputControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextInputHint.h: include/Uno.Int.h

include/Fuse.Controls.TextTruncation.h: include/Uno.Int.h

include/Fuse.Controls.TextView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextView.h: include/Fuse.Binding.h
include/Fuse.Controls.TextView.h: include/Fuse.Controls.TextInputControl.h
include/Fuse.Controls.TextView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TextView.h: include/Fuse.IProperties.h
include/Fuse.Controls.TextView.h: include/Fuse.Node.h
include/Fuse.Controls.TextView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TextView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextView.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TextView.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TextView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TextView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TextView.h: include/Uno.String.h
include/Fuse.Controls.TextView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TextWrapping.h: include/Uno.Int.h

include/Fuse.Controls.ToggleControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Binding.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Native.-ea24053b.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IProperties.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Node.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions-f84ec3c1.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Bool.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Binding.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.IProperties.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Node.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TopFram-913999ac.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TopFram-913999ac.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TopFram-913999ac.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TopFram-913999ac.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TopFram-913999ac.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TreeRenderer.h: include/Fuse.Elements.ITreeRenderer.h
include/Fuse.Controls.TreeRenderer.h: include/Uno.Object.h

include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Binding.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.IProperties.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Node.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.TreeRen-f1d031eb.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.URISche-802d8909.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Controls.URISche-802d8909.h: include/Uno.EventArgs.h

include/Fuse.Controls.UrlVideoSource.h: include/Fuse.Controls.VideoSource.h

include/Fuse.Controls.Video.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Video.h: include/Fuse.Binding.h
include/Fuse.Controls.Video.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Video.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Video.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Video.h: include/Fuse.IProperties.h
include/Fuse.Controls.Video.h: include/Fuse.Node.h
include/Fuse.Controls.Video.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Video.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Video.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Video.h: include/Uno.Float4.h
include/Fuse.Controls.Video.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.VideoSource.h: include/Uno.Object.h

include/Fuse.Controls.Viewbox.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Binding.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Viewbox.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Viewbox.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Viewbox.h: include/Fuse.IProperties.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Node.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Viewbox.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Viewbox.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Viewbox.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Viewbox.h: include/Uno.Float2.h
include/Fuse.Controls.Viewbox.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.TreeRen-91a46396.h: include/Fuse.Controls.Native.-c7645e49.h
include/Fuse.Controls.TreeRen-91a46396.h: include/Uno.IDisposable.h

include/Fuse.Controls.Shape.Watcher.h: include/Uno.Object.h

include/Fuse.Controls.WebView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WebView.h: include/Fuse.Binding.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WebView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WebView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.WebView.h: include/Fuse.IProperties.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Controls.WebView.h: include/Fuse.Node.h
include/Fuse.Controls.WebView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.WebView.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.WebView.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.WrapPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Binding.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IProperties.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Node.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.WrapPanel.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.WrapPanel.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.WrapPanel.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.WrapPanel.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Native.Blitter.h: include/Uno.Float2.h
include/Fuse.Controls.Native.Blitter.h: include/Uno.Object.h
include/Fuse.Controls.Native.Blitter.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.Native.-a6c69fa2.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-a6c69fa2.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-a6c69fa2.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-a6c69fa2.h: include/Uno.Object.h

include/Fuse.Controls.Native.-fc980861.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-fc980861.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-fc980861.h: include/Uno.Object.h
include/Fuse.Controls.Native.-fc980861.h: include/Uno.Int2.h

include/Fuse.Controls.Native.-8f7a6cff.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-8f7a6cff.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-8f7a6cff.h: include/Uno.Object.h
include/Fuse.Controls.Native.-8f7a6cff.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-8f7a6cff.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-ab35427a.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-ab35427a.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-ab35427a.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-ab35427a.h: include/Uno.Object.h

include/Fuse.Controls.Native.ILeafView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ILeafView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ILeafView.h: include/Uno.Object.h

include/Fuse.Controls.Native.-b096ad14.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-b096ad14.h: include/Uno.Object.h

include/Fuse.Controls.Native.-d324479e.h: include/Fuse.Controls.Native.-b096ad14.h
include/Fuse.Controls.Native.-d324479e.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-d324479e.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.-55ad419c.h: include/Uno.h

include/Fuse.Controls.Native.-5dd0448b.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-5dd0448b.h: include/Uno.Object.h
include/Fuse.Controls.Native.-5dd0448b.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-5dd0448b.h: include/Uno.Float4x4.h

include/Fuse.Controls.Native.-d943f2ed.h: include/Fuse.Controls.Native.-5dd0448b.h
include/Fuse.Controls.Native.-d943f2ed.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-d943f2ed.h: include/Uno.Object.h

include/Fuse.Controls.Native.-10260f28.h: include/Uno.Object.h

include/Fuse.Controls.Native.-6474ff45.h: include/Uno.Object.h

include/Fuse.Controls.Native.-ec20dc1e.h: include/Uno.Object.h

include/Fuse.Controls.Native.-3d9a7064.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-3d9a7064.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-3d9a7064.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-3d9a7064.h: include/Uno.Object.h
include/Fuse.Controls.Native.-3d9a7064.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-be9bb5b2.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-be9bb5b2.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-be9bb5b2.h: include/Uno.Object.h
include/Fuse.Controls.Native.-be9bb5b2.h: include/Uno.Float2.h

include/Fuse.Controls.Native.-65c81a89.h: include/Uno.Object.h
include/Fuse.Controls.Native.-65c81a89.h: include/Uno.Float2.h

include/Fuse.Controls.Native.-450f50d5.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-450f50d5.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-450f50d5.h: include/Uno.Object.h

include/Fuse.Controls.Native.ITextEdit.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.ITextEdit.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.ITextEdit.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ITextEdit.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ITextEdit.h: include/Uno.Object.h
include/Fuse.Controls.Native.ITextEdit.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-13840398.h: include/Uno.Object.h

include/Fuse.Controls.Native.ITextView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.ITextView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Object.h
include/Fuse.Controls.Native.ITextView.h: include/Uno.Float4.h

include/Fuse.Controls.Native.-355d1d00.h: include/Uno.Object.h

include/Fuse.Controls.Native.-ea24053b.h: include/Uno.Object.h

include/Fuse.Controls.Native.IView.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.IView.h: include/Uno.Object.h

include/Fuse.Controls.Native.-314e1ab3.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-314e1ab3.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-314e1ab3.h: include/Uno.Object.h

include/Fuse.Controls.Native.-512ed932.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-512ed932.h: include/Uno.Object.h
include/Fuse.Controls.Native.-512ed932.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-512ed932.h: include/Uno.Float4x4.h

include/Fuse.Controls.Native.IViewHost.h: include/Uno.Object.h

include/Fuse.Controls.Native.-a97101ca.h: include/Fuse.Controls.Native.-512ed932.h
include/Fuse.Controls.Native.-a97101ca.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-a97101ca.h: include/Uno.Int2.h
include/Fuse.Controls.Native.-a97101ca.h: include/Uno.Object.h

include/Fuse.Controls.Native.-b876feeb.h: include/Uno.Int.h

include/Fuse.Controls.Native.-56e5d440.h: include/Fuse.Controls.Native.-b096ad14.h
include/Fuse.Controls.Native.-56e5d440.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-56e5d440.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.-3df466d7.h: include/Uno.h

include/Fuse.Controls.Native.-989644c6.h: include/Uno.h

include/Fuse.Controls.Native.-c7645e49.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-c7645e49.h: include/Uno.Int2.h
include/Fuse.Controls.Native.-c7645e49.h: include/Uno.Object.h
include/Fuse.Controls.Native.-c7645e49.h: include/Fuse.LayoutParams.h
include/Fuse.Controls.Native.-c7645e49.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-c7645e49.h: include/Uno.Float4x4.h

include/Fuse.Controls.Native.-4b960356.h: include/Uno.Float2.h
include/Fuse.Controls.Native.-4b960356.h: include/Uno.Object.h
include/Fuse.Controls.Native.-4b960356.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.Native.-6192a210.h: include/Fuse.Controls.Native.-26dc0a28.h
include/Fuse.Controls.Native.-6192a210.h: include/Fuse.Controls.Native.-ab35427a.h
include/Fuse.Controls.Native.-6192a210.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-6192a210.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-6192a210.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-3ccb803a.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-3ccb803a.h: include/Fuse.Controls.Native.-6823caff.h
include/Fuse.Controls.Native.-3ccb803a.h: include/Fuse.Controls.Native.-a6c69fa2.h
include/Fuse.Controls.Native.-3ccb803a.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-3ccb803a.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-19daa2c9.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-19daa2c9.h: include/Fuse.Controls.Native.-6823caff.h
include/Fuse.Controls.Native.-19daa2c9.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-19daa2c9.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-395aa7e5.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-395aa7e5.h: include/Uno.Object.h

include/Fuse.Controls.Native.-660d7551.h: include/Uno.Object.h

include/Fuse.Controls.Native.-98e8148f.h: include/Fuse.Controls.Native.-375d3f95.h
include/Fuse.Controls.Native.-98e8148f.h: include/Fuse.Controls.Native.-fc980861.h
include/Fuse.Controls.Native.-98e8148f.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-98e8148f.h: include/Fuse.Controls.Native.IViewHost.h
include/Fuse.Controls.Native.-98e8148f.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-c7f65b6c.h: include/Java.Object.h
include/Fuse.Controls.Native.-c7f65b6c.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-c7f65b6c.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.Native.-5a2a71a1.h: include/Fuse.Controls.Native.-375d3f95.h
include/Fuse.Controls.Native.-5a2a71a1.h: include/Fuse.Controls.Native.-8f7a6cff.h
include/Fuse.Controls.Native.-5a2a71a1.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-5a2a71a1.h: include/Uno.Float4.h
include/Fuse.Controls.Native.-5a2a71a1.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-30689ad4.h: include/Uno.h

include/Fuse.Controls.Native.-9707eda8.h: include/Uno.Object.h

include/Fuse.Controls.Native.-26dc0a28.h: include/Fuse.Controls.Native.-375d3f95.h
include/Fuse.Controls.Native.-26dc0a28.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-26dc0a28.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-26dc0a28.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-f1022ed0.h: include/Uno.Object.h

include/Fuse.Controls.Native.-e75cc055.h: include/Fuse.Controls.Native.-5dd0448b.h
include/Fuse.Controls.Native.-e75cc055.h: include/Uno.IDisposable.h
include/Fuse.Controls.Native.-e75cc055.h: include/Uno.Int2.h
include/Fuse.Controls.Native.-e75cc055.h: include/Uno.Object.h

include/Fuse.Controls.Native.-8162c4d8.h: include/Fuse.Controls.Native.-3d9a7064.h
include/Fuse.Controls.Native.-8162c4d8.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-8162c4d8.h: include/Fuse.Controls.Native.-6823caff.h
include/Fuse.Controls.Native.-8162c4d8.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-8162c4d8.h: include/Uno.Float4.h
include/Fuse.Controls.Native.-8162c4d8.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-93003f54.h: include/Fuse.Controls.Native.-375d3f95.h
include/Fuse.Controls.Native.-93003f54.h: include/Fuse.Controls.Native.-be9bb5b2.h
include/Fuse.Controls.Native.-93003f54.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-93003f54.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-6823caff.h: include/Fuse.Controls.Native.-375d3f95.h
include/Fuse.Controls.Native.-6823caff.h: include/Fuse.Controls.Native.-450f50d5.h
include/Fuse.Controls.Native.-6823caff.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-6823caff.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-1b6e2e31.h: include/Fuse.Controls.Native.-26dc0a28.h
include/Fuse.Controls.Native.-1b6e2e31.h: include/Fuse.Controls.Native.-6474ff45.h
include/Fuse.Controls.Native.-1b6e2e31.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-1b6e2e31.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-1b6e2e31.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-eef2833d.h: include/Uno.h

include/Fuse.Controls.Native.-cfc43b5b.h: include/Fuse.Controls.Native.-98e8148f.h
include/Fuse.Controls.Native.-cfc43b5b.h: include/Fuse.Controls.Native.-fc980861.h
include/Fuse.Controls.Native.-cfc43b5b.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-cfc43b5b.h: include/Fuse.Controls.Native.IViewHost.h
include/Fuse.Controls.Native.-cfc43b5b.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-c41d003c.h: include/Fuse.Controls.Native.-26dc0a28.h
include/Fuse.Controls.Native.-c41d003c.h: include/Fuse.Controls.Native.-355d1d00.h
include/Fuse.Controls.Native.-c41d003c.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-c41d003c.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-c41d003c.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-9bf352de.h: include/Fuse.Controls.Native.-10dbc4d1.h
include/Fuse.Controls.Native.-9bf352de.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-9bf352de.h: include/Fuse.Controls.Native.ITextEdit.h
include/Fuse.Controls.Native.-9bf352de.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.-9bf352de.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-9bf352de.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-10dbc4d1.h: include/Fuse.Controls.Native.-e7e10bd6.h
include/Fuse.Controls.Native.-10dbc4d1.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-10dbc4d1.h: include/Fuse.Controls.Native.ITextEdit.h
include/Fuse.Controls.Native.-10dbc4d1.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.-10dbc4d1.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-10dbc4d1.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-e7e10bd6.h: include/Fuse.Controls.Native.-26dc0a28.h
include/Fuse.Controls.Native.-e7e10bd6.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Controls.Native.-e7e10bd6.h: include/Fuse.Controls.Native.ITextView.h
include/Fuse.Controls.Native.-e7e10bd6.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-e7e10bd6.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-e709cf1b.h: include/Uno.Object.h

include/Fuse.Controls.Native.-a587d3c0.h: include/Uno.h

include/Fuse.Controls.Native.-375d3f95.h: include/Fuse.Controls.Native.-c7645e49.h
include/Fuse.Controls.Native.-375d3f95.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Controls.Native.-375d3f95.h: include/Uno.IDisposable.h

include/Fuse.Controls.Native.-80e392be.h: include/Uno.Object.h

include/Fuse.Controls.Native.-871e7c58.h: include/Uno.Object.h

include/Fuse.Controls.Native.-9a58568d.h: include/Uno.Object.h

include/Fuse.Controls.Native.-b5d9b8f4.h: include/Uno.Object.h

include/Fuse.Controls.Native.-3f63d28f.h: include/Fuse.Controls.Native.-6474ff45.h
include/Fuse.Controls.Native.-3f63d28f.h: include/Uno.Object.h

include/Fuse.Controls.Native.-16eda318.h: include/Fuse.Controls.Native.-355d1d00.h
include/Fuse.Controls.Native.-16eda318.h: include/Uno.Object.h

include/Fuse.Controls.Native.-a2a1b1b5.h: include/Uno.Object.h

include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.Controls.Graphics.Visual.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.IProperties.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.Node.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphic-4aac5bf3.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Binding.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.IProperties.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Visual.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Binding.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.IProperties.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Node.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Primiti-12648004.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Primiti-12648004.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Primiti-12648004.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Primiti-12648004.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Primiti-12648004.h: include/Uno.Float4.h
include/Fuse.Controls.Primiti-12648004.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Fallbac-d168b3a.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-b29d65f6.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-1cb9b15a.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-f95a972b.h: include/Fuse.Controls.Fallbac-2b9c5ccc.h
include/Fuse.Controls.Fallbac-f95a972b.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-2b9c5ccc.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-29284033.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-621b7c13.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-7945f3a7.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Binding.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.IProperties.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Node.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Fuse.Triggers.Actions-19aca435.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.Float2.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.Float4.h
include/Fuse.Controls.Fallbac-aab0fffa.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.Fallbac-ade64285.h: include/Uno.Float4x4.h
include/Fuse.Controls.Fallbac-ade64285.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-cf6c96e7.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-31850d8b.h: include/Uno.Content.Fonts.Tex-257638a0.h
include/Fuse.Controls.Fallbac-31850d8b.h: include/Uno.Float4x4.h

include/Fuse.Controls.Fallbac-d6d15bea.h: include/Uno.h

include/Fuse.Controls.Fallbac-d88dc6fd.h: include/Fuse.Controls.ITextRenderer.h
include/Fuse.Controls.Fallbac-d88dc6fd.h: include/Uno.Float2.h
include/Fuse.Controls.Fallbac-d88dc6fd.h: include/Uno.Object.h
include/Fuse.Controls.Fallbac-d88dc6fd.h: include/Uno.Rect.h

include/Fuse.Controls.Fallbac-1cf6d893.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-6bab3816.h: include/Uno.h

include/Fuse.Controls.Fallbac-d496c746.h: include/Uno.Object.h

include/Fuse.Controls.Fallbac-3ce6c70f.h: include/Uno.Object.h

include/Fuse.Controls.FuseTex-d514f2df.h: include/Fuse.Controls.FuseTex-c7156c79.h
include/Fuse.Controls.FuseTex-d514f2df.h: include/Uno.Object.h

include/Fuse.Controls.FuseTex-55401bfe.h: include/Uno.IDisposable.h
include/Fuse.Controls.FuseTex-55401bfe.h: include/Uno.Object.h
include/Fuse.Controls.FuseTex-55401bfe.h: include/Fuse.Controls.FuseTex-c7156c79.h

include/Fuse.Controls.FuseTex-e0933af9.h: include/Fuse.Controls.FuseTex-55401bfe.h
include/Fuse.Controls.FuseTex-e0933af9.h: include/Fuse.Controls.FuseTex-c7156c79.h
include/Fuse.Controls.FuseTex-e0933af9.h: include/Fuse.Controls.FuseTex-fdf18f45.h
include/Fuse.Controls.FuseTex-e0933af9.h: include/Uno.Float2.h
include/Fuse.Controls.FuseTex-e0933af9.h: include/Uno.IDisposable.h

include/Fuse.Controls.FuseTex-52d0aecf.h: include/Uno.h

include/Fuse.Controls.FuseTex-78bdbf6a.h: include/Fuse.Controls.FuseTex-55401bfe.h
include/Fuse.Controls.FuseTex-78bdbf6a.h: include/Fuse.Text.Bidirectional.Run.h
include/Fuse.Controls.FuseTex-78bdbf6a.h: include/Uno.IDisposable.h

include/Fuse.Controls.FuseTex-4b903040.h: include/Fuse.Controls.FuseTex-55401bfe.h
include/Fuse.Controls.FuseTex-4b903040.h: include/Fuse.Controls.FuseTex-c7156c79.h
include/Fuse.Controls.FuseTex-4b903040.h: include/Fuse.Controls.FuseTex-fdf18f45.h
include/Fuse.Controls.FuseTex-4b903040.h: include/Uno.Float2.h
include/Fuse.Controls.FuseTex-4b903040.h: include/Uno.IDisposable.h

include/Fuse.Controls.FuseTex-f2d8624d.h: include/Fuse.Controls.FuseTex-55401bfe.h
include/Fuse.Controls.FuseTex-f2d8624d.h: include/Uno.IDisposable.h

include/Fuse.Controls.FuseTex-effa9cec.h: include/Fuse.Controls.FuseTex-55401bfe.h
include/Fuse.Controls.FuseTex-effa9cec.h: include/Fuse.Controls.FuseTex-c7156c79.h
include/Fuse.Controls.FuseTex-effa9cec.h: include/Fuse.Controls.FuseTex-fdf18f45.h
include/Fuse.Controls.FuseTex-effa9cec.h: include/Uno.IDisposable.h

include/Fuse.Controls.FuseTex-c7156c79.h: include/Uno.Object.h

include/Fuse.Controls.FuseTex-1a17aa63.h: include/Fuse.Controls.ITextRenderer.h
include/Fuse.Controls.FuseTex-1a17aa63.h: include/Fuse.Internal.CacheItem-2.h
include/Fuse.Controls.FuseTex-1a17aa63.h: include/Uno.Float2.h
include/Fuse.Controls.FuseTex-1a17aa63.h: include/Uno.Object.h

include/Fuse.Controls.FuseTex-fdf18f45.h: include/Uno.Object.h

include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.Navigation.Enter-e6d0da19.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-3b526f57.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.Navigation.Enter-e6d0da19.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-7edfbc3e.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.Navigation.Exiti-5497b5ec.h
include/Fuse.Controls.Navigat-5e487033.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-5e487033.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-5e487033.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-5e487033.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.Navigation.Exiti-5497b5ec.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-4bf90958.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-7504607c.h: include/Fuse.Triggers.Transition.h
include/Fuse.Controls.Navigat-7504607c.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-7504607c.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-7504607c.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Fuse.Triggers.Transition.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-d91a6af7.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.IBeginRemoveVisu-428528f1.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Fuse.Triggers.Removin-6e73e5ec.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-3e92fae4.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.Binding.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.IProperties.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.Navigation.While-b8230eb3.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.Navigat-b96bf0b7.h: include/Uno.Collections.IList-1.h

include/Fuse.Controls.VideoIm-be834fb0.h: include/Fuse.Controls.VideoIm-cc5828bc.h
include/Fuse.Controls.VideoIm-be834fb0.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-be834fb0.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-2db1f1e.h: include/Fuse.Controls.VideoIm-2107a26f.h
include/Fuse.Controls.VideoIm-2db1f1e.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-2db1f1e.h: include/Uno.Int2.h
include/Fuse.Controls.VideoIm-2db1f1e.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-f711c366.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-cc5828bc.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-cc5828bc.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-cc5828bc.h: include/Uno.Int2.h

include/Fuse.Controls.VideoIm-2107a26f.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-2107a26f.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-2107a26f.h: include/Uno.Int2.h

include/Fuse.Controls.VideoIm-6387b742.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-6387b742.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-284bd560.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-284bd560.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.VideoIm-78f63b56.h: include/Uno.h

include/Fuse.Controls.VideoIm-278c0045.h: include/Uno.Float4x4.h
include/Fuse.Controls.VideoIm-278c0045.h: include/Uno.Object.h
include/Fuse.Controls.VideoIm-278c0045.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Controls.VideoIm-c4c99a37.h: include/Uno.h

include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Binding.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Controls.Graphic-4aac5bf3.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Controls.Video.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Controls.VideoIm-f711c366.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.IProperties.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Node.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Collections.IList-1.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Float2.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Float4.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.Int2.h
include/Fuse.Controls.VideoIm-7291347a.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Controls.VideoIm-13a41ae7.h: include/Fuse.Controls.VideoIm-cc5828bc.h
include/Fuse.Controls.VideoIm-13a41ae7.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-13a41ae7.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-5d086a80.h: include/Fuse.Controls.VideoIm-cc5828bc.h
include/Fuse.Controls.VideoIm-5d086a80.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-5d086a80.h: include/Uno.Threading.Promise-1.h

include/Fuse.Controls.VideoIm-bb298f12.h: include/Uno.Object.h

include/Fuse.Controls.VideoIm-663e85df.h: include/Fuse.Controls.VideoIm-cc5828bc.h
include/Fuse.Controls.VideoIm-663e85df.h: include/Uno.IDisposable.h
include/Fuse.Controls.VideoIm-663e85df.h: include/Uno.Threading.Promise-1.h

include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.Binding.h
include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.Gestures.double2.h
include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Circula-9540c317.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Circula-9540c317.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Circula-9540c317.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Circula-9540c317.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.Clicked.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Binding.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.Clicked.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Clicked.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Clicked.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Clicked.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Input.CustomPoin-be858f6a.h
include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.ClickedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker.h: include/Uno.Float2.h
include/Fuse.Gestures.Clicker.h: include/Uno.Object.h

include/Fuse.Gestures.Clicker-63ebb43e.h: include/Uno.Delegate.h

include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Binding.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.IProperties.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.ClickerTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Gestures.double2.h: include/Uno.Object.h

include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Binding.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.IProperties.h
include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.DoubleClicked.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.DoubleClicked.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.DoubleClicked.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Binding.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.IProperties.h
include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.DoubleTapped.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.DoubleTapped.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.DoubleTapped.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Input.CustomPoin-be858f6a.h
include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.DoubleT-fe4d5869.h: include/Uno.Delegate.h

include/Fuse.Gestures.Edge.h: include/Uno.Int.h

include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.Binding.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.IProperties.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.EdgeSwi-6f66aa89.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.ISizeConstraint.h: include/Uno.Object.h
include/Fuse.Gestures.ISizeConstraint.h: include/Uno.Float2.h

include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Gestures.KeepInViewCommon.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.IProperties.h
include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepFocusInView.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.KeepInView.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepInView.h: include/Fuse.Gestures.KeepInViewCommon.h
include/Fuse.Gestures.KeepInView.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.KeepInView.h: include/Fuse.IProperties.h
include/Fuse.Gestures.KeepInView.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepInView.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepInView.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepInView.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Behavior.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Binding.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.IProperties.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.KeepInViewCommon.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.LinearR-c7364e91.h: include/Fuse.Behavior.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Fuse.Binding.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Fuse.IProperties.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.LinearR-c7364e91.h: include/Uno.Float2.h

include/Fuse.Gestures.LongPressed.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.Binding.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.IProperties.h
include/Fuse.Gestures.LongPressed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.LongPressed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.LongPressed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.LongPressed.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Input.CustomPoin-be858f6a.h
include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.LongPre-dd6de702.h: include/Uno.Delegate.h

include/Fuse.Gestures.Scrolle-aa988f9c.h: include/Uno.Int.h

include/Fuse.Gestures.PanGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.PanGesture.h: include/Fuse.Gestures.TransformGesture.h
include/Fuse.Gestures.PanGesture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.PanGesture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.PanGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Float2.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Float4x4.h

include/Fuse.Gestures.PointerCapture.h: include/Fuse.Behavior.h
include/Fuse.Gestures.PointerCapture.h: include/Fuse.Binding.h
include/Fuse.Gestures.PointerCapture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.PointerCapture.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.PointerCapture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.PointerCapture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.PointerCapture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.PointerCapture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.PointerCapture.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.PointerCapture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.PointerCaptureOn.h: include/Uno.Int.h

include/Fuse.Gestures.Pressed.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.Pressed.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.Pressed.h: include/Fuse.Binding.h
include/Fuse.Gestures.Pressed.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Pressed.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Pressed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Pressed.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.Pressed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Pressed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Pressed.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.Released.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.Released.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.Released.h: include/Fuse.Binding.h
include/Fuse.Gestures.Released.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Released.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Released.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Released.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.Released.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Released.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Released.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.RotateGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.RotateGesture.h: include/Fuse.Gestures.TransformGesture.h
include/Fuse.Gestures.RotateGesture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.RotateGesture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.RotateGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.RotateGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.RotateGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.RotateGesture.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.ScrollableGoto.h: include/Fuse.Gestures.ScrollTo.h

include/Fuse.Gestures.Scroller.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Binding.h
include/Fuse.Gestures.Scroller.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.Scroller.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Scroller.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.Scroller.h: include/Uno.Float2.h
include/Fuse.Gestures.Scroller.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.ScrollTo.h: include/Fuse.Triggers.Actions-ec2327b1.h
include/Fuse.Gestures.ScrollTo.h: include/Uno.Float2.h

include/Fuse.Gestures.SetSwipeActive.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Gestures.Swiped.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Binding.h
include/Fuse.Gestures.Swiped.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Swiped.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Swiped.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Swiped.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.SwipedHow.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Behavior.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipeGesture.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.SwipeGe-776b1f69.h: include/Uno.Object.h

include/Fuse.Gestures.SwipeType.h: include/Uno.Int.h

include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Binding.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.IProperties.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.SwipingAnimation.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.Tapped.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Binding.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Gestures.ClickerTrigger.h
include/Fuse.Gestures.Tapped.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.Tapped.h: include/Fuse.IProperties.h
include/Fuse.Gestures.Tapped.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.Tapped.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.TappedArgs.h: include/Fuse.Input.CustomPoin-be858f6a.h
include/Fuse.Gestures.TappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.TappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ToggleS-bac6e013.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Gestures.TransformGesture.h: include/Fuse.Behavior.h
include/Fuse.Gestures.TransformGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.TransformGesture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.TransformGesture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.TransformGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.TransformGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.TransformGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.TransformGesture.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.IProperties.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhileCl-41538da9.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.WhileHovering.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.IProperties.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhileHovering.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Gestures.WhileHovering.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhileHovering.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhileHovering.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.WhilePressed.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.IProperties.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhilePressed.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.WhilePressed.h: include/Uno.Float2.h

include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.IProperties.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.WhileSwipeActive.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.WhileSwiping.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.Binding.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.IProperties.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.WhileSwiping.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Gestures.WhileSwiping.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.WhileSwiping.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.WhileSwiping.h: include/Uno.Collections.IList-1.h
include/Fuse.Gestures.WhileSwiping.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Gestures.ZoomGesture.h: include/Fuse.Binding.h
include/Fuse.Gestures.ZoomGesture.h: include/Fuse.Gestures.TransformGesture.h
include/Fuse.Gestures.ZoomGesture.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Gestures.ZoomGesture.h: include/Fuse.IProperties.h
include/Fuse.Gestures.ZoomGesture.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Gestures.ZoomGesture.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Gestures.ZoomGesture.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Gestures.ZoomGesture.h: include/Uno.Collections.IList-1.h

include/Fuse.Gestures.Interna-45d198d0.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-5ee863d1.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-5ee863d1.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-e8e4a78e.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-e8e4a78e.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-cace70c8.h: include/Uno.Int.h

include/Fuse.Gestures.Internal.Swiper.h: include/Fuse.Input.IGesture.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-b40f9dda.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-b40f9dda.h: include/Uno.Float4.h
include/Fuse.Gestures.Interna-b40f9dda.h: include/Uno.UX.IPropertyListener.h
include/Fuse.Gestures.Interna-b40f9dda.h: include/Uno.UX.PropertyObject.h

include/Fuse.Gestures.Interna-2634f6cd.h: include/Uno.Int.h

include/Fuse.Gestures.Interna-8014833b.h: include/Uno.Float2.h
include/Fuse.Gestures.Interna-8014833b.h: include/Uno.Object.h

include/Fuse.Gestures.Interna-1fb74f35.h: include/Uno.Delegate.h

include/Fuse.Gestures.Interna-40f52e14.h: include/Uno.Delegate.h

include/Fuse.Gestures.Interna-d11b2f49.h: include/Uno.Delegate.h

include/Fuse.Gestures.Interna-4ebf99fc.h: include/Uno.Delegate.h

include/Fuse.Navigation.Activated.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Activated.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Activated.h: include/Fuse.Binding.h
include/Fuse.Navigation.Activated.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Activated.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Activated.h: include/Fuse.Navigation.Navig-7bfa875e.h
include/Fuse.Navigation.Activated.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Activated.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Activated.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Activated.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Activ-2c58c273.h: include/Uno.Delegate.h

include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.Binding.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.Navigation.Navig-59d0e775.h
include/Fuse.Navigation.Activ-ba581989.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Activ-ba581989.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Activ-ba581989.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Activ-ba581989.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Activ-ff905cbb.h: include/Uno.Delegate.h

include/Fuse.Navigation.Allow-96c44606.h: include/Uno.Int.h

include/Fuse.Navigation.BackB-bb3d9d11.h: include/Uno.Int.h

include/Fuse.Navigation.BackF-474a16c6.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Navigation.Deactivated.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.Binding.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.Navigation.Navig-7bfa875e.h
include/Fuse.Navigation.Deactivated.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Deactivated.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Deactivated.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Deactivated.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.Binding.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.Navigation.Navig-59d0e775.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Deact-dff1431e.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.Binding.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.Navigation.Visua-4f488356.h
include/Fuse.Navigation.Direc-a636f54.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Direc-a636f54.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Direc-a636f54.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Direc-a636f54.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Binding.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.IProperties.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.Visua-4f488356.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.EdgeNavigation.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.EndSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.Enter-58096783.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.Binding.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.Navigation.Navig-59d0e775.h
include/Fuse.Navigation.Enter-58096783.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Enter-58096783.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Enter-58096783.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Enter-58096783.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.Binding.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.Navigation.Enter-58096783.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Enter-e6d0da19.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.Binding.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.Navigation.Enter-58096783.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Exiti-5497b5ec.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.Binding.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.Navigation.Visua-4f488356.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Expli-b29b2019.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route-dbaafdf.h: include/Uno.Object.h

include/Fuse.Navigation.GoBack.h: include/Fuse.Navigation.BackF-474a16c6.h

include/Fuse.Navigation.GoForward.h: include/Fuse.Navigation.BackF-474a16c6.h

include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Binding.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Navigation.ISeek-5e75bfda.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Navigation.Struc-cf29dee4.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Hiera-14d792a9.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Histo-b609392.h: include/Uno.Delegate.h

include/Fuse.Navigation.IBase-6ef44c1d.h: include/Uno.Object.h

include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.INavigation.h: include/Uno.Object.h
include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.Navig-ba21f3a3.h

include/Fuse.Navigation.IPage-680831c5.h: include/Uno.Object.h

include/Fuse.Navigation.IPage-bc066382.h: include/Uno.Object.h

include/Fuse.Navigation.IRouterOutlet.h: include/Uno.Object.h

include/Fuse.Navigation.ISeek-5e75bfda.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.ISeek-5e75bfda.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.ISeek-5e75bfda.h: include/Uno.Object.h
include/Fuse.Navigation.ISeek-5e75bfda.h: include/Uno.Float2.h

include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Binding.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Navigation.ISeek-5e75bfda.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Navigation.Struc-cf29dee4.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Linea-538b6e7a.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.ModifyRouteHow.h: include/Uno.Int.h

include/Fuse.Navigation.NavigatedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Navigation.NavigatedArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.Navig-981191bf.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigateTo.h: include/Fuse.Navigation.Navig-d3aeb022.h

include/Fuse.Navigation.NavigateToggle.h: include/Fuse.Navigation.Navig-d3aeb022.h

include/Fuse.Navigation.Navigation.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.Binding.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Navig-59d0e775.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.NavigationArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.Navig-a2eacdbd.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationEdge.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-bdb3602c.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-d2503dd0.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationMode.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-5565398f.h: include/Uno.Delegate.h

include/Fuse.Navigation.Navig-90b5b121.h: include/Uno.Delegate.h

include/Fuse.Navigation.Navig-90c1eee8.h: include/Uno.h

include/Fuse.Navigation.Navig-cf4a7cb0.h: include/Fuse.Navigation.IPage-680831c5.h
include/Fuse.Navigation.Navig-cf4a7cb0.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-ba21f3a3.h: include/Uno.Object.h

include/Fuse.Navigation.Navig-896d01fb.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-adff794c.h: include/Uno.Delegate.h

include/Fuse.Navigation.Struc-e50a61f1.h: include/Uno.Int.h

include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.Binding.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Fuse.Triggers.PulseTrigger-1.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.Navig-7bfa875e.h: include/Uno.EventArgs.h

include/Fuse.Navigation.Navig-d3aeb022.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Navigation.NavTriggerUtil.h: include/Uno.h

include/Fuse.Navigation.OutletType.h: include/Uno.Int.h

include/Fuse.Navigation.Visua-b0ea7b98.h: include/Uno.Object.h

include/Fuse.Navigation.PageExpression.h: include/Fuse.Reactive.Expression.h
include/Fuse.Navigation.PageExpression.h: include/Fuse.Reactive.IExpression.h

include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.Behavior.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.Binding.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.IProperties.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.Navigation.IPage-bc066382.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.PageR-ae858a14.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route.h: include/Uno.Object.h

include/Fuse.Navigation.Router.h: include/Fuse.Binding.h
include/Fuse.Navigation.Router.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Router.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Router.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Router.h: include/Fuse.Node.h
include/Fuse.Navigation.Router.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Router.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.Route-b21d265.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Navigation.RouterModify.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Navigation.Routi-985a8d5a.h: include/Uno.Int.h

include/Fuse.Navigation.RoutingResult.h: include/Uno.Int.h

include/Fuse.Navigation.SnapTo.h: include/Uno.Int.h

include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Binding.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Navigation.ISeek-5e75bfda.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Navigation.Visua-4f488356.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Struc-cf29dee4.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.PageE-240783e6.h: include/Fuse.Navigation.IPage-bc066382.h
include/Fuse.Navigation.PageE-240783e6.h: include/Uno.IDisposable.h
include/Fuse.Navigation.PageE-240783e6.h: include/Uno.Object.h

include/Fuse.Navigation.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Behavior.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Binding.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.IProperties.h
include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Float2.h

include/Fuse.Navigation.UpdateSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Behavior.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Binding.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.IParentObserver.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.IProperties.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.Visua-4f488356.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.Visua-4f488356.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.Visua-4f488356.h: include/Uno.Collections.IList-1.h
include/Fuse.Navigation.Visua-4f488356.h: include/Fuse.Navigation.Navig-ba21f3a3.h

include/Fuse.Navigation.WhileActive.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Binding.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.IProperties.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Navigation.While-361ff13c.h
include/Fuse.Navigation.WhileActive.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.WhileActive.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Binding.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.IProperties.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Navigation.While-2b1763fb.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.WhileCanGoBack.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.Navigation.While-2b1763fb.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-bd15b6ce.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-2b1763fb.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-2b1763fb.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-2b1763fb.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-2b1763fb.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.WhileInactive.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Binding.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.IProperties.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Navigation.While-361ff13c.h
include/Fuse.Navigation.WhileInactive.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.WhileInactive.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-19639125.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.Navigation.While-361ff13c.h
include/Fuse.Navigation.While-19639125.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-19639125.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-19639125.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-19639125.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-8bec3276.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.Navigation.While-361ff13c.h
include/Fuse.Navigation.While-8bec3276.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-8bec3276.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-8bec3276.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-8bec3276.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-b8230eb3.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-b8230eb3.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-b8230eb3.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-b8230eb3.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-361ff13c.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-361ff13c.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-361ff13c.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-361ff13c.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-361ff13c.h: include/Uno.Collections.IList-1.h

include/Fuse.Navigation.While-55b8facb.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.Binding.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.IProperties.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Navigation.While-55b8facb.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Navigation.While-55b8facb.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Navigation.While-55b8facb.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Navigation.While-55b8facb.h: include/Uno.Collections.IList-1.h

include/Fuse.Layouts.CircleLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Column.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.ColumnLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.ColumnLa-fd8c822.h: include/Uno.Int.h

include/Fuse.Layouts.Definiti-bd4fc4e3.h: include/Uno.Int.h

include/Fuse.Layouts.DefaultLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefinitionBase.h: include/Uno.UX.PropertyObject.h

include/Fuse.Layouts.Dock.h: include/Uno.Int.h

include/Fuse.Layouts.DockLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.FlowDirection.h: include/Uno.Int.h

include/Fuse.Layouts.GridChildOrder.h: include/Uno.Int.h

include/Fuse.Layouts.GridLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Layout.h: include/Uno.UX.PropertyObject.h
include/Fuse.Layouts.Layout.h: include/Fuse.LayoutParams.h
include/Fuse.Layouts.Layout.h: include/Uno.Float2.h
include/Fuse.Layouts.Layout.h: include/Uno.Float4.h

include/Fuse.Layouts.Layouts.h: include/Uno.h

include/Fuse.Layouts.Metric.h: include/Uno.Int.h

include/Fuse.Layouts.Orientation.h: include/Uno.Int.h

include/Fuse.Layouts.Row.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.StackLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.StackLayoutMode.h: include/Uno.Int.h

include/Fuse.Layouts.WrapLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Text.Batch.h: include/Uno.IDisposable.h
include/Fuse.Text.Batch.h: include/Uno.Object.h

include/Fuse.Text.Substring.C-75d83875.h: include/Uno.Char.h
include/Fuse.Text.Substring.C-75d83875.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Text.Substring.C-75d83875.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Text.Substring.C-75d83875.h: include/Uno.IDisposable.h
include/Fuse.Text.Substring.C-75d83875.h: include/Uno.Object.h

include/Fuse.Text.SinglyLinke-52e3641d.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Text.SinglyLinke-52e3641d.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Text.SinglyLinke-52e3641d.h: include/Uno.IDisposable.h
include/Fuse.Text.SinglyLinke-52e3641d.h: include/Uno.Object.h

include/Fuse.Text.FallingBackFont.h: include/Fuse.Internal.CacheItem-2.h
include/Fuse.Text.FallingBackFont.h: include/Fuse.Text.Font.h
include/Fuse.Text.FallingBackFont.h: include/Uno.IDisposable.h

include/Fuse.Text.FallingBackFontFace.h: include/Fuse.Internal.CacheItem-2.h
include/Fuse.Text.FallingBackFontFace.h: include/Fuse.Text.FontFace.h
include/Fuse.Text.FallingBackFontFace.h: include/Uno.IDisposable.h

include/Fuse.Text.Font.h: include/Fuse.Text.GlyphTexture.h
include/Fuse.Text.Font.h: include/Fuse.Text.PositionedGlyph.h
include/Fuse.Text.Font.h: include/Uno.Float2.h
include/Fuse.Text.Font.h: include/Uno.IDisposable.h
include/Fuse.Text.Font.h: include/Uno.Object.h
include/Fuse.Text.Font.h: include/Fuse.Text.Glyph.h
include/Fuse.Text.Font.h: include/Fuse.Text.RenderedGlyph.h

include/Fuse.Text.FontFace.h: include/Uno.IDisposable.h
include/Fuse.Text.FontFace.h: include/Uno.Object.h

include/Fuse.Text.Glyph.h: include/Uno.Object.h

include/Fuse.Text.GlyphAtlas.h: include/Uno.IDisposable.h
include/Fuse.Text.GlyphAtlas.h: include/Uno.Object.h

include/Fuse.Text.GlyphTexture.h: include/Fuse.Text.SubTexture.h
include/Fuse.Text.GlyphTexture.h: include/Uno.Float2.h
include/Fuse.Text.GlyphTexture.h: include/Uno.Object.h

include/Fuse.Text.LazyFont.h: include/Fuse.Internal.CacheItem-2.h
include/Fuse.Text.LazyFont.h: include/Fuse.Text.Font.h
include/Fuse.Text.LazyFont.h: include/Uno.IDisposable.h

include/Fuse.Text.LazyFontFace.h: include/Fuse.Text.FontFace.h
include/Fuse.Text.LazyFontFace.h: include/Uno.IDisposable.h

include/Fuse.Text.LineBreaks.h: include/Uno.h

include/Fuse.Text.Substring.L-5736d25e.h: include/Fuse.Text.Substring.h
include/Fuse.Text.Substring.L-5736d25e.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Text.Substring.L-5736d25e.h: include/Uno.Object.h

include/Fuse.Text.Substring.L-51cfd25b.h: include/Fuse.Text.Substring.h
include/Fuse.Text.Substring.L-51cfd25b.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Text.Substring.L-51cfd25b.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Text.Substring.L-51cfd25b.h: include/Uno.IDisposable.h
include/Fuse.Text.Substring.L-51cfd25b.h: include/Uno.Object.h

include/Fuse.Text.Measure.h: include/Uno.h

include/Fuse.Text.ShapedRun.P-9f9f608e.h: include/Fuse.Text.PositionedGlyph.h
include/Fuse.Text.ShapedRun.P-9f9f608e.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Text.ShapedRun.P-9f9f608e.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Text.ShapedRun.P-9f9f608e.h: include/Uno.IDisposable.h
include/Fuse.Text.ShapedRun.P-9f9f608e.h: include/Uno.Object.h

include/Fuse.Text.PositionedGlyph.h: include/Fuse.Text.Glyph.h
include/Fuse.Text.PositionedGlyph.h: include/Uno.Float2.h
include/Fuse.Text.PositionedGlyph.h: include/Uno.Object.h

include/Fuse.Text.PositionedRun.h: include/Uno.Float2.h
include/Fuse.Text.PositionedRun.h: include/Uno.Object.h

include/Fuse.Text.Quad.h: include/Uno.Float2.h
include/Fuse.Text.Quad.h: include/Uno.Object.h
include/Fuse.Text.Quad.h: include/Uno.Rect.h
include/Fuse.Text.Quad.h: include/Uno.Recti.h

include/Fuse.Text.RenderedGlyph.h: include/Uno.Float2.h
include/Fuse.Text.RenderedGlyph.h: include/Uno.Object.h

include/Fuse.Text.Renderer.h: include/Fuse.Text.Batch.h
include/Fuse.Text.Renderer.h: include/Fuse.Text.Quad.h
include/Fuse.Text.Renderer.h: include/Uno.IDisposable.h
include/Fuse.Text.Renderer.h: include/Uno.Object.h
include/Fuse.Text.Renderer.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Text.Shape.h: include/Uno.h

include/Fuse.Text.ShapedRun.h: include/Fuse.Text.Bidirectional.Run.h
include/Fuse.Text.ShapedRun.h: include/Fuse.Text.PositionedGlyph.h
include/Fuse.Text.ShapedRun.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Text.ShapedRun.h: include/Uno.Float2.h
include/Fuse.Text.ShapedRun.h: include/Uno.Object.h

include/Fuse.Text.Renderer.Sh-30caff4.h: include/Uno.h

include/Fuse.Text.SinglyLinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Text.SinglyLinkedList-1.h: include/Uno.Object.h

include/Fuse.Text.Substring.h: include/Uno.Char.h
include/Fuse.Text.Substring.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Text.Substring.h: include/Uno.Object.h

include/Fuse.Text.SubstringExtensions.h: include/Uno.h

include/Fuse.Text.SubTexture.h: include/Uno.Object.h
include/Fuse.Text.SubTexture.h: include/Uno.Recti.h

include/Fuse.Text.TextDirection.h: include/Uno.Int.h

include/Fuse.Text.TextureAtlas.h: include/Uno.Int2.h
include/Fuse.Text.TextureAtlas.h: include/Uno.Object.h

include/Fuse.Text.Truncate.h: include/Uno.h

include/Fuse.Text.Wrap.h: include/Uno.h

include/Fuse.Text.Bidirection-81e36185.h: include/Uno.Object.h

include/Fuse.Text.Bidirectional.Run.h: include/Uno.Object.h

include/Fuse.Text.Bidirectional.Runs.h: include/Uno.h

include/Fuse.Text.Bidirection-a3032277.h: include/Uno.h

include/Fuse.Text.Edit.Caret.h: include/Uno.Float2.h
include/Fuse.Text.Edit.Caret.h: include/Uno.Object.h

include/Fuse.Text.Edit.CaretContext.h: include/Fuse.Text.Edit.Caret.h
include/Fuse.Text.Edit.CaretContext.h: include/Uno.Object.h

include/Fuse.Text.Edit.CaretIndex.h: include/Uno.Int.h

include/Fuse.Text.Implementat-1d309026.h: include/Uno.Object.h

include/Fuse.Text.Implementat-836005eb.h: include/Uno.h

include/Fuse.Text.Implementat-5759aed4.h: include/Uno.h

include/Fuse.Text.Implementat-8de68d27.h: include/Fuse.Text.Implementat-496d0d1d.h
include/Fuse.Text.Implementat-8de68d27.h: include/Uno.IDisposable.h

include/Fuse.Text.Implementat-3d5a4dbc.h: include/Fuse.Text.FontFace.h
include/Fuse.Text.Implementat-3d5a4dbc.h: include/Uno.IDisposable.h

include/Fuse.Text.Implementat-7d30e5b4.h: include/Uno.h

include/Fuse.Text.Implementat-4b1bb6eb.h: include/Uno.h

include/Fuse.Text.Implementat-496d0d1d.h: include/Fuse.Text.Font.h
include/Fuse.Text.Implementat-496d0d1d.h: include/Uno.IDisposable.h

include/Fuse.Text.Implementat-34a2369f.h: include/Uno.h

include/Fuse.Text.Implementat-3a5ba083.h: include/Uno.h

include/Fuse.Android.StaticLa-a3e5b16a.h: include/Uno.Int.h

include/Fuse.Android.AppRoot.h: include/Uno.h

include/Fuse.Android.TextRend-b0a6766a.h: include/Uno.Object.h
include/Fuse.Android.TextRend-b0a6766a.h: include/Uno.Recti.h

include/Fuse.Android.Bitmap.h: include/Uno.IDisposable.h
include/Fuse.Android.Bitmap.h: include/Uno.Object.h

include/Fuse.Android.Blitter.h: include/Uno.Float2.h
include/Fuse.Android.Blitter.h: include/Uno.Object.h
include/Fuse.Android.Blitter.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.Android.Canvas.h: include/Uno.Object.h

include/Fuse.Android.GLUtils.h: include/Uno.Object.h

include/Fuse.Android.StaticLayout.h: include/Uno.Object.h

include/Fuse.Android.StatusBarConfig.h: include/Fuse.Behavior.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Binding.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.IProperties.h
include/Fuse.Android.StatusBarConfig.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Collections.IList-1.h

include/Fuse.Android.StatusBarHelper.h: include/Uno.h

include/Fuse.Android.TextControlLayout.h: include/Uno.Object.h
include/Fuse.Android.TextControlLayout.h: include/Uno.Recti.h

include/Fuse.Android.TextPaint.h: include/Uno.Object.h

include/Fuse.Android.TextRenderer.h: include/Fuse.Controls.ITextRenderer.h
include/Fuse.Android.TextRenderer.h: include/Uno.Float2.h
include/Fuse.Android.TextRenderer.h: include/Uno.Object.h

include/Fuse.Android.TextUtils.h: include/Uno.Object.h

include/Fuse.Android.TextUtil-d9bbd2fb.h: include/Uno.Int.h

include/Fuse.Android.Bindings-d5e7e547.h: include/Uno.h

include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.-26dc0a28.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.ILeafView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.Native.IView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Navigation.IBase-6ef44c1d.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Android.Controls.WebView.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls-12325021.h: include/Uno.Object.h

include/Fuse.Android.Controls-1ee18226.h: include/Uno.Object.h

include/Fuse.Android.Controls-112d446d.h: include/Uno.h

include/Fuse.iOS.StatusBarConfig.h: include/Fuse.Behavior.h
include/Fuse.iOS.StatusBarConfig.h: include/Fuse.Binding.h
include/Fuse.iOS.StatusBarConfig.h: include/Fuse.INotifyUnrooted.h
include/Fuse.iOS.StatusBarConfig.h: include/Fuse.IProperties.h
include/Fuse.iOS.StatusBarConfig.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.iOS.StatusBarConfig.h: include/Uno.Collections.ICollection-1.h
include/Fuse.iOS.StatusBarConfig.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.iOS.StatusBarConfig.h: include/Uno.Collections.IList-1.h

include/Fuse.iOS.Bindings.Blitter.h: include/Uno.Float4x4.h
include/Fuse.iOS.Bindings.Blitter.h: include/Uno.Object.h
include/Fuse.iOS.Bindings.Blitter.h: include/Uno.Runtime.Implement-5e8872c0.h

include/Fuse.FileSystem.AndroidPaths.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-484cdd9f.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-484ddd9f.h: include/Uno.Object.h

include/Fuse.FileSystem.DirectoryInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileAttributes.h: include/Uno.Int.h

include/Fuse.FileSystem.FileInfo.h: include/Fuse.FileSystem.FileSystemInfo.h

include/Fuse.FileSystem.FileStatus.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-e69416b1.h: include/Uno.h

include/Fuse.FileSystem.FileSystemInfo.h: include/Uno.Object.h

include/Fuse.FileSystem.FileS-6b49afc1.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.FileSystem.FileS-6b49afc1.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.FileSystem.FileS-6b49afc1.h: include/Uno.IDisposable.h

include/Fuse.FileSystem.FileS-d1dad6d8.h: include/Uno.Object.h

include/Fuse.FileSystem.Nothing.h: include/Uno.Object.h

include/Fuse.FileSystem.PathTools.h: include/Uno.h

include/Fuse.FileSystem.UnifiedPaths.h: include/Uno.h

include/Fuse.Physics.Axis2D.h: include/Uno.Int.h

include/Fuse.Physics.Body.h: include/Uno.Float3.h
include/Fuse.Physics.Body.h: include/Uno.Object.h

include/Fuse.Physics.BodyAttr.h: include/Uno.h

include/Fuse.Physics.Draggable.h: include/Fuse.Behavior.h
include/Fuse.Physics.Draggable.h: include/Fuse.Binding.h
include/Fuse.Physics.Draggable.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.Draggable.h: include/Fuse.IProperties.h
include/Fuse.Physics.Draggable.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.Draggable.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.Draggable.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.Draggable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.Draggable.h: include/Uno.Collections.IList-1.h
include/Fuse.Physics.Draggable.h: include/Uno.Float3.h

include/Fuse.Physics.EnteredForceField.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.Binding.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.IProperties.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.Physics.ForceFie-26b24f8.h
include/Fuse.Physics.EnteredForceField.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.EnteredForceField.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.EnteredForceField.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.EnteredForceField.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.ExitedForceField.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.Binding.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.IProperties.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.Physics.ForceFie-26b24f8.h
include/Fuse.Physics.ExitedForceField.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.ExitedForceField.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.ExitedForceField.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.ExitedForceField.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.ForceField.h: include/Fuse.Behavior.h
include/Fuse.Physics.ForceField.h: include/Fuse.Binding.h
include/Fuse.Physics.ForceField.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.ForceField.h: include/Fuse.IProperties.h
include/Fuse.Physics.ForceField.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.ForceField.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.ForceField.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.ForceField.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.ForceField.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.ForceFie-d7827ed3.h: include/Uno.EventArgs.h

include/Fuse.Physics.ForceFie-d2e5a612.h: include/Uno.Delegate.h

include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.Binding.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.IProperties.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.Physics.ForceFieldTrigger.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.ForceFie-26b24f8.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Binding.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.IProperties.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.ForceFieldTrigger.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.Binding.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.IProperties.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.Physics.ForceFieldTrigger.h
include/Fuse.Physics.InForceF-5270285f.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.InForceF-5270285f.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.InForceF-5270285f.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.InForceF-5270285f.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.IRule.h: include/Uno.Object.h

include/Fuse.Physics.PointAttractor.h: include/Fuse.Binding.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.IProperties.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.ForceField.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Collections.IList-1.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Float3.h

include/Fuse.Physics.Spring.h: include/Fuse.Behavior.h
include/Fuse.Physics.Spring.h: include/Fuse.Binding.h
include/Fuse.Physics.Spring.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.Spring.h: include/Fuse.IProperties.h
include/Fuse.Physics.Spring.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.Spring.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.Spring.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.Spring.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.Spring.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.WhileDragging.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.Binding.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.IProperties.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Physics.WhileDragging.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Physics.WhileDragging.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Physics.WhileDragging.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Physics.WhileDragging.h: include/Uno.Collections.IList-1.h

include/Fuse.Physics.World.h: include/Uno.Object.h

include/Fuse.Selection.Deselected.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Selection.Deselected.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Selection.Deselected.h: include/Fuse.Binding.h
include/Fuse.Selection.Deselected.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.Deselected.h: include/Fuse.IProperties.h
include/Fuse.Selection.Deselected.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Deselected.h: include/Fuse.Selection.SelectionEvent.h
include/Fuse.Selection.Deselected.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Deselected.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Deselected.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selection.How.h: include/Uno.Int.h

include/Fuse.Selection.Select-8204e282.h: include/Fuse.IArray.h
include/Fuse.Selection.Select-8204e282.h: include/Uno.Object.h

include/Fuse.Selection.Selectable.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selectable.h: include/Fuse.Binding.h
include/Fuse.Selection.Selectable.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.Selectable.h: include/Fuse.IProperties.h
include/Fuse.Selection.Selectable.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selectable.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selected.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Selection.Selected.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Selection.Selected.h: include/Fuse.Binding.h
include/Fuse.Selection.Selected.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.Selected.h: include/Fuse.IProperties.h
include/Fuse.Selection.Selected.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selected.h: include/Fuse.Selection.SelectionEvent.h
include/Fuse.Selection.Selected.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selected.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selected.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Selection.h: include/Fuse.Behavior.h
include/Fuse.Selection.Selection.h: include/Fuse.Binding.h
include/Fuse.Selection.Selection.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.Selection.h: include/Fuse.IProperties.h
include/Fuse.Selection.Selection.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Selection.Selection.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.Selection.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.SelectionEvent.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.Binding.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.IProperties.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.Selection.Select-883d80e5.h
include/Fuse.Selection.SelectionEvent.h: include/Fuse.Triggers.PulseTrigger-1.h
include/Fuse.Selection.SelectionEvent.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.SelectionEvent.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.SelectionEvent.h: include/Uno.Collections.IList-1.h

include/Fuse.Selection.Select-883d80e5.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Selection.Select-883d80e5.h: include/Uno.EventArgs.h

include/Fuse.Selection.Select-1fd43471.h: include/Uno.Int.h

include/Fuse.Selection.SelectMode.h: include/Uno.Int.h

include/Fuse.Selection.ToggleSelection.h: include/Fuse.Triggers.Actions-ec2327b1.h

include/Fuse.Selection.WhileSelected.h: include/Fuse.Animations.IBase-9ca29815.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.Animations.IUnwr-4bbb3b04.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.Binding.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.INotifyUnrooted.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.IProperties.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.Scripting.IScriptObject.h
include/Fuse.Selection.WhileSelected.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Selection.WhileSelected.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Selection.WhileSelected.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Selection.WhileSelected.h: include/Uno.Collections.IList-1.h
include/Fuse.Selection.WhileSelected.h: include/Uno.UX.IPropertyListener.h

include/Fuse.Storage.ApplicationDir.h: include/Uno.h

include/Fuse.Storage.Applicat-b50c08a9.h: include/Uno.Object.h

include/Fuse.Storage.StorageModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.Storage.StorageModule.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.Storage.StorageModule.h: include/Uno.IDisposable.h

include/Fuse.Storage.Applicat-ee8f098e.h: include/Uno.Object.h

include/Fuse.WebSocket.Native-2c3e7343.h: include/Uno.Object.h

include/Fuse.WebSocket.IWebSo-db8c24dd.h: include/Uno.Object.h

include/Fuse.WebSocket.Native-604be279.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.WebSocket.Native-604be279.h: include/Fuse.Scripting.NativeModule.h
include/Fuse.WebSocket.Native-604be279.h: include/Uno.IDisposable.h

include/Fuse.WebSocket.WebSocketClient.h: include/Uno.Object.h

include/Fuse.WebSocket.WebSoc-1af68aa9.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.WebSocket.WebSoc-1af68aa9.h: include/Fuse.WebSocket.Native-604be279.h
include/Fuse.WebSocket.WebSoc-1af68aa9.h: include/Uno.IDisposable.h

include/Fuse.WebSocket.WebSoc-7a414494.h: include/Fuse.Scripting.IModuleProvider.h
include/Fuse.WebSocket.WebSoc-7a414494.h: include/Fuse.Scripting.Native-23dfe193.h
include/Fuse.WebSocket.WebSoc-7a414494.h: include/Uno.IDisposable.h

include/Experimental.Http.BinaryLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.HttpLoader.h: include/Uno.h

include/Experimental.Http.Htt-f498a617.h: include/Uno.Object.h

include/Experimental.Http.Loader.h: include/Uno.Object.h

include/Experimental.Http.LoaderConst.h: include/Uno.h

include/Experimental.Http.TextLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.Int-87489639.h: include/Uno.h

include/Experimental.Cache.CacheLoaded.h: include/Uno.Delegate.h

include/Experimental.Cache.ICache.h: include/Uno.Object.h

include/Experimental.Cache.IC-add03308.h: include/Uno.Object.h

include/Experimental.Cache.IC-daf5e82b.h: include/Uno.Object.h

include/Experimental.Cache.ProxyStream.h: include/Uno.IDisposable.h
include/Experimental.Cache.ProxyStream.h: include/Uno.IO.Stream.h

include/Experimental.TextureL-4e2f4c54.h: include/Uno.Object.h

include/Experimental.TextureL-1ab9da57.h: include/Uno.Exception.h

include/Experimental.TextureL-f03d7306.h: include/Uno.h

include/Experimental.TextureL-239f4f6d.h: include/Uno.h

include/Neovisionaries.WebSocketClient.h: include/Fuse.WebSocket.IWebSo-db8c24dd.h
include/Neovisionaries.WebSocketClient.h: include/Uno.IDisposable.h
include/Neovisionaries.WebSocketClient.h: include/Uno.Object.h

include/Polyfills.Window.WindowModule.h: include/Fuse.Scripting.FileModule.h
include/Polyfills.Window.WindowModule.h: include/Fuse.Scripting.IModuleProvider.h
include/Polyfills.Window.WindowModule.h: include/Uno.IDisposable.h

include/FuseJS.Base64.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Base64.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Base64.h: include/Uno.IDisposable.h

include/FuseJS.Bundle.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Bundle.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Bundle.h: include/Uno.IDisposable.h

include/FuseJS.Environment.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Environment.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Environment.h: include/Uno.IDisposable.h

include/FuseJS.FileReaderImpl-c53a76b9.h: include/Uno.Object.h

include/FuseJS.FileReaderImpl.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.FileReaderImpl.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.FileReaderImpl.h: include/Uno.IDisposable.h

include/FuseJS.Globals.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Globals.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.Globals.h: include/Uno.IDisposable.h

include/FuseJS.Latin1Helpers.h: include/Uno.h

include/FuseJS.Lifecycle.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.Lifecycle.h: include/Fuse.Scripting.Native-23dfe193.h
include/FuseJS.Lifecycle.h: include/Uno.IDisposable.h

include/FuseJS.RaiseEvent.h: include/Uno.Object.h

include/FuseJS.Bundle.ReadClosure.h: include/Uno.Object.h

include/FuseJS.UserEvents.h: include/Fuse.Scripting.IModuleProvider.h
include/FuseJS.UserEvents.h: include/Fuse.Scripting.NativeModule.h
include/FuseJS.UserEvents.h: include/Uno.IDisposable.h

include/Outracks.Simulator.Ag-b2968c6d.h: include/Uno.h

include/Outracks.Simulator.Application.h: include/Fuse.App.h
include/Outracks.Simulator.Application.h: include/Fuse.Input.IPointerEv-2da5d72b.h
include/Outracks.Simulator.Application.h: include/Fuse.IProperties.h

include/Outracks.Simulator.Apply-1.h: include/Uno.Object.h

include/Outracks.Simulator.Ap-999e7f5a.h: include/Uno.Object.h

include/Outracks.Simulator.Ap-1650505d.h: include/Uno.Object.h

include/Outracks.Simulator.ArrayStream.h: include/Uno.IDisposable.h
include/Outracks.Simulator.ArrayStream.h: include/Uno.IO.Stream.h

include/Outracks.Simulator.Bundle.h: include/Uno.h

include/Outracks.Simulator.By-c6309127.h: include/Uno.h

include/Outracks.Simulator.ChangeIp.h: include/Outracks.Simulator.Sh-bbec5a41.h

include/Outracks.Simulator.Closure.h: include/Uno.h

include/Outracks.Simulator.En-3a89fa78.h: include/Uno.Object.h

include/Outracks.Simulator.Co-33b10b30.h: include/Uno.Object.h

include/Outracks.Simulator.Connected.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Connecting.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Co-b47b0508.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.Co-ace6329f.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.Co-86f5f845.h: include/Outracks.Simulator.Sh-80a6ce89.h

include/Outracks.Simulator.Co-c715bdc9.h: include/Uno.Object.h

include/Outracks.Simulator.Co-883cc57.h: include/Uno.h

include/Outracks.Simulator.Context.h: include/Uno.h

include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Binding.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.INotifyUnrooted.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.IProperties.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Node.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Scripting.IScriptObject.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.De-2d97e856.h: include/Fuse.Triggers.Actions-19aca435.h
include/Outracks.Simulator.De-2d97e856.h: include/Uno.Collections.ICollection-1.h
include/Outracks.Simulator.De-2d97e856.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.De-2d97e856.h: include/Uno.Collections.IList-1.h
include/Outracks.Simulator.De-2d97e856.h: include/Uno.UX.IPropertyListener.h

include/Outracks.Simulator.DeviceInfo.h: include/Uno.h

include/Outracks.Simulator.Di-bb741075.h: include/Uno.Object.h

include/Outracks.Simulator.Di-289155e3.h: include/Uno.Object.h

include/Outracks.Simulator.Di-21d6f27f.h: include/Uno.Object.h

include/Outracks.Simulator.Du-e06814bd.h: include/Uno.Application.h

include/Outracks.Simulator.En-5625ea01.h: include/Uno.h

include/Outracks.Simulator.ErrorToast.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Binding.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Controls.ClientPanel.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.INotifyUnrooted.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.IProperties.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Node.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Scripting.IScriptObject.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.ErrorToast.h: include/Fuse.Triggers.Actions-19aca435.h
include/Outracks.Simulator.ErrorToast.h: include/Uno.Collections.ICollection-1.h
include/Outracks.Simulator.ErrorToast.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.ErrorToast.h: include/Uno.Collections.IList-1.h
include/Outracks.Simulator.ErrorToast.h: include/Uno.Float4.h
include/Outracks.Simulator.ErrorToast.h: include/Uno.UX.IPropertyListener.h

include/Outracks.Simulator.Exceptions.h: include/Uno.h

include/Outracks.Simulator.Fa-5db051cf.h: include/Outracks.Simulator.Sh-80a6ce89.h

include/Outracks.Simulator.Fa-dde75e4a.h: include/Uno.Exception.h

include/Outracks.Simulator.Fa-8d0d447f.h: include/Uno.Exception.h

include/Outracks.Simulator.Fa-920345f4.h: include/Uno.Exception.h

include/Outracks.Simulator.FakeApp.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Binding.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.INotifyUnrooted.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IProperties.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Node.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Scripting.IScriptObject.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions-19aca435.h
include/Outracks.Simulator.FakeApp.h: include/Uno.Collections.ICollection-1.h
include/Outracks.Simulator.FakeApp.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.FakeApp.h: include/Uno.Collections.IList-1.h
include/Outracks.Simulator.FakeApp.h: include/Uno.UX.IPropertyListener.h

include/Outracks.Simulator.Faulted.h: include/Outracks.Simulator.Sh-80a6ce89.h

include/Outracks.Simulator.Flasher.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Binding.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.Flasher.h: include/Fuse.INotifyUnrooted.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IProperties.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Node.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Scripting.IScriptObject.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IShow.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions-19aca435.h
include/Outracks.Simulator.Flasher.h: include/Uno.Collections.ICollection-1.h
include/Outracks.Simulator.Flasher.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.Flasher.h: include/Uno.Collections.IList-1.h
include/Outracks.Simulator.Flasher.h: include/Uno.UX.IPropertyListener.h

include/Outracks.Simulator.Forget-2.h: include/Uno.Object.h

include/Outracks.Simulator.Forget-3.h: include/Uno.Object.h

include/Outracks.Simulator.Fo-a0fb4ba6.h: include/Uno.Object.h

include/Outracks.Simulator.Fo-a0fb4ba5.h: include/Uno.Object.h

include/Outracks.Simulator.Ge-19efe557.h: include/Uno.Object.h

include/Outracks.Simulator.GoOffline.h: include/Uno.h

include/Outracks.Simulator.Idle.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.IE-4f9891a4.h: include/Uno.Object.h

include/Outracks.Simulator.Im-c984c489.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.Im-c984c489.h: include/Uno.Object.h

include/Outracks.Simulator.In-b3e552d1.h: include/Uno.h

include/Outracks.Simulator.InputMode.h: include/Uno.Int.h

include/Outracks.Simulator.In-991d97c3.h: include/Uno.Exception.h

include/Outracks.Simulator.IS-553170fc.h: include/Uno.IDisposable.h
include/Outracks.Simulator.IS-553170fc.h: include/Uno.Object.h

include/Outracks.Simulator.List.h: include/Uno.h

include/Outracks.Simulator.Lo-fa2e4809.h: include/Uno.Object.h

include/Outracks.Simulator.ModalDialog.h: include/Uno.Object.h

include/Outracks.Simulator.No-16ff05e1.h: include/Uno.Exception.h

include/Outracks.Simulator.Of-5bccded0.h: include/Outracks.Simulator.IS-553170fc.h
include/Outracks.Simulator.Of-5bccded0.h: include/Uno.IDisposable.h
include/Outracks.Simulator.Of-5bccded0.h: include/Uno.Object.h

include/Outracks.Simulator.ProxyClient.h: include/Uno.Object.h

include/Outracks.Simulator.Reifying.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Running.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Se-6bc686d2.h: include/Uno.h

include/Outracks.Simulator.Sh-80a6ce89.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.Sh-80a6ce89.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Sh-bbec5a41.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Si-334a0169.h: include/Outracks.Simulator.IS-553170fc.h
include/Outracks.Simulator.Si-334a0169.h: include/Uno.IDisposable.h
include/Outracks.Simulator.Si-334a0169.h: include/Uno.Object.h

include/Outracks.Simulator.State.h: include/Uno.Object.h

include/Outracks.Simulator.St-a40ac2e1.h: include/Uno.h

include/Outracks.Simulator.Task-1.h: include/Uno.Object.h

include/Outracks.Simulator.Tasks.h: include/Uno.h

include/Outracks.Simulator.Ta-9b1bb554.h: include/Uno.Object.h

include/Outracks.Simulator.Un-d3f047b3.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Us-39932f4a.h: include/Uno.Float4.h
include/Outracks.Simulator.Us-39932f4a.h: include/Uno.Object.h

include/Outracks.Simulator.Wa-93fe7492.h: include/Uno.Object.h

include/Outracks.Simulator.By-653f4dff.h: include/Uno.UX.FileSource.h

include/Outracks.Simulator.FileCache.h: include/Uno.Object.h

include/Outracks.Simulator.Ge-bdd57e78.h: include/Fuse.Input.IPointerEv-2da5d72b.h
include/Outracks.Simulator.Ge-bdd57e78.h: include/Fuse.IProperties.h
include/Outracks.Simulator.Ge-bdd57e78.h: include/Outracks.Simulator.Application.h

include/Outracks.Simulator.By-366d63fd.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-6e882f39.h: include/Uno.Object.h

include/Outracks.Simulator.By-3094ecc5.h: include/Outracks.Simulator.By-d6e9c54e.h

include/Outracks.Simulator.By-719649ac.h: include/Outracks.Simulator.By-d6e9c54e.h

include/Outracks.Simulator.By-d3b0fadf.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-5cf50015.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-34a88bb9.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-432dacf8.h: include/Outracks.Simulator.By-d6e9c54e.h

include/Outracks.Simulator.By-4f00c975.h: include/Outracks.Simulator.By-18d1ffff.h

include/Outracks.Simulator.By-6ac3d923.h: include/Uno.h

include/Outracks.Simulator.By-ba778869.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-332e5e29.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-30ed2d55.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-d6e9c54e.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-e8b43d1f.h: include/Uno.h

include/Outracks.Simulator.By-af6d410d.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-2cc1f852.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.By-2cc1f852.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-db647b13.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-db647b13.h: include/Uno.Object.h

include/Outracks.Simulator.By-839e8938.h: include/Outracks.Simulator.By-18d1ffff.h
include/Outracks.Simulator.By-839e8938.h: include/Outracks.Simulator.By-2468a4c9.h

include/Outracks.Simulator.By-5d8fce5d.h: include/Outracks.Simulator.By-d6e9c54e.h

include/Outracks.Simulator.By-d9d4d015.h: include/Uno.Int.h

include/Outracks.Simulator.By-f964b10f.h: include/Uno.Object.h
include/Outracks.Simulator.By-f964b10f.h: include/Outracks.Simulator.By-2468a4c9.h

include/Outracks.Simulator.By-2468a4c9.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-2468a4c9.h: include/Uno.Object.h

include/Outracks.Simulator.By-5fd5f13f.h: include/Uno.h
include/Outracks.Simulator.By-5fd5f13f.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.By-5fd5f13f.h: include/Uno.Object.h

include/Outracks.Simulator.By-6147e3c.h: include/Uno.Object.h

include/Outracks.Simulator.By-d3cd009d.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-7bf5e5dd.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-4a66cbfe.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-6dfaa4ef.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.By-c64cc76.h: include/Outracks.Simulator.By-18d1ffff.h

include/Outracks.Simulator.By-4cc4a0ce.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.By-4cc4a0ce.h: include/Uno.Object.h

include/Outracks.Simulator.By-18d1ffff.h: include/Uno.Object.h

include/Outracks.Simulator.By-64e7d8c8.h: include/Uno.h

include/Outracks.Simulator.By-d8be24e6.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-d8be24e6.h: include/Uno.Object.h

include/Outracks.Simulator.By-a3fa08e3.h: include/Outracks.Simulator.By-d6e9c54e.h

include/Outracks.Simulator.By-d66f8f6f.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-d66f8f6f.h: include/Uno.Object.h

include/Outracks.Simulator.By-fabdbfb1.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.By-fabdbfb1.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-fabdbfb1.h: include/Uno.Object.h

include/Outracks.Simulator.By-ca1a4a0f.h: include/Uno.Object.h

include/Outracks.Simulator.By-abf8704a.h: include/Uno.Object.h

include/Outracks.Simulator.By-a5e76993.h: include/Outracks.Simulator.IE-4f9891a4.h
include/Outracks.Simulator.By-a5e76993.h: include/Uno.Object.h

include/Outracks.Simulator.By-478e2e7d.h: include/Outracks.Simulator.By-4f00c975.h

include/Outracks.Simulator.Pr-c197dd.h: include/Outracks.Simulator.Pr-2072d9a4.h

include/Outracks.Simulator.Pr-53d722cb.h: include/Outracks.Simulator.Pr-7aa936e3.h

include/Outracks.Simulator.Pr-2f2b13f3.h: include/Uno.Object.h

include/Outracks.Simulator.Pr-5981e2f7.h: include/Outracks.Simulator.Pr-7aa936e3.h

include/Outracks.Simulator.Pr-2072d9a4.h: include/Uno.Object.h

include/Outracks.Simulator.Pr-7aa936e3.h: include/Uno.Object.h

include/Outracks.Simulator.Pr-3426b3cc.h: include/Outracks.Simulator.Pr-2072d9a4.h

include/Outracks.Simulator.Pr-d2b1abe0.h: include/Outracks.Simulator.Pr-7aa936e3.h

include/Outracks.Simulator.Pr-9e9a9b3b.h: include/Outracks.Simulator.Pr-2072d9a4.h

include/Outracks.Simulator.Pr-3494b812.h: include/Outracks.Simulator.Pr-2072d9a4.h

include/Outracks.Simulator.Ru-c33922e0.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.Ru-c33922e0.h: include/Uno.Object.h

include/Outracks.Simulator.Ru-83cb90bb.h: include/Uno.Object.h
include/Outracks.Simulator.Ru-83cb90bb.h: include/Outracks.Simulator.By-2468a4c9.h
include/Outracks.Simulator.Ru-83cb90bb.h: include/Outracks.Simulator.By-4cc4a0ce.h

include/Outracks.Simulator.Ru-a33439c6.h: include/Uno.Object.h

include/Outracks.Simulator.Ru-6c6ff8f4.h: include/Uno.Object.h
include/Outracks.Simulator.Ru-6c6ff8f4.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Ru-22f86bf1.h: include/Uno.Exception.h

include/Outracks.Simulator.Ru-9e76715f.h: include/Uno.h

include/Outracks.Simulator.Ru-ffe7b02.h: include/Uno.h

include/Outracks.Simulator.Ru-e0fde170.h: include/Uno.Object.h

include/Outracks.Simulator.Ru-a075d45f.h: include/Fuse.Preview.ISelection.h
include/Outracks.Simulator.Ru-a075d45f.h: include/Uno.Object.h

include/Outracks.Simulator.Ru-65f5f20f.h: include/Uno.Exception.h

include/Outracks.Simulator.Ru-f6bc51c8.h: include/Uno.Exception.h

include/Outracks.Simulator.Ru-2bdd2abb.h: include/Uno.Exception.h

include/Outracks.Simulator.Ru-aaa9d249.h: include/Uno.h

include/Outracks.Simulator.Ru-7e7d87e8.h: include/Uno.Object.h

include/Outracks.Simulator.Ru-45f97a53.h: include/Uno.Object.h
include/Outracks.Simulator.Ru-45f97a53.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Ru-3d4976ee.h: include/Uno.UX.Template.h

include/Outracks.Simulator.Re-8b040bf3.h: include/Outracks.Simulator.Ru-83cb90bb.h
include/Outracks.Simulator.Re-8b040bf3.h: include/Uno.Object.h

include/Outracks.Simulator.Re-5beeada7.h: include/Outracks.Simulator.Re-1f564055.h
include/Outracks.Simulator.Re-5beeada7.h: include/Uno.Object.h

include/Outracks.Simulator.Re-2bb974e.h: include/Outracks.Simulator.Re-63a73cc1.h
include/Outracks.Simulator.Re-2bb974e.h: include/Uno.Object.h

include/Outracks.Simulator.Re-1f564055.h: include/Uno.Object.h

include/Outracks.Simulator.Re-63a73cc1.h: include/Uno.Object.h

include/Outracks.Simulator.Re-2b3df3ca.h: include/Uno.Object.h

include/Outracks.Simulator.Re-a21b65d4.h: include/Outracks.Simulator.Ru-83cb90bb.h
include/Outracks.Simulator.Re-a21b65d4.h: include/Uno.Object.h

include/Outracks.Simulator.Re-47fe8c97.h: include/Uno.h

include/Outracks.Simulator.Re-5b46a538.h: include/Uno.h

include/Outracks.Simulator.Re-1a1b5f94.h: include/Uno.h

include/Outracks.Simulator.Re-b043ce10.h: include/Outracks.Simulator.Re-2b3df3ca.h
include/Outracks.Simulator.Re-b043ce10.h: include/Uno.Object.h

include/Outracks.Simulator.Re-7d65992e.h: include/Uno.h

libs/$(ABI): | libs
	$(UNO) mkdir libs/$(ABI)

libs:
	$(UNO) mkdir libs

.uno/Uno: | .uno
	$(UNO) mkdir .uno/Uno

.uno:
	$(UNO) mkdir .uno

.uno/Uno/Graphics: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Graphics

.uno/Implementation/Cpp: | .uno/Implementation
	$(UNO) mkdir .uno/Implementation/Cpp

.uno/Implementation: | .uno
	$(UNO) mkdir .uno/Implementation

.uno/Source: | .uno
	$(UNO) mkdir .uno/Source
