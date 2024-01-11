# Core ++ The Legals

## C++ Keywords
Certain words in a C++ program have special meaning and these are known as keywords

```cpp
const,  auto, friend, false , ... /// c++ keywords
"Hello C++\n" /// \n is an escape characters
```

## C++ Entities
The entities of a C++ program are values, objects, references, functions, enumerators, types
,class members , templates, template, specializations, namespaces


```cpp
3.f;                    //value entity
std::string st1;        //object entity
namespace std;          //namespace entity
void MyFunc();          //function entity
const int& a = b;       //reference entity
enum myenum {};         //enum entity
#define mac;            // not entity
```

## C++ Declarations

Declarations may introduce entities, associate them with names and define their properties.

```cpp
int foo;            // introduce entity named "foo"

void myfunc();      // introduce entity named myfunc
```

## C++ Definitions

Definitions of functions usually include sequences of statements, some of which include expressions, 
which specify the computations to be performed by the program

```cpp
// function definition
void function(){
    int a;
    int b;
}
```


## C++ Names
Names encountered in a program associated with the declarations that introduced them. Each name is only valid
within a part of the program called it scope


```cpp
int my_var;         // my_var is the names
```


## C++ Types

each object,reference,function, expression in c++ is associated with a type, which may be funcdamental , compound, or user-defined, complete or incomplete

```cpp
float a;            // float is the fundamental type of a
bool b;             // bool is fundamental


mytype c;           // Mytype is user defined
```

## C++ Variables

Declared objects and declared references are variables , expext for non-static data menmers

```cpp
int foo;         // variable
bool a;         // variable

mytype var;         // variable
mytype::var;        // static data member
mytype.data_member  // non-static data member
```


 
