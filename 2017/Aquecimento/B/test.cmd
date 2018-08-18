ECHO off
mkdir myOutput
mkdir input
mkdir output
set nome=B_
set /A i=1
set /A n=30
set /A time=10
cls
:FOR
set input=input\%nome%%i%
set myOutput=myOutput/%nome%%i%
set output=output\%nome%%i%
run.exe < %input% > %myOutput% 
FC %output% %myOutput%

set /A i = %i% + 1
IF %i% LEQ %n% goto FOR

:FIM
ECHO on