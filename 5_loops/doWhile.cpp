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

    int sum = 0, i = 0;
    do
    {
        sum = sum + i;
        i++;
    } while (i < n);

    cout << "The sum of natural numbers till " << n << " is " << sum << endl;
    return 0;
}