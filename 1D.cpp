// This code is owned by Jan Leo Egamen from BSIT 1-1.
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
        // For output of all Even inputted by user in 1d array
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
//function to output the largest three in array
void Largest_Three(int arr[],int size){
    int temp;
    // Sort array in descending order
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];// bubble sort
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
//function to compute the total positive and negative in array
void TotalPosNeg(int num[], int size){

    int totalNegative = 0, TotalPositive= 0;

for (int i =0; i<size; i++){
    if(num[i]>0){
        TotalPositive += num[i];//for positive
    }
    else if(num[i]<0) 
    {totalNegative += num[i];//for negative
    }
}

cout << endl<< "All Positive numbers are: ";
for (int i=0; i<size; i++){

    if(num[i]>0){
        cout << num[i]<< " ";//output for positive
    }
}
cout << endl<<"---------------------"<<endl;
cout << "All Negative numbers are: ";
for (int i=0; i<size; i++){

    if(num[i]<0){
        cout << num[i]<< " ";//output for negative
    }
}
cout << endl<<"---------------------"<<endl;

cout  << "Total of Positive Numbers: "<< TotalPositive<<endl;//their total
cout  << "Total of Negative Numbers: "<< totalNegative<<endl;
}

void Count_int(){
    cout << "Occurence of the number inputted"<<endl;
    cout <<"----------------------"<<endl;
}
//function for counting the occurrence of a number in array 
void Count_int(int arr[], int size, int no){
int occ = 0;
for (int i=0; i<size; i++){
if(arr[i]==no){
    occ++; // if the element is equal to number(argument) inputted the var occ will increase by 1
}
}
cout <<"---------------------"<<endl;

if(occ!=0){
cout  << "The number " << no << " occured " <<  occ << endl; // outputing the total
}
else if(occ==0) {
cout << "The number did not "<<endl;// if the occ is equal to 0 

}
}

void Triangle(int row){
    int a = 1;
    char alph = 'A';
    
    while(a<=row){
        int b = 1;
    while(b<=a){
        cout <<alph << " ";
        b++;
    }
        cout << endl;
        a++;
        alph++;
}
}

int Most_Occured (int arr[], int size)
{
    int occ = 0;
    int most  = arr[0];

    for (int c = 0; c < size; c++)
    {
        int count = 1;

        for (int a = c + 1; a < size; a++)
        {
            if (arr[c] == arr[a])
            {
                count++;
            }
        }

        if (count > occ)
        {
            occ = count;
            most   = arr[c];
        }
    }

    return most;
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
    cout << "5 - Triangle"<<endl;
    cout << "6 - Most Occured"<<endl;
    cout << "7 - Exit"<<endl;
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
        //For inputing the value of an array
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
        //For inputing the value of an array
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
        //For inputing the value of an array
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
        int z;
        cout << "Enter row of array: ";
        cin >> z;
        Triangle(z);

        break;

    case 6:
int l[100], sizee;
    cout << "Enter size of array: ";
    cin >> sizee;
        //For inputing the value of an array
    for(int x = 0; x < sizee; x++) {
        cout << "Enter value for element " << x+1 << ": ";
        cin >> l[x];
    }
    cout << endl<<"---------------------"<<endl;
    cout << "The most occured number in the array is number " << Most_Occured(l,sizee);

        break;

    case 7:
        exit(0);
        break;
    
    default:
        cout << "Invalid input, please try again...";//for invalid input
        goto retry;
        break;
    }
}while(choice<7);

return 0;

}