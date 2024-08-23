// #include<iostream>
// #include<math.h>
// using namespace std;
//  int main(){
//        int n;
//        cin>>n;
//        int number=0;
//        int i=0;
//        int digit;
//        while(n>0){
//               digit=n%2;
//               number+=(digit*pow(10,i));
//              n=n/2;
//              i++;

//        }
//        cout<<i<<endl;
//        cout<<number;}
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     string binary = "";
//     int i = 0;
//     int digit;
//     while (n > 0) {
//         digit = n % 2;
//         binary = to_string(digit) + binary;
//         n = n / 2;
//         i++;
//     }
//     cout << i << endl;
//     cout << binary << endl;
//     return 0;
// } 
// DECIMAL to binary
 #include <iostream>
 #include<math.h>
 using namespace std;

 int main() {
      int n;
  cin >> n;
  int i = 0;
   int digit=0;
  
  while(n!=0){
     int bit=n & 1;
      digit=(bit*pow(10,i)) +digit;
      n=n>>1;
      i++;
      
  }
  cout<<digit;}