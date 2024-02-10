#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
    #define gecilie cout
using namespace std;



void GCDLCM()
{

    system("cls");
    int i, n1, n2, j, hcf = 1, lcm, gcd;
    gecilie << "GCD and LCM of two inputted numbers:" << endl;
    gecilie << "Enter the first number: ";
    cin >> n1;
    gecilie << "Enter the second number: ";
    cin >> n2;

    for (int i = 1; i <= n1 && i <= n2; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i;
        }
    }
    gecilie << "GCD: " << gcd << endl;

    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    lcm = (n1 * n2) / hcf;
    gecilie << "LCM:" << lcm << endl;
}

void quotientandremainder(int* n1, int* n2)
{
int q, r;

        q = *n1 / *n2;
        r = *n1 % *n2;
                gecilie << "Quotient: " << q << endl;
                gecilie << "Remainder: " << r ;
getch();
}

void studentinfo()
{

struct student
{
float prelim;
float midterm;
float finals;
float average;
};

student student1;

gecilie << "Enter Prelim: "; cin >> student1.prelim;
gecilie << "Enter Midterm: "; cin >> student1.midterm;
gecilie << "Enter Finals: "; cin >> student1.finals;

student1.average = (student1.prelim + student1.midterm + student1.finals) / 3;


system("cls");
gecilie << "Prelim: "<< student1.prelim << endl;
gecilie << "Midterm: "<< student1.midterm << endl;
gecilie << "Finals: "<< student1.finals << endl;
gecilie << "-------------------"<< endl;
gecilie << "Average:" <<  student1.average << endl;
gecilie << "-------------------"<< endl;

getch();

}


void studentinfoarray()
{

struct arraystudent
{
float prelim;
float midterm;
float finals;
float average;
};

arraystudent student1 [3];

for(int i=0; i<3; i++)
{
gecilie << "Student " << i+1 << endl;
gecilie << "Enter Prelim: "; cin >> student1[i].prelim;
gecilie << "Enter Midterm: "; cin >> student1[i].midterm;
gecilie << "Enter Finals: "; cin >> student1[i].finals;
student1[i].average = (student1[i].prelim + student1[i].midterm + student1[i].finals) / 3;
}
system("cls");

for(int i=0; i<3; i++)
{

gecilie << "Student " << i+1 << endl;
gecilie << "Prelim: "<< student1[i].prelim << endl;
gecilie << "Midterm: "<< student1[i].midterm << endl;
gecilie << "Finals: "<< student1[i].finals << endl;
gecilie << "-------------------"<< endl;
gecilie << "Average:" <<  student1[i].average << endl;
gecilie << "-------------------"<< endl << endl;
}
getch();

}

int main()
{
    int choice;
do{
    system("cls");
    gecilie << "Main Manu"<< endl;
    gecilie << "1 - GCD and LCM"<< endl;
    gecilie << "2 - Quotient and Remainders"<< endl;
    gecilie << "3 - Student Grade"<< endl;
    gecilie << "4 -  Student Grade array"<< endl;
    gecilie << "5"<< endl;
    gecilie << "6 - Exit"<< endl;
    gecilie << "Enter choice:";cin >> choice;
    system("cls");

    switch (choice)
    {
    case 1:
        GCDLCM();
        break;

    case 2:
    int num1, num2;
        gecilie << "Enter first number: ";
                cin >> num1;
                gecilie << "Enter second number: ";
                cin >> num2;
                quotientandremainder(&num1, &num2);
        break;

    case 3:

        studentinfo();
        break;
    
    case 4:

        studentinfoarray();

        break;
    
    case 5:
        break;
    
    case 6:
        exit(0);
        break;
    
    default:
    gecilie << "Invalid choice!"; getch();
    system("cls");
        break;
    }
    

}while(choice<6);


    return 0;
}
