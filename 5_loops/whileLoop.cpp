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

    int sum = 0, i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }

    cout << "The sum of natural numbers till " << n << " is " << sum << endl;
    return 0;
}