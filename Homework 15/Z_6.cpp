#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void sym_count(string str) {
    int count=0;
    int sym;
    cout << "Enter the str ";
    cin >> str;
    cout << "Enther the character";
    cin >> sym;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == sym) {
            count++;
        } 
    }
    cout << "Sym was used " << count << " times";
}

int main(){
  string str;
  sym_count(str);
}
