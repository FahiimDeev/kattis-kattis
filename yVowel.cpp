#include<iostream>
#include<string>
using namespace std;

int main(){

    string word;
    cin>>word;

    string vWithY = "aeiouy";
    string vNoY = "aeiou";

    int count_vWithY = 0, count_vNoY = 0;

    for (char c : word) {
        if (vNoY.find(c) != string::npos) {
            count_vNoY++;
        }
        if (vWithY.find(c) != string::npos) {
            count_vWithY++;
        }
    }

    cout<<count_vNoY<<" "<<count_vWithY<<endl;


    return 0;
}