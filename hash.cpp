#include<iostream>
#include<math.h>
using namespace std;
 int main(){
    // int n;
    // cin >> n;
     int arr[5]={2,4,0,4,1};
    // for(int i=0;i<=n;i++){
    //     cin>>arr[i];}
 
 int hash[1000]={0};
 for (int i =0;i<arr.size();i++){
    hash[arr[i]]+=1;
 } 
 for (int j =0;j<arr.size();i++){
    hash[arr[j]]+=1;
 } 
 
 for (int i =0;i<arr.size();i++){
    for (int j =0;j<arr.size();i++){
   if( hash[arr[i]]==hash[arr[j]]){
    if (arr[i]=arr[j]){continue;}
    return;}
    return arr[i];
   }
 } 
 
 
 
 
 
 }