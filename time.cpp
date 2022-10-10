#include <chrono>
#include <iostream>
using namespace std;
auto start = chrono::steady_clock::now();

int main() {
    cout << "\n";
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    cout << chrono::duration<double, milli>(diff).count() << " ms " << endl;
    return 0;
}