#include <iostream>
using namespace std;

int min(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int max(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    cout << "The max of " << a << ", " << b << ", " << c << " is " << max(a, b, c) << endl;
    cout << "The min of " << a << ", " << b << ", " << c << " is " << min(a, b, c) << endl;
    return 0;
}