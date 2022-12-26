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
