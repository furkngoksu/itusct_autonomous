#include <iostream>
#include <string>
#include "Calculator.h"

int main() {
    Calculator calculator;
    char choice;

    do {
        std::cout << "Choose an operation:\n";
        std::cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        std::cout << "5. Square\n6. Exponentiation\n7. Modulus\n8. Exit\n";
        std::cout << "Enter the corresponding number: ";

        std::cin >> choice;

        if (choice == '8') {
            break;
        }

        float result;
        float a, b;
        int exponent;

        try {
            switch (choice) {
                case '1':
                    std::cout << "Enter two numbers to add: ";
                    std::cin >> a >> b;
                    result = calculator.addition(a, b);
                    break;
                case '2':
                    std::cout << "Enter two numbers to subtract: ";
                    std::cin >> a >> b;
                    result = calculator.substraction(a, b);
                    break;
                case '3':
                    std::cout << "Enter numbers to multiply ";
                    std::cin >> a >> b;
                    result = calculator.multiplication(a,b);
                    break;
                case '4':
                    std::cout << "Enter two numbers to divide: ";
                    std::cin >> a >> b;
                    result = calculator.division(a, b);
                    break;
                case '5':
                    std::cout << "Enter a number to square: ";
                    std::cin >> a;
                    result = calculator.square(a);
                    break;
                case '6':
                    std::cout << "Enter base and exponent for modulus : ";
                    std::cin >> a >> exponent;
                    result = calculator.exponentiation(a, exponent);
                    break;
                case '7':
                    int m, n;
                    std::cout << "Enter two numbers to find modulus: ";
                    std::cin >> m >> n;
                    result = calculator.modulus(m, n);
                    break;
                default:
                    std::cerr << "Invalid input. Please enter a valid option.\n";
                    continue;
            }

            std::cout << "Result: " << result << std::endl;

        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }

    } while (true);

    return 0;
}
