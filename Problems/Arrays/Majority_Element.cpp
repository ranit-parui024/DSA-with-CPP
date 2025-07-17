#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//more's algorithm

int majorityElement(vector<int>& nums) {
        int freq = 0; int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
    }

// optimized brute force approach
// int majorityElement(vector<int> &nums){
//     int n = nums.size();
//     // sorting the vector
//     sort(nums.begin(), nums.end());
//     int freq = 1; int ans = nums[0];
//     for(int i = 0; i < n; i++){
//         if(nums[i] == nums[i-1]){
//             freq ++;
//         }
//         else {
//             freq = 1; ans = nums[i];
//         }
//         if(freq >= n/2){
//         return ans;
//     }
//     }
// }


// brute force approach
// int Majority_Element(vector<int> &nums){
//     int n = nums.size();
//     for(int val : nums){
//         int freq = 0;
//         for(int ele : nums){
//             if(ele == val){
//                 freq++;
//             }
//         }
//         if(freq >= n/2){
//             return val;
//         }
//     }
//     return -1;
// }

int main () {
    vector<int> arr = {2, 3, 4, 2, 2, 5, 3, 2, 3};
    int major_element = majorityElement(arr);
    cout << major_element << endl;
    return 0;
}
