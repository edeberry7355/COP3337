# Chapter 2: Elementary Programming

## Ch1 Review

**Unix Commands**

* `mkdir <directory_name>` - (make directory) creates a folder
* `cd <directory_name>` - (change directory) changes the current directory
* `code <file_name>` - creates a file and opens it in a text editor
* `ls` - (list) shows the content of the current direction
* `pwd` - (print working directory) - shows the path of the current directory
* `clear` - clears the terminal window
* `g++ <filename>` - compiles C++ program
  * Ex. `g++ first_program.cpp`
* `./<executable_file>` - runs output file
  * Ex. `./a.out`

## Some of the Special Characters

* `#` **pound sign** - used in `#include` to denote a preprocessor directive
* `<>` **angle brackets** - encloses a library name when c used with include
* `{}` **braces** - denotes a block to enclose statements
* `<<` **insertion operator** - *outputs* to the console (with cout)
* `>>` **extraction operator** - *inputs* from the console (with cin)

## Programming style and documentation

* Reduce errors and make programs easy to read:
  * use comments
  * use proper indentation and spacing
  * [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html)

## Programming errors

* **Syntax (Compile Errors)**
  * Errors that are <u>detected by the compiler</u>. Mistyping a keyword, omitting necessary punctuation, etc.
  * *Example causes:* missing braces, semicolons, and quotation marks, and misspelling names.
* **Runtime errors**
  * Cause a program to <u>terminate abnormally</u>.
  * *Example causes:* Wrong type of input, division by zero.
* **Logic errors**
  * Occur when program does not perform the way it was intended.

## Identifiers

* **An identifier** is a name used to identify a variable, function, class, object, or other user-defined entity in the program.
  * Must consist of letters, digits, or underscores
  * **Cannot start with a digit**
  * Not a reserved word (`break`, `class`, `delete`, etc.)
* This is just what you decide to name a variable, function, etc.
  * *Ex.* In `int x = 10`, the identifier is "x".

## Variables

* In C++, variables must be declared with a specific data type Ex.:
``int count``, ``double radius = 11.2``

### An alternative syntax for declaring and initializing variables:

```cpp
// C++ allows:
int i(1), j(2);
// Which is equivalent to:
int i=1, j=2;
```

### Common variable types

* `int`: integer numbers (e.g., 42, -7)
* `double`: double-precision floating-point (e.g., 3.14159)
* `char`: single characters (e.g., 'A', '5')
* `string`: sequence of characters (requires `#include <string>`)
* `bool`: boolean values (true or false)

## **Operator Precedence

* Integer / Integer = Integer
* Float / Integer = Float
* Double / Integer = Float

## **Numeric Type Conversion

* Yes, you can assign an integer value to a floating point variable
* Yes, you can assign a floating-point value to an integer variable

```cpp
int i = 34.7      // i becomes 34
double f = i;     // f is now 34
double g = 34.3;  // g becomes 34.3
int j = g;        // j is now 34
```

## **Console Input (cin) Function

* ``>>`` **stream extraction operator** - assigns an input to a variable

```cpp
int count;
std::cin >> count;

double width;
double height;
std::cin >> width >> height;
```

## Reading input from keyboard

```cpp
#include <iostream>
using namespace std;

int main() {
    // Step 1: Read in radius
    double radius;
    cout << "Enter a radius: ";

    cin >> radius;

    // Step 2: Compute area
    double area - radius * radius * 3.14159;

    // Step 3: Display the area
    cout << "The area is " << area << endl;

    return 0;
}
```

## Character data type

* A `char` data type represents a single character

| Characters | ASCII Code |
| --- | --- |
| '0' to '9' | 48 to 57 |
| 'A' to 'Z' | 65 to 90 |
| 'a' to 'z' | 97 to 122 |

## Special Characters and Casting

| Escape Sequence | Name | ASCII Code |
| --- | --- | --- |
| \b | Backspace | 8 |
| \t | Tab | 9 |
| \n | Linefeed | 10 |
| \f | Formfeed | 12 |
| \r | Carriage Return | 13 |
| \\\ | Backslash | 92 |
| \\" | Double Quote | 34 |
| | | |

### Escape Sequences

```cpp
char c = 65.25; // 65 is assigned to variable c (ASCII for 'A')
cout << c; // variable c is character A

int i = 'A'; // The ASCII code of character A is assigned to i
cout << i; // The variable i is 65

// The ASCII code for '2' is 50 and for '3' is 51
int i = '2' + '3';
cout << "i is " << i << endl; // i is now 101
```

## Comparing and Testing

* Two **characters** can be compared using the relational operators just like comparing two **numbers**.
  * `'a' < 'b'` is true because the ASCII code for 'a' (97) is less than the ASCII code for 'b' (98)
  * `'a' < 'A'` is false because the ASCII code for 'a' (97) is greater than the ASCII code for 'A' (65)
  * `'l' < '8'` is true because the ASCII code for '1' (49) is less than the ASCII code for '8' (56)

## The string Type

* Include `<string>` header

```cpp
string message = "Programming is fun"
```

| Function | Description |
| --- | --- |
| `length()` | Returns the number of characters in this string. |
| `size()` | Same as length() |
| `at(index)` | Returns the character at the specified index from this string |
| | |

* The functions in the string class can only be invoked from a specific string instance
* For this reason, these functions are called **instance functions**

```cpp
string message = "ABCD";
cout << message.length() << endl;
cout << message.at(0) << endl;
string s = "Bottom";
cout << s.length() << endl;
cout << s.at(0) << endl;
```

* `message[0]` and `message.at(0)` are the same thing

## Reading Strings

* The getline function is in the string header file, which reads a string from the keyboard using the following syntax:
  * `getline(cin, s, delimitCharacter)`
* The function stops reading characters when the **delimiter** character is encountered. The delimiter is read but not stored into the string. The third argument delimitCharacter has a default value ('\n')

```cpp
string city;
cout << "Enter a city: ";
getline(cin, city, '\n'); // Same as getline(cin, city)
cout << "You entered " << city << endl;
```

## Concatenating Strings

* C++ provides the `+` operator for concatenating two strings.

```cpp
string s3 = s1 + s2;

string s = "ABC";
s += 'D';
// Therefore, the new sis "ABCD"
```

## Comparing Strings

* You can use the relational operators (`==`, `!=`, `<`, `<=`, `>`, `>=`) to compare two strings
* This is done by comparing their corresponding characters one by one from left to right

```cpp
string s1 = "ABC";
string s2 = "ABE";
cout << (s1 == s2) << endl;  // Displays 0 (means false)
cout << (s1 != s2) << endl;  // Displays 1 (means true)
cout << (s1 > s2) << endl;  // Displays 0 (means false)
cout << (s1 >= s2) << endl;  // Displays 0 (means false)
cout << (s1 < s2) << endl;  // Displays 1 (means true)
cout << (s1 <= s2) << endl;  // Displays 1 (means true)
```

## Common Errors

1. Undeclared/Uninitialized variables and unused variables
2. Integer overflow
3. Round-off errors
4. Unintended integer division
5. Forgetting header files

## Git commands

1. `git status`
2. `git add <filename>` (now file is in staging area)
3. `git commit -m "put commit message here`
4. `git push`
