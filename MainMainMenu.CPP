#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <string>
#include "mylib.h"
using namespace std;


// the gotoxy and box function and all the functions in my sequence, selection and loops are located in mylib.h
    
void sequencemenu(){
          gotoxy(31,6);
        cout << "Sequence" << endl;
            gotoxy(23,7);
        cout << "A - Total average of four numbers"<< endl;
            gotoxy(23,8);
        cout << "B - Quotient and remainder"<< endl;
            gotoxy(23,9);
        cout << "C - Roots of quadratic equation         "<< endl;
            gotoxy(23,10);
        cout << "D - Square and cube of a number         "<< endl;
            gotoxy(23,11);
        cout << "E - Area and perimeter of the rectangle "<< endl;
            gotoxy(23,12);
        cout << "F - Swapping the value of two variables "<< endl;
            gotoxy(23,13);
        cout << "G - Gross and Net Pay of the employee   "<< endl;
            gotoxy(23,14);
        cout << "H - S(+), D(-), P(*) and Q(/)"<< endl;
            gotoxy(23,15);
        cout << "I - Area and circumference "<< endl;
            gotoxy(23,16);
        cout << "J - Celsius to fahrenheit"<< endl;
            gotoxy(23,17);
        cout << "K - Total sales"<< endl;
            gotoxy(23,18);
        cout << "L - Change 12"<< endl;
            gotoxy(23,19);
        cout << "M - Exit"<< endl;
}
void sequence(){
    char seqchoice;
do{         retry:
            getch();
            system("cls");
            Box(1,24,1,79);
            Box(5,20,5,75);
            sequencemenu();
            gotoxy(29,22);
        cout << "Enter your choices:";
        cin >> seqchoice;

        switch(seqchoice){
        case 'A': system("cls");
        total4();
        break;

        case 'B': system("cls");
        Qr();
        int dvd, dvs;
        cout << "Input dividend:";
        cin >> dvd;
        cout << "Input divisor:";
        cin >> dvs;
        Qr2(dvd,dvs);// With arguments and no return value
        break;

        case 'C': system("cls");
        SquareRoot();
        break;

        case 'D': system("cls");
        SquareCube();
        int n;
        cout << "Input a number: ";
        cin >> n;
        cout << "square: " << SquareCube2(n) << endl;// with arguument and return value
        cout << "cube: "  << SquareCube3(n) << endl;// with arguument and return value
        cout << "----------------------------"<<endl;
        break;

        case 'E': system("cls");
        //category 4 
        AreaPerimeterRectangle();
        cout << "Input length: ";
        float l, w;
        cin >> l;
        cout << "Input width: ";
        cin >> w;
        cout << "Area: " << AreaPerimeterRectangle2(l,w) << endl; // with argument and returns a value
        cout << "Perimeter: " << AreaPerimeterRectangle3(l,w)<< endl; // with argument and returns a value
        cout << "----------------------------"<<endl;
        break;

        case 'F': system("cls");
        swap();// category 1
        break;

        case 'G': system("cls");
        GpNp();// category 1
        break;

        case 'H': system("cls");
        sdpq();// category 1
        break;

        case 'I': system("cls");
        AreaCricumCircle();
        //category 2
        float d;
        cout << "Input diameter: ";
        cin >> d;
        cout << "The area of the circle is: " << AreaCricumCircle2(d) << endl; // with argument and return a value
        cout << "The circumference of the circle is: " << AreaCricumCircle3(d) << endl;// with argument and return a value
        cout << "----------------------------"<<endl;
        break;

        //category 3
        case 'J': system("cls");
        celfah();
        cout << celfah2()<< endl; // no argument and return a value
        break;

        //category 3
        case 'K': system("cls");
        totalS();
        cout << totalS2() << endl; // no argument and return a value
        break;

        //category 3
        case 'L': system("cls");
        Change();
        cout << Change2() << endl; // no argument and return a value
        break; 

        case 'M':
        break;

        default:
        gotoxy(25,22);
        cout << "Invalid, Please Try again.";
        goto retry;
        break;
        
        }
    }while(seqchoice<'M');

 

}

