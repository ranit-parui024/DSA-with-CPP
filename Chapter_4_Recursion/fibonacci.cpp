#include<iostream>
using namespace std;
int fibonacci (int x){
    if (x == 0){
        return 0;
    }
    else if (x == 1){
        return 1;
    }
    else return fibonacci(x-1) + fibonacci(x-2);
}
int main () {
    int numterms;
    cout << " Enter number of terms = ";
    cin>>numterms;
    
    if (numterms < 0){
        cout << "-ve terms can't be printed";
    }
    else {
        cout << "Fibonacci Series : ";
        for (int i = 0; i < numterms; i++){
            cout << fibonacci (i) << " ";
        }
        cout << "\n";
    }
    return 0;
}