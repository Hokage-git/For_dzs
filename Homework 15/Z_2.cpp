#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void remove_sym(string str) {
    int i;

    cout << str<<"\n";
    cout << "Enter the num of character you want to kill ";
    cin >> i;

    str.erase(i-1, 1);

    cout << str << "\n";
int main()
{
    string str("some txt");
    remove_sym(str);
}
