#include <iostream>
using namespace std;

// Function to take input for the array
void inputValues(float (&marks)[10]) {
    cout << "Enter marks for 10 students: \n";
    for (int i = 0; i < 10; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

// Function to calculate the average of the marks
void findAverage(float (&marks)[10], float &average) {
    float sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += marks[i];
    }
    average = sum / 10.0;
}

int main() {
    // Declare an array to store marks of 10 students
    float marks[10];
    
    // Reference to store average
    float average = 0;

    // Call inputValues function to take input
    inputValues(marks);

    // Call findAverage function to calculate the average
    findAverage(marks, average);

    // Display the average
    cout << "The average marks of the 10 students is: " << average << endl;

    return 0;
}
