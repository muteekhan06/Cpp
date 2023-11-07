#include <iostream>
using namespace std;

void CeltoFah(float &celcius){
    float Fahrenheit_temperature= (celcius *1.8)+32;
    cout << "Temperature in Fahrenheit is " <<  Fahrenheit_temperature << "." << endl;
}

void FahtoCel(float &fahrenheit){
    float Celcius_temperature= 0.555555556*(fahrenheit -32);
    cout << "Temperature in Celcius is " <<  Celcius_temperature << "." << endl;
}


int main() {
    cout << "Enter the temperature in Celcius: ";
    float celcius;
    cin >>celcius;
    CeltoFah(celcius);
    cout << "Now enter the temperature in Fahrenheit: ";
    float fahrenheit;
    cin >>fahrenheit;
    FahtoCel(fahrenheit);
    return 0;
}
