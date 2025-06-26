#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int size = 5;
    int arr[size] = {35, 98, 59, 79, -20};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int largest_value_index = 0, smallest_value_index = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < smallest){
            smallest = arr[i];
            smallest_value_index = i;
        }
        if (arr[i] > largest){
            largest = arr[i];
            largest_value_index = i;
        }

    }
    cout << "Smallest = " << smallest << " index = " << smallest_value_index << endl;
    cout << "Largest = " << largest << " index = " << largest_value_index << endl;

    return 0;
}