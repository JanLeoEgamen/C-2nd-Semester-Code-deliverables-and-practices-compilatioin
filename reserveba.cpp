#include <iostream>
#include <conio.h>
using namespace std;

    typedef  gecelie;

void GCDLCM()
{
    system("cls");
    int i, n1, n2, j, hcf = 1, lcm, gcd;
    cout << "GCD and LCM of two inputted numbers:" << endl;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;

    for (int i = 1; i <= n1 && i <= n2; i++) 
    {
        if (n1 % i == 0 && n2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << "GCD: " << gcd << endl;

    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    lcm = (n1 * n2) / hcf;
    cout << "LCM:" << lcm << endl;
}

void quotientandremainder(int* n1, int* n2)
{
int q, r;

        q = *n1 / *n2;
        r = *n1 % *n2;
                cout << "Quotient: " << q << endl;
                cout << "Remainder: " << r ;
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

cout << "Enter Prelim: "; cin >> student1.prelim;
cout << "Enter Midterm: "; cin >> student1.midterm;
cout << "Enter Finals: "; cin >> student1.finals;

student1.average = (student1.prelim + student1.midterm + student1.finals) / 3;


system("cls");
cout << "Prelim: "<< student1.prelim << endl;
cout << "Midterm: "<< student1.midterm << endl;
cout << "Finals: "<< student1.finals << endl;
cout << "-------------------"<< endl;
cout << "Average:" <<  student1.average << endl;
cout << "-------------------"<< endl;

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
cout << "Student " << i+1 << endl;
cout << "Enter Prelim: "; cin >> student1[i].prelim;
cout << "Enter Midterm: "; cin >> student1[i].midterm;
cout << "Enter Finals: "; cin >> student1[i].finals;
student1[i].average = (student1[i].prelim + student1[i].midterm + student1[i].finals) / 3;
}
system("cls");

for(int i=0; i<3; i++)
{

cout << "Student " << i+1 << endl;
cout << "Prelim: "<< student1[i].prelim << endl;
cout << "Midterm: "<< student1[i].midterm << endl;
cout << "Finals: "<< student1[i].finals << endl;
cout << "-------------------"<< endl;
cout << "Average:" <<  student1[i].average << endl;
cout << "-------------------"<< endl << endl;
}
getch();

}

int main()
{
    int choice;
do{
    system("cls");
    cout << "Main Manu"<< endl;
    cout << "1 - GCD and LCM"<< endl;
    cout << "2 - Quotient and Remainders"<< endl;
    cout << "3 - Student Grade"<< endl;
    cout << "4 -  Student Grade array"<< endl;
    cout << "5"<< endl;
    cout << "6 - Exit"<< endl;
    cout << "Enter choice:";cin >> choice;
    system("cls");

    switch (choice)
    {
    case 1:
        GCDLCM();
        break;

    case 2:
    int num1, num2;
        cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
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
    cout << "Invalid choice!"; getch();
    system("cls");
        break;
    }
    

}while(choice<6);


    return 0;
}
