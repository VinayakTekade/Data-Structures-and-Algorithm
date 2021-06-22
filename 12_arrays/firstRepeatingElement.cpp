#include <bits/stdc++.h>
using namespace std;

int firstRepeating(int arr[], int n)
{
    int minidx = INT_MAX;
    int N = 1e6 + 2;
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        if (idx[arr[i]] != -1)
        {
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }

    if (minidx == INT_MAX)
    {
        return -1;
    }
    else
    {
        return minidx + 1;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Given Array is: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    cout << "The first repeating element of the array is " << endl;
    cout << firstRepeating(arr, n);

    return 0;
}
