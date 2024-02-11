#include<iostream>
#include<vector>
using namespace std;

int main() {
    float price, calc, bb = 0, busket;
    
    while (!(cin >> price)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int quantity;

    while (!(cin >> quantity)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<float> a(quantity);
    vector<float> b(quantity);

    for (int i = 0; i < quantity; i++) {
        while (!(cin >> a[i] >> b[i])) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        busket = a[i] * b[i];
        calc = busket * price;
        bb += calc;
    }

    cout << fixed << bb << endl;

    return 0;
}
