#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int reversedA = 0, reversedB = 0;

    while (a > 0 || b > 0) {
        if (a > 0) {
            reversedA = reversedA * 10 + a % 10;
            a /= 10;
        }

        if (b > 0) {
            reversedB = reversedB * 10 + b % 10;
            b /= 10;
        }
    }
    if (reversedA > reversedB){
        cout<<reversedA;
    }else{
        cout<<reversedB;
    }


    return 0;
}
