#include <iostream>
 #include<math.h>
 using namespace std;

 int main() {
      int rs;
      cin>>rs;
       int n=rs/100;
       cout<<"no of 100"<<" "<<n<<endl;
     
       int pai=rs%100;
       int m=pai/20;
       cout<<"no of 20"<<m<<endl;
       int ne=pai%20;
       int one=ne/1;
       cout<<(n+m+one);
 }
