#include <climits>
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 4, -6, 7, -4};
    for (int i = 0; i < 5; i++) {
        for (int j = i; j < 5; j++) {
            int arr2[20] = {};
            int sum = 0;
            for (int k = i; i < j; k++) {
                if (arr[k] < 0) {
                    arr2[k] = arr[k] + arr[k - 1];
                    // cout << arr2[k] << endl;
                } else {
                    arr2[k] = arr[k];
                    // cout << arr2[k] << endl;
                }

                // sum += arr2[i];
            }
            for (int i = 0; i < 5; i++) {
                if (arr2[i] < 0) {
                    arr2[i] = 0;
                }
                sum += arr2[i];
            }
            cout << sum;
        }
    }

    return 0;
}