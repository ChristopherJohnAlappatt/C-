#include <iostream>
#include <string.h>

using namespace std;

int strings_using_char_array() {
    char name[20] = "Christopher";
    char user[20];

    cin >> user;
    if (strcmp(user, name) == 0) {
        cout << "Welcome back";
    } else {
        cout << "Not the same person" << endl;
    }

    strcat(name, user);
    cout << name << endl;
    cout << strlen(name);
    return 0;
}

