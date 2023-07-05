/*
Count Inversion is to count the inversions formed in an array that is
if a[i]>a[j] and i<j
*/

#include <iostream>
using namespace std;
int main() {
  int arr[8] = {6, 3, 9, 5, 2,
                8, 7, 1}; // inversions are : (3,1),32,51,52,61,62,91,92,97,98
  int n = 8;
  int inv = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 1 + i; j < n; j++) {
      if (arr[i] > arr[j]) {
        inv++;
      }
    }
  }
  cout << "The number of Inversions formed : " << inv;
  return 0;
}