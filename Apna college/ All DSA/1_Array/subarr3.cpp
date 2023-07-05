#include <iostream>
using namespace std;

bool pairwise(int arr[], int k, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 1; j < n; j++) {
      if (arr[i] + arr[j] == k) {
        cout << i << " " << j << endl;
        return true;
      }
    }
  }

  return false;
}

int main() {
  int arr[] = {2, 4, 7, 11, 14, 16, 20, 21};
  int k = 31;
  int n = sizeof(arr) / sizeof(arr[0]);
  cout << pairwise(arr, k, n);
  return 0;
}