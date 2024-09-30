#include<iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) 
    return false; 
    for (int i = 2;i< num; i++) { 
        if (num % i == 0) 
        return false; 
    }
    return true; 
}

// Function to print all prime numbers between 1 and n
void PrimeNums(int n) {
    for (int i = 2; i <= n; i++) { // Start from 2, as 1 is not prime
        if (isPrime(i)) {
            cout << i << endl; // Print the prime number
        }
    }
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    PrimeNums(n); // Call the function to print primes
    return 0;
}
