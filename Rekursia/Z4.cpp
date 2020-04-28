#include <iostream>

using namespace std;

int stepen(int num1, int result = 0) {
    if (num1 >= 10) { 
        result += num1 % 10;
        num1 = num1 / 10;
        return stepen(num1, result);
    }
    else
        result += num1;
        return result;
    
}

int main()
{
    int to;
    printf("Enter number: ");
    cin >> to;
    int res = stepen(to);
    cout << "reversed-" << res;
}
