#include <iostream>
using namespace std;

// ________permutation of ABC using recursion_____

// void permu(string s, string ans) {
//     if (s.length() == 0) {
//         cout << ans << endl;
//         return;
//     } else {
//         for (int i = 0; i < s.length(); i++) {
//             char ch = s[i];
//             string ros = s.substr(0, i) + s.substr(i + 1);
//             permu(ros, ans + ch);
//         }
//     }
// }

// _________number of steps in ladder game______

int cstep(int s, int e) {
  if (s == e) {
    return 1;
  } else if (s > e) {
    return 0;
  } else {
    int count = 0;
    for (int i = 1; i <= 6; i++) {
      count += cstep(s + i, e);
    }
    return count;
  }
}

// ______count path in maze______

int cpath(int d, int i, int j) {
  if (i == d - 1 && j == d - 1) {
    return 1;
  } else if (i > d - 1 || j > d - 1) {
    return 0;
  } else {
    return cpath(d, i + 1, j) + cpath(d, i, j + 1);
  }
}

int main() {
  // permu("ABC", "");
  // cout << cstep(0, 3);
  cout << cpath(3, 0, 0);
  return 0;
}