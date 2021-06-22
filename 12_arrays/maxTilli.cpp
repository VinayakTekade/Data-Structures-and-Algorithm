#include <iostream>
using namespace std;

int *maxTilli(int arr[], int n)
{
    static int max[100];
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (mx < arr[i])
        {
            mx = arr[i];
        }
        max[i] = mx;
    }

    return max;
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

    cout << "The max till i of the array is " << endl;
    int *max = maxTilli(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << max[i] << "\t";
    }

    return 0;
}