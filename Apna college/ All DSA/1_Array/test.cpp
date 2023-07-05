#include <iostream>
using namespace std;
int main() {
  int arr1[2][2] = {{1, 3}, {5, 7}}, arr2[2][2] = {{2, 4}, {6, 9}}, arr3[2][2];

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < j + 1; k++) {
        arr3[i][j] += arr1[i][k] * arr2[k][j];
      }
    }
  }
  cout << "the matrix is:" << endl;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl << (arr1[1][0] * arr2[0][1]) + (arr1[1][1] * arr2[1][1]);
  return 0;
}