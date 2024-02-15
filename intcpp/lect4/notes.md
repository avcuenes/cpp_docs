# Wait... was that really C++? 
- The new operator allocates space on the heap
- new and delete take the place of malloc and free
```cpp
int * numArray = new int[100];

delete numArray;

struct foo * bar = new struct foo; // delete later
```







