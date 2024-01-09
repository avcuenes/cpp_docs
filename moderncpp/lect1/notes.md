#  Notes
![Alt text](<Screenshot from 2024-01-08 22-38-56.png>)
## What is a compiler ?

- A compiler is basically a program

- Convert program to binary
- clang++ main.cpp
  
The compiler performs 4 distinct actions to build your code:

1. Pre-process
   ```bash
   g++ -E main.cpp > main.i
   ```
2. Compile
   ```bash
   g++ -S main.i
   ```
3. Assembly
   ```bash
   g++ -c main.s
   ```
4. Link
    ```bash
    g++ main.o -o main
    ```

There is a lot of flags that can be passed compiling the code

- Enable all warnings, treat them as errors;
- -Wall,-Wextra,-Werror
- Optimization options;
  - -00 no optimization
  - -03 or -0fast full optimizations


![The Compiler](<Screenshot from 2024-01-08 22-45-36.png>)
## Libraries

- Collection of function implementations. 
- Library multiple object files that are logically connected
- Types of librarires;
  - Static : Faster , take a lot of space, become part of the end binary, named: lib*.a
  - Dynamic: Slower, can be copied , referenced by program , named lib*.so
- Create static lib;
  - ar rcs libname.a module.o module.o ....
- Static libraried are just archives just like

Function declaration sets up an interface;
```cpp
void FuncName(int param);
```
Function definition ;
```cpp
void FuncName(int Param){
   // codes
}
```

- Move all declarations to header files (*.hpp)

## What is linking

- The library is a binary object that contains the compiled implemenatation of some methods.


```bash
folder/
 ----- tools.hpp
 ----- tools.cpp
 ----- main.cpp
```
tools.hpp
```cpp
#pragma once // Ensure file is included only once
void MakeItSunny();
void MakeItRain();
```

tools.cpp
```cpp
#include "tools.hpp"
#include <iostream>
void MakeItRain(){
   std::cout << "Here! Now it rains \n";
}
void MakeItSunny(){std::cerr<< "not avaiable"}
```

main.cpp
```cpp
#include "tools.hpp"
int main() {
   MakeItRain();
   MakeItSunny();
}
```


Compile Modules:

```bash
c++ -std=c++17 -c tools.cpp -o tools.o
```
To see what is inside of the tools.o write the following command
```cpp
nm -gC tools.o
```

Organize modules into libraries:

```bash
ar rcs libtools.a tools.o 
```
Link Libraries when building code:
```bash
g++ -std=c++17 main.cpp -L . -ltools -o main
```



## Building systems

They began as shell scripts
Then turn into MakeFiles
And now into MetaBuild systems like CMake
- Cmake is not a build system
- Its build system generator
- You need to use an actual build system like Make and Ninja


Replace the build commands:
1.g++ -std=c++17 -c tools.cpp -o tools.o
2.ar rcs libtools.a tools.o
```bash
add_library(tools tools.cpp)
```
3.c++ -std=c++17 main.cpp -L . -ltools
add_executable(main main.cpp)
target_link_libraries(main tools)


Build a Cmake project

- Build process from the users perspective
1. cd <project folder>
2. mkdir build
3. cd build
4. cmake ..
5. make

- The build process is completely defined in CMakeLists.txt 
- and childrens src/CMakeLists.txt