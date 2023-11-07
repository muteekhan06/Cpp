#include <iostream>
using namespace std;
int main() {
    //  Array Sorting: Sort the elements of an array in ascending or descending order. You can use various sorting algorithms such as Bubble Sort, Selection Sort.
    cout << "Enter the size of array: ";
    int size;
    cin >> size;
    cout << "Enter the Array: ";
    int Arr[size];
    for (int i=0;i<size;i++){
        cin >> Arr[i];
    }
    for(int i=0;i<size-1;i++){
        for (int j=0;j<size-i-1;j++){
            if (Arr[j]>Arr[j+1]){
                int temp=Arr[j];
                Arr[j]=Arr[j+1];
                Arr[j+1]=temp;
            }
        }
    }
    cout << "The sorted Array in Ascending Order is: ";
    for (int i=0;i<size;i++){
        cout << Arr[i] << " ";
    }
    return 0;
}