@echo off
-----------------------------
:begin
chcp 1250
cls
echo ----------------------------------------------------------------------
echo  This script generates 'script_info.txt' file with options you choose
echo ----------------------------------------------------------------------
echo  Choose a number from list
echo ---------------------------
echo.
echo 1)Configuration of network interfaces
echo 2)OS and hardware info
echo 3)Running processes
echo 4)Host name
echo 5)Run task manager
echo 6)Exit
echo --------------------------------------
echo 7)File preview
echo 8)Empty generated file
echo 9)Delete generated file
echo --------------------------------------

set /p option=choose:
if %option% geq 1 if %option% leq 9 goto option%option%
goto error
-------------------------
:option1
cls
echo Configuration of network interfaces
echo -------------------------------------
echo ------------------------------------- >> script_info.txt
echo Configuration of network interfaces >> script_info.txt
echo ------------------------------------- >> script_info.txt
ipconfig >> script_info.txt
ipconfig
pause
goto begin
-------------------------
:option2
cls
echo OS and hardware info
echo -----------------------
echo ------------------------------------- >> script_info.txt
echo OS and hardware info >> script_info.txt
echo ------------------------------------- >> script_info.txt
systeminfo >> script_info.txt
systeminfo
pause
goto begin
-------------------------
:option3
cls
echo Running processes
echo ----------------------
echo ------------------------------------- >> script_info.txt
echo Running processes >> script_info.txt
echo ------------------------------------- >> script_info.txt
tasklist >> script_info.txt
tasklist
pause
goto begin
------------------------
:option4
cls
echo Host name
echo ----------------
echo ------------------------------------- >> script_info.txt
echo Host name >> script_info.txt
echo ------------------------------------- >> script_info.txt
hostname >> script_info.txt
hostname
pause
goto begin
-----------------------
:option5
cls
echo Running task manager
echo ---------------------------
taskmgr
pause
goto begin
-----------------------
:option6
exit
-----------------------
:error
cls
echo unknown option, choose number between 1 and 9
echo ---------------------------------------------------------------------------------
pause
goto begin
-----------------------
:option7
cls
echo File preview
echo ------------------
more script_info.txt
pause
goto begin
-----------------------
:option8
cls
break > script_info.txt
goto begin
-----------------------
:option9
cls
del script_info.txt
goto begin
