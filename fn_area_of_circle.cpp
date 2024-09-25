#include <iostream>
using namespace std;

float AreaCircle(float r){
    return 3.14*r*r;
}

int main(){
    float r;
    cout << "Enter radius: ";
    cin >> r;

    float area = AreaCircle(r);
    cout << "Area of circle with radius " << r << " is " << area;
    return 0;
}