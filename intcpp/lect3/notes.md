# Data Structes and Debugging

## Memory Issuess
- Illegal memory accesses (segmentation faults)
- Stack overflow
  - Infinite recursions
- Double frees
- Dangerous use of uninitialized variables
- Memory Leaks

### Memory Leaks
- Since memory is user managed, there can be mistakes.
- Memory leaks = allocated memory that’s not freed.

### Valgrind

• A memory profiling tool. Helps you find memory leaks.
• Compile with debug mode (using -g flag). 
Includes tools such as memcheck, cachegrind, callgrind,
etc…

▫ valgrind --tool=tool_name ./program_name 
▫ Example: valgrind --tool=memcheck ./hello_world

• Can also detect invalid pointer use 
```
 char *arr = malloc(10);
arr[10] = ‘a’

```
• Using uninitialized variables 
```cpp
int x;
if(x==0){…}

```
Valgrind doesn’t check bounds on statically
allocated arrays though

## User Defined Data Types 

C has no objects, but has data structures that can
help fill in roles. Only contains data.

• Structures and unions are like data objects 

 Contains groups of basic data types
▫ Can be used like any normal type
▫ Not true objects b/c they can’t contain functions


## Structures

Declaring structs

struct person{
int age;

char name[50];

};

struct person joe;


● Accessing members: . operator
● instance_name.struct_member
● joe.age 


Initializing structs
▫ struct student ｛
int id;
char grade;
};
struct student frank= {1, ‘A’};

• Struct pointers: 
▫ struct student * frank= malloc(sizeof(struct student)); 

Accessing members of struct pointers: ->
▫ frank->grade = 'A' // Hooray (for me)! 

• Can have structs within structs. Just use more .
or -> operators to access inner structs.


### Struct Memory
• Struct size != sum of member sizes 
• All members must “align” with largest member
size 
• Each member has own alignment requirements




● Blackboard Example:

struct x{

char a; //1-byte, must be 1-byte aligned
short b; //2-bytes, must be 2-byte aligned
int c; // Biggest member (4-bytes). X must be 4-byte
// aligned

char d;

} 


## Typedef

• Typedef assigns alternate name to existing type.
– typedef existing_type alternate_name
typedef int seconds_t;

seconds_t x = 3;

typedef struct person person;

person frank; // instead of struct person frank

• Good for shorthand and code readability 

## Debugger (Your LifeSaver)

• Compile with –g flag (debug mode) 


Useful commands:
▫ q/quit: exit GDB
▫ r/run: run program
▫ b/break (filename:)linenumber: create a
breakpoint at the specified line.
▫ s/step: execute next line, or step into a function

▫ c/continue: continue execution
▫ p variable: print the current value of the variable

▫ bt: print the stack trace (very useful!)