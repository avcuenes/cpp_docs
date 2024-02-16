# C++ Casts

```cpp
// C cast
char *buf = (char *)malloc(128);

// C-style cast
float b = 98.6;

int a = int(b);
```

```cpp
// C-style cat casts
class Cat { };
class Tiger : public Cat { };
class Persian : public Cat { };
Tiger *t = new Tiger;
Cat *c1 = (Cat *)t;
Cat *c2 = static_cast<Cat *>(t);

Cat *c3 = dynamic_cast<Cat *>(t);

```



