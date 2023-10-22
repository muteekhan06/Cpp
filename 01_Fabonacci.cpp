#include <iostream>
using namespace std;
int main() {
    // Print the Fibonacci series up to a given number of terms.
    cout << "Enter number of terms: ";
    int terms;
    cin >> terms;
    int first =0;
    int second =1;
    for (int i=0;i<terms;i++){
        while (first<terms){
        cout << first << "   ";
        int next = first +second;
        first = second;
        second = next;
        }
    }
}
