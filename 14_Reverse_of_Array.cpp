#include <iostream>
using namespace std;
int main() {
    //  Array Reversal: Reverse the elements of an array. For example, if the array is [1, 2, 3, 4, 5], the resulting array would be [5, 4, 3, 2, 1].
    cout << "Enter the size of array: ";
    int size;
    cin >> size;
    cout << "Enter the Array: ";
    int Arr[size];
    int temp[size];
    for (int i=0;i<size;i++){
        cin >> Arr[i];
    }
    for (int i=size-1;i>=0;i--){
        cout << Arr[i] << " ";
    }
    return 0;
}