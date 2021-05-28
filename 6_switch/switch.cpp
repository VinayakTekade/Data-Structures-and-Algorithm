#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n1, n2;
    cin >> n1 >> n2;

    char op;
    cin >> op;

    switch (op)
    {
    case '+':
        cout << n1 + n2;
        break;

    case '-':
        cout << n1 - n2;
        break;

    case '*':
        cout << n1 * n2;

    case '/':
        cout << n1 / n2;
        break;

    case '%':
        cout << n1 % n2;
        break;

    default:
        cout << "Invalid Operator" << endl;
        break;
    }

    return 0;
}