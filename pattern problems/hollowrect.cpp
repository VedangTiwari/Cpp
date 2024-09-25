/*
code 1:

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



code 2:


#include <iostream>
using namespace std;

int main(){
  int r,c;
   cout << "Enter rows:";
   cin >> r;
   cout << "Enter column:";
   cin >> c;
   for(int i=0;i<r;i++){
    if(i != 0 && i != r-1){
    for(int j=0;j<c;j++){
      if(j==0 || j==c-1){
        cout << "*";
      }
      else{
        cout << " ";
      }
    }  
    cout << endl;
   }
   else{
    for(int j=0;j<c;j++){
      cout << "*";
   }
    cout << endl;
  }

}
}

code 3:

#include <iostream>
using namespace std;

int main(){
  int r, c;
  cout << "Enter rows: ";
  cin >> r;
  cout << "Enter columns: ";
  cin >> c;
  
  for(int i = 0; i < r; i++){
    for(int j = 0; j < c; j++){
      // Print '*' at the borders
      if(i == 0 || i == r-1 || j == 0 || j == c-1){
        cout << "*";
      }
      else{
        cout << " ";  // Print space inside the rectangle
      }
    }
    cout << endl;
  }

  return 0;
}



*/

