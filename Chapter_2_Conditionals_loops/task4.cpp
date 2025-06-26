// number is prime or not

#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter n = ";
    cin>>n;
    bool isprime = true;
    
    for(int i = 2; i <= n-1; i++){
        if (n%i==0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout<< n << " is prime number";
    } else {
        cout<< n <<" is not a prime number";
    }
    return 0;
}

// check a number is prime or not using different logic
#include<iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter n = ";
    cin>>n;
    bool isprime = true;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout<< n <<" is prime number";
    } else{
        cout<< n << " is not prime number";
    }
    return 0;
}