:: This file was generated based on '../../../Packages/UnoCore/0.47.13/targets/android/gradle-build.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0app\src\main"

set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_77
set CMAKE_PATH="C:\Users\marti\AppData\Local\Fusetools\Fuse\Android\AndroidSDK\cmake"

echo.
echo ## 2/2: TG18.apk

cd "%~dp0/"

if exist %CMAKE_PATH%\NUL goto HASCMAKE
if exist %CMAKE_PATH%\ goto HASCMAKE
goto NOCMAKE
:HASCMAKE

:: #if (#(RELEASE:Defined) && !#(Project.Android.Key.Store:IsSet))
:: echo ## Release build specified with no Key info in the unoproj. Defaulting to debug.keystore
:: if not exist ".\\#(APK.DefaultKeystore)" (
::     call "%JAVA_HOME%\bin\keytool" -genkey -v -keystore #(APK.DefaultKeystore) -alias androiddebugkey -storepass android -keypass android -keyalg RSA -validity 14000 -dname "CN=Unknown, OU=Unknown, O=Unknown, L=Unknown, ST=Unknown, C=Unknown"
:: )
:: #endif

:: #if #(AltBuildPath:IsSet)
:: call gradlew clean || goto ERROR
:: #endif
call gradlew assembleDebug || goto ERROR

cd "%~dp0"
C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\uno.exe cp app/build/outputs/apk/app-debug.apk TG18.apk || goto ERROR

popd && exit /b 0

:NOCMAKE
echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android'. Expected to find cmake in C:\Users\marti\AppData\Local\Fusetools\Fuse\Android\AndroidSDK\cmake"

:ERROR
popd && exit /b 1
