#include <iostream>
using namespace std;
int main() {
    // Print the ASCII values of all uppercase letters.
    cout << "ASCII values of all uppercase letters are: " << endl;
    for (int i='A';i<='Z';i++){
        cout << i << endl; 
    }
    // Print the ASCII values of all lowercase letters.
    cout << "ASCII values of all lowercase letters are: " << endl;
    for (int i='a';i<='z';i++){
        cout << i << endl; 
    }
    // Print the ASCII values of all digits.
    cout << "ASCII values of all digits are: " << endl;
    for (int i='0';i<='9';i++){
        cout << i << endl; 
    }
    // Print the ASCII values of all special characters.
    cout << "ASCII values of all special characters are: " << endl;
    for (int i='!';i<='/';i++){
        cout << i << endl; 
    }
}

