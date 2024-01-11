# Static Keyword
1. Static Variables;When a variable is declared as static, space for it gets allocated for the lifetime of the program. Even if the function is called multiple times, space for the static variable is allocated only once and the value of the variable in the previous call gets carried through the next function call
```cpp
// C++ program to demonstrate
// the use of static Static
// variables in a Function
#include <iostream>
#include <string>
using namespace std;

void demo()
{
	// static variable
	static int count = 0;
	cout << count << " ";

	// value is updated and
	// will be carried to next
	// function calls
	count++;
}

int main()
{
	for (int i = 0; i < 5; i++)
		demo();
	return 0;
}

```

Output;

```cpp
0 1 2 3 4 
```
2. Static Member of Class;  When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.
   


## Reference
1.<https://www.geeksforgeeks.org/static-keyword-cpp/>
2.<https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm>