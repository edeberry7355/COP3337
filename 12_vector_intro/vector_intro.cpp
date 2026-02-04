#include <iostream>
#include <vector>

// By default vectors are passed by value, so it creates a copy of the vector
void print(const std::vector<int>& v); // Pass a reference to a vector

int main(void) {
    // Create a vector (specify data type w/ <>)
    std::vector<int> v; // Empty vector of integers

    // Create and initialize
    std::vector<int> v2 {1, 2, 3, 4, 5, 6};
    print(v2);

    // Provide the size and default value
    std::vector<int> v3(5, 10); // (5 elements, each set to 10)
    print(v3);

    // Copy from another vector
    std::vector<int> v4(v3);
    print(v4);

    // Find current size (number of elements)
    std::cout << "Size: " << v2.size() << std::endl;

    // First and last elements
    std::cout << "First: " << v2.front() << std::endl;
    std::cout << "Last: " << v2.back() << std::endl;
    std::cout << "Last again: " << v2[v2.size() - 1] << std::endl;

    // Add to the end of the vector
    v.push_back(100);
    v.push_back(200);
    print(v);

    // Remove from the end
    v2.pop_back();
    print(v2);

    // begin() - points to the first element in the vector
    // end() - points to the one past the last element in the vector
    std::cout << *v2.begin() << std::endl;
    std::cout << *v2.begin() + 2 << std::endl;

    // Insert (location (iterator), value)
    v2.insert(v2.begin() + 1, 900);
    print(v2);

    v2.insert(v2.end() - 2, 500);
    print(v2);

    // ** Make a method to rotate right

    return 0;
}

void print(const std::vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}