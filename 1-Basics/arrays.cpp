#include <iostream>

using namespace std;

int arrays() {
    int scores[] = {69, 34, 32, 62};
    int x[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int cost[3];
    cout << "Enter 3 numbers : " << endl;
    for (int i = 0; i < 3; i++) {
        cin >> cost[i];
    }
    for (int i = 0; i < 3; i++) {
        cost[i] *= 2;
        cout << cost[i] << "\t";
    }
    cout << endl;
    int matrix[3][3];
//    Taking input for the matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter (" << i << "," << j << ") element : ";
            cin >> matrix[i][j];
        }
    }
//    Printing the matrix
    cout << "The entered array is : \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}