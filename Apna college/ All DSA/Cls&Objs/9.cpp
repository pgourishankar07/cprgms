
// ___________ Using BaseClass pointer to point the derivedClass object____________

#include <iostream>
using namespace std;

class Base{
    public:
        int valb;
        virtual void display(){
            cout<<"Base Class variable : "<<valb<<endl;
        }
        // So if we use virtual function in a base class , and if we call that function by 
        // using the base pointer pointing the derived object ,so the derived class function 
        // will run rather than running the function which is inside base class
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
    b_ptr = & d_obj;   
    b_ptr -> valb =31; 
    Derived *d_ptr;
    d_ptr = & d_obj;
    d_ptr -> valdr = 89;

// if you want to see the working of  virtual function try to leave the virtual keyword 
// and run it
    b_ptr -> display();




    return 0;
}