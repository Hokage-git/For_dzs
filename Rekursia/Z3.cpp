#include <iostream>

using namespace std;
int stepen(int num1, int from=1, int res = 2) {
    if (num1 > from) {
        res *= 2;
        from++;
        return stepen(num1, from,res);
    }
    return res;
}

int main()
{
    int to;
    printf("Enter number: ");
    cin >> to;
    int res = stepen(to);
    cout << "res is-" << res;
    
}