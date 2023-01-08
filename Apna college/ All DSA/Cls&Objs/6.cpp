
// _____________OPerator overloading ____________
#include <iostream>
using namespace std;

class complex{
    int real ;
    int img;
    public:
        complex(){
            real=1;
            img=1;
        }
        complex(int r ,int i){
            real =r;
            img= i;
        }
        void display(){
            cout<<"The complex number is : "<<real<<" + "<<img<<"i";
        }
        complex operator +(complex obj){            //Syntax : returnType operator symbol(params)
            complex temp;
            temp.real = real + obj.real;
            temp.img = img + obj.img;
            return temp;
        }
};

int main() {
    complex c1(5,4),c2(4,5),res;
    res = c1+c2;
    res.display();
    return 0;
}

// __________Another exxample______________
/*

#include <iostream>
using namespace std;

class Increase{
    int val;
    public:
        Increase(int v){
            val = v;
        }
        int operator ++(){
            val =val+5;
            return val;
        }
        void display(){
            cout<<"The value now is : "<<val<<endl;
        }
};

int main() {
    
    Increase y(21);
    y.display();
    ++y;
    y.display();

    return 0;
}
*/
