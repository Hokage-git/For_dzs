#include <iostream>

using namespace std;
int count(int n,int from=1) {
    if (n == 1) {
        cout << 1;
        return 0;
    }
    else if (n+1==from) {
        return 0;
    }
    else if (n < 1) {
        return 0;
    }
    else if (n > 1) {
        cout << from<<" ";
        from++;
        return count(n,from);
    }
    else return 0;

}

int main()
{
    int a;
    printf("Enter the \"to\" number: ");
    cin >> a;
    count(a);
}

