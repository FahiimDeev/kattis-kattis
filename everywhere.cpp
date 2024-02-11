#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;

        unordered_set<string> cities;

        for (int j = 0; j < n; ++j) {
            string city;
            cin >> city;
            cities.insert(city);
        }

        cout << cities.size() << endl;
    }

    return 0;
}
