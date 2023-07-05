#include <iostream>
using namespace std;

void swap(int arr[], int x, int y) {
  int temp = arr[x];
  arr[x] = arr[y];
  arr[y] = temp;
}

int main() {
  int arr[7] = {1, 3, 4, 7, 5, 6, 2};
  int n = 7;
  // for (int i = 0; i < 7; i++) {
  //   if (arr[i] > arr[i + 1] && arr[i + 1] < arr[i + 2]) {
  //     i++;
  //     i++;
  //   } else if (arr[i] < arr[i + 1] && (i % 2) == 0) {
  //     swap(arr, i, i + 1);
  //   } else if (arr[i] > arr[i + 1] && (i % 2) == 0) {
  //     i++;
  //   } else if (arr[i] < arr[i + 1] && (i % 2) != 0) {
  //     i++;
  //   } else if (arr[i] > arr[i + 1] && (i % 2) != 0) {
  //     swap(arr, i, i + 1);
  //   }
  // }
  for (int i = 1; i < n; i += 2) { // traversing through all odd index elements
    if (arr[i] > arr[i - 1]) {
      swap(arr, i, i - 1);
    }
    if (arr[i] > arr[i + 1] && i <= n - 2) { // go upto 2 elements before the last index
      swap(arr, i, i + 1);
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}
// IMPORTANT::::::::::::::
/*
there is a difference between if ...if and if... else if
you can see observence in the line 31 by changing it to else if
*/