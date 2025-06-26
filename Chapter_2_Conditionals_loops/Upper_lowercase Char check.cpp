#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter character = ";
    cin>>ch;
    int value = (char)ch;

    if(value >= 65 && value <= 90) {
        cout<<"Charcter is uppercase";
    } else if (value >= 97 && value <= 122) {
        cout<<"Character is lowercase";
    }

    return 0;
}