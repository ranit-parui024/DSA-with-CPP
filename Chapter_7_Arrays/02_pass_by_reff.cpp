#include<iostream>
using namespace std;
void changearr (int arr[], int size){
    for (int i = 0; i < size; i++){
        arr[i] = i * arr[i];
    }

}
int main () {
    int arr[]= {2, 3, 4};
    int size = sizeof(arr)/sizeof(int);
    changearr (arr, size);

    cout << "print array = " ;
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}