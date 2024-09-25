#include<iostream>
using namespace std;
int main(){
    int a=10;
    if(true){
        
        cout << a << endl; // 10

        int a = 20;
        cout << a << endl; // 20
    }
    cout << a; // 10

}
