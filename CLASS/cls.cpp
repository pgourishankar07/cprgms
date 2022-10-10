#include <iostream>
#include <string>
using namespace std;
class emp {
public:
    int b, h;
    // string nam;
};
class bonus2 : public emp {
public:
    float tri() {
        return 0.5 * b * h;
    }
};
class bonus : public emp {
public:
    int rec() {
        return b * h;
    }
};
int main() {
    bonus e1;
    bonus2 e2;

    e1.b = 5;
    e2.b = 5;
    e1.h = 7;
    e2.h = 7;
    // e1.sal = 5000;
    // cout << e1.id << endl;
    // cout << e1.nam << endl;
    // cout << e1.sal << endl;
    cout << e1.rec() << endl;
    cout << e2.tri() << endl;
    return 0;
}