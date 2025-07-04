#include<iostream>
#include<climits>
using namespace std;
int main () {
    int size=4;
int marks[size]={15,10,20,5};
int index;
int smallest=INT_MAX;

for(int i=0; i<size; i++){
 smallest=min(marks[i],   smallest);
if(smallest==marks[i]) {
index=i;
}

}
cout << "Index of smallest number is  " << index <<endl;
return 0;
}