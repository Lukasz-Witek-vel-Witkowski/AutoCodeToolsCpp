@echo off
del AddClass.exe
"C:\Program Files (x86)\MinGW\bin\g++" -Os -o AddClass -std=c++1y main.cpp file.cpp moduleclass.cpp filehpp.cpp filecpp.cpp interpreter.cpp 
AddClass.exe
del test.exe
"C:\Program Files (x86)\MinGW\bin\g++" -Os -o test -std=c++1y test.cpp UnitTest.cpp iteam.cpp iteammethod.cpp iteamvalue.cpp prototypeclass.cpp
test.exe