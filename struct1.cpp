#include <iostream>
#include <string>
using namespace std;

// Nested structure definition for employeeSalary
struct employeeSalary {
    float basicSalary;
    float houseRent;
    float medical;
};

// Nested structure definition for employee
struct employee {
    int employeeID;
    string employeeName;
    int age;
    char gender;
    employeeSalary salary;
};

int main() {
    employee employees[10]; // Array of 10 employees

    // Taking input for all 10 employees
    for (int i = 0; i < 10; i++) {
        cout << "Enter details for employee #" << i + 1 << ":\n";
        
        // Taking input for employee details
        cout << "Employee ID: ";
        cin >> employees[i].employeeID;
        cin.ignore();  // To ignore the newline character left by cin
        
        cout << "Employee Name: ";
        getline(cin, employees[i].employeeName);
        
        cout << "Age: ";
        cin >> employees[i].age;
        
        cout << "Gender (M/F): ";
        cin >> employees[i].gender;
        
        // Taking input for salary details
        cout << "Basic Salary: ";
        cin >> employees[i].salary.basicSalary;
        
        cout << "House Rent: ";
        cin >> employees[i].salary.houseRent;
        
        cout << "Medical Allowance: ";
        cin >> employees[i].salary.medical;

        cout << endl; // Blank line for readability
    }

    // Displaying records of employees with basic salary greater than 50000
    cout << "Employees with basic salary greater than 50000:\n";
    for (int i = 0; i < 10; i++) {
        if (employees[i].salary.basicSalary > 50000) {
            cout << "Employee ID: " << employees[i].employeeID << endl;
            cout << "Name: " << employees[i].employeeName << endl;
            cout << "Age: " << employees[i].age << endl;
            cout << "Gender: " << employees[i].gender << endl;
            cout << "Basic Salary: " << employees[i].salary.basicSalary << endl;
            cout << "House Rent: " << employees[i].salary.houseRent << endl;
            cout << "Medical Allowance: " << employees[i].salary.medical << endl;
            cout << endl;
        }
    }

    return 0;
}
