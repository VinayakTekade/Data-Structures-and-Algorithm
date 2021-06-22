#include <bits/stdc++.h>
using namespace std;

int smallestMissingNumber(int arr[], int n)
{
    int N = 1e5 + 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            check[arr[i]] = 1;
        }
    }

    int ans = 0;

    for (int i = 0; i < N; i++)
    {
        if (check[i] == 0)
        {
            ans = i;
            break;
        }
    }
    cout << "The missing number is " << ans;
    return 0;
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

    smallestMissingNumber(arr, n);

    return 0;
}
