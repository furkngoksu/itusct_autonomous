#include "Calculator.h"
#include <iostream>
#include <stdexcept>
#include <string>

float Calculator::addition(float a, float b){
    return a+b;
}
float Calculator::substraction(float a, float b){
    return a-b;

}
float Calculator::multiplication(float a, float b){
    int result = a;
    char choice;
    int temp = b;
    do{
        result = result * b;
        std::cout<<"Do you want enter another value : (Y/N)";
        std::cin>>choice;
    }while (choice == 'Y' || choice== 'y');
    
    return result;
}
float Calculator::division(float a, float b){
    float result;
        if (b == 0) {
            throw std::invalid_argument("ZeroDivisionError");
        }
        result = a / b;
        return result;
}
    
float Calculator::square(float a){
    return a*a;
}
float Calculator::exponentiation(float a, float b){
    float result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}
int Calculator::modulus(int a, int b){
    if (b == 0) {
        throw std::string("Modulus by zero is not allowed.");
    }

    return a%b;
}