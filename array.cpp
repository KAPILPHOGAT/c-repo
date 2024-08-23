// #include<iostream>
// #include<math.h>
// using namespace std;
// int rever(arr[n]){
//  for(int i=0;i<=n-i-1;i++){
//     int hai=arr[i];
//     arr[i]=arr[n-i-1];
//     arr[n-i-1]=hai;
//  }
//  return arr[n];
// }
 
//  int main(){
//      int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<=n;i++){
//         cin>>arr[i];}

//         cout<<arr[n];
//       cout<<rever(arr[n]);
//     }
    #include <iostream>
using namespace std;

void rever(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int hai = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = hai;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rever(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
