// WAP to sum of all numbers from 1 to N which are divisible by 3

#include<iostream>
using namespace std;
int main (){
    int n, sum = 0;
    cout<<"Enter n = ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            sum += i;
        }
    }
    cout<<"Sum = "<< sum;
}