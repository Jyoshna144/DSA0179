#include <iostream>

int main() {
    // Declare variables
    int number;
    unsigned long long factorial = 1;  // Use unsigned long long to handle larger factorials

    // Read a number from the user
    std::cout << "Enter a non-negative integer: ";
    std::cin >> number;

    // Check if the number is non-negative
    if (number < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        // Calculate the factorial using a for loop
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        // Display the factorial
        std::cout << "Factorial of " << number << " = " << factorial << std::endl;
    }

    return 0;
}
