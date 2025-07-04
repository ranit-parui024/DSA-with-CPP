#include<iostream>
#include<algorithm>
using namespace std;

void swaparray (int arr[], int size){
    int start = 0, end = size - 1;
    while (start < end){
        swap(arr[start], arr[end]);
        start++, end--;
    }
}

int main () {
    int arr [] = {3, 6, 4, 7, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array is = ";
    for(int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl; 

    swaparray(arr, size); 

    cout << "Reverse array is = ";
    for(int i = 0; i < size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
