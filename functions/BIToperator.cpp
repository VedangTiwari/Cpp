#include<iostream>
using namespace std;
int main(){
    bool a = false;
    cout << ~(a) << endl;;

    cout << (5&10) << endl;

    cout << (3|4) << endl;

    int b = 12;
    b = b << 1; //  12*2 

    cout << b << endl;  
    
    //pre and post increment/decrement operator
    
    int c = 5;
    cout << (++c) * (++c);  // should give 42?? 

   
}