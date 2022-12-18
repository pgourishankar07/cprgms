#include <iostream>
using namespace std;

void search(int k, int arr[], int n) {
    int f = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            cout << "thee number found at index : " << i;
            f = 0;
        }
    }
    if (f == 1) {
        cout << "number not found";
    }
}

int main() {
    int n, k;
    cout << "Enter number of elements to input :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "enter data : ";
        cin >> arr[i];
    }
    cout << "enter number to search : ";
    cin >> k;
    search(k, arr, n);
    return 0;
}