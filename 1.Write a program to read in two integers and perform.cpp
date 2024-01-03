#include <iostream>

int main() {
    // Declare variables to store input values
    int firstNumber, secondNumber;

    // Read in two integers
    std::cout << "Enter the first integer: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second integer: ";
    std::cin >> secondNumber;

    // Perform operations
    int additionResult = firstNumber + secondNumber;
    int subtractionResult = firstNumber - secondNumber;

    // Check for division by zero before performing division
    if (secondNumber != 0) {
        int multiplicationResult = firstNumber * secondNumber;
        int divisionResult = firstNumber / secondNumber;
        int moduloResult = firstNumber % secondNumber;

        // Display results
        std::cout << "Addition: " << additionResult << std::endl;
        std::cout << "Subtraction: " << subtractionResult << std::endl;
        std::cout << "Multiplication: " << multiplicationResult << std::endl;
        std::cout << "Division: " << divisionResult << std::endl;
        std::cout << "Modulo: " << moduloResult << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }

    return 0;
}
