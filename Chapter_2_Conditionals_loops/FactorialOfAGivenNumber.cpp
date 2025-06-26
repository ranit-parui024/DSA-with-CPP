// WAP to print factorial of a given number

#include<iostream>
using namespace std;
int main (){
    int n , product = 1;
    cout<<"Enter n = ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        product *= i;
    }
    cout<< "Factorial of the given number is = " << product;
    return 0;
}