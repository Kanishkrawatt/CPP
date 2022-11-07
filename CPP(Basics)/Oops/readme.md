# Class

Class is a user defined datatype which holds data and function.

- Data inside the class is called member data and function are called member functions.
  `The Binding of Data and the functions together into a single class type variable is called variable encapsulation, which one of the benefites of Object oriented Programming`

```
syntex:

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

```
syntex for defining the Function outside the class:

returntype classname::functionName(){
    cout<<"HEllo";
}
```

#### Object

It is an instence of a class that is varible of a class

```
syntex To declare Object:

ClassName ObjName;

```

`To access the elements we can use dot operator (Membership Operator)`

### Constructor

Types of Constructor

1. Copy constructor
2. Default constructor
3. Parameterize constructor

```
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

```
Class cube{
    public:
    int size:
    Cube(Cube &c1){ // Copy Constructor
        size = c1.size;
    }
}
```

How to Call the Copy Constructor

```
cube c2;
cube c3 (c2); // or cube c3 =c2;
```

### Destructors

```
Class cube{
    public:
    int size:
    ~Cube(){
    cout <<"Destructors";
    }
}
```

Properties:

- It is The instance member function of the Class
- The name of the destructor is same as the class but with a tilde(~)
- It can never be static
- It has not return type
- It takes no argument

