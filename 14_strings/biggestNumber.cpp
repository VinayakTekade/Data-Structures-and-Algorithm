#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    string str = "51347131";

    sort(str.begin(), str.end(), greater<int>());

    cout << str << endl;
    return 0;
}