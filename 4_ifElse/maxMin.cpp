#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE //used to process input from input.txt and print output in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        cout << a << " is the maximum between " << a << " and " << b << endl;
        cout << b << " is the minimum between " << a << " and " << b << endl;
    }
    else
    {
        cout << b << " is the maximum between " << a << " and " << b << endl;
        cout << a << " is the minimum between " << a << " and " << b << endl;
    }

    return 0;
}