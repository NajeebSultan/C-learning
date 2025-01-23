#include<iostream>
using namespace std;
int main(){
  int numstudent ,numsubjects;

 cout<<"Enter the number of students: ";
 cin>> numstudent;
 cout<<"Enter the number of subjects: ";
 cin>> numsubjects;


 for(int i=0 ; i<numstudent ;i++){
  int rollno;
  string name;
  float totalmarks=0;

  cout<<"\nEnter the details for student "<<i+1<<": "<<endl;
  cout<< "Roll Number: ";
  cin>>rollno;
  cout<<"Name: "<<endl;
  cin.ignore();
  getline(cin, name);


  for(int j=0 ;j<numsubjects ;j++){
    float marks;
    cout<<"/nEnter marks for subject "<<j+1<<": ";
    cin>>marks;
    totalmarks=totalmarks+marks;
  }

  float average=totalmarks/numsubjects;


  char grade;
  if(average>=90)
  grade = 'A';
   else if(average>=80)
  grade = 'B';
   else if(average>=70)
  grade = 'C';
    else if(average>=60)
  grade = 'D';
    else
  grade = 'F';

  cout<<"\nStudent "<<name<<"Roll no. "<<rollno<<" has an average of "<< average<<" and a grade of "<<grade <<".\n";

  

 }
 return 0;

}