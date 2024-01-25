#include<iostream>

class Calculator {
private:
    double num1;
    double num2;

public:
    void setNumbers(double n1, double n2) ;

    double add() {
        return num1 + num2;
    }

    double subtract() {
        return num1 - num2;
    }

    double multiply() ;
    double divide() ;
};

int main() {
    Calculator calculator;
    double num1, num2;
    int choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    calculator.setNumbers(num1, num2);

    cout << "Choose operation:\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    double result;

    switch (choice) {
        case 1:
            result = calculator.add();
            break;
        case 2:
            result = calculator.subtract();
            break;
        case 3:
            result = calculator.multiply();
            break;
        case 4:
            result = calculator.divide();
            break;
        default:
            cerr << "Invalid choice. Exiting.\n";
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}