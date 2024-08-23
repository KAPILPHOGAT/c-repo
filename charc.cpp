#include<iostream>
using namespace std;
 int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"smaller word";
    }
    else if(ch>='A'&& ch<='Z'){
        cout<<"larger word";
    }
    else if(ch>= '0' && ch<='9'){
        cout<<"no.";}
    else{
        cout<<"not a valid no.";
    }
 }