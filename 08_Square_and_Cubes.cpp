#include <iostream>
using namespace std;
int main() {
     cout << "Number" <<"\t" <<"Square"<<"\t"<<"Cube" <<"\t" <<endl;
    for (int i=0;i<=10;i++){
        int square=i*i;
        int cube=i*i*i;
        cout << i  <<"\t" <<"\t"<< square <<"\t" <<"\t"<< cube <<"\t"<<"\t"<< endl;
    }
    return 0;
}