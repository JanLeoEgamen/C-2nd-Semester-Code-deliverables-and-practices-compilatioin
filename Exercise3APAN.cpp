#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std; 

int main(){
int num[100], size, totalNegative = 0, TotalPositive= 0;

cout << "Enter size: ";
cin>> size;

for (int i =0; i<size; i++){

    cout << "Enter element "<< i+1 <<": ";
    cin >> num[i];
    if(num[i]>0){
        TotalPositive += num[i];
    }
    else if(num[i]<0) 
    {totalNegative += num[i];
    }
}

cout << endl<< "All Positive numbers are: ";
for (int i=0; i<size; i++){

    if(num[i]>0){
        cout << num[i]<< " ";
    }
}
cout << endl<<"---------------------"<<endl;
cout << endl<< "All Negative numbers are: ";
for (int i=0; i<size; i++){

    if(num[i]<0){
        cout << num[i]<< " ";
    }
}
cout << endl<<"---------------------"<<endl;

cout  << "Total of Positive Numbers: "<< TotalPositive<<endl;
cout  << "Total of Negative Numbers: "<< totalNegative<<endl;

getch();
}