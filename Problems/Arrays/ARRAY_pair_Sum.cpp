#include<iostream>
#include<vector>
using namespace std;

// 2 pointer Approach
vector<int> PairSum (vector<int> &arr, int target){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    vector<int> ans;
    while(start < end){
        int current_sum = arr[start] + arr[end];
        if(current_sum == target){
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
            return ans;
        }
        else if(current_sum > target){
            end--;
        }
        else if(current_sum < target){
            start ++;
        }
    }
}
// brute force approach
// vector<int> PairSum (vector<int> &arr, int target){
//     vector<int> ans;
//     int n = arr.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] + arr[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//}
int main () {
    vector<int> arr= {2, 4, 5, 7, 9, 10};
    int n = arr.size();
    int target = 6;

    vector<int> ans = PairSum(arr, target);
    // IMPORTANT: Always check if the returned vector is empty before accessing elements
    if (!ans.empty()) {
        cout << "Pair found: (" << ans[0] << ", " << ans[1] << ")" << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }

    // Another test case where no pair is found
    target = 100;
    ans = PairSum(arr, target);
    if (!ans.empty()) {
        cout << "Pair found: (" << ans[0] << ", " << ans[1] << ")" << endl;
    } else {
        cout << "No pair found that sums to " << target << endl;
    }
    return 0;
}