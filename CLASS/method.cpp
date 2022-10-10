
#include <iostream>

using namespace std;
void add(int a, int b)
{
    cout << a + b;
}
int main()
{
    int a, b;
    cout << "enter a number :";
    cin >> a;
    cout << "enter another number :";
    cin >> b;
    add(a, b);

    return 0;
}
