// _________permutation of the given string

#include <iostream>
using namespace std;

void permu(string str, string per) {
  if (str.length() == 0) {
    cout << per << endl;
    return;
  }
  for (int i = 0; i < str.length(); i++) {
    char currChar = str[i];
    string newStr = str.substr(0, i) + str.substr(i + 1);
    permu(newStr, per + currChar);
  }
}

int main() {
  permu("abc", "");
  return 0;
}

// The time complexity is O(n!)  it is calling like