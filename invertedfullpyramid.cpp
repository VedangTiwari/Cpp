#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "enter rows:" << endl;
    cin >> row;
    cout << endl;
    
    for(int i =0;i<row;i++){
    //space
    for (int j =0;j<i;j++){
        cout << " ";
    }
    //stars
    for(int k=0;k<row-i;k++){
        cout << "* ";
    }    
    cout<<endl;

}
}