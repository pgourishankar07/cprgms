#include <iostream>
using namespace std;

int maxof(int arr[], int n) { // find maximum element in that array
  int maxi = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxi) {
      maxi = arr[i];
    }
  }
  return maxi;
}
// __________________________COUNT SORT ______________________________________________

void countSrt(int arr[], int n, int div) {
  int output[n];
  int count[10] = {0};

  for (int i = 0; i < n; i++) { // count array
    count[(arr[i] / div) % 10]++;
  }
  for (int i = 1; i < 10; i++) { // position array
    count[i] = count[i] + count[i - 1];
  }
  for (int i = n - 1; i >= 0; i--) { // output array
    output[count[(arr[i] / div) % 10] - 1] = arr[i];
    count[(arr[i] / div) % 10]--;
  }
  for (int i = 0; i < n; i++) { // copying the output values into the original array
    arr[i] = output[i];
  }
}
// _____________________________Radix SORT ______________________________________________

void radixSrt(int arr[], int n) {
  int maxNum = maxof(arr, n);
  for (int div = 1; (maxNum / div) > 0; div *= 10) {
    countSrt(arr, n, div);
  }
}

int main() {
  int arr[5] = {1, 12, 113, 10, 90};
  int n = 5;

  radixSrt(arr, n);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}