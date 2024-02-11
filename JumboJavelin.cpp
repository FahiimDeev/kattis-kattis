#include<iostream>
using namespace std;

int main(){

    int number, storage=0,calc;
    cin>>number;

    int tt[number];

    for(int i=0;i<number;i++){
        cin>>tt[i];
        storage=storage+tt[i];
    }

    calc = (storage - number) + 1;

    cout<<calc;



    return 0;
}