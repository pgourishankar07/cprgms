#include <iostream>
using namespace std;
int main() {
  string s, s2;
  cout << "enter a string :" << endl;
  getline(cin, s);
  int count = 0, maxc = 0;
  for (int i = 0; i < s.length(); i++) {
    count = 0;
    for (int j = 0; j < s.length(); j++) {
      if (s[i] == s[j] && s[i] != ' ') {
        count++;
      }
    }
    if (count > maxc) {
      maxc = count;
      s2 = s[i];
    }
  }
  cout << "the maximum times a character occured is :" << s2 << endl
       << "no. of times :" << maxc;

  return 0;
}