#include<iostream>
#include<iomanip>
using namespace std;
void TempConvert(float c){
    float f = c * 1.80 + 32.00;
    cout << fixed << setprecision(2);
    cout << "Temperature in fahrenheit is: " << f;
}

int main(){
    float c;
    cout << "Enter temp in celsius: ";
    cin >> c;
    TempConvert(c);
}