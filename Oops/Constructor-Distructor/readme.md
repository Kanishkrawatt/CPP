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
