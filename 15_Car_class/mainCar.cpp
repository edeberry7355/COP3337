#include "Car.hpp" // Include a file you've created yourself, use "", not <>

int main(void) {
    // Create an object of Car class
    Car ferrari;
    ferrari.setMake("Ferrari");
    ferrari.setModel("F50");
    ferrari.setYear(2025);
    ferrari.setMPG(13.5);

    ferrari.print_info();

    return 0;
}

// To compile this, run `g++ mainCar.cpp Car.cpp`