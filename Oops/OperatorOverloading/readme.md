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

In C++, there are two types of conversions: implicit conversions and explicit conversions. Implicit conversions are performed automatically by the compiler when a value is assigned to a variable or passed as an argument to a function. Explicit conversions are performed using casting operators to convert a value of one type to another type.

Here's an overview of conversion between basic types and user-defined types in C++:

Conversion between Basic Types
C++ supports several conversions between basic types, including:

Integer to float/double conversion: An integer can be converted to a float or double by simply assigning it to a float or double variable.

Floating-point to integer conversion: A float or double can be converted to an integer by using a cast or the static_cast operator. The conversion truncates the fractional part of the floating-point number.

Boolean to integer conversion: A Boolean value true is converted to the integer value 1, and false is converted to 0.

Conversion between User-Defined Types
User-defined types can be converted to other types using constructor functions, conversion operators, and explicit casting.

Conversion using Constructor Functions: A constructor function can be defined to convert an object of one class to an object of another class. For example, a constructor can be defined in a class to convert from an integer to the class.

Conversion using Conversion Operators: A conversion operator can be defined in a class to convert an object of that class to an object of another class or a basic type.

Explicit Conversion: Explicit conversion can be performed using the cast operators, such as the static_cast and dynamic_cast operators. These operators allow explicit conversion between types, which can be useful when there is a need to convert a user-defined type to a basic type or another user-defined type.

Code

```
class MyClass {
public:
  int value;

  MyClass(int v) {
    value = v;
  }

  operator int() {
    return value;
  }
};

int main() {
  MyClass obj(10);
  int i = obj; // Implicit conversion using the conversion operator
  std::cout << "i = " << i << std::endl;

  MyClass obj2 = 20; // Implicit conversion using the constructor
  std::cout << "obj2.value = " << obj2.value << std::endl;

  int j = static_cast<int>(obj); // Explicit conversion using the static_cast operator
  std::cout << "j = " << j << std::endl;
  return 0;
}

```
