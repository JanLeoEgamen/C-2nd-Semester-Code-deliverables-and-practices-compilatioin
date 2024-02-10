#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){

    float height, distance, c = 0, ratio=0, power=1;
    cin>>height>>distance;

    c = sqrt(pow(height, 2) + pow(distance, 2));

    cout << fixed << setprecision(2) << c << endl; // limit output to 4 bytes
    if(power<=ratio){
        cout<<"Busted, and dead.";
    }
    else{
        cout <<"Escaped Successfully.";
    }

    return 0;
}






