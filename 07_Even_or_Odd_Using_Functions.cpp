#include <iostream>
using namespace std;
// Check if a number is even or odd using a function.
void getNumbers(int &a){
    cout << "Enter a number: ";
    cin >> a;
}
void EvenorOdd(int &a){
    if(a%2==0)
        cout << a << " is even.";
    else
        cout << a << " is odd.";
}
int main() {
    int a,b;
    getNumbers(a);
    EvenorOdd(a);
    return 0;
}