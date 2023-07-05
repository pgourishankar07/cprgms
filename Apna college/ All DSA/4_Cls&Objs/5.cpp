
// _____________Using function overriding

#include <iostream>
using namespace std;

class triangle {
public:
  int br;
  int ht;
  float area() { return 0.5 * br * ht; }
};

class rectangle : public triangle {
public:
  rectangle(int b, int h) {
    br = b;
    ht = h;
  }
  float area() { return br * ht; }
};

int main() {
  rectangle a(5, 15);
  // a.br = 5;
  // a.ht = 15;
  cout << "Area of Rectangle : " << a.area() << endl;
  cout << "Area of triangle : " << a.triangle::area() << endl;

  return 0;
}

// ____________________________NORMAL METHOD uisng only object and classes
// without inheritance__________________________________

/*

#include <iostream>
using namespace std;


class triangle{
    public:
        int br;
        int ht;
        int area(){
            return 0.5*br*ht;
        }
        triangle(int b,int h){
            br=b;
            ht=h;
        }
};

class rectangle {
    public:
        int br;
        int ht;
        int area(){
            return br*ht;
        }
        rectangle(int b,int h){
            br=b;
            ht=h;
        }
};


int main() {
    triangle a(5,10);
    rectangle b(15,10);
    cout<<"Area of triangle : "<<a.area()<<endl;
    cout<<"Area of Rectangle : "<<b.area()<<endl;

    return 0;
}

*/