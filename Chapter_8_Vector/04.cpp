#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<int> vec;
    vec.push_back(0);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;
    vec.push_back(1);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;
    vec.push_back(2);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;
    vec.push_back(4);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;

    vec.push_back(5);
    cout << "Size of vector = " << vec.size() << endl;
    cout << "Capacity of vector = " << vec.capacity() << endl;
    return 0;
}