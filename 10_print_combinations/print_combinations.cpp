#include <iostream>
#include <string>

void print_combinations(int n);
void combination_helper(std::string& s, int n, int i); // Pass by reference

int main(void) {
    std::cout << "Enter size: ";
    int n;
    std::cin >> n;
    print_combinations(n);
    return 0;
}

void print_combinations(int n) {
    std::string s(n, 'a'); // Make string of size n with 'a's
    // Call the helper function
    combination_helper(s, n, 0); // 0 will be the base case, the index of the letter we are at right now
}

void combination_helper(std::string& s, int n, int i) {
    // Base case
    if (i >= n) {
        std::cout << s << std::endl;
        return;
    }
    while (s[i] <= 'z') {
        // Recursive call for the next character
        combination_helper(s, n, i + 1);
        s[i]++;
    }
    // If letter reaches z, set it to a (now changing 2nd or 3rd letter)
    s[i] = 'a';
}