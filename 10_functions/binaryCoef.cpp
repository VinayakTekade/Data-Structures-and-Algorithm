#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n, r, nCr;
    cin >> n >> r;
    nCr = factorial(n) / (factorial(n - r) * factorial(r));
    cout << "nCr = " << nCr;

    return 0;
}