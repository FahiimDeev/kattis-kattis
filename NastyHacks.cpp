#include<iostream>
using namespace std;

int main() {
    int number, storage1 = 0, storage2 = 0, storage3 = 0;
    cin >> number;

    int r[number], e[number], c[number];

    for (int i = 0; i < number; i++) {
        cin >> r[i] >> e[i] >> c[i];
        cout<<r[i]<<" "<<e[i]<<" "<<c[i]<< endl;
        
    }

    cout<<storage1<<endl;
    cout<<storage2<<endl;
    cout<<storage3<<endl;


    return 0;
}
// if (i==0){
//             storage1+= r[i] + e[i] + c[i];
//         }
//         if (i==1){
//             storage2+= r[i] + e[i] + c[i];
//         }
//         if (i==3){
//             storage3+= r[i] + e[i] + c[i];
//         }