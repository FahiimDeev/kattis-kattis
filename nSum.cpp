#include<iostream>
using namespace std;

int main(){

    int number,total=0;
    cin>>number;

    int busket[number];

    for(int i=0;i<number;i++){
        cin>>busket[i];
        total+=busket[i];
    }
    cout<<total;

    return 0;
}