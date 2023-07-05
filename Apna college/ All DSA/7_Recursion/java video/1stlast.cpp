#include <iostream>
#include <string>
using namespace std;

int first = -1, last = -1;

void firstLast(string str, char c, int i) {

  if (i == str.length()) {
    cout << "First Occurence at : " << first << endl;
    cout << "Last Occurence at : " << last << endl;
    return;
  }

  if (c == str[i]) {
    if (first == -1) {
      first = i;
    } else {
      last = i;
    }
  }
  firstLast(str, c, i + 1);
}

int main() {
  string str = "abaacdaefaah";
  char c = 'a';
  firstLast(str, c, 0);

  return 0;
}