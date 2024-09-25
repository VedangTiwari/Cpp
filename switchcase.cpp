#include<iostream>
using namespace std;
int main(){
    int val;
    cout << "Enter value" << endl;
    cin >> val;
    switch (val){
      case 1 : cout << "Dan";
      break;
      case 2 : cout << "Ramesh";
      break;
      case 3 : cout << "Rahul";
      break;
      default : cout << "Suresh";
    }

}