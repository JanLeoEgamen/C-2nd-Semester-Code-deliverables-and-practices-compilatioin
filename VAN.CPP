#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <cmath>
#include <string>
#include <windows.h>


#define MAX_SIZE 100 // Maximun size of the string

using namespace std;

//Gotoxy and Box
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
// MAIN MENU & SUB MAIN MENU

void mainmenu()
{
  system("cls");

  gotoxy (24,7); cout<<"==== MAIN MENU ===="<<endl;
  gotoxy (24,8); cout<<"A - Sequence"<<endl;
  gotoxy (24,9); cout<<"B - Selection"<<endl;
  gotoxy (24,10); cout<<"C - Loops"<<endl;
  gotoxy (24,11); cout<<"D - One dimensional arrays"<<endl;
  gotoxy (24,12); cout<<"E - Two-dimensional arrays"<<endl;
  gotoxy (24,13); cout<<"F - Recursive functions"<<endl;
  gotoxy (24,14); cout<<"G - Structures, Pointers,Union,Enumerated Types, Typerdef"<<endl;
  gotoxy (24,15); cout<<"H - File handling exercises"<<endl;
  gotoxy (24,16); cout<<"I - Classes and objects"<<endl;
  gotoxy (24,17); cout<<"J - Exit"<<endl;
}

void mainmenu2()
{
    system("cls");

    gotoxy (30,3); cout<<"==== MAIN MENU ===="<<endl;
    gotoxy (30,4); cout<<"A - Total and average of the four numbers"<<endl;
    gotoxy (30,5); cout<<"B - Compute Quotient and Remainder"<<endl;
    gotoxy (30,6); cout<<"==== Sequence ===="<<endl;
    gotoxy (30,7); cout<<"C - Quadratic Equation"<<endl;
    gotoxy (30,8); cout<<"D - Square and Cube"<<endl;
    gotoxy (30,9); cout<<"E - Area and Perimeter of a rectangle"<<endl;
    gotoxy (30,10); cout<<"F - Swapped Values"<<endl;
    gotoxy (30,11); cout<<"G - Display the Gross Pay and Net Pay"<<endl;
    gotoxy (30,12); cout<<"H - Get Sum, Difference, Products, Quotient"<<endl;
    gotoxy (30,13); cout<<"I - Area and Circumference"<<endl;
    gotoxy (30,14); cout<<"J - Celcius and Farenheit"<<endl;
    gotoxy (30,15); cout<<"K - Compute for the Total Sales"<<endl;
    gotoxy (30,16); cout<<"L - Compute for the Change"<<endl;
    gotoxy (30,17); cout<<"M - Exit"<<endl;
}

void mainmenu3()
{
   system("cls");

    gotoxy (27,3); cout<<"==== MAIN MENU ===="<<endl;
    gotoxy (27,4); cout<<"==== Selection ===="<<endl;
    gotoxy (10,5); cout<<"A - Identify Whether Positive,Negative or Neutral"<<endl;
    gotoxy (10,6); cout<<"B - Identify Whether Odd or Even"<<endl;
    gotoxy (10,7); cout<<"C - Identify the Largest among 3 Numbers"<<endl;
    gotoxy (10,8); cout<<"D - Identify the Largest between the 2 Numbers"<<endl;
    gotoxy (10,9); cout<<"E - Identify Wether Prime Number or Not"<<endl;
    gotoxy (10,10); cout<<"F - Compute for the Average Grade"<<endl;
    gotoxy (10,11); cout<<"G - Commission of the Salesman"<<endl;
    gotoxy (10,12); cout<<"H - Identify if the inputted letter is a Vowel or Consonant"<<endl;
    gotoxy (10,13); cout<<"I - Exit"<<endl;
}
void mainmenu4()
{
    system("cls");

    gotoxy (15,2); cout<<"==== LOOPS ===="<<endl;
    gotoxy (15,3); cout<<"===================="<<endl;
    gotoxy (15,4); cout<<"A - Will Print Numbers from 1 to 10"<<endl;
    gotoxy (15,5); cout<<"B - Print all even numbers from 1 to N"<<endl;
    gotoxy (15,6); cout<<"C - Compute and Display it's factorial"<<endl;
    gotoxy (15,7); cout<<"D - Display the N fibonacci series"<<endl;
    gotoxy (15,8); cout<<"E - Display the reverse of the number"<<endl;
    gotoxy (15,9); cout<<"F - Identify whether the word is palindrome or not"<<endl;
    gotoxy (15,10); cout<<"G - Decimal Number to Binary Number"<<endl;
    gotoxy (15,11); cout<<"H - Get the sum of all even numbers from 1 to N"<<endl;
    gotoxy (15,12); cout<<"I - Sum of the Square of all even number from N to M"<<endl;
    gotoxy (15,13); cout<<"J - Print Letters from A-Z"<<endl;
    gotoxy (15,14); cout<<"K - Exit"<<endl;
}
/*void mainmenu5()
{
   system("cls");

   gotoxy (30,6); cout<<"******** MAIN MENU ********"<<endl;
   gotoxy (30,7); cout<<"==== Nested Loop Exercise ===="<<endl;
   gotoxy (30,9); cout<<"A - Nested For Loop"<<endl;
   gotoxy (30,10); cout<<"B - Nested While Loop"<<endl;
   gotoxy (30,11); cout<<"C - Nested Do While Loop"<<endl;
   gotoxy (30,12); cout<<"D - Exit"<<endl;

}
void mainmenu6()
{
  system("cls");

  gotoxy (25,7); cout<<" ***** For Loop Sub Main Menu ***** "<<endl;
  gotoxy (25,8); cout<<"===================================="<<endl;
  gotoxy (25,9); cout<<"A - Triangle Asterisk Upward"<<endl;
  gotoxy (25,10); cout<<"B - Triangle Asterisk Downward"<<endl;
  gotoxy (25,11); cout<<"C - Triangle Numbers (With The Same Numbers) Upward"<<endl;
  gotoxy (25,12); cout<<"D - Triangle Numbers (With The Same Numbers) Downward"<<endl;
  gotoxy (25,13); cout<<"E - Triangle Numbers (With The Same Orders) Upward"<<endl;
  gotoxy (25,14); cout<<"F - Triangle Numbers (With The Same Orders) Downward"<<endl;
  gotoxy (25,15); cout<<"G - Exit"<<endl;

}
void mainmenu7()
{
   system("cls");

   gotoxy (25,7); cout<<" ***** While Loop Sub Main Menu ***** "<<endl;
   gotoxy (25,8); cout<<"======================================"<<endl;
   gotoxy (25,9); cout<<"A - Triangle Asterisk Upward"<<endl;
   gotoxy (25,10); cout<<"B - Triangle Asterisk Downward"<<endl;
   gotoxy (25,11); cout<<"C - Triangle Numbers (With The Same Numbers) Upward"<<endl;
   gotoxy (25,12); cout<<"D - Triangle Numbers (With The Same Numbers) Downward"<<endl;
   gotoxy (25,13); cout<<"E - Triangle Numbers (With The Same Orders) Upward"<<endl;
   gotoxy (25,14); cout<<"F - Triangle Numbers (With The Same Orders) Downward"<<endl;
   gotoxy (25,15); cout<<"G - Exit"<<endl;

}
void mainmenu8()
{
  system("cls");

  gotoxy (25,7); cout<<" ***** Do While Loop Sub Main Menu ***** "<<endl;
  gotoxy (25,8); cout<<"========================================="<<endl;
  gotoxy (25,9); cout<<"A - Triangle Asterisk Upward"<<endl;
  gotoxy (25,10); cout<<"B - Triangle Asterisk Downward"<<endl;
  gotoxy (25,11); cout<<"C - Triangle Numbers (With The Same Numbers) Upward"<<endl;
  gotoxy (25,12); cout<<"D - Triangle Numbers (With The Same Numbers) Downward"<<endl;
  gotoxy (25,13); cout<<"E - Triangle Numbers (With The Same Orders) Upward"<<endl;
  gotoxy (25,14); cout<<"F - Triangle Numbers (With The Same Orders) Downward"<<endl;
  gotoxy (25,15); cout<<"G - Exit"<<endl;

}
*/
void mainmenu9()
{
	system("cls");
	
  gotoxy (30,7); cout<<"==== One Dimensional Array ===="<<endl;
  gotoxy (30,8); cout<<"==============================="<<endl;
  gotoxy (30,9); cout<<"A - All even numbers in the array"<<endl;
  gotoxy (30,10); cout<<"B - Largest Three Elements in array"<<endl;
  gotoxy (30,11); cout<<"C - Positive and Negative numbers in array"<<endl;
  gotoxy (30,12); cout<<"D - Counting Integer Using Array"<<endl;
  gotoxy (30,13); cout<<"E - Number Of Rows (Midterm Exam)"<<endl;
  gotoxy (30,14); cout<<"F - Most Occured (Midterm Exam)"<<endl;
  gotoxy (30,15); cout<<"G - Exit"<<endl;
  
}

