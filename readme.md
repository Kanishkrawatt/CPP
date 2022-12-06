## C++

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

Now,
Difference In Some Basic Syntax

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
    ```
    example:
        int a = 10, b = 20, c = 30;
        cout<<a<<b<<c<<endl;
    ```
- **Pointer to member Operator**
    ```
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
    ```
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
    ```
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
    ```
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
    ```
    Associativity:
        1. Left to Right
        2. Right to Left
    ```


#### Reference variable

Reference variable is an alias name of another variable.

```cpp
int a = 10;
int &b = a;
```
