#### Class
Class is a user defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A class is like a blueprint for an object.

Example:
```cpp
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int area();
        int perimeter();
        void setLength(int l);
        void setBreadth(int b);
};
```

#### Access Specifiers
Access specifiers are used to specify the accessibility of the class members. There are three access specifiers in C++:
1. public
2. private
3. protected

#### Member Functions
Member functions are the functions that are defined inside the class. They can be used to access and modify the private data members of the class.

Example:
```cpp
class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        int area()
        {
            return length * breadth;
        }
        int perimeter()
        {
            return 2 * (length + breadth);
        }
        void setLength(int l)
        {
            length = l;
        }
        void setBreadth(int b)
        {
            breadth = b;
        }
};
```

#### Arrays within a class
Arrays can be used as data members of a class. They can be used to store multiple values of the same data type.

Example:
```cpp
class Array
{
    private:
        int A[10];
        int size;
        int length;
    public:
        void display();
        void append(int x);
        void insert(int index, int x);
        int delete(int index);
};
```

#### Array of objects
An array of objects can be created in C++. This is useful when we want to store multiple objects of the same class.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
};

int main()
{
    Complex C[5];
    for (int i = 0; i < 5; i++)
    {
        C[i].setReal(i + 1);
        C[i].setImaginary(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        C[i].display();
    }
    return 0;
}
```

#### Memory allocation of objects
Objects are created in the memory at runtime. The memory is allocated to the objects when they are created and deallocated when they are destroyed. The memory is allocated to the objects in the heap.

example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
};

int main()
{
    Complex *C = new Complex[5];
    for (int i = 0; i < 5; i++)
    {
        C[i].setReal(i + 1);
        C[i].setImaginary(i + 1);
    }
    for (int i = 0; i < 5; i++)
    {
        C[i].display();
    }
    delete []C;
    return 0;
}
```


#### Passing objects as arguments
Objects can be passed as arguments to functions. This is useful when we want to modify the object inside the function.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        void add(Complex C)
        {
            real = real + C.real;
            imaginary = imaginary + C.imaginary;
        }
};

int main()
{
    Complex C1, C2;
    C1.setReal(5);
    C1.setImaginary(5);
    C2.setReal(10);
    C2.setImaginary(10);
    C1.add(C2);
    C1.display();
    return 0;
}
```

#### Returning objects from functions
Objects can be returned from functions. This is useful when we want to return multiple values from a function.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }
};

int main()
{
    Complex C1, C2, C3;
    C1.setReal(5);
    C1.setImaginary(5);
    C2.setReal(10);
    C2.setImaginary(10);
    C3 = C1.add(C2);
    C3.display();
    return 0;
}
```

#### Function overloading
Function overloading is a feature in C++ which allows us to have multiple functions with the same name but different parameters. This is useful when we want to perform the same task for different types of data.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }
        Complex add(Complex C1, Complex C2)
        {
            Complex temp;
            temp.real = C1.real + C2.real;
            temp.imaginary = C1.imaginary + C2.imaginary;
            return temp;
        }
};

int main()
{
    Complex C1, C2, C3, C4;
    C1.setReal(5);
    C1.setImaginary(5);
    C2.setReal(10);
    C2.setImaginary(10);
    C3 = C1.add(C2);
    C3.display();
    C4 = C4.add(C1, C2);
    C4.display();
    return 0;
}
```

#### Operator overloading
Operator overloading is a feature in C++ which allows us to use operators like +, -, *, /, etc. with user-defined data types. This is useful when we want to perform operations on objects of a class.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }
};

int main()
{
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

#### Friend functions
Friend functions are functions which are not members of a class but have access to the private and protected members of the class. This is useful when we want to perform operations on objects of a class.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        friend Complex operator+(Complex C1, Complex C2);
};

Complex operator+(Complex C1, Complex C2)
{
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.imaginary = C1.imaginary + C2.imaginary;
    return temp;
}

int main()
{
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


#### Static members

Static members are members which are shared by all objects of a class. This is useful when we want to keep track of the number of objects of a class.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
        static int count;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        Complex()
        {
            count++;
        }
        static int getCount()
        {
            return count;
        }
};

int Complex::count = 0;

int main()
{
    Complex C1, C2, C3;
    cout << Complex::getCount() << endl;
    return 0;
}
```

#### This pointer

The this pointer is a pointer which points to the current object. This is useful when we want to access the members of the current object.

Example:
```cpp
class Complex
{
    private:
        int real;
        int imaginary;
    public:
        void setReal(int r)
        {
            real = r;
        }
        void setImaginary(int i)
        {
            imaginary = i;
        }
        void display()
        {
            cout << real << " + i" << imaginary << endl;
        }
        Complex add(Complex C)
        {
            this->real = this->real + C.real;
            this->imaginary = this->imaginary + C.imaginary;
            return *this;
        }
};

