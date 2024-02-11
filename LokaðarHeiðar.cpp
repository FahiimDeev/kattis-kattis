#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    string roads[b];
    int c[b];

    for (int i = 0; i < b; i++){
        cin >> roads[i]>>c[i];
    }

    for (int i = 0; i < b; i++) {
        if (c[i] < a) {
            cout << roads[i] << " lokud"<< endl;
        }
        else if (c[i] >= a){
            cout<< roads[i]<<" opin"<<endl;
        }
}


    return 0;
}