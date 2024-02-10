//Egamen Jan Leo
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; 
//WITH ARGUMENTS AND DOES NOT RETURN A VALUE
//WITHOUT ARGUMENTS AND DOES NOT RETURN A VALUE
int main(){
int element[100];
int size,totalOdd=0, totalEven=0,sumOdd=0, sumEven=0;
string choice;

    cout <<"Odd and Even Numbers"<<endl;
    cout <<"Enter Element Size: ";
    cin >> size;

for (int i =0; i<size; i++){
    cout << "Enter element "<< i+1 <<": "; // SORTING
    cin >> element[i];
}
getch();
system("cls");
cout <<"All Even numbers: ";
for (int i =0; i<size; i++){
    if (element[i]%2==0){
    cout << element[i] << " "; // CHEKING IF EVEN and it is it would be
    sumEven= sumEven+element[i];
    totalEven++;}
}
cout <<endl;
cout <<"All Odd numbers: ";
for (int i =0; i<size; i++){
    if (element[i]%2!=0){

    cout << element[i] << " ";
    sumOdd=sumOdd+element[i];
    totalOdd++;}
}

cout <<endl;
cout <<"Sum of all even numbers: "<<sumEven << endl;
cout <<"Sum of all odd numbers: "<<sumOdd << endl;
cout <<"Total of all even numbers: "<<totalEven << endl;
cout <<"Total of all odd numbers: "<<totalOdd << endl;
getch();




return 0;
}