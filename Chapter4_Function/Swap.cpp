#include<iostream>
using namespace std;
void swap (int* x, int* y){
    int temp;
    *x = temp;
    temp = *y;
    *y = *x;
}
int main () {
    int a = 7, b = 9;
    swap(a, b);
    cout << " a = "<<a<<endl;
    cout << "b = " << b << endl;
    return 0;
}