#include <iostream>
using namespace std;

int longestArithmeticSubarray(int arr[], int n)
{

    int pd = arr[1] - arr[0];
    int current = 2, ans = 2;

    for (int i = 2; i < n; i++)
    {
        if (pd == arr[i] - arr[i - 1])
        {
            current++;
        }
        else
        {
            pd = arr[i] - arr[i - 1];
            current = 2;
        }
        ans = max(ans, current);
    }
    return ans;
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

    cout << "The length of the longest arithmetic subarray of the array is " << endl;
    cout << longestArithmeticSubarray(arr, n);

    return 0;
}