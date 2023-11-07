#include <iostream>
using namespace std;
int main() {
    //  Array Rotation: Rotate the elements of an array by a given number of positions. For example, if the array is [1, 2, 3, 4, 5] and the rotation is 2, the resulting array would be [4, 5, 1, 2, 3].
    cout << "Enter the size of array: ";
    int size;
    cin >> size;
    cout << "Enter the Array: ";
    int Arr[size];
    int temp[size];
    for (int i=0;i<size;i++){
        cin >> Arr[i];
    }
    int rotation;
    cout << "Enter the rotation: ";
    cin >> rotation;
    for (int i=0;i<size;i++){
        temp[i]=Arr[i];
    }
    for (int i=0;i<size;i++){
        Arr[(i+rotation)%size]=temp[i];
    }
    for (int i=0;i<size;i++){
        cout << Arr[i] << " ";
    }
    return 0;
}