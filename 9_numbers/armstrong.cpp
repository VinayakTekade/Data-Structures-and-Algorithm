#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int ans = n, sum = 0;

    while (n > 0)
    {
        int last = n % 10;
        sum = sum + (last * last * last);
        n = n / 10;
    }

    if (ans == sum)
    {
        cout << ans << " is a armstrong number";
    }
    else
    {
        cout << ans << " is not a armstrong number";
    }

    return 0;
}