void selectionmenu(){
    gotoxy(31,7);
cout << "Selection" << endl;
    gotoxy(23,8);
cout << "A Positive, Negative or Neutral" << endl;
    gotoxy(23,9);
cout <<"B Odd or Even" << endl;
    gotoxy(23,10);
cout <<"C largest among 3 numbers" << endl;
    gotoxy(23,11);
cout <<"D largest among 2 numbers" << endl;
    gotoxy(23,12);
cout <<"E Prime Number or not " << endl;
    gotoxy(23,13);
cout <<"F Average Computer " << endl;
    gotoxy(23,14);
cout <<"G Commission of Salesman(Revised) " << endl;
    gotoxy(23,15);
cout <<"H Vowel or Consonant" << endl;
    gotoxy(23,16);
cout <<"I PUP Average computer" << endl;
    gotoxy(23,17);
cout <<"J Exit" << endl;
}

void selection(){
    char selchoice;
do{ retry:
    getch();
    system("cls");
    Box(1,24,1,79);
    Box(5,20,5,75);
    selectionmenu();
    gotoxy(29,22);
cout <<"Enter Choice: ";
cin >> selchoice;

switch (selchoice){

    case 'A': system("cls");
    PoNegaNeu();
    int w;
    cin >> w;
    PoNegaNeu2(w);//with argument and no return value
    break;

    case 'B': system("cls");
    OddEven();
    cout << OddEven2() << endl << endl;// no argument and and returns a value
    break;

    case 'C': system("cls");
    num3();
    int h,i,j;
    cout << "Enter first number: ";
    cin >> h;
    cout << "Enter second number: ";
    cin >> i;
    cout << "Enter third number: ";
    cin >> j;
    cout << "The largest is " << num33(h,i,j) << endl<< endl;//with argument and returns a value
    break;

    case 'D': system("cls");
    num2();
    int q, r;
    cout << "Enter first number: ";
    cin >>q;
    cout << "Enter second number: ";
    cin >>r;
    cout << "The largest is " << num22(q,r) << endl<< endl; // with argument and return a value
    break;

    case 'E': system("cls");
    Prime();
    break;

    case 'F': system("cls");
    Ave();
    double a,b,c;
    cout << "Input prelim: ";
    cin >> a;
    cout << "Input midterm: ";
    cin >> b;
    cout << "Input finals: ";
    cin >> c;
    Ave2(a,b,c); //with argument and no return value
    break;

    case 'G': system("cls");
    Com();
    int x,y;
    cout << "Enter unit sold: ";
    cin >> x;
    cout << "Enter unit price: ";
    cin >> y;
    cout << "Total sales:" << Com2(x,y) << endl;    
    cout << "Commission:" << Com2(x,y) << endl << endl;//with argument and returns a value
    break;

    case 'H': system("cls");
    VoCo();
    cout<< VoCo2() << endl << endl; // no argument and returns a value 

    break;

    case 'I': system("cls");
    PUP();
    case 'J':
    break;

    default:
    gotoxy(25,22);
    cout << "Invalid, Please Try again.";
    goto retry;
}
}while(selchoice<'J');
}

void loopsmenu(){
    gotoxy(31,7);
cout  << "Loops" << endl;
    gotoxy(23,8);
cout  << "A - Reverse of a number" << endl;
    gotoxy(23,9);
cout  << "B - Sum of all even numbers" << endl;
    gotoxy(23,10);
cout  << "C - Sum of all the squared even numbers" << endl;
    gotoxy(23,11);
cout  << "D - All Even numbers from 1 to inputted number " << endl;
    gotoxy(23,12);
cout  << "E - Display numbers from 1-10" << endl;
    gotoxy(23,13);
cout  << "F - Display A - Z" << endl;
    gotoxy(23,14);
cout  << "G - Palindrome word checker" << endl;
    gotoxy(23,15);
cout << "H - Factorial of a number" << endl;
    gotoxy(23,16);
cout << "I - Decimal to Binary Conversion" << endl;
    gotoxy(23,17);
cout  << "J - Fibonacci sequence" << endl;
    gotoxy(23,18);
cout  << "K - Exit" << endl;
}

