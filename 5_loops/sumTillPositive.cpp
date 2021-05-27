#include <iostream>
using namespace std;

int main()
{
    //#ifndef ONLINE_JUDGE
    //     freopen("../input.txt", "r", stdin);
    //     freopen("../output.txt", "w", stdout);
    // #endif
    // NEEDS TO RUN IN INTERACTIVE MODE

    int n = 0, sum = 0;

    do
    {
        sum = sum + n;
        cin >> n;
    } while (n >= 0);

    cout << sum;
    return 0;
}