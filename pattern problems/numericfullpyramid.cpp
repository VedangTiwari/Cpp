/*
code 1:
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:" << endl;
    cin >> n;
    cout << endl;

    for(int row = 0; row < n; row++){
        //space
       for(int col = 0; col < n-row-1; col++){
        cout << " ";
       }
       //numbers
       int start = row+1;
       for(int col=0;col<row+1;col++){
        cout << start;
        start++;
       }
       //reverse numbers
       start = 2*row;
       for(int col=0 ; col<row ; col++){
        cout << start;
        start--;

       }
       cout << endl;
    }



}




#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:";
    cin >> n;
    cout << endl;
    int count =1;

    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout << " ";
        }

        for(int col=0;col<row+1;col++){
            cout << count+col;
            

        }
        for(int col=row;col>=1;col--){
            cout << count+col-1;
        }
        count++;
        
        cout << endl;
    }


} 

*/