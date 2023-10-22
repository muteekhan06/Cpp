#include <iostream>
using namespace std;
int main() {
    // Print the multiplication table from 1 to 10.
    for (int i=1;i<=10;i++){
         cout << "__________Multiplication table of " << i << "___________" << endl; 
      for (int j=1;j<=10;j++){
        cout <<  i << " x " << j << " = " << j*i << endl;
    }   
    }
}
