#include <iostream>

using namespace std;

int stepen(int num1, int result = 0) {
    if (num1 >= 10) { 
        result = num1 % 10;
        num1 = num1 / 10;
        cout << result << " ";
        return stepen(num1);
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
    cout << stepen(to);
}
