#include<iostream>
using namespace std;

int main(){

    int g,t,n, storage=0;
    cin>>g>>t>>n;

    if ((g>=5000 && g<=25000 && g%10==0) && (t>=3000 && t<=12000 && t%10==0)){
        int items[n];
        int calc1 = g-t;
        int calc2 = 0.9 * calc1;
        for (int i = 0; i < n; i++){
            cin>>items[i];
            storage+=items[i];
        }
        cout<<calc2-storage;
    }


    return 0;
}