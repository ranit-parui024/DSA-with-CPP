#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1;
    cout << "Size = " << vec1.size() << endl;

    vec1.push_back(64);
    vec1.push_back(46); // add elements to vector
    vec1.push_back(67);
    vec1.push_back(33);
    vec1.push_back(23);
    vec1.push_back(16);
    cout << "After push back,  Size = " << vec1.size() << endl;
    for (int val : vec1)
    {
        cout << val << endl;
    }

    vec1.pop_back(); // delete elements from last in vector
    cout << "After pop back,  Size = " << vec1.size() << endl;

    for (int val : vec1)
    {
        cout << val << endl;
    }

    cout << "Front Element = " << vec1.front() << endl;
    cout << "Back Element = " << vec1.back() << endl;
    cout << "At 4th Index,  Element = " << vec1.at(4) << endl;
    return 0;
}