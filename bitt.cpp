#include<iostream>
#include<math.h>
using namespace std;
 
 int main(){
   int a,b;
   cin>>a>>b;
  int count=0;
  int digit=0;
   while(a!=0){
      if(a&1){
         count++;
      }
     a= a>>1;
   }
   while(b!=0){
      if(b&1){
         digit++;
      }
     b= b>>1;
   }
   cout<<count +digit;
return 0;
 }
