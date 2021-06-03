#include <iostream>
using namespace std;

bool isPythagoreanTriplet(int a, int b, int c)
{
    int x = max(a, max(b, c)), y, z;

    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }

    if ((x * x) == ((y * y) + (z * z)))
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

    int a, b, c;
    cin >> a >> b >> c;

    if (isPythagoreanTriplet(a, b, c))
    {
        cout << a << ", " << b << ", " << c << ", "
             << " is a Pythagorean Triplet";
    }
    else
    {
        cout << a << ", " << b << ", " << c << ", "
             << " is not a Pythagorean Triplet";
    }

    return 0;
}