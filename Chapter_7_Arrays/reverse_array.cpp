#include<iostream>
using namespace std;
int main () {
    int arr [ ] = {1, 4, 6, 7, 8}, size = sizeof(arr)/sizeof(int);
    cout << "Reverse form of the given array is = ";
    for (int i = size - 1; i >=0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}