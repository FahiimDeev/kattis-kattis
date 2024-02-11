#include<iostream>
using namespace std;

int main(){

    int a,b,c;

    cin>>a>>b>>c;

    if(a<b){
        if(a<c){
            cout<<"Monnei";
        }
    }
    if(b<a){
        if(b<c){
            cout<<"Fjee";
        }
    }
    if(c<a){
        if(c<b){
            cout<<"Dolladollabilljoll";
        }
    }

    return 0;
}