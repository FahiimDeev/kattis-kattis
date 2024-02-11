#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int lines, elementsPerLine;
    cin >> lines >> elementsPerLine;

    vector<string> matrix(lines);

    for (int i = 0; i < lines; i++) {
        cin >> matrix[i];
    }

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < elementsPerLine; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
