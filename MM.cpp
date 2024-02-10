#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <string>
#include "mylib.h"
using namespace std;


// the gotoxy and box function and all the functions in my sequence, selection and loops are located in mylib.h

void sequencemenu(){// eto yung welcoming text sa main menu sa sequence, separated para mas organized tignan
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
void sequence(){// lahat ng function dito ay nasa library
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

void selectionmenu(){// eto yung welcoming text sa main menu sa selection, separated para mas organized tignan
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

void selection(){// lahat ng function dito ay nasa library
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

void loopsmenu(){// eto yung welcoming text sa main menu for loops, separated para mas organized tignan
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

void loops(){// lahat ng function dito ay nasa library
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


void Nestedloops(){// lahat ng function dito ay nasa library
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


int main(){
char mchoice, seqchoice, selchoice, lchoice;
    Account();// for login or sign up

    do{
        main:
        getch();
        system("cls");
        Box(1,24,1,79);
        Box(5,20,5,75);
        gotoxy(34,9);
    cout << "Main Menu"<< endl;
    gotoxy(32,10);
    cout << "A - Sequence"<< endl;
    gotoxy(32,11);
    cout << "B - Selection"<< endl;
    gotoxy(32,12);
    cout << "C - Loops"<< endl;
    gotoxy(32,13);
    cout << "D -  Nested loops"<< endl;
    gotoxy(32,14);
    cout << "E -  Exit"<< endl;
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

    case 'E':
             exit(0);

    default:
            gotoxy(25,22);
            cout << "Invalid, Please Try again.";
            goto main;
    break;
}
    

    }while(mchoice<'E');



}