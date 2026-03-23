#include <iostream>
#include <vector>

// Template function prototype
template <typename T>
T smallest(const T& n1, const T& n2, const T& n3);
    // To return a pointer, the function would look like
    // T* smallest(const ....);

template <typename T>
void print(const T& value);

void print(bool value);

// Find the maximum in a vector
template <typename T>
T findMax(const std::vector<T>& v);

int main(void) {
    int i1 = 1, i2 = -2, i3 = -87;
    
    // Call the template function
    std::cout << smallest(i1, i2, i3) << std::endl;
    
    double d1 = 1.67, d2 = -2.32, d3 = -87.83;
    
    // Call the template function
    std::cout << smallest(d1, d2, d3) << std::endl;
    
    std::string s1 = "apple", s2 = "Banana", s3 = "tomato";
    
    // Call the template function
    std::cout << smallest(s1, s2, s3) << std::endl;
    
    // Test print function
    print(12);
    print(true);
    
    // Test findMax
    std::vector<double> v{1.2, 3.5, 6.7, 12.3, 4.3};
    std::cout << findMax(v) << std::endl;

    return 0;
}

template <typename T>
T smallest(const T& n1, const T& n2, const T& n3) {
    if (n1 <= n2 && n1 <= n3) {
        return n1;
    }
    else if (n2 <= n3) {
        return n2;
    }
    else {
        return n3;
    }
}

template <typename T>
void print(const T& value) {
    std::cout << "Generic: " << value << std::endl;
}

void print(bool value) {
    std::cout << "Boolean: " << (value ? "true" : "false") << std::endl;
}

template <typename T>
T findMax(const std::vector<T>& v) {
    if (v.empty()) {
        // Throw an exception
        throw std::string("findMax: empty vector");
    }
    T max = v[0];
    for (int i=1; i < v.size(); i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }

    return max;
}