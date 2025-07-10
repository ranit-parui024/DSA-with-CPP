#include <iostream>
#include <vector>
using namespace std;
int uniquenumber(vector<int> &arr, int size)
{
    int ans = 0;

    for (int val : arr)
    {
        ans = val ^ ans;
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, 2, 3, 3, 2};
    int n = arr.size();
    for (int val : arr)
    {
        cout << val << " ";
    }
    int result = uniquenumber(arr, n);
    cout << "Unique Number = " << result;
    return 0;
}