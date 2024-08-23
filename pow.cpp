#include<iostream>
#include<math.h>
using namespace std;
int func(int n){
   
        // for(int i=0;i<=30; i++){
        //   int  ans=pow(2,i);
        //     if(ans==n)
        //     return true;
        // }
        // return false;

    for(int i=0;i<=30; i++){
           if( n==pow(2,i))
            return true;
        }
        return false;
    
    
}
int main(){

    int n;
    cin>>n;
   bool hai= func(n);
cout<<hai;
}