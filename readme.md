# C-Game

An awesome game made with C and raylib!

## Building

### CMake

The most recommended way to build this game is using [CMake](https://cmake.org)
```
mkdir build

cd build

cmake ..

cmake --build .
```
it supports all compilers and works well, but if you don't want to do that

### Makefile (Windows only)

If you don't have make or GCC, you should get it from [here](https://github.com/skeeto/w64devkit/releases)
after doing that you'll need to move the `raylib` folder to the C: drive inside a folder called `raylib` as well
and in the end you can just run `make` and you'll have the game ready in the `build` folder!