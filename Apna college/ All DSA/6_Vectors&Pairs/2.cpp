#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {

    vector<int> vec1;

    int n ;
    cout<<"Enter how many elements you want to add to the vector : ";
    cin>>n;
    for(int i=0;i<n;i++){
        int data;
        cout<<"Enter data : ";
        cin>>data;
        vec1.push_back(data);
    }
    cout<<"The vector is : ";
    for(auto i:vec1){
        cout<<i<<"  ";
    }
    cout<<endl;
    cout<<"Enter a number to search : ";
    int x;
    cin>>x;
    for(auto i:vec1){
        if(i==x){
            cout<<"Element found";
        }
    }
    return 0;
}