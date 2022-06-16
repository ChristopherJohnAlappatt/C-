#include <iostream>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float) a / b;
}

int calculator_main() {
    int choice;
    float a, b, result;
    cout << "Welcome to Calculator program : " << endl;
    cout << "Enter two numbers : " << endl;
    cin >> a >> b;
    cout << "Press \n 1 for Addition \n 2 for Subtraction \n 3 for Multiplication \n 4 for Division" << endl;
    cin >> choice;
    switch (choice) {
        case 1 :
            result = add(a, b);
            cout << a << " + " << b << " = " << result;
            break;
        case 2 :
            result = subtract(a, b);
            cout << a << " - " << b << " = " << result;
            break;
        case 3 :
            result = multiply(a, b);
            cout << a << " * " << b << " = " << result;
            break;
        case 4:
            result = divide(a, b);
            cout << a << " / " << b << " = " << result;
            break;
        default :
            cout << "Invalid input . Please select a number between 1 and 4";
            break;
    }
    return 0;
}
