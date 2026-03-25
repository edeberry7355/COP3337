#include "MyVector.hpp"

int main(void) {
    MyVector<int> mv;
    MyVector<std::string> mv2;
    
    for (int i=0; i<10; i++) {
        mv.push_back(i);
        //MyVector<std::string> mv2;
    }

    mv.print();


    return 0;
}