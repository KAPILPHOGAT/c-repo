#include<iostream>
using namespace std;

// void swap(int a, int b){ //temp a b
//     int temp = a;        //4   4  5   
//     a = b;               //4   5  5
//     b = temp;            //4   5  4 
// }

//  int main(){
//     int x =4, y=5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swap(x, y); 
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
//     return 0;
// }
class human{
    int a ,b;
    public:
    int c,d,e;
   void define(int a1,int b1);
   void print(){
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;
        cout<<d<<endl;
        cout<<e<<endl;
    }
};
void human :: define( int a1,int b1){
    a=a1;
    b=b1;
}
int main(){
    human hero;
    hero.c=89;
    hero.d=09;
    hero.e=23;
hero.define(9,8);
hero.print();
}