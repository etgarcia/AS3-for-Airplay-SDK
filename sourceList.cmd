@echo off

if "%1" == "" goto MSG

dir "%1\*.cpp","%1\*.h" /b /ON
goto BYE

:MSG
echo Drag the source directory of your project here

:BYE
pause