#### Inheritance

Inheritance is a way to reuse code. It is a way to create a new class from an existing class. The new class is called a subclass (or derived class, or child class). The one it inherits from is called a superclass (or base class, or parent class). The Subclass inherits all the methods and variables from the superclass. It can also add its own methods and variables.

##### Types of Inheritance

There are 5 types of inheritance in C++:

- [Single Inheritance](#single-inheritance)
- [Multiple Inheritance](#multiple-inheritance)
- [Multilevel Inheritance](#multilevel-inheritance)
- [Hierarchical Inheritance]()
- [Hybrid Inheritance]()

##### Single Inheritance

In single inheritance, a class is allowed to inherit from only one class.

```cpp
Syntax:
class derived-class: access base-class
{
    //body of derived class
};
```

```cpp
Example:
// base class
class Base
{
public:
    void show()
    {
        cout << "Base class" << endl;
    }
};

// derived class
class Derived: public Base
{
public:
    void display()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    d.display();
    return 0;
}
```

Output:

```
Base class
Derived class
```

##### Multiple Inheritance

In multiple inheritance, a class is allowed to inherit from more than one class.

```cpp
Syntax:
class derived-class: access base-class1, access base-class2, ...
{
    //body of derived class
};
```

```cpp
Example:
// base class 1
class Base1
{
public:
    void show()
    {
        cout << "Base1 class" << endl;
    }
};

// base class 2
class Base2
{
public:
    void display()
    {
        cout << "Base2 class" << endl;
    }
};

// derived class
class Derived: public Base1, public Base2
{
public:
    void print()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    d.display();
    d.print();
    return 0;
}
```

Output:

```
Base1 class
Base2 class
Derived class
```

##### Multilevel Inheritance

In multilevel inheritance, a class is allowed to inherit from another derived class.

```cpp
Syntax:
class derived-class: access base-class
{
    //body of derived class
};
```

```cpp
Example:
// base class
class Base
{
public:
    void show()
    {
        cout << "Base class" << endl;
    }
};

// derived class 1
class Derived1: public Base
{
public:
    void display()
    {
        cout << "Derived1 class" << endl;
    }
};

// derived class 2
class Derived2: public Derived1
{
public:
    void print()
    {
        cout << "Derived2 class" << endl;
    }
};

int main()
{
    Derived2 d;
    d.show();
    d.display();
    d.print();
    return 0;
}
```

Output:

```
Base class
Derived1 class
Derived2 class
```

##### Hierarchical Inheritance

In hierarchical inheritance a class is allowed to inherit from more than one class.It is a special case of multiple inheritance.
It creates a tree like structure.

```cpp
Syntax:
class derived-class: access base-class
{
    //body of derived class
};
```

```cpp
Example:
// base class
class Base
{
public:
    void show()
    {
        cout << "Base class" << endl;
    }
};

// derived class 1
class Derived1: public Base
{
public:
    void display()
    {
        cout << "Derived1 class" << endl;
    }
};

// derived class 2
class Derived2: public Base
{
public:
    void print()
    {
        cout << "Derived2 class" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.show();
    d1.display();
    Derived2 d2;
    d2.show();
    d2.print();
    return 0;
}
```

Output:

```
Base class
Derived1 class
Base class
Derived2 class
```

##### Hybrid Inheritance

Hybrid inheritance is a combination of more than one type of inheritance. It is a combination of multiple inheritance and hierarchical inheritance.

```cpp
Syntax:
class derived-class: access base-class1, access base-class2, ...
{
    //body of derived class
};
```

```cpp
Example:
// base class 1
class Base1
{
public:
    void show()
    {
        cout << "Base1 class" << endl;
    }
};

// base class 2
class Base2
{
public:
    void display()
    {
        cout << "Base2 class" << endl;
    }
};

// derived class 1
class Derived1: public Base1, public Base2
{
public:
    void print()
    {
        cout << "Derived1 class" << endl;
    }
};

// derived class 2
class Derived2: public Base2
{
public:
    void print()
    {
        cout << "Derived2 class" << endl;
    }
};

int main()
{
    Derived1 d1;
    d1.show();
    d1.display();
    d1.print();
    Derived2 d2;
    d2.display();
    d2.print();
    return 0;
}
```

Output:

```
Base1 class
Base2 class
Derived1 class
Base2 class
Derived2 class
```

### Ambiguity Resolution

In C++, ambiguity occurs when a derived class inherits two or more base classes that have a member function with the same name. In such cases, the compiler is unable to determine which function to call. This is known as ambiguity.

```cpp
Example:
// base class 1
class Base1
{
public:
    void show()
    {
        cout << "Base1 class" << endl;
    }
};

// base class 2
class Base2
{
public:
    void show()
    {
        cout << "Base2 class" << endl;
    }
};

// derived class
class Derived: public Base1, public Base2
{
public:
    void print()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    d.print();
    return 0;
}
```

Output:

```
error: request for member 'show' is ambiguous
```

To resolve the ambiguity, we can use the scope resolution operator to specify the base class.

```cpp
Example:
// base class 1
class Base1
{
public:
    void show()
    {
        cout << "Base1 class" << endl;
    }
};

// base class 2
class Base2
{
public:
    void show()
    {
        cout << "Base2 class" << endl;
    }
};

// derived class
class Derived: public Base1, public Base2
{
public:
    void print()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.Base1::show();
    d.Base2::show();
    d.print();
    return 0;
}
```

Output:

```
Base1 class
Base2 class
Derived class
```

### Function Overriding

Function overriding is a feature that allows a derived class to override a function of its base class. When you override a function, it is recommended that you use the same name and the same number and type of parameters as the base class function.

```cpp
Example:
// base class
class Base
{
public:
    void show()
    {
        cout << "Base class" << endl;
    }
};

// derived class
class Derived: public Base
{
public:
    void show()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    return 0;
}
```

Output:

```
Derived class
```

### Aggregation

Aggregation is a type of association between two objects in object-oriented programming where one object "has" or "owns" another object. It is a relationship in which the composed object has an independent existence and can exist outside the scope of the object that contains it.

In an aggregation relationship, the lifetime of the composed object is not dependent on the lifetime of the object that contains it. This means that the composed object can be shared between multiple objects and can exist independently even after the object that contains it is destroyed.

```cpp
Example:
class Car {
private:
  Engine* engine;

public:
  Car(Engine* engine) : engine(engine) {}
  // car methods that use the engine
};

```

### Composition

In C++, composition is a way of designing a class by including other classes as member variables. Composition is a fundamental principle of object-oriented programming that allows you to create more complex objects by combining simpler ones.

In a composition relationship, the lifetime of the composed object is dependent on the lifetime of the object that contains it. This means that when an object that contains another object is destroyed, the contained object is also destroyed.

```cpp
Example:
class Engine {
  // engine implementation
};

class Car {
private:
  Engine engine;

public:
  // car methods that use the engine
};

```

### Difference between Aggregation and Composition

| Composition                                                                                                                       | Aggregation                                                                                                                |
| --------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------- |
| The composed object is a part of the containing object and can't exist without it.                                                | The aggregate object can exist independently from the object that contains it.                                                 |
| The containing object is responsible for the composed object's lifetime and management.                                           | The containing object does not have complete responsibility for the aggregate object's lifetime and management.                |
| The composed object is often created when the containing object is created and destroyed when the containing object is destroyed. | The aggregate object can be shared between multiple objects and can exist even after the object that contains it is destroyed. |
| The containing object is responsible for initializing the composed object.                                                        | The aggregate object can be created and initialized independently of the containing object.                                    |
| Changes to the containing object can affect the state of the composed object.                                                     | Changes to the containing object do not affect the state of the aggregate object.                                              |
| The composed object is usually implemented as a member variable of the containing object.                                         | The aggregate object can be implemented as a member variable, pointer, or reference of the containing object.                  |

### Virtual Base Class

A virtual base class is a base class that is used in multiple inheritance to avoid ambiguity. It is declared using the virtual keyword.

```cpp
Example:
// base class 1
class Base1
{
public:
    void show()
    {
        cout << "Base1 class" << endl;
    }
};

// base class 2
class Base2
{
public:
    void show()
    {
        cout << "Base2 class" << endl;
    }
};

// derived class
class Derived: public Base1, virtual public Base2
{
public:
    void print()
    {
        cout << "Derived class" << endl;
    }
};

int main()
{
    Derived d;
    d.show();
    d.print();
    return 0;
}
```

Output:

```
Base2 class
Derived class
```

### Constructors and Destructors in Inheritance

In C++, constructors and destructors are inherited by the derived class. The constructors of the base class are called in the order in which they are inherited. The destructors are called in the reverse order.

```cpp
Example:
// base class
class Base
{
public:
    Base()
    {
        cout << "Base class constructor"<<endl;
    }
    ~Base()
    {
        cout << "Base class destructor"<<endl;
    }
};

// derived class
class Derived: public Base
{
public:
    Derived()
    {
        cout << "Derived class constructor"<<endl;
    }
    ~Derived()
    {
        cout << "Derived class destructor"<<endl;
    }
};

int main()
{
    Derived d;
    return 0;
}
```

Output:

```
Base class constructor
Derived class constructor
Derived class destructor
Base class destructor
```
