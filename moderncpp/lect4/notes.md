# I/O Files, Classes

## c++ Utilities

C++ include a variety of utility libraries that provide
functionality ranging from bit-counting to partial function application

These libraries can be broadly divied into two grouos

- language support lib
- general-purpose lib
  
## Language support

provide classes and fuctions that interact closely with language features and support common language idioms


- Type support (std::size_t)
- Dynamic memory management (std::shated_ptr)
- Error handling (std::exception, assert)
- Initializer list (std::vector{12})

## General-purpose utilisties
- program utilities (std::abort)
- Date and Time (std::chrono::duration)
- Optional, variant and any (std::variant)
- Pairs and tuples(std::tuple)
- Swap,forward and mode(std::move)


## std::swap

```cpp
int main() {
    int a = 3;
    int b = 5;

    //before
    std::cout << a << ' ' << b << '\n';

    std::swap(a,b);

    //after
    std::cout << a ' ' << b << '\n';

}
```

Output 

```
3 5
5 3
```



## std::variant






```cpp
int main() {
    std::variant <int , float> v1;
    v1 = v2; // v contaions int

    cout << std::get<int>(v1) << endl;

    std::variant<int, float> v2{3.14f};

    cout << std::get<1>(v2) << endl;

    v2 = std::get<int>(v1) ; // assigns v1 to v2
    v2 = std::get<0>(v1); // same as previous line
    v2 = v1;                // same as previous line
    cout << std::get<int>(v2) << endl;
}
```

output :
 
```
12
3.14
12
```

## std::any

```cpp
int main() {
    std::any a; // any type

    a = 1; // int 

    cout << any_cast<int>(a) << endl;

    a = 3.14; // double
    cout << any_cast<double(a)<< endl;

    a = true;
    cout << std::boolalpha << std::any_cast<bool>(a) << endl;
}

```

## std::optional

```cpp
std::optional <std::string> StringFactory(bool create) {
    if(create) {
        return "Modern C++ is Awesome"
    }

    return {};
}

int main(){
    cout << StringFactory(true).value() << '\n';
    cout << StringFactory(false).value_or(":(") << '\n';
    
}
```

## std::tuple

```cpp
int main() {
    std::tuple<double,char,string> student1;
    using Student = std::tuple<double, char, string>;
    Student student2{1.4, 'A', 'jose'};
    PrintStudent(student2);
    
}

```




