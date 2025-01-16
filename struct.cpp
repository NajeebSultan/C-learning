#include <iostream>
using namespace std;

struct Student {
    string name;
    int rollNumber;
    float marks;
};

int main() {
 
    Student students[2];

    
    students[0].name = "Aisha";
    students[0].rollNumber = 101;
    students[0].marks = 90.5;

    students[1].name = "Maryam";
    students[1].rollNumber = 102;
    students[1].marks = 85.3;

   
    for (int i = 0; i < 2; i++) {
        cout << "Student " << (i+1) << ": " << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl << endl;
    }

    return 0;
}