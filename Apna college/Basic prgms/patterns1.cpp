#include <iostream>

using namespace std;

int main() {
    //___________________upside down pyramid__________

    // int n;
    // cout<<"enter a NUMBER:";
    // cin>>n;
    // int i=n;

    // for(int i=n;i>=1;i--){
    //     for(int j=1;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<"\n";
    // }

    //__________________upper pyramid_____________
    // int n;
    // cin >> n;
    // // char c='*';

    // for (int i = 1; i <= n; i++) {
    //     int j = i;
    //     while (j >= 1) {
    //         cout << "*";
    //         j--;
    //     }
    //     cout << "\n";

    //     // cout << string(i,c) << endl;
    // }

    //_____________uppper 2nd pyramid_________________

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                cout << " ";

            } else {
                cout << "*";
            }
        }
        cout << "\n";
    }

    //_______________upside down number pattern

    // int n;
    // cin>>n;
    // cout<<"___________"<<endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=i;j<=n;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;

    // }

    //___________numbers pyramid_______________

    // int n;
    // cin>>n;
    // cout<<"___________"<<endl;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    //________________number changing pyramid_____________

    // int n;
    // cin>>n;
    // int c=1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<c<<" ";
    //         ++c;
    //     }
    //     cout<<endl;
    // }

    //_________Butterfly pattern________

    // int r;
    // cin>>r;

    // int c=2*r;

    //-------------------------
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=c;j++){

    //         if(j<=i || j>=(c-i+1)){
    //             cout<<"*";

    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;

    // }
    // //-------------------------
    // for(int i=1;i<=r;i++){
    //     for(int j=1;j<=c;j++){
    //         if(j<=(r-i+1) || j>=(r+i) ){

    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
}