void loops(){
    char lchoice;
   do{
    retry:
    getch();
    system("cls");
    Box(1,24,1,79);
    Box(5,20,5,75);
    loopsmenu();
    gotoxy(29,29);
cout << "Enter Choice: ";
cin >> lchoice;

switch(lchoice){

case 'A': system("cls");
Reverse();
int r;
cout << "Enter number: ";
cin >> r;
cout << "Reverse: "<< Reverse2(r) << endl << endl;// with argument and ruturn a value
break;

case 'B': system("cls");
SumofEven();
cout << SumofEven2() << endl << endl; // no argument and ruturn a value
break;

case 'C': system("cls");
SumofEvenSquare();
break;

case 'D': system("cls");
SumofEventoInput();
int d;
cout << "Enter a number: ";
cin >> d;
cout << "Sum of all even numbers: " << SumofEventoInput2(d) << endl << endl; // with argument and return a value
break;

case 'E': system("cls");
Onetoten(); //no argument and no return value
break;

case 'F': system("cls");
AtoZ();//no argument and no return value
break;

case 'G': system("cls");
Palindrome();
cout << Palindrome2()<< endl << endl;//no argument and returns value
break;

case 'H': system("cls");
    Factorial();
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Factorial: " << Factorial2(a) << endl << endl; // return a value and with argument
break;

case 'I': system("cls");
    Binary();
    int bn;
    cout << "Enter Decimal: ";
    cin >> bn;
    Binary2(bn); //no argument and no return value
break;

case 'J': system("cls");
Fibonacci();
int g;
cout << "Enter a number: ";
cin >> g;
Fibonacci2(g); // with argument and no return value
break;

case 'K':
break;

default:
    gotoxy(25,22);
    cout << "Invalid, Please Try again.";
    goto retry;
    break;
    }
}while(lchoice<'K');
}


//main menu for nested loops
void nestedloopsmenu(){
    Box(1,24,1,79);
    Box(5,20,5,75);
    gotoxy(34,10);
    cout << "Main Menu" << endl;
    gotoxy(31,11);
    cout << "A - Nested For" << endl;
    gotoxy(31,12);
    cout << "B - Nested While" << endl;
    gotoxy(31,13);
    cout << "C - Nested Do While" << endl;
    gotoxy(31,14);
    cout << "D - Exit" << endl;
}

// for sub menu para mapaiksi yung sa switch at isang calling nalang sa kanila
void nestedloopsmenu2(){
    Box(1,24,1,79);
    Box(5,20,5,75);
    gotoxy(23,9);
    cout << "A - Triangle" << endl;
    gotoxy(23,10);
    cout << "B - Inverted Triangle" << endl;
    gotoxy(23,11);
    cout << "C - Number(Same per line)" << endl;
    gotoxy(23,12);
    cout << "D - Number(not same per line)" << endl;
    gotoxy(23,13);
    cout << "E - Inverted Number(Same per line)" << endl;
    gotoxy(23,14);
    cout << "F - Inverted Number(not same per line)" << endl;
    gotoxy(23,15);
    cout << "G - Exit" << endl;
}


