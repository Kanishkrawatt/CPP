## C++

C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language, or "C with Classes".

The language has expanded significantly over time, and modern C++ now has [object-oriented](/Oops), generic, and functional features in addition to facilities for low-level memory manipulation. It is almost always implemented as a compiled language

| Content                                                           | Other Topics                                       |
| ----------------------------------------------------------------- | -------------------------------------------------- |
| [Difference between C and C++](#difference-between-c-and-c)       | [Object Oriented Programming(oops)](/Oops)         |
| [Input and Output in C and C++](#input-and-output-in-c-and-c)     | [Data Structure](</CPP(DSA)>)                      |
| [Constants in C++](#constants-in-c)                               | [Basic C++](</CPP(Basic)>)                         |
| [Literals](#literals)                                             | [Algorithms](/Algorithms)                          |
| [Qualifiers](#qualifiers)                                         | [Competitive Questions](/compe)                    |
| [Operators](#operators)                                           | [Operator Overloading](/Oops/OperatorOverloading/) |
| [Reference variable](#reference-variable)                         |
| [Functions](#functions)                                           |
| [Default Arguments](#default-arguments)                           |
| [Inline Function](#inline-function)                               |
| [Parameter Passing by Value](#parameter-passing-by-value)         |
| [Parameter Passing by Reference](#parameter-passing-by-reference) |
| [Parameter Passing by Pointer](#parameter-passing-by-pointer)     |
| [Constructor/Distructor](/Oops/Constructor-Distructor)            |

##### Difference between C and C++

| C                                                                | C++                                                         |
| ---------------------------------------------------------------- | ----------------------------------------------------------- |
| C was developed by **Dennis Ritchie** between _1969_ and _1973_. | C++ was developed by **Bjarne stroustrup** in _1979_.       |
| C is (mostly) a subset of C++.                                   | C++ is (mostly) a superset of C.                            |
| Is supports Procedural Programming.                              | It Support both Procedural and object Oriented Programming. |
| It Does not support Information hiding and encapsulation.        | It does support Information hiding and encapsulation.       |
| It is function-driven language.                                  | It is Object-drivedn language.                              |
| Standard I/O header is <stdio.h>.                                | Standard I/O header is <iostream.h>.                        |
| It provides **Malloc()** and **Calloc()** for memory allocation  | It provides **New** operator for memory allocation          |
| It provides **free()** for Memory de-allocation.                 | It provides **Delete**                                      |

##### Input and Output in C and C++

```cpp
// Output(print) in C
int a = 10;
printf("%d",a);

// Output(print) in C++
int a = 10;
cout<<a<<endl;

// Input value  in C
int a;
scanf("%d",a);

// Input value in C++
int a;
cin>>a;
```

##### Constants in C++

**const** modifier is used to create constants.<br>
Variables whose value cannot be changed once they are initalized.

```cpp
Syntax:
    const type variable_name = value;

```

```cpp
example:
int main()
{
    const int i = 10;
    i = 20   // Error ! Cann't change value of i
             // (since it is a constant)
}

```

##### Literals

Literals are data used for representing fixed point values that we can directly use in the code.

```cpp
example:
10, 20, 3.14, 'a', etc.

```

##### There are 4 types of literals

- Integer Literal

  ```
  - Decimal Literal
      examples:
          0, -1, 100, 20, etc.
  - Octal Literal (starts with 0)
      examples:
          045, 065, 043 , etc.
  - Hexadecimal Literal (starts with 0x)
      examples:
          0x8f, 0x2a, 0x721, etc.
  - Floating Point Literal
      It has a integer part, a decimal point,
      a fractional part , and an exponent part.
      example:
          3.14134, 4e-11 , 1E-5,

  ```

- Boolean Literal
  ```cpp
  - true
  - false
  ```
- Character Literal
  ```cpp
  - 'a'
  - 'b'
  - 'c'
  ```
- String Literal
  ```cpp
  - "Hello World"
  - "C++"
  ```

##### Qualifiers

Qualifiers are used to modify the meaning of the type.

- **const** : It is used to create constants.
- **volatile** : It is used to modify the variable.
- **restrict** : It is used to restrict the pointer.

##### Operators

Operators are used to perform operations on variables and values.

- **Arithmetic Operators**
  ```cpp
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
  - Modulus (%)
  - Increment (++)
  - Decrement (--)
  ```
- **Relational Operators**
  ```cpp
  - Equal to (==)
  - Not equal to (!=)
  - Greater than (>)
  - Less than (<)
  - Greater than or equal to (>=)
  - Less than or equal to (<=)
  ```
- **Logical Operators**
  ```cpp
  - Logical AND (&&)
  - Logical OR (||)
  - Logical NOT (!)
  ```
- **Bitwise Operators**
  ```cpp
  - Bitwise AND (&)
  - Bitwise OR (|)
  - Bitwise XOR (^)
  - Bitwise NOT (~)
  - Bitwise Left Shift (<<)
  - Bitwise Right Shift (>>)
  ```
- **Assignment Operators**
  ```cpp
  - Assignment (=)
  - Addition Assignment (+=)
  - Subtraction Assignment (-=)
  - Multiplication Assignment (*=)
  - Division Assignment (/=)
  - Modulus Assignment (%=)
  - Left Shift Assignment (<<=)
  - Right Shift Assignment (>>=)
  - Bitwise AND Assignment (&=)
  - Bitwise OR Assignment (|=)
  - Bitwise XOR Assignment (^=)
  ```
- **Miscellaneous Operators**
  ```cpp
  - Sizeof
  - Comma (,)
  - Ternary (?)
  - Pointer to member (.*)
  - Member of pointer (->*)
  ```
- **Conditional Operator**
  ```cpp
  Syntax:
      condition ? expression1 : expression2;
  ```
  ```cpp
  example:
      int a = 10;
      int b = 20;
      int c = a > b ? a : b;
      cout<<c<<endl;
  ```
- **sizeof Operator**
  ```cpp
  Syntax:
      sizeof (type)
  ```
  ```cpp
  example:
      int a = 10;
      cout<<sizeof(a)<<endl;
  ```
- **Comma Operator**
  ```cpp
  Syntax:
      expression1, expression2, expression3, ....
  ```
  ```cpp
  example:
      int a = 10, b = 20, c = 30;
      cout<<a<<b<<c<<endl;
  ```
- **Pointer to member Operator**
  ```cpp
  Syntax:
      object.*pointer_to_member
  ```
  ```cpp
  example:
      class A
      {
          int a;
          public:
              void set(int x)
              {
                  a = x;
              }
              int get()
              {
                  return a;
              }
      };
      int main()
      {
          A obj;
          obj.set(10);
          int A::*p = &A::a;
          cout<<obj.*p<<endl;
      }
  ```
- **Member of pointer Operator**
  ```cpp
  Syntax:
      pointer->*pointer_to_member
  ```
  ```cpp
  example:
      class A
      {
          int a;
          public:
              void set(int x)
              {
                  a = x;
              }
              int get()
              {
                  return a;
              }
      };
      int main()
      {
          A obj;
          obj.set(10);
          int A::*p = &A::a;
          cout<<obj->*p<<endl;
      }
  ```
- **Type Casting Operator**
  ```cpp
  Syntax:
      (type) expression
  ```
  ```cpp
  example:
      int a = 10;
      float b = (float) a;
      cout<<b<<endl;
  ```
- **Precedence and Associativity of Operators**
  ```cpp
  Precedence:
      1. ()
      2. ++, --
      3. *, /, %
      4. +, -
      5. <<, >>
      6. <, <=, >, >=
      7. ==, !=
      8. &
      9. ^
      10. |
      11. &&
      12. ||
      13. ?:
      14. =, +=, -=, *=, /=, %=, <<=, >>=, &=, ^=, |=
  ```
  ```cpp
  Associativity:
      1. Left to Right
      2. Right to Left
  ```

#### Reference variable

Reference variable is an alias/another name of another variable.

```cpp
Syntax:
    type &reference_variable = variable;
```

```cpp
example:
int a = 10;
int &b = a;
```

#### Functions

A function is a group of statements that together perform a task.

```cpp
Syntax:
    return_type function_name (parameter list)
    {
        body of the function
    }
```

```cpp
example:
    int add(int a, int b)
    {
        return a + b;
    }
```

##### Default Arguments

Default arguments are used to provide default
values to the parameters of a function.

```cpp
Syntax:
    return_type function_name (parameter list = default_value)
    {
        body of the function
    }
```

```cpp
example:
    int add(int a, int b = 10)
    {
        return a + b;
    }
    int main(){
        cout<<add(10)<<endl; // This will print 20
    }
```

##### Inline Function

Inline function is an enhancement feature that improves the execution time and speed of a program.

```cpp
Syntax:
    inline return_type function_name (parameter list)
    {
        body of the function
    }
```

```cpp
example:
    inline int add(int a, int b)
    {
        return a + b;
    }
    int main(){
        cout<<add(10, 20)<<endl; // This will print 30
    }
```

##### Parameter Passing by Value

When a function is called, the values of the actual parameters are copied to the formal parameters of the function. This is called parameter passing by value.

```cpp
example:
    void swap(int a, int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int main(){
        int a = 10, b = 20;
        swap(a, b);
        cout<<a<<b<<endl; // This will print 10 20
    }
```

##### Parameter Passing by Reference

When a function is called, It will give the address of the actual parameters to the formal parameters of the function. This is called parameter passing by reference.

It allows a function to modify a variable without having to create a copy of it.

```cpp
example:
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    int main(){
        int a = 10, b = 20;
        swap(a, b);
        cout<<a<<b<<endl; // This will print 20 10
    }
```

##### Parameter Passing by Pointer

When a function is called, It will pass the memory location of the actual parameters to the formal parameters of the function. This is called parameter passing by pointer.

```cpp
example:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int main(){
        int a = 10, b = 20;
        swap(&a, &b);
        cout<<a<<b<<endl; // This will print 20 10
    }
```

**Difference between Parameter Passing by Reference and Pointer**

| Parameter Passing by Reference                           | Parameter Passing by Pointer        |
| -------------------------------------------------------- | ----------------------------------- |
| It is **easy** to use.                                   | It is **difficult** to use.         |
| It is **faster** than pointer.                           | It is **slower** than reference.    |
| It is **safer** than pointer. because it cannot be NULL. | It is **not safer** than reference. |

##### New and Delete Operator

New and delete operator are used to allocate and deallocate memory dynamically.

```cpp
Syntax:
    new data_type;
    delete pointer;
```

```cpp
example:
    int *p = new int;
    *p = 10;
    cout<<*p<<endl; // This will print 10
    delete p;
```
