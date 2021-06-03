#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;

    cout << "Before Swaping" << endl
         << "a = " << a << " b =" << b << endl
         << endl;

    swap(a, b);

    cout << "After Swaping" << endl
         << "a = " << a << " b =" << b << endl
         << endl;

    return 0;
}