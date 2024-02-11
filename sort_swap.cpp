#include<iostream>
using namespace std;

int main(){

    int number,digit1,digit2,swapp;
    cin>>number;

    if(number<100){
        digit1 = number / 10;
        digit2 = number % 10;
        swapp = digit2 * 10 + digit1;
    }
    else{}

    cout<<swapp;


    return 0;
}