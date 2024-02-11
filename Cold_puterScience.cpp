#include<iostream>
using namespace std;

int main(){

    int number, count=0;
    cin>>number;

    int storage[number];

    for(int i=0;i<number;i++){
        cin>>storage[i];
    }

    for(int i=0;i<number;i++){
        if(storage[i]<0){
            count++;
        }
    }

    cout<<count;



    return 0;
}