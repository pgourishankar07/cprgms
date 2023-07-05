#include <iostream>
#include <string>
using namespace std;
int main() {
  //______________________upper and lowercase_____________________________

  // string str, c;
  // getline(cin, str);
  // cout << "given string :" << str << endl;
  // int n = str.length();
  // for (int i = 0; i < n; i++) {
  //     if (str[i] != ' ') {
  //         c += char(str[i] - 32);
  //         // cout << c;
  //     } else {
  //         c += ' ';
  //     }
  // }
  // cout << c;

  //_____________________form the big no in num string______________________

  // string str, str2 = "9876543210", str3;
  // cout << "enter an integer :";
  // cin >> str;
  // for (int i = 0; i < str2.length(); i++) {
  //     for (int j = 0; j < str.length(); j++) {
  //         if (str2[i] == str[j]) {
  //             str3 += str[j];
  //         }
  //         // cout << "hi" << endl;
  //     }
  // }
  // int x = stoi(str3);
  // cout << x;

  //_____________________count particular char______________________
  string s;
  cout << "enter a string :" << endl;
  getline(cin, s);
  char c;
  cout << "enter a character to count :" << endl;
  cin >> c;
  int count = 0;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == c) {
      count++;
    }
  }
  cout << "the number of times occured :" << count;

  //_______________to print no. of times each char
  // present____________________________________
  string s, s2;
  cout << "enter a string :" << endl;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    int x = s2.find(s[i]);

    if (x > s.length()) {
      int count = 0;
      for (int j = 0; j < s.length(); j++) {
        if (s[i] == s[j]) {
          count++;
        }
      }
      cout << "the no. of times  " << s[i] << "  occured is :" << count << endl;
    }
    s2 += s[i];
  }
  cout << s2;
  //_______________to print the char which comes maximum
  // times____________________________________

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