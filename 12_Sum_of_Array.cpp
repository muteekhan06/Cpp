#include <iostream>
using namespace std;
int main() {
    // Array Sum:Given an array of integers, find the sum of all the elements.
    cout << "Enter the size of array: ";
    int size;
    int sum = 0;
    cin >> size;
    cout << "Enter the Array: ";
    int Arr[size];
    for (int i=0;i<size;i++){
        cin >> Arr[i];
    }
    for (int i=0;i<size;i++){
        sum +=Arr[i];        
    }
    cout << "The sum of the elements in the array is " <<  sum << ".";
    return 0;
}