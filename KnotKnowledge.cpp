    #include <iostream>
    using namespace std;

    int main() {
        int cases;
        cin >> cases;

        int storage[cases];
        for (int i = 0; i < cases; i++) {
            cin >> storage[i];
        }

        int storage2[cases - 1];
        for (int i = 0; i < cases - 1; i++) {
            cin >> storage2[i];
        }

        for (int i = 0; i < cases; i++) {
            bool found = false;

            for (int j = 0; j < cases - 1; j++) {
                if (storage[i] == storage2[j]) {
                    found = true;
                    break; 
                }
            }

            if (!found) {
                cout << storage[i] << endl;
            }
        }

        return 0;
    }
