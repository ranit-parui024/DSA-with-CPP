#include<iostream>
using namespace std;
int main (){
    int a[] = {3, 5, 7, 8};
    int ans = 0;
    for(int i = 0; i < (sizeof(a)/sizeof(a[0])) ; i++){
        ans += a[i];    }
    cout << ans;
    return 0;
}