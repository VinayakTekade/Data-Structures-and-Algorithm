#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE //used to process input from input.txt and print output in output.txt
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is an even number";
    }
    else
    {
        cout << n << " is an odd number";
    }

    return 0;
}