#include<iostream>
using namespace std;
int fact (int a){
    if (a == 1){
        return 1;
    }
    else return a * fact(a - 1);
}
int main () {
    int n;
    cout  << " Enter n = ";
    cin>>n;
    cout << "Factorial of given number = " << fact(n);
    return 0;
}