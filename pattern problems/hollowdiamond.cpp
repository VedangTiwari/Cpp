/*

code 1:

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

//code 2:


#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:" << endl;
    cin >> n;
    cout << endl;

    for(int row=0;row<n;row++){
        //spaces
        for(int col=0;col<n-row-1;col++){
            cout << " ";
        }
        //star
         cout << "*";
        //spaces
        if(row>0){
        for(int col=0;col<2*row-1;col++){
            cout << " ";
        }
        //star
        cout << "*";
        }
    cout << endl;

    }

    //spaces
    for(int row=0;row<n;row++){
        for(int col=0;col<row;col++){
            cout << " ";
        }
        //star
        cout << "*";
        for(int col=0;col<2*n-2*row-3;col++){
            cout << " ";
        }
        //star
        if(row<n-1){
        cout << "*";
        }
     cout << endl;
    }
}


*/