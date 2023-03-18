
//  _____________Count sort__________________________
/*
when sorting small integers with limited range with duplicate
*/

#include <iostream>
using namespace std;
int main() {
    int org[9] = {1, 3, 2, 3, 4, 1, 6, 4, 3};
    int srt[9];
    int cnt[6];
    int pos[6];

    for (int i = 0; i <= 6; i++) {
        int count = 0;
        for (int j = 0; j <= 9; j++) {
            if (i == org[j]) {
                count++;
            }
        }
        cnt[i] = count;
    }

    for (int i = 0; i <= 6; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += cnt[j];
        }
        pos[i] = sum;
    }

    for (int i = 8; i >= 0; i--) {
        for (int j = 0; j <= 6; j++) {
            int val = 0;
            if (org[i] == j) {
                val = pos[j] - 1;
                srt[val] = org[i];
                pos[j] = val;
            }
        }
    }
    for (int k = 0; k < 9; k++) {

        cout << srt[k] << " ";
    }
    return 0;
}