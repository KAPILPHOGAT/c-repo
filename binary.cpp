#include<iostream>
#include<math.h>
using namespace std;
 int main(){
      // initialize with intial value like 1,0;
      
       int n;
       cin>>n;
       long number=0;
       int i=0;
       int digit;
       while(n>0){
              digit=n%10;
              number+=(digit*pow(2,i));
             n=n/10;
             i++;

       }
       cout<<i<<endl;
       cout<<number;}