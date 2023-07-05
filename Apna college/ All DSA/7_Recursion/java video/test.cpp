#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
  // Create a hash set of integers
  std::unordered_set<string> myHashSet = {"aaa", "aa", "a"};
  string newStr = "z";
  myHashSet.insert(newStr);
  // Check if an element is in the hash set
  if (myHashSet.find(newStr) != myHashSet.end()) {
    std::cout << "Element found in hash set" << std::endl;
  } else {
    std::cout << "Element not found in hash set" << std::endl;
  }
  for (string elem : myset) {
    cout << elem << endl;
  }
  return 0;
}
