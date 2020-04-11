#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void randomiser(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() * 100 / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void randomiser(int arr[],int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() * 100 / RAND_MAX;
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void max(int* arr, int* arr1, int size, int size1) {
    int max = *arr;
    int max1 = *arr1;
    for (int i = 0; i < size; i++) {
        if (max < *arr) {
            max = *arr;
        }
        arr++;
    }
    for (int i = 0; i < size1; i++) {
        if (max1 < *arr1) {
            max1 = *arr1;
        }
        arr1++;
    }
    cout << "Max in the first array = " << max << "\n";
    cout << "Max in the second array =" << max1;
}

void avg(int* arr, int* arr1, int size, int size1) {
    int sum = 0;
    int sum1 = 0;
    for (int i = 0; i < size; i++) {
        sum += *arr;
        arr++;
    }
    for (int i = 0; i < size; i++) {
        sum1 += *arr1;
        arr1++;
    }

    cout << "AVG of the first array = " << sum/size<<"\n";
    cout << "AVG of the second array = " << sum1/size1;
}

void min(int* arr, int* arr1, int size, int size1) {
    int min = *arr;
    int min1 = *arr1;
    for (int i = 0; i < size; i++) {
        if (min > *arr) {
            min = *arr;
        }
        arr++;
    }
    for (int i = 0; i < size1; i++) {
        if (min1 > *arr1) {
            min1 = *arr1;
        }
        arr1++;
    }
    cout << "Min in the first array = " << min << "\n";
    cout << "Min in the second array =" << min1;
}

void action(int* arr, int* arr1,int size,int size1) {
tryAgain:

    cout << "\nPlease select an item from the menu\n";
    cout << "1.Max\n2.AVG\n3.Min\n\n";
    void (*func)(int* arr, int* arr1, int size, int size1);
    char c_button = _getch();

    if (c_button == '1') {
        func = max;
        func(arr,arr1,size,size1);
    }
    else if (c_button == '2') {
        func = avg;
        func(arr, arr1, size, size1);
    }
    else if (c_button == '3') {
        func = min;
        func(arr, arr1, size, size1);
    }
    else {
        system("cls");
        cout << "\t\t\t\tYou have only 3 vars";
        goto tryAgain;
    }
}

int main()
{
    srand(time(NULL));

    int size = 0;
    int size1 = 0;
    int* arr = nullptr;
    int* arr1 = nullptr;

    printf("Enter the size of first array:");
    cin >> size;
    printf("Enter the size of second array:");
    cin >> size1;

    arr = new int[size];
    arr1 = new int[size1];

    randomiser(arr,size);
    randomiser(arr1,size1);

    int* carr = arr;
    int* carr1 = arr1;

    action(carr, carr1, size, size1);

    delete[] arr;
    delete[] arr1;
}
