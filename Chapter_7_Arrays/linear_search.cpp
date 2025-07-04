#include<iostream>
using namespace std;
int linearserach(int arr[], int size, int target){
    for(int i = 0; i < size ; i++){
        if (arr[i] == target){
            cout << "target found at index = " << i;
            return i; //  target found
        }
     }
     return -1; //  target not found
    
}

int main () {
    int arr [] = {3, 7, 6, 9, 8, 60}, target = 8, size = sizeof(arr)/sizeof(int);
    int result = linearserach(arr, size, target);
    if (result == -1){
        cout << "Target not found";
    }
    else {
        cout << "Target found at index = " << result;
    }
    
    return 0;
}