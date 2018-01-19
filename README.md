# demangle
A program for making GNU mangled function names readable

## Usage

The program takes a list of mangled function names as command args. Each one will be demangled and printed out on a new line.
`demangle [mangled functions]`

for example: `demangle _Z11mangledNameiPc` should output:
`_Z11mangledNameiPc => mangledName(int, char*)`

## Installing

Standard compilation and installation with CMake:
Executable will be installed to `/usr/local/bin`
```
$ mkdir build
$ cd build
$ cmake .. 
$ make
$ sudo make install
```
