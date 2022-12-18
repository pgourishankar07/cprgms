#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements to input :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cout << "enter data : ";
        cin >> arr[i];
    }
    cout << "unsorted list is : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl
         << "sorted list is : ";

    for (int i = 0; i < n - 1; i++) {     // going from 1st elemnt to 2nd last elemnt
        for (int j = i + 1; j < n; j++) { // going from 2nd elemnt to last elemet
            if (arr[j] < arr[i]) {
                int temp = arr[j]; // swapping the values which are 2nd elemnt j is less than 1st elemt i
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}