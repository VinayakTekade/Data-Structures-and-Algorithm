#include <iostream>
#include <string>
using namespace std;

void reverseString(string s)
{
    if (s.length() == 0)
    {
        return;
    }

    string restStr = s.substr(1);
    reverseString(restStr);
    cout << (s[0]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    string str;
    getline(cin, str);
    reverseString(str);

    return 0;
}