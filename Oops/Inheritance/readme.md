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
