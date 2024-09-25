#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no of rows: ";
    cin >> n;
    for(int row=0; row<n;row++){
        //spaces
        for(int j=0;j<n-1-row;j++){
            cout << " ";
        }
        
        //stars
        for(int k=0;k<row+1;k++){
            cout<< "* ";
        }
        cout << endl;
    }
}






