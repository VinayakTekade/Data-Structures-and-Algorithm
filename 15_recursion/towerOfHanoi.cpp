#include <iostream>
#include <string>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char help)
{
    if (n == 0)
    {
        return;
    }

    towerOfHanoi(n - 1, src, help, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, help, dest, src);
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    towerOfHanoi(3, 'A', 'C', 'B');

    return 0;
}