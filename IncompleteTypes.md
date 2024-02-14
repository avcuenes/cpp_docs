# Incomplete Types 
An incomplete type is a type that describes an identifier but lacks information needed to determine the size of the identifier. An incomplete type can be:

- A structure type whose members you have not yet specified.

- A union type whose members you have not yet specified.

- An array type whose dimension you have not yet specified.

For example, to create structure pointer like following:

```cpp
struct student *ps;
```

To complete the structure you can use the following commands:

```cpp
struct student
{
    int num;
}                   
```

## References
1.<https://learn.microsoft.com/en-us/cpp/c-language/incomplete-types?view=msvc-170>