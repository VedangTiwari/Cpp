/*

code 1: 

#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter rows";
    cin >> row;
    for(int i=0; i<row; i++){
       for(int j=row; j>i; j--){
        cout << "*";
       }
       cout << endl;
    }

}

code 2:

#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter rows: ";
    cin >> row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout << "*";
        }
        cout << endl;
    }

}

*/