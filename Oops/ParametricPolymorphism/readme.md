## Parametrc Polymorphism

Parametric polymorphism is a way to write code that can work with any type. It is a way to write code that is generic over types. 

### Generic code

Generics is the idea to allow type (Integer, String, … etc and user-defined types) to be a parameter to methods, classes and interfaces. For example, classes like an array, map, etc, which can be used using generics very efficiently. We can use them for any type.

The method of Generic Programming is implemented to increase the efficiency of the code. Generic Programming enables the programmer to write a general algorithm which will work with all data types. It eliminates the need to create different algorithms if the data type is an integer, string or a character.

The advantages of Generic Programming are

- Code Reusability
- Avoid Function Overloading
- Once written it can be used for multiple times and cases

### Generic functions

Generic functions are functions that are generic over types. Generic functions are functions that can work with any type. Generic functions are functions that can work with any value. Generic functions are functions that can work with any function.

```cpp
#include <iostream>
#include <string>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << add<int>(1, 2) << endl;
    cout << add<double>(1.0, 2.0) << endl;
    cout << add<string>("Hello ", "World") << endl;
    return 0;
}
```

### Generic classes

Generic classes are classes that are generic over types. Generic classes are classes that can work with any type. Generic classes are classes that can work with any value. Generic classes are classes that can work with any function.

```cpp
example:
template <class T>
class Adder
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
};

int main()
{
    Adder<int> adder;
    cout << adder.add(1, 2) << endl;
    return 0;
}
```

Generic Programming with Templates, Introduction, function templates/generic
functions, characteristics, overloading of template functions, class templates, template arguments.

## Overloading of template functions
Overloading of template functions is the ability to overload a template function.

```cpp
#include <iostream>
using namespace std;

template <class T>
T add(T a, T b)
{
    return a + b;
}

T add(T a, T b, T c)
{
    return a + b + c;
}

int main()
{
    cout << add<int>(1, 2) << endl;
    cout << add<int>(1, 2, 3) << endl;
    return 0;
}
```

### Template arguments
Template arguments are the types that are passed to the template. Template arguments are the values that are passed to the template. Template arguments are the functions that are passed to the template.

```cpp
#include <iostream>
using namespace std;

template <class T, class U>
T add(T a, U b)
{
    return a + b;
}

int main()
{
    cout << add<int, int>(1, 2) << endl; // Here T is int and U is int
    cout << add<int, double>(1, 2.0) << endl; // Here T is int and U is double
    return 0;
}
```
