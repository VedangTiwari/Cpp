#include <iostream>
#include <cmath>
using namespace std;

int BinToDec(int n){
    int decimal = 0;
    int i = 0;
    while(n){
        int bit = n%10;
        decimal = bit*pow(2,i++) + decimal;
        n = n/10;
    }
    return decimal;
}
int main(){
    int n; 
    cout << "Enter binary no: ";
    cin >> n;

    int decimal = BinToDec(n); // fucntion call  ;  check for 17

    cout << decimal;
    return 0;
}

