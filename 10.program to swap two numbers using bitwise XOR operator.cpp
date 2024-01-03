#include <iostream>

int main() {
    // Declare variables
    int firstNumber, secondNumber;

    // Read two numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter the second number: ";
    std::cin >> secondNumber;

    // Display the numbers before swapping
    std::cout << "Before swapping: First number = " << firstNumber << ", Second number = " << secondNumber << std::endl;

    // Swap the numbers using bitwise XOR
    firstNumber = firstNumber ^ secondNumber;
    secondNumber = firstNumber ^ secondNumber;
    firstNumber = firstNumber ^ secondNumber;

    // Display the numbers after swapping
    std::cout << "After swapping: First number = " << firstNumber << ", Second number = " << secondNumber << std::endl;

    return 0;
}
