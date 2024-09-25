/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:" << endl;
    cin >> n;
    cout << endl;

    for(int row=0; row<n; row++){
        
        for(int col=0; col<row+1; col++){
            int ans = col+1;
            char ch = ans + 'A'-1;
            cout << ch;
        }
        for(int col=row;col>=1;col--){
            int ans = col;
            char ch = ans + 'A'-1;
            cout << ch;
        }
        cout << endl;
    }


}

*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter rows:";
    cin >> n;
    cout << endl;

    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            int m = col+1;
            char ch = m + 'A'-1;
            cout << ch;

        }
        for(int col=row;col>=1;col--){
            int m = col;
            char ch = m + 'A'-1;
            cout << ch;
        }
        
        cout << endl;
    }


}