void Nestedloops(){
    char choice, ForChoice, WhileChoice, DoWhileChoice;
do{
main:
getch();
system("cls");
nestedloopsmenu();
gotoxy(29,22);
cout << "Enter Choice: ";
cin >> choice;


switch (choice){    // switch para sa Main choice 
case 'A':
do{
    formain: // label para bumalik sa enter choice ng for loops
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "For Loops" << endl;
    nestedloopsmenu2();
    gotoxy(29,22);
    cout << "Enter Choice: ";
    cin >> ForChoice;

            switch (ForChoice) // switch para sa for loops
            {
                case 'A': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangle(r);}
                break;  

                case 'B': system("cls");    // Inverted Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInverted(r);}
                break;

                case 'C': system("cls");    // Triangle na numbers magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangleNumber(r);}
                break;

                case 'D': system("cls");    // Triangle na numbers na hindi magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangleNumber2(r);}
                break;

                case 'E': system("cls");    // Inverted Triangle na numbers magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInvertedNumber(r);}
                
                break;
                case 'F': system("cls");    // Inverted Triangle na numbers na hindi magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInvertedNumber2(r);}
                
                break;
                case 'G':
                goto main;
                
                break;

                default:
                    gotoxy(25,22);
                    cout << "Invalid, Please Try again.";
                goto formain;
                break;
                
            }
         }while(ForChoice<'G');
break;

case 'B':system("cls"); 
do{
    whilemain: // label para bumalik sa enter choice ng while loops
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "While Loops" << endl;
    nestedloopsmenu2();
    gotoxy(29,22);
    cout << "Enter Choice: ";
    cin >> WhileChoice;

            switch (WhileChoice){
                case 'A': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangle(r);}
                break;

                case 'B': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInverted(r);}
                break;

                case 'C': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangleNumber(r);}
                break;
                
                case 'D': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangleNumber2(r);}
                break;

                case 'E': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInvertedNumber(r);}
                break;

                case 'F': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInvertedNumber2(r);}
                break;

                case 'G': 
                goto main;
                break;

                default:
                gotoxy(25,22);
                cout << "Invalid, Please Try again.";
                    goto whilemain;
                break;
            }
}while(WhileChoice<'G');
break;

case 'C':
do{
    dowhilemain:
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "Do While Loops" << endl;
    nestedloopsmenu2();
    gotoxy(29,22);
    cout << "Enter Choice: ";
    cin >> DoWhileChoice;

            switch (DoWhileChoice){
                case 'A': system("cls"); 
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangle(r);}
                break;

                case 'B': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInverted(r);}
                break;
                
                case 'C':system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangleNumber(r);}
                break;
                
                case 'D': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangleNumber2(r);}
                break;
                
                case 'E': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInvertedNumber(r);}
                break;

                case 'F':system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInvertedNumber2(r);}
                break;

                case 'G':
                goto main;
                break;
                default:
                    gotoxy(25,22);
                    cout << "Invalid, Please Try again.";
                    goto dowhilemain;
                break; 
            }
}while(DoWhileChoice<'G');
break;

case 'D':
break;

default:
gotoxy(25,22);
cout << "Invalid, Please Try again.";
goto main;
break;
}
    }while(choice<'D');
}

void array1D(){
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

}

void array2d(){
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
        Display_All_Even2d();
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

        Display_All_Even2d(a1, row1, col1);

        break;
    
    case 2:
        Largest_Three2d();
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
    
        Largest_Three2d(a2, row2, col2);
        break;
    
    case 3:
    int a3[100][100], row3, col3;
        TotalPosNeg2d();
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

        TotalPosNeg2d(a3, row3, col3);
        break;
    
    case 4:
    int a4[100][100], row4, col4, num;
    Count_int2d();
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
    Count_int2d(a4, num, row4, col4);
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
        Sum_Diagonal2d(a5, row5, col5);
        break;
    
    case 6:
        Multiplication_Table2d();
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

}