void mainmenu10()
{
	system("cls");
	
	 gotoxy(30,4);cout << "==== Two Dimensional Array ===="<<endl;
	 gotoxy(30,5);cout << "==============================="<<endl;
	 gotoxy(30,6);cout << "A - Display_All_Even"<<endl;
	 gotoxy(30,7);cout << "B - Largest_Three"<<endl;
	 gotoxy(30,8);cout << "C - Total_PosNeg"<<endl;
	 gotoxy(30,9);cout << "D - Count_Int"<<endl;
	 gotoxy(30,10);cout << "E - Diagonal (Midterm Exam)"<<endl;
	 gotoxy(30,11);cout << "F - Multiplication Table (Midterm Exam)"<<endl;
	 gotoxy(30,12);cout << "G - Exit"<<endl;
	 
}

void mainmenu11()
{
	system("cls");
	
	 gotoxy(30,4);cout << "==== Sub Main Menu ===="<<endl;
	 gotoxy(30,5);cout << "==============================="<<endl;
	 gotoxy(30,6);cout << "A - Structure"<<endl;
	 gotoxy(30,7);cout << "B - Pointers"<<endl;
	 gotoxy(30,8);cout << "C - Union"<<endl;
	 gotoxy(30,9);cout << "D - Enumerated Types"<<endl;
	 gotoxy(30,10);cout << "E - Type Def"<<endl;
	 gotoxy(30,11);cout << "F - Exit"<<endl;
	
}

void mainmenu12()
{
	system("cls");
   cout<<"==== STRUCTURE ===="<<endl;
   cout<<"===== LEVEL 1 ====="<<endl;
   cout<<"\nA - Write a program to store and print the roll no."<<endl;
   cout<<"B - Write a program to store the roll no."<<endl;
   cout<<"C - Write a program to store and print the roll no.15 students using structure."<<endl;
   cout<<"D - Write a program to add two distances in inch-feet using structure."<<endl;
   cout<<"E - Enter the marks of 5 students in Chemistry, Mathematics and Physics."<<endl;
   cout<<"F - Write a program to add, subtract and multiply two complex numbers."<<endl;
   cout<<"G - Write a structure to store the roll no. name, age (between 11 to 14)."<<endl;
   cout<<"H - Write a structure to store the account number and balance of customers."<<endl;
   cout<<"I - Write a program to compare two dates entered by user."<<endl;
   cout<<"\n===== LEVEL 2 ====="<<endl;
   cout<<"\nJ - Write a structure to store the day of 10 employees in a company."<<endl;
   cout<<"K - Create a structure containing book information."<<endl;
   cout<<"L - Create a structure named Date having day, month and year as its elements."<<endl;
   cout<<"M - Program to Store Information of a Student in a Structure "<<endl;
   cout<<"N - Program to Add Complex Numbers by Passing Structure to a Function "<<endl;
   cout<<"O - Program to Calculate Difference Between Two Time Period "<<endl;
   cout<<"P - Program to Store and Display Information Using Structure "<<endl;
   cout<<"Q - Exit "<<endl;
}


void mainmenu13()
{
   system("cls");
   gotoxy(20,3);cout <<"All pointers programming exercises in C++"<<endl;
   gotoxy(20,4);cout <<"========================================"<<endl;

   gotoxy(20,5);cout <<"A - Swap two numbers using pointers"<<endl;
   gotoxy(20,6);cout <<"B - Add two numbers using pointers"<<endl;
   gotoxy(20,7);cout <<"C - Sum of array elements using pointers"<<endl;
   gotoxy(20,8);cout <<"D - Find length of string using pointer"<<endl;
   gotoxy(20,9);cout <<"E - Copy one string to another string using pointers"<<endl;
   gotoxy(20,10);cout <<"F - Concatenate two strings using pointer"<<endl;
   gotoxy(20,11);cout <<"G - Print elements of array in reversed order using pointers"<<endl;
   gotoxy(20,12);cout <<"H - Exit"<<endl;
}


void mainmenu14()
{
	system("cls");

	cout<<"Union Activity"<<endl;
	cout<<"=============="<<endl;

	cout<<"A - Difference between union and structure "<<endl;
    cout<<"B - All the other members will contain the garbage value"<<endl;
	cout<<"C - Alternate Garbage Value"<<endl;
	cout<<"D - program illustrating the implementation of union"<<endl;
	cout<<"E - Accessing Union Members"<<endl;
	cout<<"F - Exit"<<endl;
	
}

void mainmenu15()
{
	cout<<"Enumerated Types"<<endl;
	cout<<"================"<<endl;

	cout<<"A - Demonstrate the Functioning of Enumerators with an example of Gender"<<endl;
    cout<<"B - Demonstrate the Functioning of Enumerators with an Example of Year"<<endl;
	cout<<"C - Season (CodesDope)"<<endl;
	cout<<"D - Enumeration Type (Programmiz)"<<endl;
	cout<<"E - Changing Default Value of Enums"<<endl;
	cout<<"F - An enum variable takes only one value out of many possible values. "<<endl;
	cout<<"G - Flags for Enumeration (Programmiz)"<<endl;
	cout<<"H - Exit"<<endl;
}

void mainmenu16()
{
	system("cls");

	cout<<"TypeDef Activity"<<endl;
	cout<<"=============="<<endl;

	cout<<"A - Program to show use of typedef with arrays"<<endl;
    cout<<"B - Program to showcase the use of typedef with data pointer "<<endl;
	cout<<"C - C++ for using typedef with predefined data types"<<endl;
	cout<<"D - Exit"<<endl;
	
}
//LIBRARY OF ALL FUNCTION IN THE MAIN MENU 

//SEQUENCE WITH FUNCTION

void fourNum()//Function 1
{
     system("cls");
	       cout <<"Midterm 1";
	       system("cls");
   cout<<"Compute the total and average of the four numbers"<<endl;
   cout<<"-------------------------------------------------"<<endl;
       float num1,num2,num3,num4,sum,average;
   cout<<"Input 1st two numbers (Seperated by space):";
       cin>>num1>>num2;
   cout<<"Input 1st two numbers (Seperated by space):";
       cin>>num3>>num4;

   sum = num1+num2+num3+num4;
   average = sum/4;

   cout<<"The total of the four numbers is:"<<sum<<endl;
   cout<<"The Average of the four numbers is:"<<average;

	       getch();
}
void Quotient()//Function 1
 {
 system("cls");
	       cout<<"Midterm 2";
	       system("cls");
   cout<<"Compute the qoutient and reminder"<<endl;
   cout<<"---------------------------------"<<endl;
       int dvn,dvs,quotient,remainder;
   cout<<"Input the Divident:"<<endl;
   cin>>dvn;

   cout<<"Input the Division:"<<endl;
   cin>>dvs;

   quotient = dvn/dvs;
   remainder = dvn%dvs;

   cout<<"The qoutient of the division is:"<<quotient<<endl;
   cout<<"The remainder of the division is:"<<remainder<<endl;

	       getch();
}
void quadratic()//Function 1
 {
   system("cls");
	       cout<<"Problem 1";
	       system("cls");
   cout<<"Find the roots of a quadratic equation"<<endl;
   cout<<"--------------------------------------"<<endl;
       int a,b,c;
       int root1,root2;
   cout<<"Enter the Values for A, B, and C:"<<endl;
   cin>>a>>b>>c;

   root1 = (-b + sqrt((b * b) - 4 * a * c))/2 * a;
   root2 = (-b - sqrt((b * b) - 4 * a * c))/2 * a;

   cout<<"x = "<<root1<<endl;
   cout<<"x = "<<root2;

	       getch();
}
float calculate_square(float scIn)//Function 4
 {
    float square;

    square = scIn * scIn;

    return square;

}
float calculate_cube(float scIn)//Function 4
 {
    float cube;

    cube = scIn * scIn * scIn;

    return cube;

}
void rectangle()//Function 1
 {
system("cls");
	       cout<<"Problem 3";
	       system("cls");
   cout<<"Compute and Display the area and perimeter of a rectangle"<<endl;
   cout<<"---------------------------------------------------------"<<endl;
       float l,w,area,perimeter;
   cout<<"Enter Length:";
   cin>>l;
   cout<<"Enter Width:";
   cin>>w;

   area = l*w;
   perimeter = 2* (l + w);

   cout<<"Area:" <<area<<endl;
   cout<<"Perimeter:"<<perimeter;

	       getch();
}
void problem4(void)//Function 2
 {
      system("cls");
	       cout<<"Problem 4";
	       system("cls");
   cout<<"Swap the values of two variables"<<endl;
   cout<<"--------------------------------"<<endl;
       int x,y,temp;
   cout<<" x = ";
   cin>>x;
   cout<<" y = ";
   cin>>y;

   temp = x;
   x = y;
   y = temp;

   cout<<" x = " <<x <<endl;
   cout<<" y = " <<y;

	       getch();
}
void swap2(int x, int y)//Function 2
 {

      int z;
      z = x;
      x = y;
      y = z;

      cout<<"\nx : "<<x<<endl;
      cout<<"y : "<<y<<endl;
}
double convert()//Function 3
{
  system("cls");
  double cel,fa;

  cout<<"Enter Celcius:";
  cin>>cel;

  fa = (cel*1.8)+32;

  return fa;
}
float tot_sales()//Function 3
 {
      system("cls");
      int smNum;
      char smName [100];
      float unSold, unPrice;
      float Total;

      cout<<"Enter Salesman Number: ";
      cin>>smNum;
      cout<<"Enter Salesman Name: ";
      cin>>smName;
      cout<<"Enter Unit Sold: ";
      cin>>unSold;
      cout<<"Enter Unit Price: ";
      cin>>unPrice;

      Total = unSold * unPrice;

      cout<<"Total Sales: ";
      return Total;
}
void GrossNet()//Function 1
 {
   system("cls");
	       cout<<"Problem 5";
	       system("cls");
   cout<<"Compute and Display the gross pay and net pay"<<endl;
   cout<<"---------------------------------------------"<<endl;
       char empName[100];
       float empNum,noOfhrs,ratePerhr,grossPay,netPay;
   cout<<"Enter the Employee Name:";
   cin>>empName;
   cout<<"Enter Employee Number:";
   cin>>empNum;
   cout<<"Enter Number of hours work:";
   cin>>noOfhrs;
   cout<<"Enter Rate Per Hour:";
   cin>>ratePerhr;

   grossPay = noOfhrs * ratePerhr;
   netPay = grossPay - (grossPay * 0.1);

   cout<<"Gross Pay:"<<grossPay<<endl;
   cout<<"Net Pay:" <<netPay;
	       getch();
}
void SolvingMath ()//Function 1
{
  system("cls");
	       cout<<"Problem 6";
	       system("cls");
   cout<<"Input for two numbers"<<endl;
   cout<<"---------------------"<<endl;
       double sums, difference, products, quot;
       float n1,n2;
   cout<<"Enter a Number:";
   cin>>n1;
   cout<<"Enter a Number:";
   cin>>n2;

   sums = n1 + n2;
   difference = n1 - n2;
   products = n1 * n2;
   quot = n1 / n2;

   cout<<"Sum:"<<sums<<endl;
   cout<<"Difference:"<<difference<<endl;
   cout<<"Products:"<<products<<endl;
   cout<<"Quotient:"<<quot<<endl;

	       getch();
}
void Circle()//Function 1
 {
  system("cls");
	       cout<<"Problem 7";
	       system("cls");
   cout<<"Input for the diameter of a circle"<<endl;
   cout<<"----------------------------------"<<endl;
       int pi = 3.1416;
       float radius,A,C;
   cout<<"Enter Diameter of Circle:";
   cin>>radius;

   A = pi * radius * radius;
   C = pi * radius;

   cout<<"A:"<<A<<endl;
   cout<<"C:"<<C;

	       getch();
}
float change()//Function 3
{
   system("cls");

   float orderNo, totalOrder, amountTender;
   float change;

   cout<<"Enter Order Number, Total Amount of Order, Amount Tender: " <<endl;
   cin >>orderNo>>totalOrder>>amountTender;

   change = amountTender - totalOrder;

   cout<<"Change is: ";

   return change;
}

