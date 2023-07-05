#include <iostream>
using namespace std;

bool isSrt(int arr[], int i, int j, int len) {

  if (arr[i] >= arr[j]) {
    return false;
  }
  if (j == (len - 1)) {
    return true;
  }
  isSrt(arr, i + 1, j + 1, len);
}

int main() {
  int arr[] = {1, 5, 3, 4};
  int i = 0;
  int size = sizeof(arr) / sizeof(arr[0]);
  cout << isSrt(arr, i, i + 1, size);
  return 0;
}