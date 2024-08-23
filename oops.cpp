#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Employee
{
private:
 string name;
string id;
int salary;
string address;
public:
void getInput(){
cout<<"Name: ";
cin>>name;
cout<<"id: ";
cin>>id;
cout<<"Salary: ";
cin>>salary;
cout<<"Address: ";
cin>>address;
} 
void PrintOutput(){
cout<<name<<endl;
cout<<id<<endl;
cout<<salary<<endl;
cout<<address<<endl;
}
};
int main(){
Employee e1;
e1.getInput();
e1.PrintOutput();
}
