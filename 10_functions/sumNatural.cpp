#include <iostream>
using namespace std;

int sumNatural(int n)
{
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {                                    //Time Complexity O(n)
    //     sum += i;
    // }

    return (n * (n + 1)) / 2; //Time Complexity O(1)
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << "The sum of first " << n << " natural numbers is " << sumNatural(n);

    return 0;
}