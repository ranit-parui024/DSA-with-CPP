#include<iostream>
using namespace std;
int main() {

    int a ;
    cout<<"Enter a = ";   // cin , cout --> global objects
    cin>>a;

    if(a%2==0) cout<<a<<" is even number";
    else cout<<a<<" is odd number";
    return 0;

}