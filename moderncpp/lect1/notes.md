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

![The Compiler](<Screenshot from 2024-01-08 22-45-36.png>)


![Alt text](<Screenshot from 2024-01-08 22-38-56.png>)