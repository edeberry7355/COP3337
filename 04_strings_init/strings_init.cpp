#include <iostream>
#include <string>

int main(void) {
    // Initialize the string
    std::string str1("first string");

    // Initialize the string with another string;
    std::string str2(str1);

    // Initialize the string with character and number of occurence
    std::string str3(100, '&'); // Characters are represented with singe quotes in C++

    // Initialize the string by a part of another string
    std::string str4(str1, 6, 5); // (takeFromThisString, beginningCharacter, numberofCharacters)

    std::cout << str4 << std::endl;
    std::cout << str3 << std::endl;

    if (str1 == str2) {
        std::cout << str4 + str1 << std::endl;
    }

    return 0;
}