:: This file was generated based on '../../../Packages/UnoCore/0.47.13/targets/android/gdb.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

REM Setup variables
set SDK_DIR=C:\Users\marti\AppData\Local\Fusetools\Fuse\Android\AndroidSDK
set NDK_DIR=C:\Users\marti\AppData\Local\Fusetools\Fuse\Android\AndroidSDK\ndk-bundle

set ADB=%SDK_DIR%\platform-tools\adb.exe

if exist %NDK_DIR%\prebuilt\windows\bin\awk.exe (
    set AWK=%NDK_DIR%\prebuilt\windows\bin\awk.exe
) else (
    set AWK=%NDK_DIR%\prebuilt\windows-x86_64\bin\awk.exe
)

echo.
echo ## Waiting for activity before connection gdb
%ADB% shell sleep 2

set AWK_SCRIPTS=%NDK_DIR%\build\awk
set DATA_DIR=/data/data/com.apps.tg18
set DEVICE_GDBSERVER=%DATA_DIR%/lib/gdbserver

set cmd="%ADB% shell ps | %AWK% -f %AWK_SCRIPTS%\extract-pid.awk -v PACKAGE=""com.apps.tg18"""
FOR /F "delims=" %%i IN (' %cmd% ') DO SET PID=%%i

echo.
echo ## Starting gdbserver

start /b cmd /c %ADB% shell run-as com.apps.tg18 %DEVICE_GDBSERVER% +debug-socket --attach %PID%
timeout /t 1 > nul

echo.
echo ## Forwarding GDB to localhost port:1234
%ADB% forward tcp:1234 localfilesystem:%DATA_DIR%/debug-socket
