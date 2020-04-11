#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void remove_s(string str) {
    char sym;
    cout << str << "\n";
    cout << "Enter the character wich you want to kill ";
    cin >> sym;

    string NewStr;
    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] != sym)
            NewStr += str[i];
    }
    cout << NewStr;
    
}

int main()
{
string str("some txt");
    remove_s(str);
}      
