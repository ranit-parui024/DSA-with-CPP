#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> vec; // size = 0
    vector<int> vec1 = {1, 2, 4}; //size = 3
    vector<int> vec2 (4, 8); // (size, element)
    cout << vec1[1] << endl;
    cout << vec2[2] << endl;
    cout << vec2[3] << endl;
    cout << vec2[1] << endl;
   
    return 0;
}