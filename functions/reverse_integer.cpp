#include<iostream>
#include<climits>
using namespace std;
void ReverseInt(int n) {
    int reversed = 0;
    while (n != 0) {
        int rem = n % 10;
        // Overflow check
        if (reversed > INT_MAX / 10 || reversed < INT_MIN / 10) {
            cout << "Overflow! Cannot reverse the number." << endl;
            return;
        }
        reversed = reversed * 10 + rem;
        n = n / 10;
    }
    cout << "Reversed number: " << reversed << endl;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    ReverseInt(n);
}
