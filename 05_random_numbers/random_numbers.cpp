#include <iostream>
#include <random>

int main(void) {
    // Generate the seed
    std::random_device rd; // Named it 'rd'

    // Create a random number engine
    std::mt19937 eng(rd());

    // Define the distribution (the range of random numbers)
    std::uniform_int_distribution<int> dist(1, 100);

    for (int i=1; i < 20; i++) {
        int x = dist(eng);
        std::cout << x << std::endl;
    }

    return 0;
}