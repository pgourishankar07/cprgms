#include <iostream>
using namespace std;
int main() {
    int ch = 1;
    float tot = 0.0;
    float p = 0.0, pu = 0.0, cd = 0.0;
    while (ch == 1) {
        int c;
        cout << "What do you want to have ??  \n"
                "1. Pizza  ---  $75\n2. Puff  ---  $25\n3. Cool drink  ---  $30\n4. That's all\nPlease Enter the option : ";
        cin >> c;
        if (c == 1) {

            cout << "How many pizzas ?";
            cin >> p;
            tot += p * 75;
        } else if (c == 2) {

            cout << "How many puff ?";
            cin >> pu;
            tot += pu * 25;
        } else if (c == 3) {

            cout << "How many cool drinks ?";
            cin >> cd;
            tot += cd * 30;
        } else if (c == 4) {
            float bill = tot + tot * (18.0 / 100.0);
            cout << "______________________________________\n"
                    "ITEMS\tQty.\tPrice\n"
                    "Pizza\t"
                 << p << "\t" << p * 75 << endl
                 << "Puff\t"
                 << pu << "\t" << pu * 25 << endl
                 << "cool  \t"
                 << cd << "\t" << cd * 30 << endl
                 << "SGST\t"
                 << "9%"
                 << "\t" << tot * (9.0 / 100.0) << endl
                 << "CGST\t"
                 << "9%"
                 << "\t" << tot * (9.0 / 100.0) << endl
                 << "______________________________________\n"
                    "TOTAL BILL \t\t\t"
                 << bill << endl
                 << "_________________________________\n";
            ch = 0;
        } else {
            cout << "Invalid option....!";
        }
    }
    return 0;
}