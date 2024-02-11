#include<iostream>
using namespace std;

int main(){

    int cases;
    cin>>cases;

    for (int i = 0; i < cases; i++){
        int k,n;
        cin>>k>>n;
        int calc=0;
        calc = (n*(n+1)/2);
        cout<<i+1<<" "<<calc+n<<endl;
    }
    

    return 0;
}