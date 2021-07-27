#include <iostream>
#include <string>
using namespace std;

string moveX(string s)
{
    if (s.length() == 0)
    {
        return "";
    }

    char ch = s[0];
    string ans = moveX(s.substr(1));
    if (ch == 'x')
    {
        return ans + ch;
    }

    return ch + ans;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    cout << moveX(s);
    return 0;
}