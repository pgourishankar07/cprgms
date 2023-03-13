#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
  int n1 = mid - l + 1; // n1&n2 are sub_arr_size 1 and 2
  int n2 = r - mid;

  int arr1[n1];
  int arr2[n2];

  for (int i = 0; i < n1; i++) {
    arr1[i] = arr[l + i];
  }
  for (int i = 0; i < n2; i++) {
    arr2[i] = arr[mid + 1 + i];
  }

  int ptr1 = 0, ptr2 = 0, k = 0;
  while (ptr1 < n1 && ptr2 < n2) {
    if (arr1[ptr1] < arr2[ptr2]) {
      arr[k] = arr1[ptr1];
      k++;
      ptr1++;
    } else {
      arr[k] = arr2[ptr2];
      k++;
      ptr2++;
    }
  }
  while (ptr1 < n1) {
    arr[k] = arr1[ptr1];
    k++;
    ptr1++;
  }
  while (ptr2 < n2) {
    arr[k] = arr2[ptr2];
    k++;
    ptr2++;
  }
}

void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
  }
}

int main() {

  int arr[] = {5,4,3,2,1};
  mergeSort(arr, 0, 4);

  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}