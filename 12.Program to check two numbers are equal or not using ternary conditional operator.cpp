#include <iostream>

int main() {
    // Declare variables
    int num1, num2;

    // Read two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Use ternary conditional operator to check equality
    std::cout << "The numbers are " << ((num1 == num2) ? "equal" : "not equal") << std::endl;

    return 0;
}
