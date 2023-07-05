// _______________________with uisng recursion______________

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
  int n1 = mid - l + 1; // n1&n2 are sub_arr_size 1 and 2
  int n2 = r - mid;

  int L[n1];
  int R[n2];

  for (int i = 0; i < n1; i++) {
    L[i] = arr[l + i];
  }
  for (int i = 0; i < n2; i++) {
    R[i] = arr[mid + 1 + i];
  }

  int i = 0, j = 0, k = 0;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }
  while (i < n1) {
    arr[k] = L[i];
    k++;
    i++;
  }
  while (j < n2) {
    arr[k] = R[j];
    k++;
    j++;
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
  int arr[] = {12, 11, 13, 5, 6, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, n);

  cout << "Sorted array is: \n";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";

  return 0;
}

// without recursion____________

// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// void merge(int arr[], int l, int mid, int r) {
//   int n1 = mid - l + 1;
//   int n2 = r - mid;
//   int L[n1], R[n2];

//   for (int i = 0; i < n1; i++)
//     L[i] = arr[l + i];
//   for (int i = 0; i < n2; i++)
//     R[i] = arr[mid + 1 + i];

//   int i = 0, j = 0, k = l;
//   while (i < n1 && j < n2) {
//     if (L[i] <= R[j]) {
//       arr[k] = L[i];
//       i++;
//     } else {
//       arr[k] = R[j];
//       j++;
//     }
//     k++;
//   }
//   while (i < n1) {
//     arr[k] = L[i];
//     i++;
//     k++;
//   }
//   while (j < n2) {
//     arr[k] = R[j];
//     j++;
//     k++;
//   }
// }

// void mergeSort(int arr[], int n) {
//   int curr_size, l;
//   for (curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
//     for (l = 0; l < n - 1; l += 2 * curr_size) {
//       int mid = min(l + curr_size - 1, n - 1);
//       int r = min(l + 2 * curr_size - 1, n - 1);
//       merge(arr, l, mid, r);
//     }
//   }
// }

// int main() {
//   int arr[] = {12, 11, 13, 5, 6, 7};
//   int n = sizeof(arr) / sizeof(arr[0]);

//   mergeSort(arr, n);

//   cout << "Sorted array is: \n";
//   for (int i = 0; i < n; i++)
//     cout << arr[i] << " ";

//   return 0;
// }