//SELECTION WITH FUNCTION

void posiNega()//Function 1
{
    system("cls");
       cout<<"Input for a number and then Identify whether Positive, Negative or Neutral."<<endl;
       cout<<"---------------------------------------------------------------------------"<<endl;
       double num;

       cout<<"Input for a Number:";
       cin>>num;

       if(num==0)
       {
	 cout<<"Neutral";
       }
       if(num<0)
       {
	 cout<<"Negative";
       }
       if (num>0)
       {
	 cout<<"Positive";
       }
	       getch();
}

void oddeven(int num1)//FUNCTION 2
 {
   system("cls");

       if(num1%2==0)
       {
       cout<<"Even";
       }
       else
       {
       cout<<"Odd";
       }
       getch();
}
void Salesman()//Function 1
{
     system("cls");
       cout<<"Revise Problem #9 Commission of the Salesman"<<endl;
       cout<<"--------------------------------------------"<<endl;

       char smName[100];
       float smNum,unSold,unPrice,commission,totalSales;

       cout<<"Enter Salesman Name:";
       cin>>smName;

       cout<<"Enter Salesman Number:";
       cin>>smNum;

       cout<<"Enter Unit Sold:";
       cin>>unSold;

       cout<<"Enter Unit Price:";
       cin>>unPrice;

       totalSales = unSold * unPrice;

       if (totalSales<=10000)
       {
	commission = totalSales * 0.1;
	cout<<"Our Commission is:"<<commission<<endl;
       }
       else if (totalSales<=15000)
       {
	commission = totalSales * 0.15;
	cout<<"Our Commission is:"<<commission<<endl;
       }
       else if (totalSales<=20000)
       {
	commission = totalSales * 0.20;
	cout<<"Our Commission is:"<<commission<<endl;
       }
       else if (totalSales<=30000)
       {
	commission = totalSales * 0.30;
	cout<<"Our Commission is:"<<commission<<endl;
       }
       cout<<"Total Sales:"<<totalSales;

	       getch();
}
void Grade()//Function 1
{
     system("cls");
       cout<<"Compute for the average Grade then Identify whether passed or Failed"<<endl;
       cout<<"--------------------------------------------------------------------"<<endl;

       double prelim,midterm,finals,ave;

       cout<<"Enter Your Prelim Score:";
       cin>>prelim;

       cout<<"Enter Your Midterm Score:";
       cin>>midterm;

       cout<<"Enter Your Finals Score:";
       cin>>finals;

       ave = (prelim + midterm + finals)/3;

       if (ave<75)

	 cout<<"Failed";

       else

       cout<<"Passed";
	       getch();
}
int largest3(void)//Function 3
{
  int n1,n2,n3,lar3;

  cout<<"Identify the Largest Among Three Numbers"<<endl;
  cout<<"----------------------------------------"<<endl;

  cout<<"Enter First Number:";
  cin>>n1;
  cout<<"Enter Second Number:";
  cin>>n2;
  cout<<"Enter Third Number:";
  cin>>n3;

  if (n1>n2 && n1>n3)
  {
   cout<<"First Number is the Largest";
  }
  else if (n2 > n1 && n2 > n3)
  {
    cout<<"Second Number is the Largest";
  }
  else
  {
  cout<<"Third Number is the Largest";
  }
  getch();
  return lar3;
}
int largest2(int nm1, int nm2)//FUNCTION 4
{
   int lar2;

   if (nm1 > nm2)
   {
     cout<<"First Number is the Largest!";
   }
   else
   {
   cout<<"Second Number is the Largest!";
   }
   getch();
   return lar2;
}
void vowelcons()//Function 1
 {
  system("cls");
       cout<<"Identify if the inputted letter is a Vowel or Consonant."<<endl;
       cout<<"--------------------------------------------------------"<<endl;

       char letter;

       cout<<"Input a Letter:";
       cin>>letter;

       if(letter=='a'|| letter=='e' || letter=='i' || letter=='o' || letter=='u')

       cout<<"is Vowel";

       else

       cout<<"is Consonant" <<letter;


	       getch();
}
void PrimeNum()//Function 1
{
 system("cls");
       cout<<"Input for a number and then Identify whether Prime Number or not"<<endl;
       cout<<"----------------------------------------------------------------"<<endl;

       int nums;

       cout<<"Input a Number:";
       cin>>nums;

       if (nums==2)
       {
       cout<<"Prime Numbers \n";
       }
       else if (nums%2==0)
       {
	cout<<"Not Prime Number \n";
       }
       else
       {
	cout<<"Prime Number"<<endl;
       }

	       getch();
}

//LOOP WITH FUNCTIONS

