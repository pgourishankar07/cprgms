// ________INSERTION SORT________(insert an element from unsorted array to its correct position in sorted array)

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter length :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Unsorted list is :" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Sorted list is :" << endl;

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}