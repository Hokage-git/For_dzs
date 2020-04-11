#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void dots(string str) {
    char plank_dot = '!';
    char dot = '.';

    cout << "Enter the str ";
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == dot)
            str[i] = plank_dot;
    }
    cout << "Be positve\n";
    cout << str;
}

int main(){
  string str;
  dots(str);
}
