#include<iostream>
using namespace std;
int fact (int x){
    if (x == 1){
        return 1;
    }
    else return x * fact(x-1);
}
int ncr (int x, int y){
    int ncr = (fact(x))/(fact(x-y) * fact(y));
    return ncr;
}
int main () {
    int n, r;
    cout<<"enter n = ";
    cin>>n;
    cout<<"Enter r = ";
    cin>>r;

    cout<<n<<"C"<<r<< " = "<< ncr(n, r);    
    return 0;
}