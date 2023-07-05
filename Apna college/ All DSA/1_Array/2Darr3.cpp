#include <iostream>
using namespace std;
int main() {
  int r, c;
  cout << "enter number of rows :";
  cin >> r;
  cout << "enter number of columns :";
  cin >> c;
  int arr1[r][c], arr2[r][c], arr3[r][c];
  cout << "________________MATRIX 1_____________" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter data for " << i + 1 << "th row " << j + 1 << "th column :";
      cin >> arr1[i][j];
    }
  }
  cout << "the 1st matrix is:" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr1[i][j] << " ";
    }
    cout << endl;
  }
  cout << "________________MATRIX 2_________" << endl;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << "Enter data for " << i + 1 << "th row " << j + 1 << "th column :";
      cin >> arr2[i][j];
    }
  }
  cout << "the 2nd matrix is:" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }

  cout << "_________MATRIX 3_________" << endl;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      arr3[i][j] = arr1[i][j] + arr2[i][j];
    }
  }
  cout << "the resultant matrix is:" << endl;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cout << arr3[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}