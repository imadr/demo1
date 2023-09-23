@echo off
rem tcc.exe main.c -lgdi32 -luser32 -lopengl32
rem tcc.exe main.c -lgdi32 -luser32 -lopengl32 -Wl,-subsystem=gui
tcc.exe main.c -Wunused-macros -Wunused-local-typedefs -lgdi32 -luser32 -lopengl32 -Wl,-subsystem=gui
rem main.exe

rem start main.exe
rem del main_upx.exe
rem upx.exe -9 -o main_upx.exe main.exe
rem del main_squishy.exe
rem squishy-x64.exe -i main.exe -o main_squishy.exe