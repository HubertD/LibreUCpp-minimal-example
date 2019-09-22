# LibreUCpp-minimal-example
minimal project template for LibreUCpp projects

[![Build Status](https://travis-ci.org/LibreUCpp/LibreUCpp-minimal-example.png?branch=master)](https://travis-ci.org/LibreUCpp/LibreUCpp-minimal-example)

## Howto build

### Toolchain

You need reasonable fresh versions of cmake and arm-none-eabi-gcc to compile this example, e.g. via 

```
apt-get install cmake gcc-arm-none-eabi
```

Non-linux systems and clang might work as well, but you are on your own at the moment.


### Clone this repo

```
git clone --recursive https://github.com/LibreUCpp/LibreUCpp-minimal-example.git
```
This will checkout the example as well as the actual library as a submodule.


### Setup cmake build folder

Next, create a build environment, e.g.
```
cd LibreUCpp-minimal-example
mkdir build
cd build
cmake -DCMAKE_TOOLCHAIN_FILE=../external/LibreUCpp/toolchain-arm-none-eabi.cmake ..
```

### Build it
```
cmake --build .
```

That's pretty much all there is to it.
