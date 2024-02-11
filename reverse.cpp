#include<iostream>

using namespace std;

int main(){

    int cases;
    cin>>cases;

    int storage[cases];

    for (int i = 0; i < cases; i++){
        cin>>storage[i];
    }
     for (int i = cases - 1; i >= 0; i--) {
            cout<<storage[i]<<endl;
        }
    

    return 0;
}