#include <iostream>

using namespace std;

int perfect_number() {

    cout << "The perfect numbers from 1 to 500 are as follows : \n";
    for (int i = 1; i <= 500; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
//         cout << i << " , " << j << endl;
//         cout << "=> " << i % j << endl;
            if (i % j == 0) {
//          cout << j % i << endl;
//          cout << j << " is a factor of " << i << endl;
//          j is factor of i
                sum += j;
            }
        }
        if (sum == i) {
            cout << i << endl;
        }
    }
    return 0;
}

