#include "MyVector.hpp"
#include <iostream>

int main(void) {
    MyVector* mv = new MyVector(10);

    for (int i = 0; i < 20; i++) {
        mv->push_back(i * i);
    }

    while (!mv->empty()) {
        std::cout << mv->pop_back() << std::endl;
    }

    mv->print();
    
    delete mv;

    std::vector<int> v;
    v.push_back(2);
    v.at(0) = 1;
    std::cout << v.at(0) << std::endl;

    return 0;
}