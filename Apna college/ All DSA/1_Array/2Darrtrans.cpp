#include <iostream>
using namespace std;
int main() {
  int r, c;
  cout << "enter number of rows for symmetric matrix :";
  cin >> r;
  c = r;
  int arr[r][c];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter data for " << i + 1 << "th row " << j + 1 << "th column :";
      cin >> arr[i][j];
    }
  }
  cout << "the matrix is:" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
  cout << "the transpose format is :" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
  return 0;
}