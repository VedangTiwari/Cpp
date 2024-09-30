#include<iostream>
using namespace std;

void PrimeNum(int n) {
    if (n <= 1) {
        cout << "Not Prime" << endl;
        return;
    }
    for (int i = 2; i < n; i++) {   //optimeize condition: i<=sqrt(n)
        if (n % i == 0) { 
            cout << "Not Prime" << endl;
            return;  
        }
    }
    cout << "Prime" << endl;  
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    PrimeNum(n);
    return 0;
}

