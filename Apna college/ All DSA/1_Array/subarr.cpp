#include <climits>
#include <iostream>
using namespace std;
int main() {

    int arr[4] = {1, 4, 7, 2};
    int maxsum = INT_MIN;
    for (int j = 0; j < 4; j++) {

        for (int n = j; n <= 4; n++) {
            int sum = 0;

            for (int i = j; i < n; i++) {
                cout << arr[i] << ",";
                sum = sum + arr[i];
            }
            maxsum = max(maxsum, sum);
            cout << endl;
        }
    }

    cout << maxsum;
    return 0;
}