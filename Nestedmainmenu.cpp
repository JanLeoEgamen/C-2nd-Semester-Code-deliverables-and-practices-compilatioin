#include <iostream>
#include <conio.h>
#include <windows.h>
#include "mylib.h"

using namespace std;


//main menu 
void Mainmenu(){
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
void Mainmenu2(){
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

int main(){ 

char choice, ForChoice, WhileChoice, DoWhileChoice;
Account();
do{
    main:
    getch();
    system("cls");
    Mainmenu();
    gotoxy(31,15);
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
    Mainmenu2();
    gotoxy(31,16);
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

                default: system("cls");
                    cout << " Invalid entry!";
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
    Mainmenu2();
    gotoxy(31,16);
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

                default:system("cls");
                    cout << " Invalid entry!";
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
    Mainmenu2();
    gotoxy(31,16);
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
                default:system("cls");
                    cout << " Invalid entry!";
                    goto dowhilemain;
                break; 
            }
}while(DoWhileChoice<'G');
break;

case 'D':
exit(0);
break;

default:
gotoxy(34,16);
cout << "Invalid!";
goto main;
break;

}
    }while(choice<'D');
}