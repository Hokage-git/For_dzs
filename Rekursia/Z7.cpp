#include <iostream>

using namespace std;

bool recursion(int n, int i)
{
    if (n < i)
        return false;
    else if (n == i)
        return true;
    else if (n % i == 0 && n != i)
        return false;
    else if (i < n / 2)
        return recursion(n, i + 1);
    else
        return true;

}
void main()
{
    setlocale(LC_ALL, "Russian");
    int i = 2;
    int n;
    cin >> n;

    bool rec = recursion(n,i);

    if (rec)
        cout << n << " - простое число" << endl;
    else
        cout << n << " - составное число" << endl;
}
