#include <iostream>
#include <algorithm>  // for std::sort
using namespace std;

int main() {
    const int SIZE = 5;
    int A[SIZE];
    int sum = 0;
    int difference = 0;

    // Getting input for array A from the user
    cout << "Enter 5 elements in array A:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> A[i];
    }

    // Asking user for sorting order
    int choice;
    cout << "Press 1 for ascending and 2 for descending order: ";
    cin >> choice;

    if (choice == 1) {
        // Sorting in ascending order
        sort(A, A + SIZE);

        // Computing sum of array in ascending order
        for (int i = 0; i < SIZE; i++) {
            sum += A[i];
        }

        // Printing the sorted array in ascending order
        cout << "Ascending order array: ";
        for (int i = 0; i < SIZE; i++) {
            cout << A[i] << " ";
        }
        cout << endl;

        // Printing the sum of array
        cout << "Sum of the array: " << sum << endl;
    } 
    else if (choice == 2) {
        // Sorting in descending order
        sort(A, A + SIZE, greater<int>());

        // Computing difference of array in descending order
        difference = A[0];  // Start with the first element
        for (int i = 1; i < SIZE; i++) {
            difference -= A[i];
        }

        // Printing the sorted array in descending order
        cout << "Descending order array: ";
        for (int i = 0; i < SIZE; i++) {
            cout << A[i] << " ";
        }
        cout << endl;

        // Printing the difference of array
        cout << "Difference of the array: " << difference << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}