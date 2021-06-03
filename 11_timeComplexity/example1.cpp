#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, m;
    cin >> n >> m;
    int a = 0;
    for (int i = 1; i <= n; i++)
    {
        a = a + 1;
    }

    for (int j = 1; j <= m; j++)
    {
        a = a + 1;
    }

    return 0;
}

// Time Complexity
// T(n) = k1 + k2*n + k3*m
//      = O(n+m)

//Space Complexity
// int n, m, a, i, j = 4 * 5 = 20 bytes
//                   = O(1)