### Constructor

Types of Constructor

1. Copy constructor
2. Default constructor
3. Parameterize constructor

```cpp
class Cube{
    public:
    int size;
    Cube(int i){   // Parameterize constructor
        size=i;
    }
    Cube(){       // Default Constructor
        size=10;
    }
}
```

Copy constructor is use to copy the content from one object to another

```cpp
Class cube{
    public:
    int size:
    Cube(Cube &c1){ // Copy Constructor
        size = c1.size;
    }
}
```

`Multiple constructor can be defined in a class`

### Destructor

Destructor is use to free the memory allocated to the object

```cpp
Class cube{
    public:
    int size:
    ~Cube(){ // Destructor
        cout<<"Destructor called";
    }
}
```

Properties:

- It is The instance member function of the Class
- The name of the destructor is same as the class but with a tilde(~)
- It can never be static
- It has not return type
- It takes no argument
