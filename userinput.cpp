#include<iostream>
#include<string>
using namespace std;

int main(){
int age;
cout<<"Enter your age: "<<endl;
cin>>age;

cout<<"Your are "<<age<<" years old";

//strings user input

string name;
cout<<"Enter your name: "<<endl;
getline(cin, name);
  cout<<"Hello"<<name;
  return 0;
}