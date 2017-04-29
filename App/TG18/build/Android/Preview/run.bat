:: This file was generated based on '../../../Packages/UnoCore/0.47.13/targets/android/run.bat'.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off

if "%1" == "debug" (
    echo Opening Android Studio
    C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\uno.exe open -a"Android Studio" "%~dp0TG18"
    exit /b %ERRORLEVEL%
)

if "%1" == "uninstall" (
    echo Uninstalling com.apps.tg18
    C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\uno.exe adb uninstall com.apps.tg18
    exit /b %ERRORLEVEL%
)

C:\Users\marti\AppData\Local\Fusetools\Fuse\App\app-0.36.1.12010\uno.exe launch-apk "%~dp0TG18.apk" ^
    --package=com.apps.tg18 ^
    --activity=TG18 ^
    --sym-dir="%~dp0src\main\.uno" ^
    %*
exit /b %ERRORLEVEL%
