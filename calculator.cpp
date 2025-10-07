#include <iostream>
#include "Calculator.h"
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
    case '+':
        cout << "Result: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Result: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Result: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << "Result: " << num1 / num2 << endl;
        else
            cout << "Error: Division by zero!" << endl;
        break;
    default:
        cout << "Invalid operator!" << endl;
    }

    return 0;
}

double Calculator::Calculate(double num1, char operation, double num2)
{
    switch (operation) {
        case '+':
             return num1 + num2;

        case '-':
            return num1 - num2;

       case '*':
           return num1 * num2;

      case '/':
          return num1 / num2;

      default:
          return 0.0;

          }
    }
