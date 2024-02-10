#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
//f1
void Display_All_Even(){
cout << "All Even numbers inputted in Array:"<<endl;
cout <<"----------------------"<<endl;
}
//2
void Display_All_Even(int element[],int size){
        cout <<endl<<"----------------------"<< endl;
        cout <<"All Even numbers: ";
        // For output of all Even
        for (int i =0; i<size; i++){
            if (element[i]%2==0){

            cout << element[i] << " ";
            }
        }   
        cout <<endl<<"----------------------"<< endl;
    }

void Largest_Three(){
    cout << "Checker of the highest 3 inputted in Array:"<<endl;
    cout <<"----------------------"<<endl;
}
void Largest_Three(int arr[],int size){
    int temp;
    // Sort array in descending order
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // Print largest 3 elements
    cout << "The largest 3 elements are: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout <<"----------------------"<<endl;

}

void TotalPosNeg(){
    cout << "Total of Positive and Negative Number"<<endl;
    cout <<"----------------------"<<endl;
}
void TotalPosNeg(int num[], int size){

    int totalNegative = 0, TotalPositive= 0;

for (int i =0; i<size; i++){
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
cout << "All Negative numbers are: ";
for (int i=0; i<size; i++){

    if(num[i]<0){
        cout << num[i]<< " ";
    }
}
cout << endl<<"---------------------"<<endl;

cout  << "Total of Positive Numbers: "<< TotalPositive<<endl;
cout  << "Total of Negative Numbers: "<< totalNegative<<endl;
}

void Count_int(){
    cout << "Occurence of the number inputted"<<endl;
    cout <<"----------------------"<<endl;
}
void Count_int(int arr[], int size, int no){
int occ = 0;
for (int i=0; i<size; i++){
if(arr[i]==no){
    occ++;
}
}
cout <<"---------------------"<<endl;

if(occ!=0){
cout  << "The number " << no << " occured " <<  occ << endl;
}
else if(occ==0) {
cout << "The number did not "<<endl;

}
}

int main (){
    int choice;
    do{ 
        retry:
        getch();
        system("cls");
    cout << "Arrays"<<endl;
    cout << "1 - Display All Even "<<endl;
    cout << "2 - Largest 3"<<endl;
    cout << "3 - Total of Positive and Negative"<<endl;
    cout << "4 - Counting the numbers"<<endl;
    cout << "5 - Exit"<<endl;
    cout << "Enter Choice: ";
    cin >> choice;
    system("cls");

    switch (choice)
    {
    case 1:
    int a[100], size1;
        Display_All_Even();
        cout << "Enter size of array: ";
        cin >> size1;
                //For inputing the value of an array
        for (int i =0; i<size1; i++){
            cout << "Enter value for element "<< i+1 <<": ";
            cin >> a[i];
        }

        Display_All_Even(a, size1);

        break;
    
    case 2:
        Largest_Three();
        int b[100],size2;
        cout << "Enter size of array: ";
        cin >> size2;
        // Input array elements using for loop
    for(int i = 0; i < size2; i++) {
        cout << "Enter value for element " << i+1 << ": ";
        cin >> b[i];
    }
        Largest_Three(b, size2);
        break;
    
    case 3:
        int size3, c[100];
        TotalPosNeg();
        cout << "Enter size of array: ";
        cin>> size3;

    for (int i =0; i<size3; i++){
        cout << "Enter a value for element "<< i+1 <<": ";
        cin >> c[i];
    }

        TotalPosNeg(c,size3);
        break;
    
    case 4:
    int d[100], size4, no;
    Count_int();
    cout << "Enter size of array: ";
    cin >> size4;
        // Input array elements using for loop
    for(int i = 0; i < size4; i++) {
        cout << "Enter value for element " << i+1 << ": ";
        cin >> d[i];
    }
    cout << endl<<"---------------------"<<endl;
    cout << "Enter  number: ";
    cin >> no;
    Count_int(d,size4,no);
        break;
    case 5:
        exit(0);
        break;
    
    default:
        cout << "Invalid input, please try again...";
        goto retry;
        break;
    }
}while(choice<5);



}