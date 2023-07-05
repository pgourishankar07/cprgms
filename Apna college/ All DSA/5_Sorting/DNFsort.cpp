// ___________Dutch National Flag __________
/*
sorting the array consits of 0,1,2
*/

void swap(int arr[], int m, int h) {
  int temp = arr[m];
  arr[m] = arr[h];
  arr[h] = temp;
}

void DNFsort(int arr[], int n) {
  int low = 0; // pointing the first element
  int mid = 0;
  int h = n - 1;                       // pointing the last element
  for (int i = 0; i < (3 * 11); i++) { // each case has 3 possibiliteies
    if (mid == h) { // check first itself or else it wont happen bcoz arr
                    // contains 0,1,2
      break;
    } else if (arr[mid] == 1) {
      mid++;
    } else if (arr[mid] == 2) {
      swap(arr, mid, h);
      h--;
    } else if (arr[mid] == 0) {
      swap(arr, low, mid);
      low++;
    }
  }
}

#include <iostream>
using namespace std;
int main() {
  int arr[11] = {1, 1, 2, 0, 0, 1, 2, 2, 1, 0};
  int n = 11;
  DNFsort(arr, n);
  cout << "The sorted array is : " << endl;

  for (int i = 0; i < 11; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
/*
            TIME COMPLEXITY = n
becasuse every time either mid++ or high-- so they will be meet at a point
*/