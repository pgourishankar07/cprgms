#include <iostream>
using namespace std;

int main() {

  //_____________triangular numbers_________________
  // int n;
  // cin>>n;

  // for(int i=n;i>=1;i--){
  //     for(int j=1;j<=i;j++){
  //         cout<<j;
  //     }
  //     cout<<"\n";
  // }

  //____________0 and 1 triangular pyramid_____________

  // int n;
  // cin>>n;
  // int c=1;

  // for(int i=1;i<=n;i++){
  //     for(int j=1;j<=i;j++){
  //         cout<<c;
  //         if(c==1){
  //             c=0;
  //         }
  //         else{
  //             c=1;
  //         }
  //     }
  //     if(c==0 && i%2==0){
  //         c=1;
  //     }
  //
  //     cout<<"\n";
  // }

  //___________rhombus pattern______
  // int n;
  // cin>>n;
  // char sp=' ';

  // for(int i=1;i<=n;i++){
  //     for(int j=1;j<=n;j++){
  //         cout<<"*";
  //     }
  //     cout<<"\n";
  //     cout<< string(i,sp);
  // }

  //__________triangular pattern_____

  // int n;
  // cin>>n;
  // int l=n;

  // for(int i=1;i<=n;i++){
  //     for(int j=1;j<=i;j++){
  //         if(j==1){
  //             for(int x=l;x>=1;x--){
  //             cout<<" ";
  //         }
  //         }

  //         cout<<j<<" ";
  //     }
  //     cout<<"\n";
  //     l--;
  // }

  //_________palindrome triangular______

  // int n;
  // cin >> n;
  // int l = n;

  // for (int i = 1; i <= n; i++) {
  //     for (int j = 1; j <= i; j++) {
  //         if (j == 1) {
  //             for (int x = l; x >= 1; x--) {
  //                 cout << " ";
  //             }
  //         }
  //         for (int a = i; a >= 1; a--) {
  //             cout << a;

  //             if (a == 1) {
  //                 for (int b = a + 1; b <= i; b++) {
  //                     cout << b;
  //                 }
  //             }
  //         }
  //         break;
  //     }
  //     cout << "\n";
  //     l--;
  // }

  // another method

  // int n;
  // cin >> n;
  // for (int i = 1; i <= n; i++) {
  //     int j;
  //     for (j = 1; j <= n - i; j++) {
  //         cout << "  ";
  //     }
  //     int k = i;
  //     for (; j <= n; j++) {
  //         cout << k-- << " ";
  //     }
  //     k = 2;
  //     for (; j <= n + i - 1; j++) {
  //         cout << k++ << " ";
  //     }
  //     cout << endl;
  // }

  //-------------DIAMOND_________

  // int n;
  // cin >> n;

  // for (int i = 1; i <= n; i++) {
  //     for (int k = n - i; k >= 1; k--) {
  //         cout << " ";
  //     }
  //     for (int j = 1; j <= (2 * i - 1); j++) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }
  // for (int i = 1; i <= n; i++) {
  //     for (int k = 1; k < i; k++) {
  //         if (i == 1) {
  //             continue;
  //         } else {

  //             cout << " ";
  //         }
  //     }
  //     for (int j = (2 * n - (2 * i - 1)); j >= 1; j--) {
  //         cout << "*";
  //     }
  //     cout << endl;
  // }

  //__________Mountain_________

  int c, r;
  cin >> c;
  r = c / 3;
  // cout << r;

  for (int i = 1; i <= r; i++) {
    for (int j = 1; j <= c; j++) {
      if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
        cout << "*";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
}