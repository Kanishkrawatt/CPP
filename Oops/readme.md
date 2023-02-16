# OOps (Object oriented Programming)

Object Oriented Programming is a programming model which is based upon the concept of objects.

| Content                                                     |
| ----------------------------------------------------------- |
| [Procedural Programming](#procedural-programming)           |
| [Object Oriented Programming](#object-oriented-programming) |
| [Class](#class)                                             |
| [Object](#object)                                           |
| [Encapsulation](#encapsulation)                             |
| [Polymorphism](#polymorphism)                               |
| [Inheritance](#inheritance)                                 |
| [Abstraction](#abstraction)                                 |
| [Constructor-Destructor](/Oops/Constructor-Destructor)      |

## Difference Between Procedural And Object oriented

### Procedural Programming

Procedural Programming can be defined as a programing Model which is derived from structured Programming
Ex:- C

### Object Oriented Programming

Object Oriented Programming can be defined as a programming model which is based upon the concept of objects.
Ex:- C++

| Procedural                                                | Object Oriented                                          |
| --------------------------------------------------------- | -------------------------------------------------------- |
| Follows Top-Down approach.                                | Follows Bottom-Up approach.                              |
| Program is Divided into small parts called **functions**. | Program is Divided into small parts called **objects** . |
| No access specifier.                                      | Has access specifier.(Public,Private,Protected).         |
| Less Secure.                                              | More Secure.                                             |
| Overloading is not possible.                              | Overloading is possible .                                |
| No data hiding and Inheritance.                           | Data hiding and Inheritance is used.                     |
| Function is more Important than Data                      | Data is More Important than Function.                    |
| Examples: C , Pascal                                      | Examples: C++ , Java , Python                            |

### Some Basic Concepts Of Object Oriented Programming

- Class
- Objects
- Encapsulation
- Polymorphism
- Inheritance
- Abstraction

# [Class](/Oops/Class)

Class is a user defined datatype which holds data and function.

- Data inside the class is called member data and function are called member functions.
  `The Binding of Data and the functions together into a single class type variable is called variable encapsulation, which one of the benefites of Object oriented Programming`

```cpp
syntax:

class classname
{
access_specifier_1: MemberData1,MemberFunction1
access_specifier_2: MemberData2,MemberFunction2
access_  specifier_3: MemberData3,MemberFunction3
};
```

access_specifier tells the visiblity or scope
Type of Access Specifier

1. Public : It's member are accessible everywhere
2. Private : It's member are only accessible inside the class
3. Protected : It's member are only accessible inside the class and the class that is derived from that class

```cpp
syntax for defining the Function outside the class:

returntype classname::functionName(){
    cout<<"HEllo";
}
```

#### Object

It is an instence of a class that is varible of a class

```cpp
syntax To declare Object:

ClassName ObjName;

```

`To access the elements we can use dot operator (Membership Operator)`

#### Encapsulation

In Object Oriented Programming , Encapsulation is the concept of Wrapping of data and information in a single unit.
A formale defination of encapsulation would be :
`Encapsulation is binding togather the data and related function that can manipulate data.`

```cpp
example:
class Encapsulation{
    int data1, data2;
    public:
        void func1(){
            cout<<"This a Function";
        }
}

Here,
data1, data2, func1 is encapsulated inside the class Encapsulation

```

#### Polymorphism

The name defines Itself , Poly = "Multiple"&nbsp;&nbsp;morphism = "Forms" &nbsp;&nbsp;=> Multiple Forms <br>
Which means Polymorphism is the ability of object oriented programming to do some work using multiple forms.

```cpp
example:
class Polymorphism{
    public:
        void add(int a,int b){
            return a+b;
        }
        void add(int a,int b,int c){
            return a+b+c;
        }
}

Here,
Add function can add 2 numbers (if we pass 2 variables)
or it can add 3 numbers (if we pass 3 variables)
```

#### [Inheritance](/Oops/Inheritance)

Inheritance is a way to reuse code. It is a way to create a new class from an existing class. The new class is called a subclass (or derived class, or child class). The one it inherits from is called a superclass (or base class, or parent class). The Subclass inherits all the methods and variables from the superclass. It can also add its own methods and variables.

```cpp
Syntax:
class <derived_class_name>:<Access-Specifier> <base_class_name>{
    // Data
}
```

##### Types of Modes (Access-Specifiers)

- **Public Mode** : All the Public data of base class is saved in Public of Derived class, Private data of the base class is saved in Protected of the Derived Class.
- **Private Mode** : All the Public,Protected data of base class is saved in private of Derived class.
- **Protected Mode** : All the Public,Protected data of base class is saved in protected of Derived class.

```cpp
Example:
class Base{
    public:
        int data1;   // Data Member
        void function1(int a){
            cout<<"The variable Is : "<<a;
        }
}

class Derived:Public Base{

}
int main(){
    Base B1;
    B1.function1(3);
}
// Output: The variable Is :3
```

### Abstraction

Abstraction means Displaying only essential Information and hiding the details . Data abstraction refers to providing only essential information about the data and hiding the background details or implementation.<br>
example:<br>
Man Driving a Car : Here he only knows that by pressing the accelerator will increase the speed and breaks will stop the car but he does not know how.

```cpp
example:
class implementAbstraction {
private:
    int a, b;

public:
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
Here we are not allowed to access the variable a and b directly,
however,
set() function call access it and modify the values of A and B.
```

##### Applications of OOps

- Mobile applications (particularly Android based) :
  Mobile applications are developed using OOPs concepts. The Android SDK is written in Java and the Android operating system is based on the Linux kernel. The Android SDK provides a set of tools and APIs that allow developers to write applications using the Java programming language.
- Games :
  Games are developed using OOPs concepts. The game engine is written in C++ and the game is developed using C++. The game engine provides a set of tools and APIs that allow developers to write games using the C++ programming language.
- Graphical User Interface Design
  GUI is developed using OOPs concepts. The GUI toolkit is written in C++ and the GUI is developed using C++. The GUI toolkit provides a set of tools and APIs that allow developers to write GUI using the C++ programming language.
- Web Applications
  Web applications are developed using OOPs concepts. The web application framework is written in Java and the web application is developed using Java. The web application framework provides a set of tools and APIs that allow developers to write web applications using the Java programming language.

##### Benefits of OOps

- Troubleshooting is easier with the OOP language :
  The OOP language is easier to troubleshoot because it is more organized and structured.
- Code Reusability :
  Reusability is one of the most important benefits of OOP. It allows you to reuse the code and save time and effort.
- Productivity :
  Productivity is another important benefit of OOP. It allows you to develop the application faster and more efficiently.
- Data Redundancy :
  Data redundancy is another important benefit of OOP. It allows you to avoid data redundancy and save time and effort.
- Code Flexibility :
  Code flexibility is another important benefit of OOP. It allows you to change the code easily and quickly.
- Solving problems :
  OOP allows you to solve the problems easily and quickly.
- Security :
  OOP allows you to develop the application more securely.

#### Scope Resolution Operator

It is used to access Global variable when there is a Local variable with the same name.
and also used to define or access the function and data outside the class.It is also used to access the static variable and function.<br>
It is denoted by :: (double colon) operator.

```cpp
syntax:
ClassName::functionName();
```

#### Access Specifiers

Access Specifiers are used to define the scope of the data and function within the class.

There are 3 types of Access Specifiers in C++.

1. Public
   ```cpp
   class AccessSpecifier{
       public:
           int data1;
           void function1(){
               cout<<"This is a function";
           }
   }
   We can access the data and function anywhere in the program.
   with the help of dot operator (.) .
   ```
2. Private
   ```cpp
   class AccessSpecifier{
       private:
           int data1;
           void function1(){
               cout<<"This is a function";
           }
   }
   We can access the data and function only inside the class.
   ```
3. Protected
   ```cpp
   class AccessSpecifier{
       protected:
           int data1;
           void function1(){
               cout<<"This is a function";
           }
   }
   We can access the data and function only inside the class and the class that is derived from that class.
   ```

### Arrays within Class

```cpp
class Array{
    private:
        int arr[5];
    public:
        void getdata(){
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
        }
        void display(){
            for(int i=0;i<5;i++){
                cout<<arr[i]<<" ";
            }
        }
}

Here,
arr is an array of size 5.

```

### Array of Objects

```cpp
class Array{
    private:
        int data;
    public:
        void getdata(){
            cin>>data;
        }
        void display(){
            cout<<data;
        }
}

int main(){
    Array A[5];
    for(int i=0;i<5;i++){
        A[i].getdata();
    }
    for(int i=0;i<5;i++){
        A[i].display();
    }
}
```

### Memory Allocation of Objects

```cpp
class Memory{
    private:
        int data;
    public:
        void getdata(){
            cin>>data;
        }
        void display(){
            cout<<data;
        }
}

int main(){
    Memory *ptr = new Memory;
    ptr->getdata();
    ptr->display();
}
```

### Operator Overloading

We give Special meaning to a particular operator

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
