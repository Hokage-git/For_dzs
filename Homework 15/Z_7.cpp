#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstring>

using namespace std;

void sym_numbers(string str) {
    int count_numbs = 0;
    int count_sym = 0;
    int count_others = 0;

    for (int i = 0; i < str.length(); i++) {
        if ((int)str[i] >= 48 && (int)str[i] <= 57)
            count_numbs++;
        else if ((int)str[i] >= 58 && (int)str[i] <= 64
            || (int)str[i] >= 32 && (int)str[i] <= 47
            || (int)str[i] >= 91 && (int)str[i] <= 96
            || (int)str[i] >= 123 && (int)str[i] <= 127)
            count_others++;
        else
            count_sym++;
    }
    cout << "letters- " << count_sym << endl
        << "numbers- " << count_numbs << endl
        << "others- " << count_others << endl;
}

int main(){
  string str("Hello,my name is Max, i'm 17 y.o.");
  sym_numbers(str);
}
