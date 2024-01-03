#include <iostream>

int main() {
    // Declare variables
    int num1, num2, num3, largest;

    // Read three numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // Use ternary conditional operator to find the largest number
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Display the largest number
    std::cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << std::endl;

    return 0;
}
