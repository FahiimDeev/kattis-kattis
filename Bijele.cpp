#include<iostream>
using namespace std;

int main(){
    
    int king=1, queen=1, rooks=2, bishops=2, knights=2, pawns=8,k,q,r,b,kn,p;
    cin>>k>>q>>r>>b>>kn>>p;

    // if(( k > king)|| ( k < king)){
    //     cout<<king - k<<endl;
    // }   
    // if(( q > queen)|| ( q < queen)){
    //     cout<<queen-q<<endl;
    // }
    // if(( r > rooks) || ( r < rooks) ){
    //     cout<< rooks-r<<endl;
    // }
    // if (( b > bishops) || ( b < bishops)){
    //     cout<<bishops-b<<endl;
    // }
    // if (( kn > knights) || ( kn < knights)){
    //     cout<<knights - kn<<endl;
    // }
    // if ((p > pawns) || (p < pawns)){
    //     cout<<pawns-p<<endl;
    // }

    cout<<king - k <<endl<<queen - q <<endl<<rooks-r<<endl<<bishops-b<<endl<<knights-kn<<endl<<pawns - p;
    


    return 0;
}