// This code is owned by Jan Leo Egamen from BSIT 1-1.
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
//function with no argument but no return value
void Display_All_Even(){
cout << "All Even numbers inputted in Array:"<<endl;
cout <<"----------------------"<<endl;
}
//function with argument but no return value
void Display_All_Even(int element[][100], int row, int col){
        cout <<endl<<"----------------------"<< endl;
        cout <<"All Even numbers: ";
        // For output of all Even
        for (int a = 0; a<row; a++){
            for (int b = 0; b<col; b++){
                if(element[a][b]%2==0){ 
                cout  << element[a][b] <<endl;
                }  
            }
            cout << endl;
        }
        cout<<"----------------------"<< endl;
    }

void Largest_Three(){
    cout << "Checker of the highest 3 inputted in Array:"<<endl;
    cout <<"----------------------"<<endl;
}
//function to output the largest three in array
void Largest_Three(int element[][100],int row, int col){
    int temp;
    // Sort array in descending order
    int largest[3] = {0, 0, 0}; // initialize with 0

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            // Check if the current value is greater than the smallest value in largest array
            if(element[i][j] > largest[0]) {
                largest[2] = largest[1];
                largest[1] = largest[0];
                largest[0] = element[i][j];
            }
            // Check if the current value is greater than the second smallest value in largest array
            else if(element[i][j] > largest[1]) {
                largest[2] = largest[1];
                largest[1] = element[i][j];
            }
            // Check if the current value is greater than the third smallest value in largest array
            else if(element[i][j] > largest[2]) {
                largest[2] = element[i][j];
            }
        }
    }
    cout << "The three largest numbers in the array are: ";
    for(int i = 0; i < 3; i++) {
        cout << largest[i] << " ";
    }
    cout << endl <<"----------------------"<<endl;
}

void TotalPosNeg(){
    cout << "Total of Positive and Negative Number"<<endl;
    cout <<"----------------------"<<endl;
}
//function to compute the total positive and negative in array
void TotalPosNeg(int element[][100],int row, int col){

    int totalNegative = 0, TotalPositive= 0;

        for (int a = 0; a<row; a++){
            for (int b = 0; b<col; b++){
                if(element[a][b]>0){
                TotalPositive += element[a][b];
                }
                else{
                totalNegative += element[a][b];
                }  
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
//function for counting the occurrence of a number in array 
void Count_int(int element[][100],int num, int row, int col){
int occ = 0;
        for (int a = 0; a<row; a++){
            for (int b = 0; b<col; b++){
                if(num==element[a][b]){
                    occ++;
                }
            }
        }
cout <<"---------------------"<<endl;

if(occ!=0){
cout  << "The number " << num << " occured " <<  occ << " times"<< endl;
}
else if(occ==0) {
cout << "The number did not "<<endl;
}
cout <<"---------------------"<<endl;

}


void Sum_Diagonal (int arr[][100], int row, int col)
{
    int pricipal  = 0;
    int secondary = 0;

    for (int c = 0; c < row; c++)
    {
        pricipal += arr[c][c];
        col--;
        secondary += arr[col][c];
    }
    /*  121
        121
        121
    */

    cout << "The sum of principal diagronal: " << pricipal << endl; 
    cout << "The sum of principal diagronal: " << secondary;
}

void Multiplication_Table(){
int array [10][10];

for (int a = 0; a<10; a++)
{

   for (int b = 0; b<10; b++)
   {
    array[a][b] = (a+1)*(b+1);
   } 

}

for (int a = 0; a<10; a++)
{

   for (int b = 0; b<10; b++)
   { 
    if (array[a][b]<10){
    cout << array[a][b] << "  ";}
    else{
    cout << array[a][b] << " ";
    }
   } 
 cout << endl;
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
    cout << "5 - Sum of Elements in Principal and Secondary Diagonals"<<endl;
    cout << "6 - Multiplication table"<<endl;
    cout << "7 - Exit"<<endl;
    cout << "Enter Choice: ";
    cin >> choice;
    system("cls");

    switch (choice)
    {
    case 1:
    int a1[100][100], row1, col1;
        Display_All_Even();
        cout << "Enter row size of array: ";
        cin >> row1;
        cout << "Enter column size of array: ";
        cin >> col1;

        //For inputing the value of an array
        for (int a = 0; a<row1; a++){
            for (int b = 0; b<col1; b++){
                cout << "Element [" << a << "]"<< " [" << b << "] : ";
                cin >> a1[a][b];  
            }
            cout << "-------------"<< endl;
        }

        Display_All_Even(a1, row1, col1);

        break;
    
    case 2:
        Largest_Three();
    int a2[100][100], row2, col2;
        cout << "Enter row size of array: ";
        cin >> row2;
        cout << "Enter column size of array: ";
        cin >> col2;

        //For inputing the value of an array
        for (int c = 0; c<row2; c++){
            for (int d = 0; d<col2; d++){
                cout << "Element [" << c << "]"<< " [" << d << "] : ";
                cin >> a2[c][d];  
            }
            cout << "-------------"<< endl;

        }
    
        Largest_Three(a2, row2, col2);
        break;
    
    case 3:
    int a3[100][100], row3, col3;
        TotalPosNeg();
        cout << "Enter row size of array: ";
        cin >> row3;
        cout << "Enter column size of array: ";
        cin >> col3;

        //For inputing the value of an array
    for (int e = 0; e<row2; e++){
            for (int f = 0; f<col2; f++){
                cout << "Element [" << e << "]"<< " [" << f << "] : ";
                cin >> a3[e][f];  
            }
            cout << "-------------"<< endl;

        }

        TotalPosNeg(a3, row3, col3);
        break;
    
    case 4:
    int a4[100][100], row4, col4, num;
    Count_int();
        cout << "Enter row size of array: ";
        cin >> row4;
        cout << "Enter column size of array: ";
        cin >> col4;      

        //For inputing the value of an array
    for (int g = 0; g<row2; g++){
            for (int h = 0; h<col2; h++){
                cout << "Element [" << g << "]"<< " [" << h << "] : ";
                cin >> a4[g][h];  
            }
            cout << "-------------"<< endl;
        }
    
    cout << endl<<"---------------------"<<endl;
    cout << "Enter  number: ";
    cin >> num;
    Count_int(a4, num, row4, col4);
        break;
    case 5:
        int a5[100][100], row5, col5;
        cout << "Enter row size of array: ";
        cin >> row5;
        cout << "Enter column size of array: ";
        cin >> col5;      

        //For inputing the value of an array
    for (int i = 0; i<row5; i++){
            for (int j = 0; j<col5; j++){
                cin >> a5[i][j];  
            }
            cout << endl;
        }
        Sum_Diagonal(a5, row5, col5);
        break;
    
    case 6:
        Multiplication_Table();
        break;

    case 7:
        exit(0);
        break;
    
    default:
        cout << "Invalid input, please try again...";
        goto retry;
        break;
    }
}while(choice<7);

return 0;
}

