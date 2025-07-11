#include<iostream>
#include<vector>
using namespace std;
int main () {
    int arr[] = {1, 3, 4, 5, 7, 8};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "All possible subarrays are = " << endl;
    for(int start = 0; start < n; start ++){
        for(int end = start; end < n; end ++){
            for(int i = start ; i <= end; i++){
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}