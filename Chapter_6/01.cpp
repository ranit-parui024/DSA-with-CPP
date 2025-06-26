#include<iostream>
using namespace std;
int main (){
    int a = 4, b = 8;
    cout << (a&b) <<endl; // bitwise &
    cout << (a|b) <<endl; // bitwise |
    cout << (a^b) <<endl; // bitwise XOR
    cout << (a<<1) <<endl; // leftshift *2
    cout << (b >> 2) <<endl; // rightshift /2
    return 0;
}