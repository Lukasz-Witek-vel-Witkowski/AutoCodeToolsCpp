@echo off
del AddClass.exe
"C:\Program Files (x86)\MinGW\bin\g++" -Os -o AddClass -std=c++1y main.cpp file.cpp moduleclass.cpp
AddClass.exe