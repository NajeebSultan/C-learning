#include <iostream>
using namespace std;

int main() {
    char alphabets[5];  // Array to store 5 alphabets
    char deleteChar;    // Character to be deleted

    // Ask the user to enter 5 alphabets
    cout << "Please enter 5 alphabets: ";
    for (int i = 0; i < 5; i++) {
        cin >> alphabets[i];
    }

    // Ask the user which alphabet to delete
    cout << "Alphabet to be deleted: ";
    cin >> deleteChar;

    // Search and shift to delete the specified character
    for (int i = 0; i < 5; i++) {
        if (alphabets[i] == deleteChar) {
            // Shift remaining elements left by 1 position
            for (int j = i; j < 4; j++) {
                alphabets[j] = alphabets[j + 1];
            }
            break;  // Exit the loop once the character is deleted
        }
    }

    // Output the array after deletion
    cout << "After Deletion Array: ";
    for (int i = 0; i < 4; i++) {
        cout << alphabets[i];
    }
    cout << endl;

    return 0;
}