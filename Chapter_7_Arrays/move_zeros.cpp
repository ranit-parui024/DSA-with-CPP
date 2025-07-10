#include <iostream>
#include <vector>
using namespace std;
void movezero(vector<int> &vec, int size)
{
    int nonzero = 0;
    for (int i = 0; i < size; i++)
    {
        if (vec[i] != 0)
        {
            vec[nonzero] = vec[i];
            nonzero++;
        }
    }
    while (nonzero < size)
        {
            vec[nonzero] = 0;
            nonzero++;
        }
}
int main()
{

    vector<int> vec = {2, 4, 5, 0, 8, 0, 9};
    int n = vec.size();

    cout << "Original vector: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    movezero(vec, n);

    cout << "Vector after moving zeros: ";
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}