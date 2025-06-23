#include <iostream>
using namespace std;
int dectobin (int x){
    int long ans = 0, power = 1, decnum = x;
    while (decnum > 0){
        int remainder = decnum % 2;
        decnum = decnum / 2;
        ans += (remainder * power);
        power *= 10;
    }
    return ans;
}
int main () {
    int long num;
    cout << "Enter num = ";
    cin>>num;

    cout << "Binary form of given number is = " << dectobin(num);
    return 0;
}