void pointer(){
        int num1, num2;
    int choice;
    int arr[100];
    int arrSize;
    char str[100];
    char str1[100];
    char str2[100];
    char result[200];

    while (true) {
        cout << "Pointers" << endl;
        cout << "1. Swap Numbers" << endl;
        cout << "2. Add Numbers" << endl;
        cout << "3. Sum of Array Elements" << endl;
        cout << "4. Length of String" << endl;
        cout << "5. Copy String" << endl;
        cout << "6. Concatenate Strings" << endl;
        cout << "7. Reverse Array" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:system("cls");
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                swapNumbers(&num1, &num2);
                cout << "Swapped numbers: " << num1 << " " << num2 << endl;
                getch();
                break;
            case 2:system("cls");
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                addNumbers(&num1, &num2);
                getch();
                break;
            case 3:system("cls");
                cout << "Enter the size of the array: ";
                cin >> arrSize;
                cout << "Enter array elements: ";
                for (int i = 0; i < arrSize; i++) {
                    cin >> arr[i];
                }
                cout << "Sum of array elements: " << getArraySum(arr, arrSize) << endl;
                getch();
                break;
            case 4:system("cls");
                cout << "Enter a string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str, sizeof(str));
                cout << "Length of the string: " << getStringLength(str) << endl;
                getch();
                break;
            case 5:system("cls");
                cout << "Enter a string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str1, sizeof(str1));
                copyString(str1, str2);
                cout << "Copied string: " << str2 << endl;
                getch();
                break;
            case 6:system("cls");
                cout << "Enter first string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str1, sizeof(str1));
                cout << "Enter second string: ";
                cin.getline(str2, sizeof(str2));
                concatenateStrings(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                getch();
                break;
            case 7:system("cls");
                cout << "Enter the size of the array: ";
                cin >> arrSize;
                cout << "Enter array elements: ";
                for (int i = 0; i < arrSize; i++) {
                    cin >> arr[i];
                }
                reverseArray(arr, arrSize);
                cout << "Array in reverse order: ";
                for (int i = 0; i < arrSize; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                getch();
                break;
            case 8:system("cls");
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}

void structmenu(){
     int choice;
    while (true) {
        cout << "----- MAIN MENU -----" << endl;
        cout << "1. Store and print student details" << endl;
        cout << "2. Store and print details of 5 students (print details of student with roll no. 2)" << endl;
        cout << "3. Store and print details of 15 students" << endl;
        cout << "4. Add two distances in inch-feet" << endl;
        cout << "5. Enter marks of 5 students and calculate percentage" << endl;
        cout << "6. Add, subtract and multiply two complex numbers" << endl;
        cout << "7. Store and perform operations on student information" << endl;
        cout << "8. Store and perform operations on customer information" << endl;
        cout << "0. Exit program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
            case 1: {
                // Program to store and print roll no., name, age, and marks of a student
                StudentInfo student;

                cout << "Enter roll no.: ";
                cin >> student.rollNo;
                cout << "Enter name: ";
                cin.ignore();
                getline(cin, student.name);
                cout << "Enter age: ";
                cin >> student.age;
                cout << "Enter marks: ";
                cin >> student.marks;

                cout << "Roll No.: " << student.rollNo << endl;
                cout << "Name: " << student.name << endl;
                cout << "Age: " << student.age << endl;
                cout << "Marks: " << student.marks << endl;

                break;
            }
            case 2: {
                // Program to store roll no., name, and age of 5 students and print details of student with roll no. 2
                const int numStudents = 5;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << endl;
                }

                cout << "Details of student with roll no. 2:" << endl;
                cout << "Roll No.: " << students[1].rollNo << endl;
                cout << "Name: " << students[1].name << endl;
                cout << "Age: " << students[1].age << endl;

                break;
            }
            case 3: {
                // Program to store and print roll no., name, age, address, and marks of 15 students
                const int numStudents = 15;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, students[i].address);
                    cout << "Marks: ";
                    cin >> students[i].marks;
                    cout << endl;
                }

                cout << "Details of all students:" << endl;
                for (int i = 0; i < numStudents; i++) {
                    cout << "Roll No.: " << students[i].rollNo << endl;
                    cout << "Name: " << students[i].name << endl;
                    cout << "Age: " << students[i].age << endl;
                    cout << "Address: " << students[i].address << endl;
                    cout << "Marks: " << students[i].marks << endl;
                    cout << endl;
                }

                break;
            }
            case 4: {
                // Program to add two distances in inch-feet
                Distance distance1, distance2, sum;

                cout << "Enter the first distance:" << endl;
                cout << "Feet: ";
                cin >> distance1.feet;
                cout << "Inch: ";
                cin >> distance1.inch;

                cout << "Enter the second distance:" << endl;
                cout << "Feet: ";
                cin >> distance2.feet;
                cout << "Inch: ";
                cin >> distance2.inch;

                sum.feet = distance1.feet + distance2.feet;
                sum.inch = distance1.inch + distance2.inch;

                if (sum.inch >= 12.0) {
                    sum.feet += 1;
                    sum.inch -= 12.0;
                }

                cout << "Sum of distances: " << sum.feet << " feet " << sum.inch << " inch" << endl;

                break;
            }
            case 5: {
                // Program to enter marks of 5 students and calculate percentage
                const int numStudents = 5;
                Marks studentMarks[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> studentMarks[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, studentMarks[i].name);
                    cout << "Chemistry Marks (out of 100): ";
                    cin >> studentMarks[i].chemMarks;
                    cout << "Mathematics Marks (out of 100): ";
                    cin >> studentMarks[i].mathsMarks;
                    cout << "Physics Marks (out of 100): ";
                    cin >> studentMarks[i].phyMarks;
                    cout << endl;
                }

                cout << "Percentage of each student:" << endl;
                for (int i = 0; i < numStudents; i++) {
                    float totalMarks = studentMarks[i].chemMarks + studentMarks[i].mathsMarks + studentMarks[i].phyMarks;
                    float percentage = (totalMarks / (3 * 100)) * 100;

                    cout << "Roll No.: " << studentMarks[i].rollNo << endl;
                    cout << "Name: " << studentMarks[i].name << endl;
                    cout << "Percentage: " << percentage << "%" << endl;
                    cout << endl;
                }

                break;
            }
            case 6: {
                // Program to add, subtract, and multiply two complex numbers
                Complex num1, num2, sum, diff, product;

                cout << "Enter the first complex number:" << endl;
                cout << "Real part: ";
                cin >> num1.real;
                cout << "Imaginary part: ";
                cin >> num1.imag;

                cout << "Enter the second complex number:" << endl;
                cout << "Real part: ";
                cin >> num2.real;
                cout << "Imaginary part: ";
                cin >> num2.imag;

                sum.real = num1.real + num2.real;
                sum.imag = num1.imag + num2.imag;

                diff.real = num1.real - num2.real;
                diff.imag = num1.imag - num2.imag;

                product.real = num1.real * num2.real - num1.imag * num2.imag;
                product.imag = num1.real * num2.imag + num1.imag * num2.real;

                cout << "Sum: " << sum.real << " + " << sum.imag << "i" << endl;
                cout << "Difference: " << diff.real << " + " << diff.imag << "i" << endl;
                cout << "Product: " << product.real << " + " << product.imag << "i" << endl;

                break;
            }
            case 7: {
                // Program to store and perform operations on student information
                const int numStudents = 10;
                StudentInfo students[numStudents];

                for (int i = 0; i < numStudents; i++) {
                    cout << "Enter details for student " << i + 1 << ":" << endl;
                    cout << "Roll No.: ";
                    cin >> students[i].rollNo;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, students[i].name);
                    cout << "Age: ";
                    cin >> students[i].age;
                    cout << "Address: ";
                    cin.ignore();
                    getline(cin, students[i].address);
                    cout << endl;
                }

                int option;
                cout << "1. Print names of all students with age 14" << endl;
                cout << "2. Print names of all students with even roll number" << endl;
                cout << "3. Display details of a student by roll number" << endl;
                cout << "Enter your option: ";
                cin >> option;

                switch (option) {
                    case 1:
                        printStudentNamesWithAge14(students, numStudents);
                        break;
                    case 2:
                        printStudentNamesWithEvenRollNo(students, numStudents);
                        break;
                    case 3: {
                        int rollNo;
                        cout << "Enter roll number: ";
                        cin >> rollNo;
                        displayStudentDetails(students, numStudents, rollNo);
                        break;
                    }
                    default:
                        cout << "Invalid option." << endl;
                }

                break;
            }
            case 8: {
                // Program to store and perform operations on customer information
                const int numCustomers = 10;
                Customer customers[numCustomers];

                for (int i = 0; i < numCustomers; i++) {
                    cout << "Enter details for customer " << i + 1 << ":" << endl;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, customers[i].name);
                    cout << "Account Number: ";
                    cin >> customers[i].accountNumber;
                    cout << "Balance: $";
                    cin >> customers[i].balance;
                    cout << endl;
                }

                int option;
                cout << "1. Print names of customers with balance less than $200" << endl;
                cout << "2. Add $100 to balance of customers with balance more than $1000" << endl;
                cout << "Enter your option: ";
                cin >> option;

                switch (option) {
                    case 1:
                        printCustomerNamesWithBalanceLessThan200(customers, numCustomers);
                        break;
                    case 2:
                        incrementBalanceOfCustomers(customers, numCustomers);
                        break;
                    default:
                        cout << "Invalid option." << endl;
                }

                break;
            }
           
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }
}

