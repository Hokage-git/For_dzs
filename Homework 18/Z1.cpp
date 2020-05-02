#include <iostream>

using namespace std;

int main()
{
    char sonames[5][50];
    for (int i = 0; i < 5; i++) {
        cin >> sonames[i];
    }

    char* sonames1[255];

    for (int i = 0; i < 5; i++) {
        sonames1[i] = sonames[i];
    }
    cout << "\n";

    char* temp;

    for (int i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5 - i-1; j++) {
            if (strlen(sonames1[j]) < strlen(sonames1[j + 1])) {
                temp = sonames1[j];
                sonames1[j] = sonames1[j+1];
                sonames1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << sonames1[i] << endl;
    }
}
