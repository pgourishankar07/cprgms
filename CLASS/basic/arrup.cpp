#include <iostream>
using namespace std;
int main() {
    int id[] = {20, 35, 50, 70, 80};
    int new_id = 65;
    int id2[6];                         //new array
    for (int i = 0; i <= 5; i++) {
        id2[i] = id[i];
    }
    id2[5] = new_id;                    //appending the new element to the array at last


//______________Sorting the list using insertion sort____________
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
// _____________Displaying the elements______________
    for (int i = 0; i <= 6; i++) {
        cout << id2[i] << " ";
    }

    return 0;
}