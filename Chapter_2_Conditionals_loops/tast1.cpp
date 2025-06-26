// WAPC++ to print whether the charcater is Uppercase or Lowercase

#include<iostream>
using namespace std;
int main () {
    char ch;
    cout<<"Enter ch = ";
    cin>>ch;

   if(ch>=65 && ch<=90) {
    cout<<ch<<" is Uppercase";
   }
   else if(ch>=97 && ch<=122){
    cout<<ch<<" is lowercase";
   }
}