#include <iostream>
using namespace std;

int main() {
    int startingMB, spentMonths;
    cin >> startingMB >> spentMonths;

    int remainingMB = startingMB;
    for (int i = 0; i < spentMonths; i++) {
        int spent;
        cin >> spent;
        remainingMB += startingMB - spent;
    }

    cout << remainingMB << endl;

    return 0;
}
