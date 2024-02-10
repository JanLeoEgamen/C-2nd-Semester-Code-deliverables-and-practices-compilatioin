#include <iostream>
using namespace std;

int main(){

int b[100][100], row,col, temp = 0;

cout << "Enter row: ";
cin >> row;
cout << "Enter column: ";
cin >> col;
    cout << "Enter value for element: "<<endl;
for ( int c = 0; c<row; c++){
for ( int a = 0; a<col; a++ ){
    cout << "Element [" << c << "]"<< " [" << a << "] : ";
    cin >> b[c][a];
}}
    cout << "inputted value : "<<endl;

for ( int c = 0; c<row; c++){
for ( int a = 0; a<col; a++ ){
    cout << "Element [" << c << "]"<< " [" << a << "] = ";
    cout << b[c][a] << endl;
}
cout << endl;}


}