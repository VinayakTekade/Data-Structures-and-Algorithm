#include <iostream>
using namespace std;

int addBinary(int a, int b)
{
    int sum = 0, carry = 0;
    while (a > 0 || b > 0 || carry > 0)
    {
        int lastA = a % 10;
        a = a / 10;

        int lastB = b % 10;
        b = b / 10;

        if (lastA + lastB + carry < 2)
        {
            sum = sum * 10 + (lastA + lastB + carry);
            carry = 0;
        }
        else if (lastA + lastB + carry < 3)
        {
            sum = sum * 10;
            carry = 1;
        }
        else
        {
            sum = sum * 10 + 1;
            carry = 1;
        }
    }
    return sum;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    cout << addBinary(a, b);

    return 0;
}