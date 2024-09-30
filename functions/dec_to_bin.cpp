#include <iostream>
#include <cmath>
using namespace std;
int DecToBin(int n){
        //division method
        int binaryno = 0;
        int i = 0;
        while(n>0){
            int bit = n%2;
            binaryno = bit*pow(10, i++) + binaryno;
            n = n/2;
        }
        return binaryno;
    
    }
int DecToBin2(int N){
        //bitwise method
        int binaryno = 0;
        int i = 0;
        while(N>0){
            int bit = (N&1);
            binaryno = bit*pow(10, i++) + binaryno;
            N = N>>1;
        }
        return binaryno;
    
    }
int main(){
    int n; 
    cout << "Enter decimal no: ";
    cin >> n;

    int binary = DecToBin2(n); // fucntion call  ;  check for 17

    cout << binary;
    return 0;
}
