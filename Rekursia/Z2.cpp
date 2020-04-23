#include <iostream>

using namespace std;
int from_to(int num1, int num2) {
    if (num1 > num2) {
        cout << num2 << " ";
        num2++;
        return from_to(num1, num2);
    }

    if (num2 > num1) {
        cout << num2 << " ";
        num2--;
        return from_to(num1, num2);
    }
}

int main()
{
    int to;
    int from;
    printf("Enter number1 and number2: ");
    cin >> to>>from;
    from_to(to, from);
}

