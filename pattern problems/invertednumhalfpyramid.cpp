/*

code 1:
#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter rows" << endl;
    cin >> row;
    cout << endl;
    for(int i = 0; i < row; i++){
        int k=1;
        for(int j = row; j>i; j--){
            cout << k;
            k++;
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
            cout << j+1;
        }
        cout << endl;
    }

}

*/