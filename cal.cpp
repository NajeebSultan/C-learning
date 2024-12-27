#include<iostream>
#include<string>
using namespace std;




int main(){
  int num1, num2;
  char op;

  cout<<"Enter the first number: ";
  cin>>num1;
    cout<<"Enter the operator: ";
  cin>>op;
  cout<<"Enter the second number: ";
  cin>>num2;
  int result;
  if(op=='+'){
   result=num1+num2;
  }
  else if(op=='-'){
     result=num1-num2;

  }
   else if(op=='/'){
     result=num1/num2;

   }
   else if(op=='*'){
     result=num1*num2;

   }
   cout<<result;
   
 
  return 0;
}       