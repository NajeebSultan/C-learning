#include <iostream>
#include <string>
using namespace std;

// Function to check if a word is a palindromes
bool isPalindrome(const string& str) {
    int start = 0;              // Start pointer
    int end = str.length() - 1; // End pointer

    // Loop through the string from both ends
    while (start < end) {
        // Check if characters at start and end are equal
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true; // If the loop completes, it's a palindrome
}

int main() {
    string input;
    
    cout << "Enter a word: ";
    cin >> input;  // Read the word input

    if (isPalindrome(input)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}