void Numbers(int num)//FUNCTION 2
{
  for(num = 1; num<=10; num++)
       {
	  cout<<num<<endl;
       }
	       getch();
}
int Factorial(void)//FUNCTION 3
{

       cout<<"Compute and Display it's factorial"<<endl;
       cout<<"----------------------------------"<<endl;

       int numz,facts;
       int fact = 1;
       cout<<"Enter a Number: ";
       cin>>numz;

       for(int i = 1; i<=numz; i++)
       {
	 fact = fact * i;
       }
       cout<<numz<<"!="<<fact;
	       getch();
	       return facts;

}
int evenNumbers(int nums)//FUNCTION 4
{
       int even;

       for(nums = 1; nums<=10; nums++)
       {
	 if(nums%2==0)
	 {
	  cout<<nums<<endl;
	 }
       }
	       getch();
	       return even;

}
void Fibonacci()//FUNCTION 1
{
  system("cls");

       cout<<" Display the N fibonacci series"<<endl;
       cout<<"-------------------------------"<<endl;

       int fib1, fib2;
       int fib3;

       fib1 = 0;
       fib2 = 1;

       cout<<fib1<<" ";
       cout<<fib2<<" ";

       for (int p = 3; p<=6; p++)
       {
	 fib3 = fib2 + fib1;
	 cout<<fib3<<" ";

	 fib1 = fib2;
	 fib2 = fib3;
       }
	       getch();


}
void ReverseNum()//FUNCTION 1
{
  system("cls");

       cout<<" Display the reverse of the number"<<endl;
       cout<<"----------------------------------"<<endl;

       int nom;
       int rev;
       int rem;

       cout<<"Enter a Number: ";
       cin>>nom;

       for(rev = 0; nom!=0; nom=nom/10)
       {
	 rem=nom%10;
	 rev=rem+(rev*10);
       }
       cout<<"\nReverse of The Given Number is: "<<rev;
       cout<<endl;

	       getch();

}
void Palindrome()//FUNCTION 1
{
       system("cls");
       cout<<"Identify whether the word is palindrome or not"<<endl;
       cout<<"----------------------------------------------"<<endl;

       int w=0;
       int flag=0;
       char str[20];

 cout<<"Check Whether Word is Palindrome or Not: ";
 cin>>str;

 int l=strlen(str);
 int j=l-1;

 for(int k=0; k< (l/2); k++)
 {
    if(str[w] != str[j])
    {
    cout<<"Word is Not a Palindrome ";
    flag = 1;
    break;
    }
    w++;
    j--;
 }

 if(flag==0)
 {
   cout<<"Word Is Palindrome";
 }

	       getch();

}
void Binary()//FUNCTION 1
{
   system("cls");
       cout<<"Decimal Number to Binary Number"<<endl;
       cout<<"-------------------------------"<<endl;

       int arr[10],nomz,u;

       cout<<"Enter the decimal number you want to convert: ";
       cin>>nomz;

       for (u=0;nomz>0;u++)
       {
	 arr[u] = nomz % 2;
	 nomz = nomz / 2;
       }
       cout<<"The Binary of that is = ";

       for( u = u - 1; u>=0; u--)
       {
	 cout<<arr[u];
       }
	       getch();

}
void SumEven()//FUNCTION 1
{
  system("cls");

       cout<<"Get the sum of all even numbers from 1 to N"<<endl;
       cout<<"-------------------------------------------"<<endl;

       int nam;
       int sum, o;

       cout<<"Enter a Number: ";
       cin>>nam;

       for (o=0; o<=nam; o++)
       {
	 if (o%2==0)
	 {
	 sum = sum * o;
	 }
       }
       cout<<"Sum of Even Numbers till: "<<nam<<sum;

	       getch();
}
void SquareEven()//FUNCTION 1
{
 system("cls");

       cout<<"Sum of the Square of all even number from N to M"<<endl;
       cout<<"------------------------------------------------"<<endl;

       int nams;
       int sam = 0;

       cout<<"Enter a Number: ";
       cin>>nams;

       for (int y = 1; y<=nams; y++)
       {
	 if (nams%2==0)
	 {
	 sam=sam+pow(y,2);
	 }
       }
       cout<<"Sum of Square of "<<nams<<" is =  "<<sam;

	       getch();
}
void Letters()//FUNCTION 1
{
  system("cls");

       cout<<"Print Letters from A-Z"<<endl;
       cout<<"----------------------"<<endl;

       int character = 0;
       char ch='A';
       do
       {
	  character = int(ch);
	  cout<<ch<<" ";
	  character++;
	  ch=char(character);
       }
       while(ch<='Z');

		getch();
}

 // NESTED LOOP EXERCISE
 
// FOR LOOP EXERCISE

/*void LadderUp(int row)// FUNCTION NO RETURN VALUE.
{
   system("cls");

   int a,b;

   cout<<" ***** Asterisk Triangle Upward ***** "<<endl;
   cout<<"--------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = 0; a<=row; a++)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<"*";
  }
  cout<<endl;
 }
  getch();

}

void LadderDown(int row)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   int a,b;

   cout<<" ***** Asterisk Triangle Downward ***** "<<endl;
   cout<<"----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = row; a>0; a--)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<"*";
  }
  cout<<endl;
 }
  getch();

}

void NumbersUp(int row)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   int a,b;

   cout<<" ***** Same Numbers Triangle Upward ***** "<<endl;
   cout<<"------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = 0; a<=row; a++)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<a;
  }
  cout<<endl;
 }
  getch();

}

void NumbersDown(int row)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   int a,b;

   cout<<" ***** Same Numbers Triangle Downward ***** "<<endl;
   cout<<"--------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = row; a>0; a--)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<a;
  }
  cout<<endl;
 }
  getch();

}

void NumberzUp(int row)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   int a,b;

   cout<<" ***** Same Orders Triangle Upward ***** "<<endl;
   cout<<"-----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = 0; a<=row; a++)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<b;
  }
  cout<<endl;
 }
  getch();

}

void NumberzDown(int row)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   int a,b;

   cout<<" ***** Same Orders Triangle Downward ***** "<<endl;
   cout<<"-------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>row;


  for(a = row; a>0; a--)// OUTER LOOP
  {
  for(b = 1; b<=a; b++)// INNER LOOP
  {
   cout<<b;
  }
  cout<<endl;
 }
  getch();

}

// WHILE LOOP EXERCISE.

void LadderUpward(int rows)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Asterisk Triangle Upward ***** "<<endl;
   cout<<"--------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = 0;

   while(a<=rows) // OUTER LOOP
   {
   int b = 1;
   while(b<=a) // INNER LOOP
   {
   b++;
   cout<<"*";
   }
   a++;
   cout<<endl;
   }
   getch();

}

void LadderDownward(int rows)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Asterisk Triangle Downward ***** "<<endl;
   cout<<"----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = rows;

   while(a>0) // OUTER LOOP
   {
   int b = 1;
   while(b<=a) // INNER LOOP
   {
   b++;
   cout<<"*";
   }
   a--;
   cout<<endl;
   }
   getch();

}

void NumbersUpward(int rows)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   cout<<" ***** Same Numbers Triangle Upward ***** "<<endl;
   cout<<"------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = 0;

   while(a<=rows) // OUTER LOOP
   {
   int b = 1;
   while(b<=a) // INNER LOOP
   {
   b++;
   cout<<a;
   }
   a++;
   cout<<endl;
   }
   getch();

}

void NumbersDownward(int rows)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Same Numbers Triangle Downward ***** "<<endl;
   cout<<"--------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = rows;

   while(a>0) // OUTER LOOP
   {
   int b = 1;
   while(b<=a) // INNER LOOP
   {
   b++;
   cout<<a;
   }
   a--;
   cout<<endl;
   }
   getch();

}

void OrdersUp(int rows)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Same Orders Triangle Upward ***** "<<endl;
   cout<<"-----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = 0;

   while(a<=rows) // OUTER LOOP
   {
   int b = 0;
   while(b<a) // INNER LOOP
   {
   b++;
   cout<<b;
   }
   a++;
   cout<<endl;
   }
   getch();

}

void OrdersDown(int rows)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Same Orders Triangle Downward ***** "<<endl;
   cout<<"-------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = rows;

   while(a>0) // OUTER LOOP
   {
   int b = 0;
   while(b<a) // INNER LOOP
   {
   b++;
   cout<<b;
   }
   a--;
   cout<<endl;
   }
   getch();

}

// DO WHILE LOOP EXERCISE


void TriangleUp(int rowz)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   cout<<" ***** Asterisk Triangle Upward ***** "<<endl;
   cout<<"--------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = 1;
   do{
   int b = 1;
   do{
   cout<<"*";
   b++;
   }while(b<=a);
   a++;
   cout<<endl;
   }while(a<=rowz);

   getch();

}

void TriangleDown(int rowz)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   cout<<" ***** Asterisk Triangle Downward ***** "<<endl;
   cout<<"----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = rowz;
   do{
   int b = 1;
   do{
   cout<<"*";
   b++;
   }while(b<=a);
   a--;
   cout<<endl;
   }while(a>0);

   getch();

}

void NumberUp(int rowz)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Same Numbers Triangle Upward ***** "<<endl;
   cout<<"------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = 1;
   do{
   int b = 1;
   do{
   cout<<a;
   b++;
   }while(b<=a);
   a++;
   cout<<endl;
   }while(a<=rowz);

   getch();


}

void NumberDown(int rowz)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   cout<<" ***** Same Numbers Triangle Upward ***** "<<endl;
   cout<<"------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = rowz;
   do{
   int b = 1;
   do{
   cout<<a;
   b++;
   }while(b<=a);
   a--;
   cout<<endl;
   }while(a>0);

   getch();

}

void OrderUpward(int rowz)//FUNCTION NO RETURN VALUE.
{
   system("cls");

   cout<<" ***** Same Orders Triangle Upward ***** "<<endl;
   cout<<"-----------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = 1;
   do{
   int b = 1;
   do{
   cout<<b;
   b++;
   }while(b<=a);
   a++;
   cout<<endl;
   }while(a<=rowz);

   getch();
}

void OrderDownward(int rowz)//FUNCTION NO RETURN VALUE.
{
  system("cls");

   cout<<" ***** Same Numbers Triangle Downward ***** "<<endl;
   cout<<"--------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rowz;

   int a = rowz;
   do{
   int b = 1;
   do{
   cout<<b;
   b++;
   }while(b<=a);
   a--;
   cout<<endl;
   }while(a>=1);

   getch();
}
*/

