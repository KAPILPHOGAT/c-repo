// #include<iostream>
// #include<math.h>
// using namespace std;
// int comple(int n){
//     string binary =" ";
// while(n!=0){
//     if(n&1){
//        int digit =0;
//         binary=to_string(digit)+binary;
// n>>=1;
//     }
//     else{
//        int digit=1;
//        binary=to_string(digit)+binary;
// n>>=1;

//     }
    
// }
// int hai= stoi(binary);
// return hai;
// }
//  int main(){
//     int n;
//     cin>>n;
// int comple(int n);
// int hello =comple( n);
// cout<<hello;
//  }
// by babbar bhaiya 
 #include<iostream>
#include<math.h>
using namespace std;
func(int n){
    int m=n;
    int num=0;
    if(n==0)
    return 1;
    while(m!=0){
         num=((num<<1)|1);
        m= m>>1;
    } 
    int comp= (~n) & num;
    return comp;
    }
int main(){
    int n;
    cin>>n;
   
int hai=func( n);

cout<<hai;
}