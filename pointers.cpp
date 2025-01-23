#include <iostream>
using namespace std;

void inputValues(float (&marks)[10]) {
    cout << "Enter marks for 10 students: \n";
    for (int i = 0; i < 10; ++i) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }
}

void findAverage(float (&marks)[10], float &average) {
    float sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += marks[i];
    }
    average = sum / 10.0;
}

int main() {
    
    float marks[10];
    
  
    float average = 0;

    inputValues(marks);

    
    findAverage(marks, average);

    cout << "The average marks of the 10 students is: " << average << endl;

    return 0;
}
