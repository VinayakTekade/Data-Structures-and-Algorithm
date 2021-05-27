#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int m, n, i = 2;
    cin >> m >> n;

    while (m <= n)
    {
        while (m > i)
        {
            if (m % i == 0)
            {
                break;
            }
            i++;
            if (m == i)
            {
                cout << m << endl;
            }
        }
        m++;
        i = 2;
    }

    return 0;
}