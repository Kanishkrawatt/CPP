## Exception handling
Exception handling is a mechanism that allows you to handle errors in a program.
It is a way to deal with errors in a controlled manner.


## Exception handling model
The exception handling model is a model that describes how exceptions are
handled in a program. The exception handling model is a three-step process:
- The exception is thrown.
- The exception is caught.
- The exception is handled.

### The exception is thrown
An exception is thrown when an error occurs in a program. The exception is thrown
using the `throw` keyword.

```cpp
throw ExceptionType();
```

### The exception is caught
An exception is caught when the exception is handled by a `catch` block.

```cpp
try
{
    // Code that might throw an exception
}
catch (ExceptionType1 e1)
{
    // Code that handles the exception
}
```

### The exception is handled
When an exception is caught, the exception is handled by the `catch` block. The
exception is handled by the `catch` block using the `throw` keyword.

```cpp

try
{
    // Code that might throw an exception
}
catch (ExceptionType1 e1)
{
    // Code that handles the exception
    throw;
}
```

## Exception handling example
The following example demonstrates how to handle an exception.

```cpp
#include <iostream>
using namespace std;

int main()
{
    try
    {
        int number1 = 0;
        cout << "Enter a number: ";
        cin >> number1;

        int number2 = 0;
        cout << "Enter another number: ";
        cin >> number2;

        if (number2 == 0)
        {
            throw 0;
        }

        cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
    }
    catch (int number)
    {
        cout << "An exception occurred. Division by zero is not possible." << endl;
    }

    return 0;
}
```

### Exception types
There are two types of exceptions:
- Checked exceptions
- Unchecked exceptions

#### Checked exceptions
Checked exceptions are exceptions that are checked at compile time. If a method
throws a checked exception, the method must either handle the exception or
specify the exception using the `throws` keyword.

#### Unchecked exceptions
Unchecked exceptions are exceptions that are not checked at compile time. If a
method throws an unchecked exception, the method does not have to handle the
exception or specify the exception.

### Catching and handling exceptions
You can catch an exception using the `try` and `catch` keywords. The `try` block
contains the code that might throw an exception. The `catch` block contains the
code that handles the exception.

```cpp
try
{
    // Code that might throw an exception
}
catch (ExceptionType1 e1)
{
    // Code that handles the exception
}
```

### Generic catch 
In C++, you can catch all exceptions using the generic catch. The generic catch
is a catch that catches all exceptions. The generic catch is specified using the
`...` ellipsis.

```cpp
try
{
    // Code that might throw an exception
}
catch (...)
{
    // Code that handles the exception
}
```

### Rethrowing an exception
You can rethrow an exception using the `throw` keyword. The `throw` keyword
rethrows the exception that was caught by the `catch` block.

```cpp
try
{
    // Code that might throw an exception
}
catch (ExceptionType1 e1)
{
    // Code that handles the exception
    throw;
}
```

### Specifying exceptions for a function
You can specify exceptions for a function using the `throw` keyword. The `throw`
keyword specifies the exceptions that a function might throw.

```cpp
void function() throw (ExceptionType1, ExceptionType2)
{
    // Code that might throw an exception
}
```

