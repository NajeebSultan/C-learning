#include<iostream>
#include<string>
using namespace std;

int main(){
int age=19;
int *PAge= &age ;

double gpa=2.7;
double *PGpa= &gpa ;

string name="Najeeb";
string *PName= & name;

cout<<*PName;

  
  return 0;
}