// ONE DIMENTIONAL ARRAY
void Display_All_Evens()
{
  system("cls");
  int input[10], a;


  cout<<" **** All Even Number in the array **** "<<endl;
  cout<<"----------------------------------------"<<endl;

  for(a = 0 ; a<10; a++)
  {
    cout<<"Enter a number: ";
    cin>>input[a];

  }
  for(a = 0; a<10; a++)
  {
   if(input[a] % 2 == 0)
   {
    cout<<"input["<<a<<"] = "<<input[a]<<" is even number "<<endl;
   }
   else
   {
    cout<<"input["<<a<<"] = "<<input[a]<<" is not even number"<<endl;
   }
  }

  getch();
}

void Display_All_Evenz(int Evennumbers[])
{
  system("cls");

  int  a;


  cout<<" **** All Even Number in the array **** "<<endl;
  cout<<"----------------------------------------"<<endl;

  for(a = 0 ; a<10; a++)
  {
    cout<<"Enter a number: ";
    cin>>Evennumbers[a];

  }
  for(a = 0; a<10; a++)
  {
   if(Evennumbers[a] % 2 == 0)
   {
    cout<<"input["<<a<<"] = "<<Evennumbers[a]<<" is even number "<<endl;
   }
   else
   {
    cout<<"input["<<a<<"] = "<<Evennumbers[a]<<" is not even number"<<endl;
   }
  }

  getch();
}

void Largest_Threes()
{
  system("cls");

int i, lar1, lar2, lar3;
int arr[10];

cout<<" **** The Largest Three Element in array **** "<<endl;
cout<<"----------------------------------------------"<<endl;


for (i=0; i<=9; i++)
{

 cout << "Enter Number" << i + 1 << ": ";
 cin >> arr[i];


}

lar1 = arr[0];
lar2 = arr[1];
lar3 = arr[2];

for (i = 3; i<10; i++)
{

 if (arr[i] > lar1)
	{
	 lar3 = lar2;
	 lar2 = lar1;
	 lar1 = arr[i];

	}
	else if (arr[i] > lar2)
	{
	 lar3 = lar2;
	 lar2 = arr[i];
	}
	else if(arr[i] > lar3)
	{
	 lar3 = arr[i];

	}

}

cout << "The Largest Three Elements Are: " << lar1 << ", " << lar2 << ", " << lar3 << endl;

getch();


}


void Largest_Threez(int arr[])
{
  system("cls");

int i, lar1, lar2, lar3;


cout<<" **** The Largest Three Element in array **** "<<endl;
cout<<"----------------------------------------------"<<endl;


for (i=0; i<=9; i++)
{

 cout << "Enter Number" << i + 1 << ": ";
 cin >> arr[i];


}

lar1 = arr[0];
lar2 = arr[1];
lar3 = arr[2];

for (i = 3; i<10; i++)
{

 if (arr[i] > lar1)
	{
	 lar3 = lar2;
	 lar2 = lar1;
	 lar1 = arr[i];

	}
	else if (arr[i] > lar2)
	{
	 lar3 = lar2;
	 lar2 = arr[i];
	}
	else if(arr[i] > lar3)
	{
	 lar3 = arr[i];

	}

}

cout << "The Largest Three Elements Are: " << lar1 << ", " << lar2 << ", " << lar3 << endl;

getch();


}

void Total_Pos_Negs()
{
  system("cls");

  int sum[10], positive = 0, negative = 0;
  int p;
  cout<<" **** Positive and Negative Numbers in array **** "<<endl;
  cout<<"--------------------------------------------------"<<endl;

  for(p = 0; p<10; p++)
  {
   cout<<"Enter a Number : ";
   cin>>sum[p];
  }
  for(p = 0; p<10; p++)
  {
   if(sum[p] > 0)
   {
   positive += sum[p];
   }
   else if (sum[p] < 0)
   {
   negative += sum[p];
  }
}
  cout<<"The sum of Positive Numbers is: "<<positive<<endl;
  cout<<"The sum of Negative Numbers is: "<<negative<<endl;
  getch();
}

void Total_Pos_Negz(int sum[])
{
  system("cls");

  int  positive = 0, negative = 0;
  
  cout<<" **** Positive and Negative Numbers in array **** "<<endl;
  cout<<"--------------------------------------------------"<<endl;

  for(int p = 0; p<10; p++)
  {
   cout<<"Enter a Number : ";
   cin>>sum[p];
  }
  for(int p = 0; p<10; p++)
  {
   if(sum[p] > 0)
   {
   positive += sum[p];
   }
   else if (sum[p] < 0)
   {
   negative += sum[p];
  }
}
  cout<<"The sum of Positive Numbers is: "<<positive<<endl;
  cout<<"The sum of Negative Numbers is: "<<negative<<endl;
  getch();
}


void Count_ints()
{
  system("cls");

  int size, inputs, counting[100];
  int quantity = 0;

  cout<<"Enter the size of array:";
  cin>>size;

  cout<<endl;

  for (int u = 0; u<size; u++)
  {
   cout<<"Enter a Number: ";
   cin>>counting[u];
  }

  cout<<"What number do you want to know the quantity"<<endl;
  cin>>inputs;

  for(int y = 0; y<size; y++)
  {
   if(inputs == counting[y])
   {
    quantity += 1;
   }
  }
  cout<<"The Quantity of the Inputted number in the Array is: "<<quantity;
}

int Most_occured (int arr[], int size)
{
    int max_occurrence = 0;
    int most_Occured  = arr[0];

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

	if (count > max_occurrence)
	{
	    max_occurrence = count;
	    most_Occured   = arr[c];
	}
    }

    return most_Occured;
}

void row()
{
   int rows;
   char alp = 'A';
   system("cls");

   cout<<" ***** Same Letters Triangle Upward ***** "<<endl;
   cout<<"------------------------------------------"<<endl;

   cout<<"Enter Row Number : ";
   cin>>rows;

   int a = 0;

   while(a<rows) // OUTER LOOP
   {
   int b = 0;
   while(b<=a) // INNER LOOP
   {
   b++;
   cout<<alp;
   }
   a++;
   alp++;
   cout<<endl;
   }
   getch();
}

// Two Dimensional Array

// Function 1 / Problem 1
void Display_All_Even() {
	 system("cls");
	    int elements[10][10];
	    int x, y, x1, y1;


	  gotoxy(34,2);
	  cout << "Display All The Even\n";
	  cout << "----------------------------------------------------------------------------\n";

	  cout << "Enter the Size of Array\n";
	  cout << "x: "; cin >> x1;
	  cout << "y; "; cin >> y1;
	  cout << "\n----------------------------------------------------------------------------\n";
	  cout << "Enter Values\n";

	  for (x = 1; x <= x1; x++) {
	     for (y = 1; y <= y1; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements[x-1][y-1];
	    }
	  }
	  cout << "\nThe Even Numbers in the Array are ";

	  for (x = 1; x <= x1; x++) {
	     for (y = 1; y <= y1; y++) {
		if (elements[x-1][y-1] % 2 == 0) {
		   cout << elements[x-1][y-1] << " ";
		}
	     }
	  }

getch();
}

// Function 3 / Problem 1
void Display_All_Even(int elements1[10][10], int x1, int y1) {

	  int x, y;

	  for (x = 1; x <= x1; x++) {
	     for (y = 1; y <= y1; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements1[x-1][y-1];
	    }
	  }
	  cout << "\nThe Even Numbers in the Array are ";

	  for (x = 1; x <= x1; x++) {
	     for (y = 1; y <= y1; y++) {
		if (elements1[x-1][y-1] % 2 == 0) {
		   cout << elements1[x-1][y-1] << " ";
		}
	     }
	  }

	  getch();
}


//  Function 1 / Problem 2
void Largest_Three() {

	  system("cls");
	  gotoxy(34,2);
	  cout << "Largest Three Number\n";
	  cout << "----------------------------------------------------------------------------\n";
	     int elements[10][10];
	     int x, y, a = 0, b = 0, c = 0, x2, y2;

	  cout << "Enter the Size of Array\n";
	  cout << "x: "; cin >> x2;
	  cout << "y; "; cin >> y2;
	  cout << "\n----------------------------------------------------------------------------\n";
	  cout << "Enter Values\n";

	  for (x = 1; x <= x2; x++) {
	     for (y = 1; y <= y2; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements[x-1][y-1];
	    }
	  }

	  for (x = 1; x <= x2; x++) {
	     for (y = 1; y <= y2; y++) {
		if (elements[x-1][y-1] > a) {
		   c = b;
		   b = a;
		   a = elements[x-1][y-1];
		}

		else if (elements[x-1][y-1] > b) {
		   c = b;
		   b = elements[x-1][y-1];
		}

		else if (elements[x-1][y-1] > c) {
		   c = elements[x-1][y-1];
		}
	     }
	  }
	  cout << "\nThe Three Largest Numbers in the Array are " << a << " " << b << " " << c;
getch();
}

// Function 3 / Problem 2
void Largest_Three(int elements2[10][10],int x2, int y2) {

	  int x, y, a = 0, b = 0, c = 0;

	  for (x = 1; x <= x2; x++) {
	     for (y = 1; y <= y2; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements2[x-1][y-1];
	    }
	  }

	  for (x = 1; x <= x2; x++) {
	     for (y = 1; y <= y2; y++) {
		if (elements2[x-1][y-1] > a) {
		   c = b;
		   b = a;
		   a = elements2[x-1][y-1];
		}

		else if (elements2[x-1][y-1] > b) {
		   c = b;
		   b = elements2[x-1][y-1];
		}

		else if (elements2[x-1][y-1] > c) {
		   c = elements2[x-1][y-1];
		}
	     }
	  }
	  cout << "\nThe Three Largest Numbers in the Array are " << a << " " << b << " " << c;

getch();

}


