// ___________Remove all the duplicate subsequence in the set____________

#include <iostream>
#include <unordered_set>
using namespace std;

void subSeq(string str, int i, string newStr,
            unordered_set<string>
                &myset) { //& passing the original set where changes made
  if (i == str.length()) {
    if (myset.find(newStr) != myset.end()) {
      return;
    } else {
      cout << newStr << endl;
      myset.insert(newStr);
      return;
    }
  }
  subSeq(str, i + 1, newStr + str[i], myset);
  subSeq(str, i + 1, newStr, myset);
}

int main() {
  unordered_set<string> myset = {};
  subSeq("aaa", 0, "", myset);

  return 0;
}