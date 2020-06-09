@echo off
:loop
	generate.exe
	AC.exe 
	WA.exe 
	fc AC.txt WA.txt
if not errorlevel 1 goto loop 
pause
goto loop