void structmenu2(){
    const int maxEmployees = 10;
    Employee employees[maxEmployees];
    int numEmployees = 0;

    const int maxBooks = 100;
    Book library[maxBooks];
    int numBooks = 0;

    Date currentDate;
    cout << "Enter the current date:" << endl;
    cout << "Day: ";
    cin >> currentDate.day;
    cout << "Month: ";
    cin >> currentDate.month;
    cout << "Year: ";
    cin >> currentDate.year;

    int choice;
    do {
        cout << "=== Main Menu ===" << endl;
        cout << "1. Increase Employee Salaries" << endl;
        cout << "2. Display Employees' Final Salaries" << endl;
        cout << "3. Add a Book to the Library" << endl;
        cout << "4. Display Books by Author" << endl;
        cout << "5. Display Number of Books by Title" << endl;
        cout << "6. Display Total Number of Books in the Library" << endl;
        cout << "7. Issue a Book" << endl;
        cout << "8. Add Days to Current Date" << endl;
        cout << "9. Display Current Date" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                for (int i = 0; i < numEmployees; i++) {
                    cout << "Enter the details for Employee " << i + 1 << ":" << endl;
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, employees[i].name);
                    cout << "Salary: $";
                    cin >> employees[i].salary;
                    cout << "Hours Worked per Day: ";
                    cin >> employees[i].hoursWorked;
                    increaseSalary(employees[i]);
                    cout << endl;
                }
                break;
            }
            case 2:
                displayEmployees(employees, numEmployees);
                break;
            case 3:
                addBook(library, numBooks);
                break;
            case 4:
                displayBooksByAuthor(library, numBooks);
                break;
            case 5:
                displayNumberOfBooksByTitle(library, numBooks);
                break;
            case 6:
                displayTotalNumberOfBooks(numBooks);
                break;
            case 7:
                issueBook(library, numBooks);
                break;
            case 8: {
                int daysToAdd;
                cout << "Enter the number of days to add: ";
                cin >> daysToAdd;
                addDaysToDate(currentDate, daysToAdd);
                break;
            }
            case 9:
                displayDate(currentDate);
                break;
            case 0:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 0);

}

