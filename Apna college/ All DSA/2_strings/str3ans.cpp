#include <iostream>
using namespace std;
int main() {
  //___________________________________________________
  // string str = "aweggew";
  // // to covert into uppercase
  // for (int i = 0; i < str.size(); i++) {
  //     if (str[i] >= 'a' && str[i] <= 'z') {
  //         str[i] -= 32;
  //     }
  // }
  // cout << "uppercased :" << str << endl;
  // // to convert into lowercase
  // for (int i = 0; i < str.size(); i++) {
  //     if (str[i] >= 'A' && str[i] <= 'Z') {
  //         str[i] += 32;
  //     }
  // }
  // cout << "lowercased :" << str << endl;
  // alternate method______________
  //  transform(str.begin(), str.end(), str.begin(), ::toupper);

  //___________________________________________________

  string s = "145354324";
  sort(s.begin(), s.end(), greater<int>());
  cout << s;
  //___________________________________________________

  return 0;
}