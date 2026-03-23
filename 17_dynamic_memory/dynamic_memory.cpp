#include <iostream>

void printArr(int* arr, int size);
int* doubleArr(int* arr, int size);
int* doubleArrNew(int* arr, int size);

int main(void) {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};

    printArr(arr, SIZE);

    int* doubled_array = doubleArr(arr, SIZE);
    printArr(arr, SIZE);

    int* new_array = doubleArrNew(arr, SIZE);
    printArr(new_array, SIZE);

    for (int i = 0; i < 9999999; i++){//Don't run this or else youll be waiting for a while for it to finish loading
        double* d = new double[99999999]; //Allocate new memory
        delete [] d; //Free the memory, because its an array you use brackets
    }
    //To delete/free memory its delete p; if its an aray then delete[] list;

    return 0;
}

void printArr(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}

int* doubleArr(int* arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] *= 2;
    }
    return arr;
}

int* doubleArrNew(int* arr, int size){
//    int new_arr[size]; // Local array (doesn't work, it'll result to a termination because it wasn't created dynamically)

    //Create an array dynamically
    int* new_arr = new int[size];
    for(int i = 0; i < size; i++){
        new_arr[i] = arr[i] * 2;
    }
    return new_arr;
}


//How to create a double variable dynamically
//double* pD = new double;
//double* pD = new double(10.2);

//How to access the double variable
//*pD;

//How to release memory
//delete *pD;