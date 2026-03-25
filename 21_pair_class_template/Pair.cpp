#include <iostream>

// Template class
template <typename T1 = int, typename T2 = char> // default template parameters
class Pair {
public:
    Pair(const T1& f, const T2& s): first(f), second(s) {

    }

    // Getters
    // Make constant so we can't modify in the caller
    // More efficient to return a reference to the data, especially when data is a whole class or other large data type
    const T1& getFirst() {
        return first;
    }
    
    const T2& getSecond() {
        return second;
    }

    // Setters
    void setFirst(const T1& first) {
        this->first = first;
    }
    void setSecond(const T2& second) {
        this->second = second;
    }
    
private:
    T1 first;
    T2 second;
};

// Create a function that takes 2 arguments of any type (any type, so should be a template function)
// and returns a Pair of those arguments
template <typename T1, typename T2>
Pair<T1, T2> createPair(const T1& f, const T2& s) { // variables named f (first) and s (second)
    return Pair<T1, T2>(f, s);
}

int main(void) {
    // Create the pair object
    Pair<int, double> p(1, 4.5);

    std::cout << "(" << p.getFirst() << ", " << p.getSecond() << ")\n";
    
    // Test createPair
    Pair<std::string, char> p2 = createPair(std::string("hello"), '!');
    std::cout << "(" << p2.getFirst() << ", " << p2.getSecond() << ")\n";
    
    // Automatically define the specific datatype based on the value assigned to a datatype
    auto p3 = createPair(std::string("hello"), std::string("car"));
    std::cout << "(" << p3.getFirst() << ", " << p3.getSecond() << ")\n";

    Pair p4(5, 5.4);

    return 0;
}