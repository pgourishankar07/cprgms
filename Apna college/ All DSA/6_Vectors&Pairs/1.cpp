#include <algorithm> //contains built in functions for sort,reverse,find max/min element,summation of all the values
#include <iostream>
#include <vector>
using namespace std;
int main() {

  vector<int> v3 = {100, 60, 70, 80}; // Declarying a vector
  vector<int> v;                      // Declarying a vector
  cout << "capacity -- " << v.capacity() << endl;

  v.push_back(1);
  cout << "size -- " << v.size() << endl;
  v.push_back(2);
  cout << "empty or not -- " << v.empty() << endl;
  v.push_back(3);
  cout << "Vector 1 :" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << "  ";
  };
  cout << endl;
  cout << "capacity -- " << v.capacity() << endl;
  vector<int> v2(3, 50);
  cout << "Vector 2 :" << endl;
  for (int i = 0; i < v2.size(); i++) {
    cout << v2[i] << "  ";
  };
  cout << endl;

  swap(v, v2);
  cout << "After Swapping :\nVector 1 :\n";
  for (auto i : v) {
    cout << i << "  ";
  };
  cout << endl;
  cout << "Vector 2 :\n";
  for (auto i : v2) {
    cout << i << "  ";
  };
  cout << endl;
  cout << "Ascending order Sorting :\n";
  sort(v3.begin(), v3.end());
  for (auto i : v3) {
    cout << i << " ";
  }
  cout << endl;
  cout << "Descending order Sorting :\n";
  sort(v3.begin(), v3.end(), greater<>());
  for (auto i : v3) {
    cout << i << " ";
  }
  return 0;
}