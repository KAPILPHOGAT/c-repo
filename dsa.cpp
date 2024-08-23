#include<iostream>
#include<math.h>
using namespace std;
int num(int n){
    int cont =0; 
     int revnum=0;
     int digit;
 while(n>0){
       if( n > INT_MAX/10)
       return 0;

    digit =n%10;
        n=n/10;
        cont++;
        revnum=(revnum*10)+digit;
    }
    return revnum;

}
 int main(){
   
    int n;
    cin>>n;
     
    
    num( n);
cout<<revnum<<endl;
}