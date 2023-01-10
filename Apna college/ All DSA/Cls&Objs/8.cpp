
// ___________ Using BaseClass pointer to point the derivedClass object(Run time Poly)____________

#include <iostream>
using namespace std;

class Base{
    public:
        int valb;
        void display(){
            cout<<"Base Class variable : "<<valb<<endl;
        }
};

class Derived : public Base{
    public:
        int valdr;
        void display(){
                cout<<"Base Class variable : "<<valb<<endl;
                cout<<"Derived Class variable : "<<valdr<<endl;

        }
};

int main() {
    Base *b_ptr;
    Base b_obj;   
    Derived d_obj;
    b_ptr = & d_obj;   //Base class pointer can point the address of the derived class object
    b_ptr -> valb =31;  //and still the base pointer can be used to point their instances 
    b_ptr -> display(); //after we point the base pointer to the derived object ,still it runs the display
// function which is inside the class (to avoid this we use vitual keyword in the function .i.e., virtual function)

    Derived *d_ptr;
    d_ptr = & d_obj;        //if derived pointer is not pointing the derived object ,it sends memory address
    b_ptr -> valb =541;
    d_ptr -> valdr = 89;
    d_ptr -> display(); 

// So if we use virtual function in a base class , and if we call that function by 
// using the base pointer pointing the derived object ,so the derived class function 
// will run rather than running the function which is inside base class
    return 0;
}