#include <iostream>
using namespace std;

bool isEven(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    if (isEven(n))
    {
        cout << n << " is an Even Number";
    }
    else
    {
        cout << n << " is an Odd Number";
    }

    return 0;
}