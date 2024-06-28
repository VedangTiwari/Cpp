#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout << "Enter no of rows: " << endl;
    cin >> row;
    cout << "Enter no of columns: " << endl;
    cin >> col;
   for(int i=0;i<row;i++){
    // first and last row then print 5 *
    if(i == 0 || i == row-1){
      for(int j=0;j<col;j++){
        cout << "*";
      }
    }
    else{ 
    //remaining rows
     //first row
      cout << "*";
     // middle rows
    for(int k=0;k<col-2;k++){
      cout << " ";
    }
     // last row
      cout << "*";
    }
  cout << endl;
  }
}