int main(){
char mchoice, seqchoice, selchoice, lchoice;
    Account();

    do{
        main:
        getch();
        system("cls");
        Box(1,24,1,79);
        Box(5,20,5,75);
        gotoxy(34,9);
    cout << "Main Menu"<< endl;
    gotoxy(32,8);
    cout << "A - Sequence"<< endl;
    gotoxy(32,9);
    cout << "B - Selection"<< endl;
    gotoxy(32,10);
    cout << "C - Loops"<< endl;
    gotoxy(32,11);
    cout << "D -  Nested loops"<< endl;
    gotoxy(32,12);
    cout << "E -  1D Array"<< endl;
    gotoxy(32,13);
    cout << "F -  2D Array"<< endl;
    gotoxy(32,14);
    cout << "G -  Pointers"<< endl;
    gotoxy(32,15);
    cout << "H -  Struct 1"<< endl;
    gotoxy(32,16);
    cout << "I -  Struct 2"<< endl;
    gotoxy(32,17);
    cout << "J -  Exit"<< endl;
    gotoxy(29,22);
    cout << "Enter choice: ";
    cin >> mchoice;

switch(mchoice){

    case 'A':system("cls");
             sequence();
    
    break;

    case 'B':system("cls");
            selection();
    break;  

    case 'C':system("cls");
             loops();
    break;

    case 'D':system("cls");
             Nestedloops();
    break;

    case 'E':system("cls");
            array1D();
    break;
    case 'F':system("cls");
            array2d();
    break;

    case 'G':system("cls");
        pointer();
    break;

    case 'H':system("cls");
        structmenu();
    break;    
    
    case 'I':system("cls");
    structmenu2();
    break;
    case 'J':
             exit(0);
    break;

    default:
            gotoxy(25,22);
            cout << "Invalid, Please Try again.";
            goto main;
    break;
}
    

    }while(mchoice<'J');



}