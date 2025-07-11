#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int MaxSum(int arr[], int x)
{ // Kadane's Algorithm
    int Max_Sum = INT_MIN;
    int Current_Sum = 0;
    for (int i = 0; i < x; i++)
    {
        Current_Sum += arr[i];
        Max_Sum = max(Current_Sum, Max_Sum);
        if (Current_Sum < 0)
        {
            Current_Sum = 0;
        }
    }
    return Max_Sum;
}

int main()
{
    int arr[] = {1, 3, 4, 5, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Brute force approach
    // int Max_Sum = INT_MIN;
    // for(int start = 0; start < n; start ++){
    //     int Current_Sum = 0;
    //     for(int end = start; end < n; end ++){
    //         Current_Sum += arr[end];
    //         Max_Sum = max(Current_Sum, Max_Sum);
    //     }
    // }

    // cout << "Max Subarray Sum = " << Max_Sum;

    cout << "Max Subarray Sum = " << MaxSum(arr, n);

    return 0;
}
