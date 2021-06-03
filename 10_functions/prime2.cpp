#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
}

bool isPrime(int num)
{
    for (int i = 2; (i * i) <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void rangePrime(int num1, int num2)
{
    for (int i = num1; i <= num2; i++)
    {
        if (isPrime(i))
        {
            print(i);
        }
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    rangePrime(a, b);

    return 0;
}