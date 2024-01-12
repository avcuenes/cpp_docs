# C++ STL Library

## std::array 

```cpp
# include <array >
# include <iostream >
using std :: cout;
using std :: endl;

int main () {
std :: array <float , 3> data {10.0F, 100.0F, 1000.0F};

for (const auto& elem : data) {
     cout << elem << endl;
}

cout << std :: boolalpha ;
cout << "Array empty: " << data.empty () << endl;
cout << "Array size : " << data.size () << endl;
}
```
- #include <array> to use std::array
- store a collection of items of same type
- Create from data:
  - array<float,3> arr = {1.0f, 2.0f, 3.0f};
- Acces items with arr[i] indexing starts with 0
- Number of stored items: arr.size()
- Useful access aliases:
  - First item arr.from() = arr[0]
  - Last item: arr.back()   == arr[arr.size()-1]


## std::vector 
```cpp
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;


int main(){

    std::vector<int> numbers = {1,2,3};
    std::vector<std::string> names = {"nacho","cyrill"};

    names.eplace_back("roberto");

    cout << "first name" << name.front()<< endl;
    cout << "last name" << numbers.back() << endl;

    return 0;
}

```

- #include <vector> to use std::vector
- Vector is implemented as a dynamic table
- Acces stored items just like in std::array
- Remove all elements : vec.clear()
- Add a new item in one of two ways;
  - vec.emplace_back(value) 
  - vec.push_back(value)
- Use it ! It is fast and flexible
- consider it to be a default container to store
- collections of items any same type

## Optimize vector resizing

- std::vector size unkown
- Therefore a capcity is defined
- size is not capacity
- Many push_back/emplace_back operations force vector to change its capacity many times
- reserve(n) ensures that the vector has enough memory to  items
- The parameter n can even ve approximate
- This is very important optimization

```cpp

int main() {

    const int N = 100;
    
    vector<int> vec; // size 0 , capacity 0
    vec.reserve(N);  // size 0 , capacity 100

    for (int i = 0; , i < N ; ++i) {
        vec.emplace_back(i);
    }

    // vec ends with size 100 capacity 100
    vector<int> vec2;
    for (int i = 0; i < N ; ++i) {
        vec2.emplace_back(i);
    }
}   
```


## Containers in CV

Open3D::PointCloud

```cpp
std::vector<Eigen::Vector3D> points_;
std::vector<Eigen::Vector3D> normals_;
std::vector<Eigen::Vector3D> colors_;

```


## Size of container

sizeof()

```cpp
int data[17];
size_t data_size = sizeof(data) / sizeof(data[0]);
printf("size of array : %zu\n",data_size);
```

size()

```cpp
std::array<int, 17> data_{};
cout <<"size of array:" << data_.size()<<endl;
```

## Empty Container

No standard way of checking if empty

```cpp
int empty_arr[10];
printf("Array empty : %d\n", empty_arr[0] == NULL);
```

empty()

```cpp
std::vector<int> empty_vec {1,2,3};
std::cout << "array empty :" << empty_vec.empty()<< endl;
```


## Acces last element

```cpp
float f_arr[N] = {1.5,2.3};
cout << "last element" << f_arr.back()<< endl;
```




## Clear Elements 

External function call, doesnt always work with floating points

```cpp
char letters[5] = {'n','a'};

memset(letters, 0 , sizeof(letters));
```

```cpp
std::vector<char> letters_ = {'n', 'a', 'c'};

letters_.clear();
```

```cpp
std::string letters_right_{"nacho"};
letters_.clear();
```



## Why Containers?



