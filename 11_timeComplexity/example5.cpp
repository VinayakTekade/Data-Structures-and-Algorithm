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
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j += i) // n + n/2 + n/3 + .... + 1 = n (1 + 1/2 + 1/3+ .... + 1/n) = nlogn
        {
            count += 1;
        }
    }

    return 0;
}

// Time Complexity
// T(n) = k1 + k2*n * k3*nlog(n))
//      = O(nlog(n))

//Space Complexity
// int n, count, i, j = 4 * 3 = 16 bytes
//                   = O(1)