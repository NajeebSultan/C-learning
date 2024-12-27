#include<iostream>
#include<string>

using namespace std;

int main(){
string color, Pluralnoun , celebrity;

cout<<"Enter the color: ";
getline(cin,color)<<endl;
cout<<"Enter the plural noun: ";
getline(cin,Pluralnoun)<<endl;
cout<<"Enter the celebrity : ";
getline(cin,celebrity)<<endl;

cout<<"Roses are "<<color<<endl;

cout<<Pluralnoun<<" is blue"<<endl;
cout<<"I love "<<celebrity;

return 0;
}