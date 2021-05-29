#include <iostream>
using namespace std;

double subtraction(double firstNumber, double secondNumber){
    return firstNumber-secondNumber;
}

double addition(double firstNumber, double secondNumber){
    return firstNumber+secondNumber;
}

double multiplication(double firstNumber, double secondNumber){
    return firstNumber*secondNumber;
}

double division(double firstNumber, double secondNumber){
    if (secondNumber == 0)
        throw "error, division by 0";
    return firstNumber / secondNumber;
}

double calculation(double firstNumber, double secondNumber, char operationCharacter){
    switch (operationCharacter)
    {
        case '+':
            return addition(firstNumber, secondNumber);
        case '-':
            return subtraction(firstNumber, secondNumber);
        case '*':
            return multiplication(firstNumber, secondNumber);
        case '/':
            return division(firstNumber, secondNumber);
        default:
            throw "undefined operation";
    }
}

int main(){
    int firstNumber, secondNumber;
    char operationCharacter;

    cout << "Enter first number\n";
    cin >> firstNumber;
    cout << "enter operation character\n";
    cin >> operationCharacter;
    cout << "Enter second number\n";
    cin >> secondNumber;

    cout << calculation(firstNumber, secondNumber, operationCharacter);
}