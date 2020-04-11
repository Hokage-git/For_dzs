#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void push_sym(string str) {
    int numb_sym;
    char sym;
    cout << str << "\n";
    cout << "Enter the number of character wich you want to change ";
    cin >> numb_sym;
    cout << "Enther the character on wich you want to change " ;
    cin >> sym;

    for (int i = 0; i < str.length(); i++) {
        str[numb_sym] = sym;
    }
    cout << str;
}

int main()
{
string str("Flex power");
    push_sym(str);
}    
