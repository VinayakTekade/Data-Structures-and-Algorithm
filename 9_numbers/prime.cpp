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
    bool flag = 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is a composite number";
    }

    return 0;
}