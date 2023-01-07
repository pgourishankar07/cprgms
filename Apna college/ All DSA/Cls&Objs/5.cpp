
// _____________Using function overriding 

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
    cout<<"Area of triangle : "<<a.area()<<endl;
    rectangle b(15,10);
    cout<<"Area of Rectangle : "<<b.area()<<endl;
    
    return 0;
}