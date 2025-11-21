#include <iostream>
using namespace std;

int main() {
    char op; // To store the operator (=, -, *, /)
    double num1, num2; // To store the two numbers for calculation

    // Prompt the user to enter the operator
    std::cout << "Simple Calculator\n";
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    // prompt the user to enter the two operands
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // use the switch-case statement to performthe calculation bases on the operator
    switch(op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break; // Exit the switch statement after performing addition
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break; // Exit the switch statement after performing substraction
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break; // Exit the switch statement after performing multiplictaion
        case '/':
            // Handle division by zero
            if (num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            else
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            break; // Exit the switch statement after performing division.

        default:
            // Handle invalid operator input
            cout << "Invalid operator!";
            break; // Exit the switch statement
    }
    return 0;
}
