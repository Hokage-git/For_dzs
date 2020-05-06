#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(0, "");
    string numb1;
    string numb2;

    cout << "Введите 2 числа по принципу число <пробел> второе число: ";
    cin >> numb1 >> numb2;

    int n1 = stoi(numb1);
    int n2 = stoi(numb2);

    cout << "Сложение: " << numb1 << "+" << numb2<<"="<<n1+n2<<endl;
    cout << "Вычитание: " << numb1 << "-" << numb2 << "=" << n1 - n2 << endl;
    cout << "Умножение: " << numb1 << "*" << numb2 << "=" << n1 * n2 << endl;
    cout << "Деление: " << numb1 << "/" << numb2 << "=" << n1 / n2 << endl;
    cout << "1 число в 16-ти ричной системе счисления:" << hex << n1 << endl;
    cout << "2 число в 16-ти ричной системе счисления:" << hex << n2 << endl;
}
