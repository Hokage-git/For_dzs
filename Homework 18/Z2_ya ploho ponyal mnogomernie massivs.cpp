#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int** A = 0;
    int** B = 0;
    int** C = 0;

    int sizes[3];

    for (int i = 0, count = 0; i < 3; i++) {
        ++count;
        cout << "Введите размер " << count << " массива:";
        cin >> sizes[i];
    }
    //-----------------------init------------------------------------//
    A = new int* [sizes[0]];
    for (int i = 0; i < sizes[0]; i++) {
        A[i] = new int[sizes[0]];
    }

    B = new int* [sizes[1]];
    for (int i = 0; i < sizes[1]; i++) {
        B[i] = new int[sizes[1]];
    }

    C = new int* [sizes[2]];
    for (int i = 0; i < sizes[2]; i++) {
        C[i] = new int[sizes[2]];
    }
    //-------------------------randomise---------------------------------//
    for (int i = 0; i < sizes[0]; i++) {
        for (int j = 0; j < sizes[0]; j++) {
            A[i][j] = 10 + rand() % 89;
        }
    }

    for (int i = 0; i < sizes[1]; i++) {
        for (int j = 0; j < sizes[1]; j++) {
            B[i][j] = 10 + rand() % 89;
        }
    }

    for (int i = 0; i < sizes[2]; i++) {
        for (int j = 0; j < sizes[2]; j++) {
            C[i][j] = 10 + rand() % 89;
        }
    }
    //--------------------------------show-------------------------------//
    for (int i = 0; i < sizes[0]; ++i)
    {
        for (int j = 0; j < sizes[0]; ++j)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < sizes[1]; ++i)
    {
        for (int j = 0; j < sizes[1]; ++j)
            cout << B[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    for (int i = 0; i < sizes[2]; ++i)
    {
        for (int j = 0; j < sizes[2]; ++j)
            cout << C[i][j] << " ";
        cout << endl;
    }
    //=======================================================//

    int* general=0;
    int c_general = 0;

    for (int i = 0; i < sizes[0]; i++)
        for (int j = 0; j < sizes[0]; j++)
            for (int h = 0; j < sizes[1]; j++)
                for (int m = 0; j < sizes[1]; j++)
                    for (int c = 0; j < sizes[2]; j++)
                        for (int v = 0; j < sizes[2]; j++)
                            if (A[i][j] == B[h][m] && C[c][v] == B[h][m]) {
                                general[c_general] = A[i][j];
                                c_general++;
                            }
                            else if (A[i][j] == C[c][v] && B[h][m] == C[c][v]) {
                                general[c_general] = A[i][j];
                                c_general++;
                            }
                            else if (C[c][v] == B[h][m] && C[c][v] == A[i][j]) {
                                general[c_general] = A[i][j];
                                c_general++;
                            }

    for (int i = 0; i < c_general; i++){
        cout << general[i] << " ";
    }
       
    
}