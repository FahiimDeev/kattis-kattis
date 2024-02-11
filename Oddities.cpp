#include<iostream>
using namespace std;

int main(){
    
    int number;
    cin>>number;

    int storage[number];

    for (int i = 0; i < number; i++){
        cin>>storage[i];
    }

    for (int i = 0; i < number; i++){
        if (storage[i]%2==0){
            cout<<storage[i]<<" is even"<<endl;
        }else{
            cout<<storage[i]<<" is odd"<<endl;
        }
        
    }
    
    

    return 0;
}