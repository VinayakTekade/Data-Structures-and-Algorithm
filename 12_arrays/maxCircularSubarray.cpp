#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n) // Kandane's Algorithm
{
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        currSum = currSum + arr[i];
        if (currSum < 0)
        {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int maxCircularSumSubarray(int arr[], int n)
{
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(arr, n);

    int totalsum = 0;

    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }

    wrapsum = totalsum + kadane(arr, n);

    return max(wrapsum, nonwrapsum);
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

    cout << "The max sum of all the subarrays of the array is " << endl;
    cout << maxCircularSumSubarray(arr, n);

    return 0;
}