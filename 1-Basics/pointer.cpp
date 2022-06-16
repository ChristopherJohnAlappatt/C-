#include <iostream>

using namespace std;

int pointer() {
    int a = 5;
    int *b;
    float c = 4.5;
    float *d;

//    use & to access the memory location
//    use * to access the value at the particular memory
    b = &a;
    d = &c;
    cout << "b -> " << b << endl << "d -> " << d << endl;
    cout << "b -> " << *b << endl << "d -> " << *d;
    return 0;
}

