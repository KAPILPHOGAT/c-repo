#include<iostream>
using namespace std;
 int main(){
    int n;
    cin>>n;
    int sum=0;
    int add=0;
    for(int i=0;i<=n;i=i+2){
        sum=sum+i;

    }
    cout<<sum<<endl;
    for(int i=0;i<=n;i++){
       if(i%2==0) {add=add+i;}

    }
    cout<<add;

 }