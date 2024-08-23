#include<iostream>
using namespace std;
struct phone
{
int code;
int exchange; 
int number;
};
int main()
{ 
phone p1;
phone p2; 
p1.code = 212;
p1.exchange =767;
p1.number =8900;
cin>>p2.code >> p2.exchange >>p2.number;
cout<< "My number is "<<(p1.code) <<"" <<p1.exchange <<"-"<<p1.number<<endl;
cout<<"Your number is ("<< p2.code <<")"<< p2.exchange<<"-"<< p2.number<<endl;
return 0;
}
