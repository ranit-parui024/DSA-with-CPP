#include<iostream>
#include<climits>
using namespace std;
int seclarg(int a[], int size){
    int largest = INT_MIN, secmax = INT_MIN;
    for (int i = 0; i < size ; i++){
        if (a[i] > largest){
            secmax = largest;
            largest = a[i];
        }
        else if (a[i] > secmax && a[i] != largest){
            secmax = a[i];
        }
    }
    return secmax;
}
int main () {
    int a[] = {12, 35, 1, 10, 34, 1}, size = sizeof(a)/sizeof(a[0]);
    
    int result = seclarg(a, size);
    cout << result << endl;
}