#include <iostream>
using namespace std;
int main() {
    int id[] = {20, 35, 50, 70, 80};
    int new_id = 65;
    int id2[6];
    for (int i = 0; i <= 5; i++) {
        id2[i] = id[i];
    }
    id2[5] = new_id;

    int temp;
    for (int i = 0; i <= 6; i++) {
        for (int j = i + 1; j <= 6; j++) {
            if (id2[i] > id2[j]) {
                temp = id2[i];
                id2[i] = id2[j];
                id2[j] = temp;
            }
        }
    }

    for (int i = 0; i <= 6; i++) {
        cout << id2[i] << " ";
    }

    return 0;
}