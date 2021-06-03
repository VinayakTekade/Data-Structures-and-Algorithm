#include <iostream>
using namespace std;

bool isEligible(int age)
{
    if (age < 18)
    {
        return false;
    }
    return true;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int age;
    cin >> age;

    if (isEligible(age))
    {
        cout << "Eligible for voting";
    }
    else
    {
        cout << "Not eligible for voting";
    }

    return 0;
}