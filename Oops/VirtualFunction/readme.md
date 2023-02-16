Virtual Functions: Need for virtual functions, 
pointer to derived class objects, pure virtual functions, abstract classes

### Virtual Functions

Virtual functions are used to achieve runtime polymorphism. A virtual function is a function that is declared within a base class and is re-defined (Overriden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the function.

example:

```cpp
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << " In Base \n";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "In Derived \n";
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
```

Output:

```cpp

In Derived

```

#### Need for virtual functions

When we use a pointer or a reference of base class type to refer to a derived class object, we can only call the functions that are defined in the base class. If we try to call a function that is not defined in the base class, the compiler will give an error. For example:


#### pointer to derived class objects

When we use a pointer or a reference of base class type to refer to a derived class object, we can only call the functions that are defined in the base class. If we try to call a function that is not defined in the base class, the compiler will give an error. For example:

```cpp
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << " In Base \n";
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "In Derived \n";
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
```

Output:

```cpp

In Derived

```

#### pure virtual functions

A pure virtual function is a virtual function for which we do not have an implementation. A class that contains a pure virtual function is called an abstract class. An abstract class cannot be used to instantiate objects. We can only use pointers and references of abstract classes. An abstract class is useful when we want to provide a common interface for a group of derived classes. For example, consider the following code:

```cpp

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show() = 0;
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "In Derived \n";
    }
};

int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->show();
    return 0;
}
```

Output:

```cpp

In Derived

```


#### abstract classes

A pure virtual function is a virtual function for which we do not have an implementation. A class that contains a pure virtual function is called an abstract class. An abstract class cannot be used to instantiate objects. We can only use pointers and references of abstract classes. An abstract class is useful when we want to provide a common interface for a group of derived classes. For example, consider the following code:

```cpp

#include <iostream>
using namespace std;

// An abstract class
class Base
{
public:
    virtual void show() = 0;
};

```

Since the show() function is pure virtual, Base is an abstract class. We cannot create objects of Base class. The following code will give an error at compile time

