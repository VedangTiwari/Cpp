#include<iostream>
using namespace std;

int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    else{
        int fact  =1;
        for(int i=1;i<=n;i++){
           fact = fact*i;
        }
        return fact;
    }
}
int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    int res = factorial(n);
    cout << "Factorial = " << res;
    return 0; 

}