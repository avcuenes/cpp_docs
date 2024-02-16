# casting 

A cast operator is a unary operator which forces one data type to be converted into another data type

C++ support 4 types of casting:

1. Static Cast
2. Dynamic Cast
3. Const Cast
4. Reinterpret Cast


## Static Cast

This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types
and it can also call explicit conversion functions

```cpp
static_cast <dest_type> (source);
```

The return value of static_cast will be of dest_type

```cpp
// C++ Program to demonstrate
// static_cast
#include <iostream>
using namespace std;

// Driver code
int main()
{
	float f = 3.5;

	// Implicit type case
	// float to int
	int a = f;
	cout << "The Value of a: " << a;

	// using static_cast for float to int
	int b = static_cast<int>(f);
	cout << "\nThe Value of b: " << b;
}

```