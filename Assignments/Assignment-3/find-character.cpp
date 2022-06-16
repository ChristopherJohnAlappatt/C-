#include <iostream>
#include <string.h>

using namespace std;

int find_character() {
    char input[100] = "Christopher";
    char toSearch = 'c';
    bool isFound = false;
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == toSearch) {
            cout << "Found at " << i << " position." << endl;
            isFound = true;
        }
    }
    if (!isFound) {
        cout << "The requested character is not present within the input string" << endl;
    }
    return 0;

}