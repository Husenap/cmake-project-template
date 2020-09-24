@echo off

cmake . -B.build -Ax64
cmake --build .build/
cd .build/
ctest .
cd ..