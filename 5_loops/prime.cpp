#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, i = 2;
    cin >> n;

    while (n > i)
    {
        if (n % i == 0)
        {
            cout << n << " is a composite number" << endl;
            ;
            break;
        }
        i++;
        if (n == i)
        {
            cout << n << " is a prime number" << endl;
        }
    }

    return 0;
}