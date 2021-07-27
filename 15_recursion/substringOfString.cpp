#include <iostream>
#include <string>
using namespace std;

void substring(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    substring(s.substr(1), ans);
    substring(s.substr(1), ans + s[0]);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    string s;
    cin >> s;

    substring(s, "");
    return 0;
}