#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; 

int main(){

float monthsarray[12];


float total =0;
for (int i =0; i<=11; i++){

    cout << "Enter amount for the month "<< i+1 <<": ";
    cin >> monthsarray[i];

    total += monthsarray[i];
}

system("cls");

cout <<"----------------------"<< endl;
for (int i =0; i<=11; i++){
    cout << "Savings for the Month  "<< i+1 <<": ";
    cout << monthsarray[i] << endl;
    Sleep(100);
}
cout <<"----------------------"<< endl;

float ave = total/12;
float in2years= ave*24;
cout << "Total = "<<total<<endl;
cout << "Average = "<<ave<<endl;
cout << "In two years = "<<in2years<<endl;

getch();

/*


float intwoyears,ave;
 float sum, months[100];
 int size;
 string decision;
do{
    cout << "Enter size: ";
    cin >> size;

for(int i=0; i<size; i++){
    cout << "Enter amount for the month"<< i+1; ": ";
    cin >> months[i];
    sum =+ months[i] ;

    cout << endl;
}


 ave = sum/size;
 intwoyears = ave * 24;

getch();
system("cls");

cout << "Total = "<<sum<<endl;
cout << "Average = "<<ave<<endl;
cout << "In two years = "<<intwoyears<<endl<<endl;


cout << "Do you want to continue?";
cin >> decision;

}while(decision=="yes"||decision=="Yes");

*/
}