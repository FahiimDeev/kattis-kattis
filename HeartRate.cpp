#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int cases;
    cin >> cases;

    for (int i = 0; i < cases; i++){
        int beats;
        double time;

        cin >> beats>> time;
        double calc1 = (beats - 1) / time * 60;
        double calc2 = (beats) / time * 60;
        double calc3 = (beats + 1) / time * 60;

        cout << fixed << setprecision(4) << calc1 << " " << calc2 << " " << calc3 << endl;
    }
    return 0;
}