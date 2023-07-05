
// ______________Pointers in objects and classes_____________

#include <iostream>
using namespace std;

class student{
    int rrn;
    int mark;
    public:
        void setdata(int r,int m){
            rrn = r;
            mark = m;
        }
        void display(){
            cout<<"The RRN is : "<<rrn<<endl;
            cout<<"Scored Mark is : "<<mark<<endl;
        }
};

int main() {
    
    int n;
    cout<<"Enter number of student details you want to store : ";
    cin>>n;

    int * ptrTrial = new int[3];  //For Dynamically allocating memory for 3 integers, first it 
                                  // will point the 1st index ,then u need to increament ptr_in to store  
                                  // next next values,works very similar to array pointers    
    student *ptr_in = new student[n];           //ptr_in -- ptr used for getting input 
    student *ptr_out = ptr_in;                  //ptr_out -- ptr used for showing output
    for (int i =0 ;i<n;i++){
        cout<<"Entering Student "<<i+1<<" Details : \n";
        cout<<"Enter RRN : ";
        int r;
        cin>>r;
        cout<<"Enter Mark : ";
        int m;
        cin>>m;
        ptr_in -> setdata(r,m); 
        ptr_in++;
    }
    cout<<"Printing Student details...\n";
    for(int i=0 ;i<n;i++){
        cout<<"___________\n";
        ptr_out -> display();
        cout<<"___________\n";
        ptr_out++;
    }
    return 0;
}