// Function 1 / Problem 3
void TotalPosNeg() {

	  system("cls");
	    int elements3[10][10];
	    int x, y, x3, y3;
	    int sum = 0;
	    int neg = 0;

	  gotoxy(28,2);
	  cout << "Total of Positive/Negative\n";
	  cout << "------------------------------------------------------------------------------\n";

	  cout << "Enter the Size of Array\n";
	  cout << "x: "; cin >> x3;
	  cout << "y; "; cin >> y3;
	  cout << "\n----------------------------------------------------------------------------\n";
	  cout << "Enter Values\n";

	  for (x = 1; x <= x3; x++) {
	     for (y = 1; y <= y3; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements3[x-1][y-1];
	    }
	  }

	  for (x = 1; x <= x3; x++) {
	     for (y = 1; y <= y3; y++) {
		if (elements3[x-1][y-1] > 0) {
		   sum += elements3[x-1][y-1];
		}

		else {
		   neg += elements3[x-1][y-1];
		}
	     }
	  }
	  cout << "\nThe Total of the Postive Numbers in the Array is " << sum << endl;
	  cout << "The Total of the Negative Numbers in the Array is " << neg << endl;

getch();
}

// Function 3 / Problem 3
void TotalPosNeg(int elements3[10][10], int x3, int y3) {

	  int x, y;
	  int sum = 0;
	  int neg = 0;

	  for (x = 1; x <= x3; x++) {
	     for (y = 1; y <= y3; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements3[x-1][y-1];
	    }
	  }

	  for (x = 1; x <= x3; x++) {
	     for (y = 1; y <= y3; y++) {
		if (elements3[x-1][y-1] > 0) {
		   sum += elements3[x-1][y-1];
		}

		else {
		   neg += elements3[x-1][y-1];
		}
	     }
	  }

	  cout << "\nThe Total of the Postive Numbers in the Array is " << sum << endl;
	  cout << "The Total of the Negative Numbers in the Array is " << neg << endl;

getch();
}

// Function 3 / Problem 4
void Count_Int(int elements4[10][10], int x4, int y4) {

	  int x, y, no, a = 0;

	  for (x = 1; x <= x4; x++) {
	     for (y = 1; y <= y4; y++) {
	      cout << "Element [" << x-1 << "][" << y-1 << "]" << ": ";
	      cin >> elements4[x-1][y-1];
	    }
	  }
	  cout << "------------------------------------------\n";

	  cout << "What number would you like to check? ";
	  cin >> no; cout << endl;

	  for (x = 1; x <= x4; x++) {
	     for (y = 1; y <= y4; y++) {
		if (elements4[x-1][y-1] == no) {
		  a++;
		}
	     }
	  }

	  if (a > 0) {
	     cout << "There is/are " << a << " Occurence/s of Integer " << no;
	  }

	  else {
	     cout << "There is No Occurences of Integer " << no << " in Array";
	  }

getch();
}

void sum_diagonal (int arr[][100], int row, int col)
{
    int pricipal_diagonal  = 0;
    int secondary_diagonal = 0;

    for (int c = 0; c < row; c++)
    {
        pricipal_diagonal += arr[c][c];
        col--;
        secondary_diagonal += arr[col][c];
    }

    cout << pricipal_diagonal << " " << secondary_diagonal;
}

void cMT(int table[][10], int size)
{

	for (int i = 1; i<= size; i++)
		{
			for (int j = 1; j<=10; j++)
			{
				table[i-1][j-1] = i * j;

			}


		}


}

void pMT(const int table[][10], int size)
{
	for(int i = 0; i < size; i++)
	{
		for (int j = 0; j < 10; j++)
		{
		 cout << table[i][j] << "\t";
		}

	      cout << endl;
	}


}

// STRUCTURE FUNCTIONS

//CASE 1
void grade()
{
	struct student
  {
    int roll_no;
    char name[30];
    int age;
    int marks;
  };
  struct student p1 = {1,"Brown",14,78};
  struct student p2 = {2,"Vaneric",19,95};
  cout << p1.roll_no << " " << p1.name << " " << p1.age << " " << p1.marks << "\n";
  cout << p2.roll_no << " " << p2.name << " " << p2.age << " " << p2.marks << "\n";

}

// CASE 2
void student()
{
	struct student
  {
    int roll_no;
    char name[50];
    int age;
  };

  struct student stud[5];

  for(int i=0; i<=4; i++)
  {
    cout << " \nStudent " << i+1 << endl;
    stud[i].roll_no = i+1;
    cout << "Enter name: ";
    cin >> stud[i].name;
    cout << "Enter age: ";
    cin >> stud[i].age;
  }

  for(int j=0; j<=4; j++)
  {
    if(stud[j].roll_no == 2)
    {
      cout << "\nStudent " << j+1 << endl;
      cout << "Roll no. : " << stud[j].roll_no << endl;
      cout << "Name : " << stud[j].name << endl;
      cout << "Age : " << stud[j].age << endl;
    }
  }

}

// CASE 4
struct Distance {
    int feet;
    float inch;
}d1 , d2, sum;

// CASE 6
struct complex
{

  int real;
  int imag;
};

struct complex add(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real+b.real;
  d.imag = a.imag+b.imag;
  return d;
}

struct complex sub(struct complex a, struct complex b)
{
  struct complex d;
  d.real = a.real-b.real;
  d.imag = a.imag-b.imag;
  return d;
}

struct complex multiply(struct complex a, struct complex b)
{
  struct complex d;
  d.real = (a.real*b.real)-(a.imag*b.imag);
  d.imag = (a.real*b.imag)+(a.imag*b.real);
  return d;
}

// CASE 13
void students()
{

struct student
{
    char name[50];
    int roll;
    float marks;
};

student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
}

// POINTERS

//Swap function to swap 2 numbers
void swappy(int *num1, int *num2)
{
    int temp;
    //Copy the value of num1 to some temp variable
    temp = *num1;
    //Copy the value of num2 to num1
    *num1 = *num2;
    //Copy the value of num1 stored in temp to num2
    *num2 = temp;
}

// TYPE DEF

void typedef_array()
{
	typedef int arr[3];
  
    // Making new 1D array

    arr array1 = { 1 , 1, 1};


    cout << "Array output: "
	 << "\n";
    for (int i = 0; i < 3; i++) {
	cout << array1[i] << " ";
    }
    cout << "\n";

    // Making new 2D array
    // Matrix is an array of arrays with size
    // ( 3 X 3 )
    arr matrix[3];

    cout << "Matrix output: "
	 << "\n";

    for (int h = 0; h < 3; h++) {
	for (int j = 0; j < 3; j++) {
	    // Initializing the matrix
	    matrix[h][j] = h * j;
	}
    }

    // Outputting the matrix

    for (int k = 0; k < 3; k++) {
	for (int j = 0; j < 3; j++) {
	    cout << matrix[k][j] << "  ";
	}
	cout << "\n";
    }

}

void data_pointer()
{
	int a = 10;
    int b = 20;
    // iPtr can now be used to create new pointers of type
    // int
    typedef int* iPtr;
  
    iPtr pointer_to_a = &a;
    iPtr pointer_to_b = &b;
  
    cout << "a is: " << *pointer_to_a << "\n";
    cout << "b is: " << *pointer_to_b << "\n";
}

void predefine()
{
	// ulli can now be used for making more
    // unsigned long long int type variables
    typedef unsigned long long int ulli;
    // ulli used to make variables
    ulli a = {123456789};
    cout << a;
}


//ACCOUNT SECURITY LOG IN.

void AccountLogin()
{
    system("cls");
    int inc = 1;
    int pin, pin2;
    int username, username2;

    cout<<" *************** SIGN UP PAGE *************** " <<endl;
    cout<<"----------------------------------------------" <<endl;
    cout<<endl;
cout << "Create User Pin Code: ";
cin >> username;
cout << "Create Password: ";
cin >> pin;
enterAgain:

    system("cls");

    cout<<" *************** LOGIN PAGE *************** "<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<endl;


cout << "Enter User Pin Code: ";
cin >> username2;
cout << "Enter Password: ";
cin >> pin2;


if(inc==3)//This Will Execute if 3 Failed to Log In.
{
    cout << "\n**** Account Has Been Locked **** ";
    getch();
    exit(0);
}

if(username!=username2)//This Will Execute if Incorrect User.
{
    cout << "\n **** Incorrect User Pin Code ****";
    getch();
    inc++;
    goto enterAgain;
}
else if(pin!=pin2)//This Will Execute if Incorrect Password.
{
    cout << "\n **** Incorrect Password ****";
    getch();
    inc++;
    goto enterAgain;
}

else if(username == username2 && pin == pin2)//This Will Execute If Both Correct User & Password.
{
    cout<<"\n **** Sucessfully Log In ! ****";
    getch();

}

}

