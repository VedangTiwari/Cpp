#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter rows:" << endl;
    cin >> row;
    
    for(int i = 0;i<row;i++){
        //spaces
        for(int j=0;j<row-i-1;j++){
            cout << " ";
        }
        //stars
        for(int k=0;k<i+1;k++){
            cout << "* ";
        }
        cout << endl;
    }

}