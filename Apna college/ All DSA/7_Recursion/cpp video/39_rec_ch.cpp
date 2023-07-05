#include <iostream>
using namespace std;

// ____________check whether array is sorted or not_____

// bool check(int arr[], int n) {

//     if (n == 1) {
//         return true;
//     }else{

//     return (arr[0] < arr[1] && check(arr + 1, n - 1));
//     }

// }

// int main() {
//     int arr[] = {5, 2, 3, 4, 5};
//     cout << bool(check(arr, 5)) << endl;
//     return 0;
// }

// _________print number till n___________

// void dec(int n) {
//     if (n == 0) {
//         return;
//     } else {
//         cout << n << endl;
//         dec(n - 1);
//     }
// }

// void inc(int n) {
//     if (n == 0) {
//         return;
//     } else {
//         inc(n - 1);
//         cout << n << endl;
//     }
// }

// int main() {
//     int n;
//     cout << "enter a number : ";
//     cin >> n;
//     dec(n);
//     // inc(n);
//     return 0;
// }

// ___________find the first and last occurence of a number in array____

int foccur(int arr[], int n, int i, int key) {
  if (i == n) {
    return i;
  } else if (arr[i] == key) {
    return i;
  } else {
    return foccur(arr, n, i + 1, key);
  }
}

int loccur(int arr[], int n, int i, int key) {
  if (i == 0) {
    return 0;
  } else if (arr[i] == key) {
    return i;
  } else {
    return foccur(arr, n, i - 1, key);
  }
}

#include <iostream>
using namespace std;
int main() {
  int arr[] = {5, 2, 3, 4, 5};
  int s = sizeof(arr) / sizeof(arr[0]);
  int index = 0, key;
  cout << "Enter a number : ";
  cin >> key;
  cout << "First occurence : " << foccur(arr, s, index, key) << endl;
  index = s - 1;
  cout << "Second occurrence : " << loccur(arr, s, index, key);

  return 0;
}