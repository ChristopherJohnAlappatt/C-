#include <iostream>
#include <strings.h>
#include <string.h>

using namespace std;

int count_vowels_and_consonants() {
    char input[20];
    cout << "Enter a string !!!" << endl;
    cin >> input;
    int vowel_count = 0, consonants_count = 0;

    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u') {
            vowel_count += 1;
        }
    }
    consonants_count = strlen(input) - vowel_count;
    cout << "Vowel Count -> " << vowel_count << endl;
    cout << "Consonant Count -> " << consonants_count << endl;

    return 0;
}

