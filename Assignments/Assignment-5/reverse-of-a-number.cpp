#include <iostream>

using namespace std;

class reverse {
private :
    int n, n1, temp, reverse_number = 0;
public:
    void take_input() {
        cout << "Please enter a number : " << endl;
        cin >> n;
    }

    void calc_reverse() {
        n1 = n;
        while (n1 != 0) {
            temp = n1 % 10;
            reverse_number = reverse_number * 10 + temp;
            n1 /= 10;
        }
    }

    void print_reverse() {
        cout << "The reverse of " << n << " is " << reverse_number;
    }
};

int reverse_of_a_number_main() {
    reverse x;
    x.take_input();
    x.calc_reverse();
    x.print_reverse();
    return 0;
}
