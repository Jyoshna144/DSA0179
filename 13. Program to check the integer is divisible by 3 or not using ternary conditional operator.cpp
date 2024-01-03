#include <iostream>

int main() {
    // Declare variable
    int number;

    // Read an integer from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Use ternary conditional operator to check divisibility by 3
    std::cout << "The number is " << ((number % 3 == 0) ? "divisible by 3" : "not divisible by 3") << std::endl;

    return 0;
}
