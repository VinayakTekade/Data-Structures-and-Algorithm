#include <iostream>
using namespace std;

int *runningSum(int arr[], int n)
{
    static int runSum[100];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        runSum[i] = sum;
    }

    return runSum;
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

    cout << "The running sum of the array is " << endl;
    int *sum = runningSum(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << sum[i] << "\t";
    }

    return 0;
}