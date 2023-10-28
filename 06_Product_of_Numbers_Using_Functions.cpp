#include <iostream>
using namespace std;
// Calculate and print the product of two numbers using a function.
void getNumbers(int &a, int &b){
    cout << "Enter two numbers: ";
    cin >> a >> b;
}
void Productcalculator(int &a,int &b){
    int product = a*b;
    cout << "The product of the numbers you entered is " << product << ". " << endl;
}
int main() {
    cout<< "How many times you want to product two numbers? ";
    int no_of_times;
    cin >> no_of_times;
    for (int i=0;i<no_of_times;i++){
    int a,b;
    getNumbers(a,b);
    Productcalculator(a,b);
    }
    return 0;
}