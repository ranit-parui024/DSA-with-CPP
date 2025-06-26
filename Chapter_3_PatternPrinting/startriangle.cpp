#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n = ";
    cin>>n;

    for(int i = 1; i <= n; i++){ // this loop determine rows
        for(int j = 1; j <= i; j++){ // this loop determine colmns
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}