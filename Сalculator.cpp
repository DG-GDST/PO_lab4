#include <iostream>
using namespace std;

int main(){
    int firstNumber, secondNumber;
    char operationCharacter;
    cout << "Enter first number\n";
    cin >> firstNumber;
    cout << "enter operation character\n";
    cin >> operationCharacter;
    cout << "Enter second number\n";
    cin >> secondNumber;
    
    switch (operationCharacter)
    {
        case '+':
            cout << firstNumber+secondNumber;
            break;
        case '-':
            cout << firstNumber-secondNumber;
            break;
        default:
            cout << "i don't know this operation\n";
    }
}