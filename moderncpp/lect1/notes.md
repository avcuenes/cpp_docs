#  Notes

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

![The Compiler](<Screenshot from 2024-01-08 22-45-36.png>)


![Alt text](<Screenshot from 2024-01-08 22-38-56.png>)