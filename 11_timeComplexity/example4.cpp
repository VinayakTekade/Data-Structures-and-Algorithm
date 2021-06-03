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
    int a = 0, i = n;

    while (i >= 1)
    {
        a = a + 1;
        i /= 2;
    }

    return 0;
}

// Time Complexity
// T(n) = k1 + k2*log(n)
//      = O(log(n))

//Space Complexity
// int n, a, i = 4 * 3 = 12 bytes
//                   = O(1)