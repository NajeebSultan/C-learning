#include <iostream>
using namespace std;

int main() {
    float marks[5];  // Array to store marks of 5 students
    float total = 0; // Variable to store the sum of all marks
    float average;   // Variable to store the average marks

    // Reading marks for 5 students
    cout << "Enter marks for 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];  // Accumulate the total marks
    }

    // Calculate average
    average = total / 5;

    // Display the average marks
    cout << "\nAverage marks: " << average << endl;

    // Display student numbers and marks for those above average
    cout << "\nStudents who scored above average:\n";
    for (int i = 0; i < 5; i++) {
        if (marks[i] > average) {
            cout << "Student " << i + 1 << ": " << marks[i] << endl;
        }
    }

    return 0;
}
