#include<iostream>
using namespace std;

int main(){

    int a,b,calc=0;
    cin>>a>>b;

    int clasd[a];

    for(int i=0;i<a;i++){
        cin>>clasd[i];
        calc+=clasd[i];
    }

    if(calc <= b){
        cout<<"Jebb";
    }
    else{
        cout<<"Neibb";
    }
    

    return 0;
}