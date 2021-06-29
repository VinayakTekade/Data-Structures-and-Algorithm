#include <iostream>
#include <climits>
using namespace std;

// int maxSumSubarray(int arr[], int n)     //Brute Force Method
// {
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxSum = max(sum, maxSum);
//         }
//     }
//     return maxSum;
// }

// int maxSumSubarray(int arr[], int n)         // Cumulative Sum Approach
// {
//     int currSum[n + 1];
//     currSum[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         currSum[i] = currSum[i - 1] + arr[i - 1];
//     }

//     int maxSum = INT_MIN;

//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = currSum[i] - currSum[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     return maxSum;
// }

int maxSumSubarray(int arr[], int n) // Kandane's Algorithm
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

    cout << "The max sum of all the subarrays of the array are " << endl;
    cout << maxSumSubarray(arr, n);

    return 0;
}