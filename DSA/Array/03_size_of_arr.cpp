#include<iostream>
using namespace std;
int main (){
    int a[] = {4, 6, 8, 9 ,80};
    cout << sizeof(a) / sizeof(a[0]) ;
    return 0;
}