#include<iostream>
#include<bitset>

using namespace std;
int main(){
    int number;
    cin>>number;

    bitset<32> binaryRepresentation(number);
    bitset<32> reversedBinary;
    for (int i = 0; i < 32; ++i) {
        reversedBinary[i] = binaryRepresentation[31 - i];
    }
    int reversedDecimal = static_cast<int>(reversedBinary.to_ulong());

    cout<<reversedDecimal;

    return 0;
}