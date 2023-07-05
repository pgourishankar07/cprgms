#include <cmath>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of series u want : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    for (int i = 2; i < sqrt(n); i++) {
        int count = 0;
        for (int j = i; j <= n; j++) {
            if (arr[j - 1] % i == 0 && count == 0) {
                count++;
                continue;
            }
            if (arr[j - 1] % i == 0) {
                arr[j - 1] = 0;
            }
        }
    }
    cout << "The Prime number Series are : " << endl;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1 || arr[i] == 0) {
            continue;
        }
        cout << arr[i] << " ";
    }
    return 0;
}