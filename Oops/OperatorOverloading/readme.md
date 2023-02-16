# Operator Overloading

Operator overloading is a feature that allows you to define the behavior of operators in your own classes. This is done by defining methods with special names, called operator methods. For example, the `+` operator is defined by the `__add__` method. The `+` operator is used to add two numbers, but you can also use it to concatenate two strings or merge two lists. This is possible because the `+` operator has different behaviors for different data types. This is called operator overloading.

```cpp
Operator's that can't be overloaded
1. Conditional (?:)
2. Scope resolution (::)
3. SizeOf (sizeof())
4. Membership (.)
5. Pointer to member (.*)
```

#### Overloading in Unary Operator

```cpp
Syntax:
return_type operator operator_symbol(){
    // Code
}
```

```cpp
class Unary{
    private:
        int data;
    public:
        void getdata(){
            cin>>data;
        }
        void display(){
            cout<<data;
        }
        void operator--(){
            data = --data;
        }
}
int main(){
    Unary U1;
    U1.getdata();
    --U1;
    U1.display();
}
```

#### Nameless Objects

In Object-Oriented Programming (OOP), a nameless object refers to an instance of a class that is created without assigning it to a variable. It is a temporary object that is created on-the-fly within an expression or statement and is used immediately.

```cpp
#include <iostream>

class MyClass {
public:
  void print() {
    std::cout << "Hello, World!" << std::endl;
  }
};

int main() {
  // Creating a nameless object of MyClass and calling the print method
  MyClass().print();
  return 0;
}

```
here , the nameless object is created and the print method is called on it. The object is destroyed after the print method is called.


#### Overloading Binary Operators

```cpp
Syntax:
return_type operator operator_symbol(class_name object_name){
    // Code
}
```

```cpp
class Binary{
    private:
        int data;
    public:
        void getdata(){
            cin>>data;
        }
        void display(){
            cout<<data;
        }
        void operator+(Binary B){
            data = data + B.data;
        }
}

int main(){
    Binary B1, B2;
    B1.getdata();
    B2.getdata();
    B1 + B2;
    B1.display();
}
```

#### Overloading with Friend Functions

```cpp
class Complex{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r){
            real = r;
        }
        void setImaginary(int i){
            imaginary = i;
        }
        void display(){
            cout<<real<<" + i"<<imaginary<<endl;
        }
        friend Complex operator+(Complex C1, Complex C2);
};

Complex operator+(Complex C1, Complex C2){
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.imaginary = C1.imaginary + C2.imaginary;
    return temp;
}

int main(){
    Complex C1, C2, C3;
    C1.setReal(5);
    C1.setImaginary(5);
    C2.setReal(10);
    C2.setImaginary(10);
    C3 = C1 + C2;
    C3.display();
    return 0;
}
```

#### Conversion between Basic Types and User-Defined Types

In C++, conversion between basic types and user-defined types is possible using several mechanisms provided by the language. These mechanisms allow for seamless integration of user-defined types with the built-in types of the language.

Here are some common mechanisms for conversion between basic types and user-defined types in C++:

Implicit conversion: C++ allows implicit conversion between certain types, including user-defined types, and basic types. For example, a user-defined type can be implicitly converted to an int if the user-defined type has an overloaded conversion operator that returns an int.

Explicit conversion: C++ allows explicit conversion between certain types, including user-defined types, and basic types. For example, a user-defined type can be explicitly converted to an int if the user-defined type has an overloaded conversion operator that returns an int.

Casting: C++ allows casting between certain types, including user-defined types, and basic types. For example, a user-defined type can be cast to an int if the user-defined type has an overloaded conversion operator that returns an int.

#### Implicit Conversion
In C++, implicit conversion is the process of converting one data type to another data type without the need for an explicit cast. For example, the following code snippet shows an implicit conversion from a user-defined type to a basic type.

```cpp
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(int r, int i){
            real = r;
            imaginary = i;
        }
        void display(){
            cout<<real<<" + i"<<imaginary<<endl;
        }
        operator int(){
            return real;
        }
};

int main(){
    Complex C1(5, 5);
    int x = C1; // Implicit conversion
    cout<<x;
    return 0;
}
```

#### Explicit Conversion / Casting

In C++, explicit conversion is the process of converting one data type to another data type with the need for an explicit cast. For example, the following code snippet shows an explicit conversion from a user-defined type to a basic type.


```cpp
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(int r, int i){
            real = r;
            imaginary = i;
        }
        void display(){
            cout<<real<<" + i"<<imaginary<<endl;
        }
        explicit operator int(){
            return real;
        }
};

int main(){
    Complex C1(5, 5);
    int x = (int)C1; // Explicit conversion
    cout<<x;
    return 0;
}
```








