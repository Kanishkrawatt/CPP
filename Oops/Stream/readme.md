## C++ Streams
C++ Streams are used to perform input and output operations. C++ provides a set of classes to perform input and output operations. These classes are defined in the header file iostream. The iostream header file contains the declaration of the following classes:
- istream
- ostream
- iostream

### Basic stream classes
- istream: This class is used to read data from the input stream.
- ostream: This class is used to write data to the output stream.
- iostream: This class is used to read and write data to and from the stream.

### C++ predefined streams
C++ provides three predefined objects to perform input and output operations:
- cin: This object is used to read data from the standard input device (usually the keyboard).
- cout: This object is used to write data to the standard output device (usually the monitor).
- cerr: This object is used to write data to the standard error device (usually the monitor).
- clog: This object is used to write data to the standard error device (usually the monitor).

### I/O operations
C++ provides two types of I/O operations:
- Formatted I/O operations: These operations are performed using the stream insertion (<<) and stream extraction (>>) operators.
- Unformatted I/O operations: These operations are performed using the read() and write() functions.

### Unformatted console I/O operations
C++ provides the following unformatted console I/O operations:
- get(): This function is used to read a single character from the standard input device.
- put(): This function is used to write a single character to the standard output device.
- gets(): This function is used to read a string from the standard input device.
- puts(): This function is used to write a string to the standard output device.

### Manipulators
Manipulators are used to format the output. C++ provides the following manipulators:
- endl: This manipulator is used to insert a new line in the output.
- ends: This manipulator is used to insert a null character at the end of the output.
- flush: This manipulator is used to flush the output buffer.

### Opening and closing a file- different modes and methods
C++ provides the following methods to open a file:
- open(): This function is used to open a file.
- close(): This function is used to close a file.

### Example of opening/creating a file using the open() function
```cpp
#include<iostream>
#include <fstream>
using namespace std;
int main()
{
fstream new_file; 
new_file.open("new_file",ios::out);  
if(!new_file) 
{
cout<<"File creation failed";
}
else
{
cout<<"New file created";
new_file.close(); // Step 4: Closing file
}
return 0;
}
```

C++ provides the following modes to open a file:
- ios::in: This mode is used to open a file for reading.
- ios::out: This mode is used to open a file for writing.
- ios::app: This mode is used to open a file for appending.
- ios::ate: This mode is used to open a file for reading and writing.
- ios::trunc: This mode is used to open a file for truncating.
- ios::binary: This mode is used to open a file in binary mode.

### Error handling during file operations
C++ provides the following functions to handle errors during file operations:
- eof(): This function is used to check whether the end of file has been reached.
- fail(): This function is used to check whether a failure has occurred.
- bad(): This function is used to check whether a failure has occurred.
- good(): This function is used to check whether no failure has occurred.

### File pointers and their manipulations
C++ provides the following functions to manipulate file pointers:
- tellg(): This function is used to get the current position of the get pointer.
- tellp(): This function is used to get the current position of the put pointer.
- seekg(): This function is used to set the position of the get pointer.
- seekp(): This function is used to set the position of the put pointer.

### Sequential access to file
C++ provides the following functions to perform sequential access to a file:
- read(): This function is used to read data from a file.
- write(): This function is used to write data to a file.

### Command line arguments
Command line arguments are used to pass data to a program when it is executed. C++ provides the following variables to store command line arguments:
- argc: This variable is used to store the number of command line arguments.
- argv: This variable is used to store the command line arguments.

```cpp
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Number of arguments: " << argc << endl;
    cout << "Program name: " << argv[0] << endl;
    if (argc > 1)
    {
        cout << "Arguments are: " << endl;
        for (int i = 1; i < argc; i++)
            cout << argv[i] << endl;
    }
    return 0;
}

Output:
>> g++ main.cpp -o main
>> ./main 1 2 3 4 5
Number of arguments: 6
Program name: ./main
Arguments are:
1
2
3
4
5
```

```
