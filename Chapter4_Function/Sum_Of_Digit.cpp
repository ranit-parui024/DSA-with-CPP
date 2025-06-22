#include<iostream>?
using namespace std;
int digitsum (int a){
    int sum_of_digit = 0;
    int lastdigit;
    while(a > 0){
        lastdigit = a%10;
        a = a/10;
        sum_of_digit += lastdigit;
    }
    return sum_of_digit;
}
int main () {
    int n;
    cout << "Enter num = ";
    cin>>n;
    cout << "sum of digit = "<< digitsum(n);

    return 0;
}