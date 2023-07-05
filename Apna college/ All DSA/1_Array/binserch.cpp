#include <iostream>
using namespace std;

void binarysearch(int arr[], int k, int n) {
  int s = 0;
  int e = n;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (arr[mid] == k) {
      cout << mid;
      break;
    } else if (arr[mid] > k) {
      e = mid - 1;
    } else {
      s = mid + 1;
    }
  }
  // return -1;
}

int main() {
  int n, k;
  cout << "Enter number of elements to input :";
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++) {
    cout << "enter data : ";
    cin >> arr[i];
  }
  cout << "enter data to be searched : ";
  cin >> k;
  binarysearch(arr, k, n);
  return 0;
}