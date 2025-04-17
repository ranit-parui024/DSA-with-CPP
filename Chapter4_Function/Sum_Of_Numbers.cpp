#include<iostream>
using namespace std;
// sum of numbers
int a, b;
int sum () {
    int s = a + b;
    return s;
}

int main () {
    cout << "Enter a = ";
    cin>>a;
    cout << "Enter b = ";
    cin>>b;

    cout << sum () << endl;
    return 0;
}