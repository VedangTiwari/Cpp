#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:";
    cin >> n;
    cout << endl;

    for(int row=0;row<n;row++){
        if(row!=n-1){
          for(int col=0;col<n-row-1;col++){
            cout << " ";
          }
          
          for(int col=0;col<2*row+1;col++){
            if( col!=0 && col!=2*row){
                cout << " ";
            }
            else if(col == 0){
                cout << 1;
            }
            else
                cout << row+1;
          }
           cout << endl;
        }
    
       
    }
    cout << "1 2 3 4 5";
}