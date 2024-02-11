#include<iostream>
#include<string>
#include<map>

using namespace std;

int main() {
    int n, m, storage = 0;
    cin >> n >> m;

    map<char, int> symbolValues;
    symbolValues['.'] = 20;
    symbolValues['O'] = 10;
    symbolValues['\\'] = 25;
    symbolValues['/'] = 25;
    symbolValues['A'] = 35;
    symbolValues['^'] = 5;
    symbolValues['v'] = 22;

    string bb[m];

    for (int i = 0; i < n; i++) {
        cin >> bb[i];
        for (char symbol : bb[i]) {
            if (symbolValues.find(symbol) != symbolValues.end()) {
                storage += symbolValues[symbol];
            }
        }
    }

    cout << storage;

    return 0;
}
