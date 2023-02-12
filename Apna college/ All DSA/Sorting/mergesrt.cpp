#include <iostream>
using namespace std;
int main() {
  int arr1[4], arr2[4];
  int arr3[8];
  for (int i = 0; i < 4; i++) {
    cout << "Enter array 1 :" << endl;
    cin >> arr1[i];
    cout << "Enter array 2 :" << endl;
    cin >> arr2[i];
  }

  for (int i = 0; i < 8; i++) {
    int ptr1 = 0, ptr2 = 0;
    if (arr1[ptr1] < arr2[ptr2]) {
      arr3[i] = arr1[ptr1];
      ptr1++;
    } else {
      arr3[i] = arr2[ptr2];
      ptr2++;
    }
  }
  cout << "Output";
  for (int i = 0; i < 8; i++) {
    cout << arr3[i] << endl;
  }

  return 0;
}