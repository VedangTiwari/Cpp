#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:" << endl;
    cin >> n;
    cout << endl;
    
    for(int row =0; row < n; row++){
        //space
        for(int col=0; col<n-row-1; col++){
            cout << " ";
        }
        //stars
        for(int col=0; col<2*row+1; col++){
            if(col == 0 || col == 2*row){
            cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int row =0; row < n; row++){
        //space
        for(int col=0; col<row; col++){
            cout << " ";
        }
        //stars
        for(int col=0; col<2*n-2*row-1;col++){
            if(col == 0 || col == 2*n-2*row-2){
            cout << "*";
            }
            else{
            cout << " ";
            }


    
    }
    cout << endl;
}

}