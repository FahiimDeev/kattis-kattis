#include <iostream>

using namespace std;

int main()
{
    int cases;
    cin >> cases;

    int storage[cases];

    for (int i = 0; i < cases; i++)
    {
        cin >> storage[i];
    }
    for (int k = 0; k < cases; k++)
    {
        int fact = 1;
        for (int i = storage[k]; i > 1; i--)
        {
            fact *= i;
        }

        int fact2 = fact % 10;
        cout << fact2 << endl;
    }

    return 0;
}
