#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, fact = 1;
    ;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << fact;
    return 0;
}