#include<iostream>
using namespace std;

int main(){

    int a[4],b[4],c[4],d[4],e[4],s1,s2,s3,s4,s5;

    for(int i=0;i<4;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
        s1+=a[i];
        s2+=b[i];
        s3+=c[i];
        s4+=d[i];
        s5+=e[i];
    }
    cout<<s5;
    
    
    return 0;
}

// if (s1>s2){
    //     if(s1>s3){
    //         if(s1>s4){
    //             if (s1>s5){
    //                 cout<<1<<" "<<s1;
    //             }else {
    //                 cout<<5<<" "<<s5;
    //             }
    //         }else{
    //             cout<<4<<" "<<s4;
    //         }
    //     }else{
    //         cout<<3<<" "<<s3;
    //     }
    // }else{
    //     cout<<2<<" "<<s2;
    // }
