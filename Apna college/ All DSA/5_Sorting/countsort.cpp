
//  _____________Count sort__________________________
/*
when sorting small integers with limited range with duplicate
*/
int maxi(int arr[], int s) {

  int max_num = arr[0];

  for (int i = 1; i < s; i++) {
    if (arr[i] > max_num) {
      max_num = arr[i];
    }
  }
  return max_num;
}

void CountSrt(int org[], int n, int srt[]) {
  int countArrSize = maxi(org, n);

  int cnt[countArrSize]; // size = max(org) = maximun number in array =6
  int pos[countArrSize]; // size same as count array

  for (int i = 0; i <= 6; i++) {
    int count = 0;
    for (int j = 0; j <= 9; j++) {
      if (i == org[j]) {
        count++;
      }
    }
    cnt[i] = count;
  }

  for (int i = 0; i <= 6; i++) {
    // int sum = 0;
    // for (int j = 0; j <= i; j++) {
    //     sum += cnt[j];
    // }
    pos[i] = cnt[i] + pos[i - 1];
  }

  for (int i = 8; i >= 0; i--) {
    for (int j = 0; j <= 6; j++) {
      int val = 0;
      if (org[i] == j) {
        val = pos[j] - 1;
        srt[val] = org[i];
        pos[j] = val;
      }
    }
  }
}
#include <iostream>
using namespace std;
int main() {
  int org[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
  int srt[9];
  int n = 9;
  CountSrt(org, n, srt);

  for (int k = 0; k < 9; k++) {

    cout << srt[k] << " ";
  }

  return 0;
}

/*
TIME COMPLEXITY  :: max(arr),n

*/