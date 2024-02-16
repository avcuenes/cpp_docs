# Pre process
cpp is the C language preprocessor, it is automatically used by your C compiler to transform your program before compilation. It is also termed as a macro processor because it is used to give abbreviations for the longer piece of code. It can only be used with C, C++ and Objective-C source code. Using with other programming languages may cause uncertain problems.
-P	Preprocesses input without producing line control information for the next pass of the C compiler.
-DName[=Definition]	Defines Name as in a #define directive. The default Definition is 1.

## #include #define #ifdef

cpp -P joke.txt

output : 
```bash
A man walks into 
a bar. Ouch!
ba-dum chh
```

### Macros
### define

cpp -P double.py

You can compile and run macros as python
cpp -P double.py | python

cpp -P beer.txt

### ifdef

cpp -P answer.txt

cpp -P -D REVEAL answer.txt
#### How is this used in C?

gcc -E hello.c

hello.c * angle brackets -> use the system search path

#include is not import

gcc -DDEBUG debug.c -o debug

# Compile
Type checking and linear processing
Everything has a single fixed type

Linear processing

You can only use whats declared above


## References
1. <https://www.ibm.com/docs/it/aix/7.1?topic=c-cpp-command>