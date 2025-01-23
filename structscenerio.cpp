#include<iostream>
using namespace std;

struct employee{
  int id;
  string name;
  string designation;
  float salary;

};
int main(){
  int numemployees;

   cout<<"Enter the number of employees: ";
  cin>>numemployees;

  employee employees[numemployees];

  for(int i=0 ; i<numemployees; i++){
    cout<<"Enter details for employee " <<i+1<<":\n";
    cout<<"Employee ID: ";
cin>>employees[i].id;
cin.ignore();
cout<<"Name: ";
getline(cin, employees[i].name);
cout<<"Designation: ";
getline(cin, employees[i].designation);
cout<<"Monthly Salary: ";
cin>>employees[i].salary;
      }

      cout<<"\nEmployee Records:\n";
      for(int i=0; i<numemployees; i++){
        cout<<"\nEmployee"<<i+1<<":\n";
        cout<<"ID: "<<employees[i].id<<endl;
        cout<<"Name: "<<employees[i].name<<endl;
        cout<<"Designation: "<<employees[i].designation<<endl;
        cout<<" Monthly Salary: "<<employees[i].salary<<endl;

      }
      return 0;

}