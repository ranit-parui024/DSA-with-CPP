#include<iostream>
using namespace std;
int dec (int x){
    int power = 1, remainder, ans = 0;
    while (x > 0){
        remainder = x % 10;
        x /= 10;
        ans += (remainder * power);
        power *= 2;
    }
    return ans;
}
int main (){
    int num;
    cout << "Enter number = ";
    cin >> num;
    cout <<"Decimal form of given binary number is " << dec(num);
    return 0;
}