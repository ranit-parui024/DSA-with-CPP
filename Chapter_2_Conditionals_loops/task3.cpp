// Sum of odd number b/w 1 to n

#include<iostream>
using namespace std;
int main () {
    int n , sum = 0;
    cout<<"Enter n = ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(i%2!=0){
            sum = sum + i;
        }
    }
    cout<<"sum = "<< sum;
    return 0;
}

// sum of odd numbers b/w 1 to n using while loop

#include<iostream>
using namespace std;
int main (){
    int n, sum = 0;
    cout<<"Enter n = ";
    cin>>n;
    int i = 1;
    while(i <= n){
        if(i%2 != 0) {
            sum += i;
        }
        i++;
    }
    cout<<"Sum = "<< sum;
    return 0;
}