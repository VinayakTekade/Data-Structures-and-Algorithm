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

    if (a > b)
    {
        if (a > c)
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << a << endl;
        }
        else
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << b << endl;
        }
        else
        {
            cout << "The largest of " << a << ", " << b << ", " << c << " is " << c << endl;
        }
    }

    return 0;
}