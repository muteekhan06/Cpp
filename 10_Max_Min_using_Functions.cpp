#include <iostream>
using namespace std;

void max(float &a,float &b){
    if (a>b){
      cout << a << " is the maximum number." << endl;
    }
    else {
      cout << b << " is the maximum number." << endl;
    }
}

void min(float &a,float &b){
    if (a<b){
      cout << a << " is the minimum number." << endl;
    }
    else {
      cout << b << " is the minimum number." <<endl;
    }
}


int main() {
    // Find the maximum of two numbers using a function. 
    // Find the minimum of two numbers using a function.
    cout << "Enter two numbers: ";
    float a,b;
    cin >>a >> b;
    max(a,b);
    min(a,b);
    return 0;
}