#include<iostream>
#include<climits>
using namespace std;

int main (){
    int arr[] = {7, 9, 80, 56, 78, 69};
    int ans = INT_MIN;
    for(int i = 0; i <(sizeof(arr)/sizeof(arr[0])); i++){
        if(arr[i] > ans){
            ans = arr[i];
        }
    }
    cout << ans;
    return 0;
}