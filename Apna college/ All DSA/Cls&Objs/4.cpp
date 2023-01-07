
//  _____________Uisng function overloading 

#include <iostream>
using namespace std;

float area(int l){                                      //Overloading -- Same function name with different parameters            
    return l*l;
}

float area(int l,int b){
    return l*b;
}

int main() {
    int l,b;
    cout<<"Enter length :";
    cin>>l;
    cout<<"Enter breadth :";
    cin>>b;
    cout<<"Area of Circle : "<<area(l)<<endl;
    cout<<"Area of Rectangle : "<<area(l,b)<<endl;
    return 0;
}