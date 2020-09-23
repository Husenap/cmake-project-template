@echo off

cmake . -B.build -Ax64 -DPROJECT_NAME_BUILD_TESTS=ON
cmake --build .build/
cd .build/
ctest .
cd ..