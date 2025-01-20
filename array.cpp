#include<iostream>
using namespace std;
  int main(){
     
     int arr[10];
     int maxarr;

     cout<<"Enter 10 digits: "<<endl;
     for(int i=0 ;i<10 ;i++){
     cin>>arr[i];
     }

     maxarr=arr[0];
     for(int i=1 ;i<10 ;i++){
      if(arr[i]>maxarr){
        maxarr=arr[i];
      }
     }
     cout<<"Maximum no. is: "<<maxarr<<endl;
     return 0;

  }