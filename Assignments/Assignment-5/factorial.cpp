#include <iostream>
using namespace std;
class Factorial {
private :
    int n, temp, output = 1;
public:
    Factorial(int number) {
        n = number;
    }
    void calc_factorial() {
        temp = n;
        while (temp != 0) {
            output *= temp--;
        }
    }
    void print_factorial() {
        cout << "The factorial of " << n << " is " << output << endl;
    }
};
int factorial_main() {
    int n;
    cout << "Please enter a number : " << endl;
    cin >> n;
    Factorial factorial(n);
    factorial.calc_factorial();
    factorial.print_factorial();
    return 0;
}
