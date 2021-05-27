#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE //used to process input from input.txt and print output in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && a == c && b == c)
    {
        cout << "The triangle with sides " << a << ", " << b << ", " << c << " is an equilateral triangle" << endl;
    }
    else if (a == b || a == c || b == c)
    {
        cout << "The triangle with sides " << a << ", " << b << ", " << c << " is an isosceles triangle" << endl;
    }
    else
    {
        {
            cout << "The triangle with sides " << a << ", " << b << ", " << c << " is a scalene triangle" << endl;
        }
    }
    return 0;
}