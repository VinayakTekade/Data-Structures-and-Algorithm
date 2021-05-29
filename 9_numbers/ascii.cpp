#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    char n;
    cin >> n;

    cout << "The ASCII value of " << n << " is " << int(n);

    return 0;
}