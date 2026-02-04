#include <iostream>

// Function prototype
// Input source array, destination array, number of elements, how many rotations (k)
void rotateRight(const int src[], int dest[], int size, int k);

int main(void) {
    const int SIZE = 7;
    int list[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int new_list[SIZE];
    rotateRight(list, new_list, SIZE, 3);
    // Print the array
    for (int i = 0; i < SIZE; i++) {
        std::cout << list[i] << ' ';
    }
    std::cout << std:: endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << new_list[i] << ' ';
    }
    std::cout << std:: endl;

    return 0;
}

void rotateRight(const int src[], int dest[], int size, int k) {
    // ???
    int new_first = size - (k % size);

    int j = new_first;
    int i = 0;
    // Copy from new first till the end
    while (j < size) {
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
