# Chapter 7: Arrays

## Arrays

* A single array can store a **large collection** of data
* An array is used to store **multiple** values of the same type
* An element in an array can be accessed using an **index**

## Trace Program with Arrays

```cpp
int main() {
    int values[5];
    for (int i=1; i<5; i++) {
        //...
    }
}
```

## Printing Arrays

To print an array, you have to print each element in the array using a loop like the following

```cpp
const int ARRAY_SIZE = 10;
int myList[ARRAY_SIZE];

for (int i = 1; i < ARRAY_SIZE; i++) {
    cout << myList[i] << " ";
}
```

## Initializing arrays with random values

* The following loop initializes the array myList with random values between 0 and 99

```cpp
const int ARRAY_SIZE = 10;
int myList[ARRAY_SIZE];

for (int i = 0; i < ARRAY_SIZE; i++) {
    myList[i] = rand() % 100;
}
```

## Copying Arrays

**Need to copy element by element**, CANNOT use syntax like this `list = myList;`

```cpp
// Under the condition that new array is the same size or larger than original array
for (int = 0; i < ARRAY_SIZE; i++) {
    list[i] = myList[i];
}
```

## Summing All Elements

* Use a variable named **total** to store the sum. Initially total is 0
* Add each element in the array to total using a loop like this

```cpp
double total = 0;
for (int i = 0; i < ARRAY_SIZE; i++) {
    total += myList[i];
}
```

## Random Shuffling

```cpp
/*
The range of these numbers is 0 to ARRAY_SIZE-1
Randomly shuffle values to different indexes
*/
srand(time(0));
for (int i = 0; i < ARRAY_SIZE; i++) {
    // Generate an index randomly
    int index = rand() % ARRAY_SIZE;
    double temp = myList[i];
    myList[i] = myList[index];
    myList[index] = temp;
}
```

## Passing Arrays to Functions

* When an array argument is **passed** to a **function**, its **starting address** is passed to the array parameter in the function. Both parameter and argument refer to the same array.
* When you pass an array to a function, you should also pass its **size** in another argument, so that the function knows how many elements are in the array. Otherwise, you will have to hard code this into the function or declare it in a global variable.
* The array in the function is the same as the array being passed. Thus, if you change the array in the function, you will see the change outside the function.

## Preventing Changes of Array Arguments in Functions

```cpp
// pass a constant parameter
```

## Returning Arrays from Functions

To return an array from a function, **pass** it as a parameter in the function

```cpp
// CANNOT DO THIS
int[] reverse(const int list[], int size)
// DO THIS INSTEAD
void reverse(const int list[], int newList[], int size)
```
