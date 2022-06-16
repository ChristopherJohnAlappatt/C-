#include <iostream>

using namespace std;

void printArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int transpose_matrix() {
    int arr[3][3] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int sol[3][3];
    cout << "The entered array is : \n";
    printArray(arr);
    cout << "Printing Transpose of a matrix \n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sol[i][j] = arr[j][i];
        }
    }
    printArray(sol);
    return 0;
}

