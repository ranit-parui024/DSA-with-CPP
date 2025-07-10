#include<iostream>
#include<vector>
using namespace std;
int main () {
    vector<char> vec = {'a', 'b', 'c', 'd'};

    cout << "size = " << vec.size() <<endl; // to print size of vector
    for (char val : vec){ // for each loops
        cout << val << endl;
    }
    return 0;
}