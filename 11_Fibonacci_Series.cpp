#include <iostream>
using namespace std;

void Fibonacci(){
    int first = 0;
    int second = 1;
    for (int i=0;1<2;i++){
        cout <<first <<"\t";
        int next=first+second;
        first= second;
        second = next;
    }
    
}


int main() {
    // Calculate and print the Fibonacci series using a function.
    Fibonacci();
    return 0;
}