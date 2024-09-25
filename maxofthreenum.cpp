#include<iostream>
using namespace std;

int findmax(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }
    }
    else{
        if(b>c){
            return b;
        }
        else{
            return c;
        }
    }


}


int main(){
    int a,b,c;

    cout << "Enter three integers: " << endl;
    cin >> a >> b >> c;

    int Max = findmax(a,b,c);
    cout << "Maximum number is: " << Max;
    return 0;
}