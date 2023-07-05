//             Question : Vector and pair 48 th video
/*
// my answer
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v1;
    vector<int> v2;
    int n ;
    cout<<"Enter how many elements you want to add to the vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter data : ";
        cin>>data;
        v1.push_back(data);
        v2.push_back(data);
    }
    sort(v2.begin(),v2.end());
    vector <int> v3;
    for(int i =0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                v3.push_back(j);
            }
        }
    }

    cout<<"Answer : ";
    for(auto i:v3){
        cout<<i<<"  ";
    }

    return 0;
}

*/

// Apna college answer
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
  vector<pair<int, int>> v;
  for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
    pair<int, int> p;
    p.first = arr[i];
    p.second = i;
    v.push_back(p);
  }
  sort(v.begin(), v.end());
  // for (auto i:v){
  //     cout<<i.second<<"  ";
  // }
  for (int i = 0; i < v.size(); i++) {
    arr[v[i].second] = i;
  }
  for (int i = 0; i < v.size(); i++) {
    cout << arr[i] << "  ";
  }
  return 0;
}
