#include <iostream>
using namespace std;
void getNumbers(int &a, int &b){
    cout << "Enter two numbers: ";
    cin >> a >> b;
}
void Sumcalculator(int &a,int &b){
    int sum = a+b;
    cout << "The sum of the numbers you entered is " << sum << ". ";
}
int main() {
    int a,b;
    getNumbers(a,b);
    Sumcalculator(a,b);
    return 0;
}