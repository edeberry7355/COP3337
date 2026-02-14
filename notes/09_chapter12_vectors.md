# Chapter 12: Vectors

## Rotate an Array

```cpp
void rotateRight(const int src[], int dest[], int size, int k) {
    int new_first = size - (k % size);

    // Copy from new first till the end
    int i = 0;
    int j = new_first;
    whie (j < size) {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Copy from beginning till new first
    j = 0;
    while (j < new_first) {
        dest[i] = src[j];
        i++;
        j++;
    }
}
```

## The C++ vector Class

The vector class is more flexible than arrays. A vector object can be used just like an array, but a vector's size can grow automatically if needed.

```cpp
vector<elementType> vectorName;
vector<int> intVector;
vector<string> stringVector;
```

### Vector class methods

| `vector<elementType>` | Description |
| --- | --- |
| `vector<elementType>()` | Constructs an empty vector with the specified element type |
| `vector<elementType>(size: int)` | Constructs a vector with the initial size, filled with default values |
| `vector<elementType>(size: int, defaultValue: elementType)` | Constructs a vector with thie initial size, filled with specified values |
| `push_back(element: elementType)`: void | Appends the element in this vector |
| `pop_back()`: void | Removes the last element from this vector |
| `size()`: unsigned const | Returns the number of elements in this vector |
| `at(index: int)`: elementType const | Returns the element at the specified index in this vector |
| `empty()`: bool const | Returns true if this vector is empty |
| `clear()`: void | Removes all elements from this vector |
| `swap(v2: vector)`: void | Swaps the contents of this vector with the specified vector |

## The C++ vector Class vs Array

| Operation | Array | vector |
| --- | --- | --- |
| Creating an array/vector | `string a[10]` | `vector<string> v` |
| Accessing an element | `a[index]` | `v[index]` |
| Updating an element | `a[index] = "London"` | `v[index] = "London"` |
| Returning size | | `v.size()` |
| Adding a new element | | `v.push_back("London")` |
| Removing an element | | `v.pop_back()` |
| Removing all elements | | `v.clear()` |

## How to create a vector

```cpp
#include <vector>

// Create a vector (Initialization List)
std::vector<int> v {1, 2, 3, 4, 5, 6};

// Create with size and default value
std::vector<int> v2(5, 10); // 5 elements, each set to 10

// Create a copy from another vector
std::vector<int> v3(v);
```

## Other vector methods

```cpp
// How to get the first and last elements
// Front and back
std::cout << "Front " v3.front() << std::endl;
std::cout << "Back " v3.back() << std::endl;

/* Iterator (an object that acts like a pointer, providing a way to access and traverse the elements within a vector container)
    begin(): point to the first element
    end(): point to one past the last one
*/

// How to add an element to the vector
// Add to the end
v3.push_back(8);
v3.push_back(9);
// At any location
// Insert an element (iterator, value)
v3.insert(v3.begin(), 100);

// How to delete an element from the vector
// At the end (remove the last element)
v3.pop_back();
// At any location Erase (iterator)
v3.erase(v3.begin() + 1); // Remove the second element
```
