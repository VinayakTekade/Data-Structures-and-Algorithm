#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
}

int fibonacci(int n)
{
    if (n == 1 || n == 0)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        print(fibonacci(i));
    }

    return 0;
}