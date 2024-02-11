#include<iostream>
#include<string>
using namespace std;

int main() {
    int number;
    cin >> number;

    string some[number];

    for (int i = 0; i < number; i++) {
        cin >> some[i];
    }

    for (int i = 0; i < number; i++) {
        if (i % 2 == 0) {
            cout << some[i] << endl;
        }
    }

    return 0;
}
