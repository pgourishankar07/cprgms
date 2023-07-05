#include <bits/stdc++.h>
// #include <iostream>
// #include <string> //contains all string functions

using namespace std;
int main() {

  string str1;
  string str2 = "gourishankar";
  string str3(5, 'g'); // 'g' prints 5 times
  string str4;
  getline(cin, str4); // reads with space
  cin >> str1;
  cout << "_______\n"
       << "string 1: " << str1 << endl
       << "string 2: " << str2 << endl
       << "string 3: " << str3 << endl
       << "string 4: " << str4;
  return 0;
}