#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }

    int prevfibonacci = fibonacci(n - 1) + fibonacci(n - 2);
    return prevfibonacci;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    cout << fibonacci(n);
    return 0;
}