int main ()
{
  system("cls");
  char choice, choices,choicez,choi,option,options,Subs,option1,option2,opinion,opinion1,opinion2;
  //AccountLogin();
  do {
  mainmenu();
  gotoxy (24,19); cout<<"Enter Your Choice: "<<endl;
  gotoxy (24,20); cin>>choice;

switch(choice)
{
  case 'A': system("cls");

	    do{

	    mainmenu2(); // SEQUENCE MAIN MENU

	    gotoxy (30,19); cout<<"Enter Your Choice: "<<endl;
	    gotoxy (30,20); cin>>choices;

    switch (choices)
    {
       case 'B': system("cls");
		 fourNum();//Function 1
		 getch();
		 break;

       case 'C': system("cls");
		 Quotient();//Function 1
		 getch();
		 break;

       case 'D': system("cls");
		 quadratic();//Function 1
		 getch();
		 break;

       case 'E': //Function 4
		 system("cls");
		 float scIn;
		 cout<<"Calculator for a Square and Cube of a Number"<<endl;
		 cout<<"Please Input a Number: ";
		 cin>>scIn;
		 cout<<"The Square of the Number is: ";
		 cout<<calculate_square(scIn)<<endl;
		 cout<<"The Square of the Number is: ";
		 cout<<calculate_cube(scIn);
		 getch();
		 break;

       case 'F': rectangle();//Function 1
		 getch();
		 break;

       case 'G': problem4();//Function 2
		 int x = 1, y = 2;
		 swap2(1,2);
		 swap2(x,y);
		 cout <<"\nx : ";
		 cin >>x;
		 cout <<"y : ";
		 cin >>y;
		 swap2(x,y);
		 getch();
		 break;

       case 'H': 
		 getch();
		 break;

       case 'I': SolvingMath();//Function 1
		 getch();
		 break;

       case 'J': Circle();//Function 1
		 getch();
		 break;

       case 'K': //Function 3
		 cout<<convert();
		 getch();
		 break;

       case 'L': //Function 3
		 cout<<tot_sales();
		 getch();
		 break;

       case 'M': //Function 3
		 cout<<change();
		 getch();
		 break;

       case 'N':
		 break;

       default : cout<<"\n **** Sorry, Wrong Choice Selected ****";
		 getch();
		 break;
 }
	   }while(choices<'M');
	    getch();
	    break;

  case 'B': system("cls");
	    do
	    {
	    mainmenu3(); // SELECTION MAIN MENU

	    gotoxy (10,15);cout<<"Enter Your Choice: ";
	    gotoxy (10,16);cin>>choicez;

  switch (choicez) {

       case 'A': posiNega();//FUNCTION 1
		 break;

       case 'B': //TYPE 2 FUNCTION

		 system("cls");

		 int num1;

		 cout<<"Odd Or Even Numbers"<<endl;
		 cout<<"----------------------------"<<endl;

		 cout<<"Enter a Number: ";
		 cin>>num1;

		 oddeven(num1);

		 getch();
		 break;

       case 'C': system("cls");//FUNCTION 3
		 int lar3=largest3();
		 cout<<lar3;
		 break;

       case 'D': system("cls");// FUNCTION 4
		 int lar2, nm1,nm2;
       cout<<"Largest Between Two Numbers"<<endl;
       cout<<"---------------------------"<<endl;

       cout<<"Enter First Number: ";
       cin>>nm1;
       cout<<"Enter Second Number: ";
       cin>>nm2;

       lar2=largest2(nm1,nm2);
       cout<<lar2;

       break;

       case 'E': PrimeNum();//FUNCTION 1
		 break;

       case 'F': Grade();//FUNCTION 1
		 break;

       case 'G': Salesman();//FUNCTION 1
		 break;

       case 'H': vowelcons();//FUNCTION 1
		 break;


       case 'I': break;

       default: cout<<" **** Sorry, Wrong Choice Selected ****"<<endl;
		getch();
		break;

     }
	    }while(choicez<'I');
	    getch();
	    break;

  case 'C': system("cls");
	    do
	    {
	    mainmenu4(); //LOOPS MAIN MENU

	     gotoxy (15,16); cout<<"Enter Your Choice: ";
	     gotoxy (15,17); cin>>choi;

  switch (choi)
  {
       case 'A': system("cls");//FUNCTION 2

       cout<<"Will Print Numbers from 1 to 10"<<endl;
       cout<<"-------------------------------"<<endl;
	      int num;

	      Numbers(num);

	       break;

       case 'B': system("cls");//FUNCTION 4

       cout<<"Print all even numbers from 1 to N"<<endl;
       cout<<"----------------------------------"<<endl;
	       int nums;
	       int even = evenNumbers(nums);
	       cout<<even;

	       break;

       case 'C': system("cls");//FUNCTION 3
		 int facts = Factorial();
		 cout<<facts;
		 break;

       case 'D': Fibonacci();//FUNCTION 1
		 break;

       case 'E': ReverseNum();//FUNCTION 1
		 break;

       case 'F': Palindrome();//FUNCTION 1
		 break;

       case 'G': Binary();//FUNCTION 1
		 break;

       case 'H': SumEven();//FUNCTION 1
		 break;

       case 'I': SquareEven();//FUNCTION 1
		 break;

       case 'J': Letters();//FUNCTION 1
		 break;

       case 'K': break;

       default :  cout<<" **** Sorry, Wrong Choice Selected ****"<<endl;
		  getch();
		  break;
  }

	    }while(choi<'J');
	    getch();
	    break;

  case 'D': system("cls");
        do {
        	mainmenu9(); // One Dimensional Array
        	
        	gotoxy (30,17); cout<<"Enter Your Choice: "<<endl;
  			gotoxy (30,18); cin>>option;
  			
  		switch(option)
{
  case 'A': system("cls");

	    Display_All_Evens();

	    int Evennumbers[10];
	    Display_All_Evenz(Evennumbers);
	    getch();
	    break;

  case 'B': system("cls");
	    Largest_Threes();

	    int arr[10];

	    Largest_Threez(arr);

	    getch();
	    break;

  case 'C': system("cls");
	    Total_Pos_Negs();

	    int sum[10];

	    Total_Pos_Negz(sum);

	    getch();
	    break;

  case 'D': system("cls");
	    Count_ints();
	    getch();
	    break;

  case 'E': system("cls");
        row();
	    getch();
	    break;

  case 'F': system("cls");
     	 int Size;
		cout << "Enter a size of 1D array: ";
		cin  >> Size;

		int arr1[100];

		for (int c = 0; c < Size; c++)
		{
		    cout << "Enter a number at index " << c << ": ";
		    cin  >> arr1[c];
		}

		cout << "The most occured element is: " << Most_occured (arr1, Size);
	    getch();
	    break;

  case 'G': 
            break; 

  default :
	    gotoxy(30,15); cout<<"**** Sorry, Wrong Choice Selected ****";
	    getch();
	    break;
    }
		}while(option<'G');
	        getch();
	        break;

  case 'E': system("cls");
          do{
		 mainmenu10(); // Two Dimensional Array
          	 
		 gotoxy(32,13); cout << "Enter Your Choice: "<<endl;
		 gotoxy(40,14); cin >> options;
	 		 
	 		 switch(options) {
	 case 'A': Display_All_Even(); // Function 1
		   system("cls"); // Function 3
		   gotoxy(34,2);
		   cout << "Display All The Even\n";
		   cout << "------------------------------------------------------------------------------\n";
		   int elements1[10][10], x1, y1;
		      cout << "Enter the Size of Array\n";
		      cout << "x: "; cin >> x1;
		      cout << "y; "; cin >> y1;
		      cout << "\n------------------------------------------------------------------------------\n";
		      cout << "Enter Values\n";
		   Display_All_Even(elements1, x1, y1);
		   getch();
		   break;
	 case 'B': Largest_Three(); // Function 1
		   system("cls"); // Function 3
		   gotoxy(34,2);
		   cout << "Largest Three Number\n";
		   cout << "------------------------------------------------------------------------------\n";
		   int x2, y2, elements2[10][10];
		     cout << "Enter the Size of Array\n";
		     cout << "x: "; cin >> x2;
		     cout << "y; "; cin >> y2;
		     cout << "\n------------------------------------------------------------------------------\n";
		     cout << "Enter Values\n";
		   Largest_Three(elements2, x2, y2);
		   getch();
		   break;
	 case 'C': TotalPosNeg(); // Function 1
		   system("cls"); // Function 3
		   gotoxy(28,2);
		   cout << "Total of Positive/Negative\n";
		   cout << "------------------------------------------------------------------------------\n";
		   int elements3[10][10], x3, y3;
		   cout << "Enter the Size of Array\n";
		   cout << "x: "; cin >> x3;
		   cout << "y; "; cin >> y3;
		   cout << "\n----------------------------------------------------------------------------\n";
		   cout << "Enter Values\n";
		   TotalPosNeg(elements3, x3, y3);
		   getch();
		   break;
	 case 'D': system("cls");
		   gotoxy(30,2);
		   cout << "Number of Occurence\n";
		   cout << "------------------------------------------------------------------------------\n";
		   int x4, y4, elements4[10][10];
		    cout << "Enter the Size of Array\n";
		    cout << "x: "; cin >> x4;
		    cout << "y; "; cin >> y4;
		    cout << "\n----------------------------------------------------------------------------\n";
		    cout << "Enter Values\n";
		   Count_Int(elements4, x4, y4);
		   getch();
		   break;

	 case 'E': system("cls");
	       int rows;
                int cols;

                cout << "Enter rows of 2D array: ";
                cin  >> rows;
                
                cout << "Enter columns of 2D array: ";
                cin  >> cols;

                int arr2[100][100];

                for (int c = 0; c < rows; c++)
                {
                    for (int a = 0; a < cols; a++)
                    {
                        cout << "Enter a number at index [" << c << "][" << a << "]: ";
                        cin  >> arr2[c][a]; 
                    }
                }

                sum_diagonal (arr2, rows, cols);
		   getch();
		   break;

	 case 'F': system("cls");
	 	   system("cls");

			int size;

			cout << "Enter the size of the multiplacation table: ";
			cin >> size;
			cout << "----------------------------------------------------------------------" << endl;

			int MT [100][10];

			cMT(MT, size);
			pMT(MT, size);

		   getch();
		   break;

	 case 'G': 
		   break;

	 default: gotoxy(33,13);
		  cout << "**** Sorry, Wrong Choice Selected ****";
		  getch();
	 }
		  }while(options<'G');
		getch();
		break;

  case 'F': system("cls");
		getch();
		break;

  case 'G': system("cls");
  		
         do{
		 mainmenu11(); // SUB MAIN MENU
		 
		 gotoxy(30,13);cout << "Enter Your Choice"<<endl;
		 gotoxy(30,14);cin>>Subs;
		 switch (Subs)
		 
		 {
		 	case 'A': system("cls");
		 	          do{
		 	          mainmenu12(); // STRUCTURES
					   
					   cout<<"\nEnter Your Choice: "<<endl;
   					   cin>>option1;
					
					switch(option1)
					{
	 case 'A': system("cls"); // STRUCTURE
     grade();
	 getch();
	 break;

 case 'B': system("cls");
     student();
	 getch();
	 break;

 case 'C': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: ROLL) <3";
      cout<<"Hindi pa nagana sa turbo c++ pero sa dev c naganap umay sa turbo c++";
	 getch();
	 break;

 case 'D': system("cls");
    cout << "Enter 1st distance," << endl;
    cout << "Enter feet: ";
    cin >> d1.feet;
    cout << "Enter inch: ";
    cin >> d1.inch;

    cout << "\nEnter information for 2nd distance" << endl;
    cout << "Enter feet: ";
    cin >> d2.feet;
    cout << "Enter inch: ";
    cin >> d2.inch;

    sum.feet = d1.feet+d2.feet;
    sum.inch = d1.inch+d2.inch;

    // changing to feet if inch is greater than 12
    if(sum.inch > 12) {
        // extra feet
        int extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    } 

    cout << endl << "Sum of distances = " << sum.feet << " feet  " << sum.inch << " inches";
	 getch();
	 break;

 case 'E': system("cls");
 	 cout<<"Done na Nasa Kabilang File (File name: MARKS) <3";
	 getch();
	 break;

 case 'F': system("cls");
  struct complex d1 = {12,2};
  struct complex d2 = {14,11};

  struct complex d = add(d1,d2);
  struct complex e = sub(d1,d2);
  struct complex f = multiply(d1,d2);

  cout<<" ADDITION, SUBTRACTION, MULTIPLY "<<endl;
  cout<<"================================="<<endl;

  cout << "\nADD - " << d.real << " + " << d.imag << "i\n";
  cout << "\nSUB - " << e.real << " + " << e.imag << "i\n";
  cout << "\nMUL - " << f.real << " + " << f.imag << "i\n"; 
	 getch();
	 break;

 case 'G': system("cls");
    cout<<"Done na Nasa Kabilang File (File name: STOREINFO) <3";
	 getch();
	 break;

 case 'H': system("cls");
     cout<<"Done na Nasa Kabilang File (File name: BANK) <3"; 
	 getch();
	 break;

 case 'I': system("cls");
     cout<<"Done na Nasa Kabilang File (File name: DATE) <3";
	 getch();
	 break;

 case 'J': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: EMPLOYEE) <3";
	  getch();
	  break;

 case 'K': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: BOOK) <3";
	  getch();
	  break;

 case 'L': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: BUWAN) <3";
	  getch();
	  break;

 case 'M': system("cls");
      students();
	  getch();
	  break;
	  
 case 'N': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: COMPLEX) <3";
	  getch();
	  break;
	  
 case 'O': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: TIME) <3";
	  getch();
	  break;
	  
 case 'P': system("cls");
      cout<<"Done na Nasa Kabilang File (File name: STUDENT) <3";
	  getch();
	  break;
	  
 case 'Q':
	     break;

 default: 	cout << "**** Sorry, Wrong Choice Selected ****";
	  getch();
	  break;
					  	
					}	
					   }while(option1 < 'Q');
		 			  getch();
					  break;  	
					  
			case 'B': system("cls");
			          do{
			          mainmenu13(); // POINTERS
					  
					  gotoxy(20,14);cout <<"Enter your choice:" <<endl;
  					  gotoxy(20,15);cin >>option2;
					
					switch(option2)
{
  case 'A':{
           system("cls");
        int num1, num2;
    //Inputting 2 numbers from user
    cout << "\nEnter the first number : ";
    cin >> num1;
    cout << "\nEnter the Second number : ";
    cin >> num2;
    //Passing the addresses of num1 and num2
    swappy(&num1, &num2);
    //Printing the swapped values of num1 and num2
    cout << "\nFirst number : " << num1;
    cout << "\nSecond number: " << num2;
}
	    getch();
	    break;

  case 'B': {
    system("cls");
    int num1, num2, *ptr1, *ptr2, sum=0;
    cout<<"Enter the two number :";
    cin>>num1>>num2;
    ptr1 = &num1;
    ptr2 = &num2;
    sum = *ptr1 + *ptr2;
    cout<<"Sum of the two number is "<<sum;
    }
	    getch();
	    break;

  case 'C': {
  system("cls");
  int arr[5], i, sum = 0;
    int *ptr;
 
    cout << "Enter any 5 numbers :";
    for (i = 0; i < 5; i++) {
        cin >> arr[i];
    }
 
    ptr = arr;
    for (i = 0; i < 5; i++) {
        sum = sum + *(ptr + i);
    }
 
    cout << "\nSum of array elements :" << sum;
    }
	    getch();
	    break;
       
  case 'D': {
  system("cls");
  char text[MAX_SIZE];
    char * str = text;
    int count = 0;
 
    // Inputtin string from user
    cout<<"Enter any string: ";
    cin>>text;
 
    // Iterating though last element of the string
    while(*(str++) != '\0') count++;
 
    cout<<"Length of "<<text<<" is "<<count;
    }
	    getch();
	    break;

  case 'E': {
  system("cls");
        char text1[MAX_SIZE], text2[MAX_SIZE];
    char * str1 = text1;
    char * str2 = text2;
 
    // Inputting string from user
    cout<<"Enter any string: "<<endl;
    cin>>text1;
 
    // Coping text1 to text2 character by character
    while(*(str2++) = *(str1++));

    cout<<"First string: "<<text1<<endl;;
    cout<<"Second string: "<<text2<<endl;
    }
	    getch();
	    break;

  case 'F': {
  system("cls");
  char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;
 
    // Inputting 2 strings from user
    cout<<"Enter 1st string: ";
    cin>>str1;
    cout<<"Enter 2nd string: ";
    cin>>str2;
 
    // Moving till the end of str1
    while(*(++s1));
 
    // Coping str2 to str1
    while(*(s1++) = *(s2++));
 
    cout<<"Concatenated string:"<<str1;
    }
	    getch();
	    break;

  case 'G': {
  system("cls");
  	 int arr[5],i;
     int *p=arr;
     cout<<"Enter five numbers separated by space:";
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4);
     cout<<"Your entered numbers in reverse order are:\n";
     for(i=4;i>=0;i--)
     cout<<*(p+i)<<endl;
        }
	    getch();
	    break;

  case 'H':
	    break;

  default: cout<<"Invalid Number";
	   getch();
	   break;
    }
							
					  }while(option2<'H');
		 			  getch();
					  break;  	
					  
			case 'C': system("cls");
		 			  getch();
					  break;  	
					  
			case 'D': system("cls");
		 			  getch();
					  break;  	
					  
			case 'E': system("cls");
		 			  getch();
					  break;  	
					  
			case 'F': 
					  break;	
					  
		    default: gotoxy(33,13);
		  	cout << "**** Sorry, Wrong Choice Selected ****";
		  	getch(); 	
					  
		 }
	}while(Subs < 'F');
		getch();
		break;

  case 'H': system("cls");
	        getch();
	        break;
	        
  case 'J': 
	        exit(0);
	        break;	

  default :
	    gotoxy(24,16);
	    cout<<" **** Sorry, Wrong Choice Selected ****"<<endl;
	    getch();
	    break;

    }
   }while(choice<'J');
return 0;
}