// Jan Leo Egamen || BSIT 1-1
#ifndef MYLIBRARY_H_
#define MYLIBRARY_H_
#include <windows.h>
using namespace std;

namespace MYLIBRARY_H_{
    
    

// Gotoxy and Box
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


    void Box(int x1, int x2, int y1, int y2){
            for (x1=x1;y1<=y2;y1++){
                gotoxy(y1,x1);cout <<"*";
                gotoxy(y1,x2);cout <<"*";
                Sleep(30);
            }
            for (y1=x1;x1<=x2;x1++){
                gotoxy(y2,x1);cout <<"*";
                gotoxy(y1,x1);cout <<"*";
                Sleep(30);
            }
    }
    
    
    //SEQUENCE
    //category 1 no argument and no return value
    void total4(){
        float Total, Ave;
        int n1, n2, n3, n4;
        cout << "Problem 1:"<<endl;
        cout << "Compute the total average of four numbers:"<<endl;
        cout << "----------------------------"<<endl;
        cout << "Input the first two numbers (separated by space):";
        cin >> n1 >> n2;
        cout << "Input the last two numbers (separated by space):";
        cin >> n3 >> n4;
        
        Total = n1+n2+n3+n4;
        Ave = Total/4;

        cout << "The total of four numbers is:"<<Total<<endl;
        cout << "The average of four numbers is:"<< Ave<< endl;
        cout << "----------------------------"<<endl;
    }
    // no return value and no argument
    void Qr(){
        int dividend, divisor, quo, rem;
        cout << "Problem 2:"<<endl;
        cout << "Compute the quotient and remainder:"<<endl;
        cout << "----------------------------"<<endl;
        
    }
    // With arguments and no return value
    void Qr2(int dividend, int divisor){
        int  quo, rem;

        quo = dividend/divisor;
        rem = dividend%divisor;

        cout << "The quotient of the division is:"<<quo<<endl;
        cout << "The remainder of the division is:"<<rem<<endl;
        cout << "----------------------------"<<endl;
    }

    //category 1 no argument and no return value
    void SquareRoot(){
        float a, b, c, D, r1, r2, realPart, imaginaryPart;

        cout << "Problem 3:"<<endl;
        cout << "Compute  for the roots of quadratic equation: "<<endl;
        cout << "----------------------------"<<endl;
        cout << "Input the value of a, b and c (separated by space):";
        cin >> a >> b >> c;
        D = b * b - 4* a * c;
        
        if (D<0) {
        realPart = (float) -b/(2*a);
        imaginaryPart =sqrt(-D)/(2*a);
        cout << "Roots are complex and different." << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;   
        }
        else if (D==0) {
        r1 = (-b + sqrt(D)) / (2*a);  
        cout << "Roots are real and same." << endl;
        cout << "Root 1 and Root 2 = " << r1 << endl;
        }
        else{
        realPart = (float) -b/(2*a);
        imaginaryPart =sqrt(-D)/(2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2 << endl;  
        }
        cout << "----------------------------"<<endl;
    }


    void SquareCube(){
        int num, square, cube;    
        cout << "Problem 4:"<<endl;
        cout << "Compute the square and cube of the number:"<<endl;
        cout << "----------------------------"<<endl;
    }
    // category 4 with arguument and returns a value
    int SquareCube2(int num){
        return num * num;
    }
    int SquareCube3(int num){
        int cube;
        cube = num * num * num;
        return cube;
    }


    void AreaPerimeterRectangle(){
        float l, w, area, perimeter;
        cout << "Problem 5:"<<endl;
        cout << "Compute the area and perimeter of the rectangle:"<<endl;
        cout << "----------------------------"<<endl;
    }

    //category 4 with argument and return a value
    float AreaPerimeterRectangle2(float l, float w){
        float area, perimeter;
        area = l*w;
        return area;    
    }
    //category 4 with argument and retur a value
    float AreaPerimeterRectangle3(float l, float w){
        float area, perimeter;
        return 2 * (l + w); 
    }

    void swap(){

        double temp, a, b;
        cout << "Problem 6:"<<endl;
        cout << "Swapping the vakue of the variables:"<<endl;
        cout << "----------------------------"<<endl;
        cout << "a = ";
        cin >> a;
        cout << "b = ";
        cin >> b;
        
        temp = a;
        a = b;
        b = temp;
        cout << "Swapped values: "<< endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << "----------------------------"<<endl;


    }
    void GpNp(){
        char Ename[100];
        float Enum, numOfhoursWorked, ratePerhour, grossPay, netPay;
        cout << "Problem 7:"<<endl;
        cout << "Compute the Gross and Net Pay of the employee:"<<endl;
        cout << "----------------------------"<<endl;
        cout << "Input Employee name: ";
        cin.getline(Ename, 100);
        cout << "Input Employee number: ";
        cin >> Enum;
        cout << "Input number of hours worked: ";
        cin >> numOfhoursWorked;
        cout << "Input rate per hour: ";
        cin >> ratePerhour;
        
        grossPay = numOfhoursWorked * ratePerhour;
        netPay = grossPay - (grossPay * 0.1);
        
        cout << "Gross Pay: " << grossPay << endl;
        cout << "Net Pay: " << netPay << endl;
        cout << "----------------------------"<<endl;
        }

    //category 1 no argument and no return value
    void sdpq(){
        float num1, num2, sum, difference, product, quotient;    
        cout << "Problem 8:"<<endl;
        cout << "Compute the sum, difference, product and quotiet:"<<endl;
        cout << "----------------------------"<<endl;
        cout << "Input first number: ";
        cin >> num1;
        cout << "Input last number: ";
        cin >> num2;
        
        sum = num1 + num2;
        difference = num1 - num2;
        product = num1 * num2;
        quotient = num1 / num2;
        
        cout <<"The sum of two numbers is: " << sum << endl;
        cout <<"The difference of two numbers is: " << difference << endl;
        cout <<"The product of two numbers is: " << product << endl;
        cout <<"The quotient of two numbers is: " << quotient << endl;
        cout << "----------------------------"<<endl;
    }

    void AreaCricumCircle(){
        cout << "Problem 9:"<<endl;
        cout << "Compute the area and circumference of the circle:"<<endl;
        cout << "----------------------------"<<endl;
    }

    // with argument and return a value
    float AreaCricumCircle2(float d){
        float area, r, pi = 3.14159;
        r = d / 2;
        area = pi * (r * r);
        return area;
    }
    // with argument and return a value
    float AreaCricumCircle3(float d){
        float  pi = 3.14159;
        return pi * d;
        
    }


    void celfah(){
        cout << "Problem 10:"<<endl;
        cout << "Convert celsius to fahrenheit:"<<endl;
        cout << "----------------------------"<<endl;
    }

    //Category 3 no argument and return a value
    float celfah2(){
        int cel, fah;
        cout << "Input celsius: ";
        cin >> cel;
        fah = (cel * 1.8) + 32;
        cout << "Fahrenheit: ";
        return fah;
    }

    void totalS(){
        cout << "Problem 11:"<<endl;
        cout << "Compute for the total sales:"<<endl;
        cout << "----------------------------"<<endl;
    }

    //Category 3 no argument and return a value
    float totalS2(){
        float usold, uprice, totalSales;
        cout << "Input unit sold: ";
        cin >> usold;
        cout << "Input unit price: ";
        cin >> uprice;    
        totalSales = usold * uprice;
        cout << "Total Sales: ";
        return totalSales;
    }


    void Change(){
        float orderNum, amountOforder, amountTender, change;
        cout << "Problem 12:"<<endl;
        cout << "Compute for the change:"<<endl;
        cout << "----------------------------"<<endl;
    }
    float Change2(){
        float orderNum, amountOforder, amountTender, change;
        cout << "Input order number: ";
        cin >> orderNum;
        cout << "Input amount of order: ";
        cin >> amountOforder;
        cout << "Input amount tender: ";
        cin >> amountTender;
            
        cout << "Change: ";
        return amountTender - (orderNum * amountOforder);
    }

//SELECTION
void PoNegaNeu(){
cout << "Positive, Negative or Neutral" << endl;
cout << "-----------------------------" << endl;
cout << "Enter a number: ";
}
// with argument and no return value
void PoNegaNeu2(int num){
    if (num==0){
        cout << num << " is Neutral"<< endl<< endl;
    }
    else {
        if(num>0){
            cout << num << " is Positive"<< endl<< endl;
        }
        else{
            cout << num << " is Negative"<< endl<< endl;
        }
    }
}

void OddEven(){
cout << "Odd or Even" << endl;
cout << "-----------------------------" << endl;
cout << "Enter a number: ";
}
// no argument and and returns a value
string OddEven2(){
    int Num;
    string ODD = "is Odd", EVEN = "is Even";
    cin >> Num;

    if (Num%2==0){
        cout << Num;
        return EVEN;
    }
    else{
        cout << Num << " is Odd"<< endl<< endl;
        return ODD;
    }
}

void num3(){
cout << "Largest among 3 numbers" << endl;
cout << "-----------------------------" << endl;

}
// with argument and return a value
int num33(int numOne, int numTwo, int numThree){

    if (numOne>numTwo){
        if (numOne>numThree){
            return numOne;
        }
        else {
            return numThree;
        }
    }
    else{
        if(numTwo>numThree){
            return numTwo;
        }
        else {
            return numThree;
        }
    }
}

void num2(){
int num1, num2;
cout << "Largest among 2 numbers" << endl;
cout << "-----------------------------" << endl;
}
// with argument and return a value
int num22(int n1, int n2){
     if (n1>n2){
        return n1;
    }
    else {
        return n2;
    }
}

void Prime(){
    int n, f;
cout << "Prime or not" << endl;
cout << "-----------------------------" << endl;

    cout << "Enter number:";
    cin >> n;
    if (n==0){
    cout << n << " is not Prime"<< endl;
    }
    else{
        for (int i=2; i < n; i++){
            if (n%i==0){
                f++; //or factor = factor+1;
            }
            
        }
    if (f>1){
        cout << n << " is not Prime"<< endl<< endl;
           }
    else{
        cout << n << " is Prime"<< endl<< endl;
        }
        }   

}

void Ave(){
    double prelim, midterm, finals, average;
cout << "Average Calculator" << endl;
cout << "-----------------------------" << endl;
}
// with arguments and no return value
void Ave2(double prelim, double midterm, double finals){
    double average;
    average = (prelim+midterm+finals)/3;
    cout << "Average: "<< average << endl;
    if (average<75){
        cout << "Failed"<< endl<< endl;
    }
    else {
        cout << "Passed"<< endl<< endl;
    }
}

void Com(){
cout << "Salesman Commission Calculator" << endl;
cout << "-----------------------------" << endl;
}
//return a value and have an argument
double Com2(double usold, double uprice){
    double totalSales, commision;
    
    totalSales = usold * uprice;

    if (totalSales<=10000){
        return totalSales * 0.10;
    }
    else if (totalSales<=15000){
        return totalSales * 0.15;
    }
    else if(totalSales<=20000){
        return totalSales * 0.20;
    }
    else{
        return  totalSales * 0.30;
    }
}
double Com3(double usold, double uprice){
    double totalSales;
    totalSales = usold * uprice;
    return totalSales;
}
//no argument and no return value
void VoCo(){
cout << "Vowel or Consonant" << endl;
cout << "-----------------------------" << endl;
}
// no argument and return a value
string VoCo2(){
    char letter;
    string VOWEL = " is Vowel", CONSO = "is Consonant";

    cout << "Enter a leter: ";
    cin >> letter;
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
        cout << letter; 
        return VOWEL;
    }
    else{
        cout << letter; 
        return CONSO;
    }
}

    void PUP(){   float Prelim, Midterm, Finals, ave=0;
cout << "PUP GWA Computer" << endl;
cout << "-----------------------------" << endl;    
    cout << "Input prelim: ";
    cin >> Prelim;
    cout << "Input midterm: ";
    cin >> Midterm;
    cout << "Input finals: ";
    cin >> Finals;
    ave = (Prelim+Midterm+Finals)/3;

    if(ave>=97 && ave<=100){
        cout << "Exellent! your GWA is 1.0"<< endl;
    }
    else if(ave>=94 && ave<=96){
        cout << "Exellent! your GWA is 1.25"<< endl;
    }
    else if(ave>=91 && ave<=93){
        cout << "Very Good! your GWA is 1.5"<< endl;
    }
    else if(ave>88 && ave<=90){
        cout << "Very Good! your GWA is 1.75"<< endl;
    }
    else if(ave>=85 && ave<=87){
        cout << "Good! your GWA is 2.0"<< endl;
    }
    else if(ave>=82 && ave<=84){
        cout << "Good! your GWA is 2.25"<< endl;
    }
    else if(ave>=76 && ave<=78){
        cout << "Satisfactory! your GWA is 2.5"<< endl;
    }
    else if(ave>=97 && ave<=100){
        cout << "Satisfactory your GWA is 2.75"<< endl;
    }
    else if(ave>=97 && ave<=100){
        cout << "Passed! your GWA is 3.0"<< endl;
    }
    else{
        cout << "INCOMPLETE, Please contact your Prof. " << endl;
    }
 }
//LOOPS
void Reverse(){   cout << "Reverse of a number" << endl;
    cout << "----------------------------"<< endl;
 }
 // return a value and with argument
int Reverse2(int Num){
    int rev=0, r;
while (Num!=0){
    r= Num%10;
    rev = ((rev*10) + r);
    Num = Num /10;
}
return rev;
}

void SumofEven(){   cout << "Sum of all even numbers" << endl;
    cout << "----------------------------"<< endl;

}
// return a value without argument
int SumofEven2(){
    int Nums, sum=0;
    cout << "Enter number: ";
    cin >> Nums;

for(int number =1; number <=Nums; number++){
    if(number%2==0){
        sum = sum + number;
    }
}
cout << "Sum of all even numbers: " ;
return sum;
}

void SumofEvenSquare(){   cout << "Sum of all the squared even numbers" << endl;
    cout << "----------------------------"<< endl;
    int N, n, M, square, sumOfSquare=0;
    cout << "Enter first number: ";
    cin >> N;
    cout << "Enter second number: ";
    cin >> M;
    n = N;
    while (N<=M){
    if (N%2==0){
        square = N*N;
        sumOfSquare =  sumOfSquare + square;
    }
    N++; // or N = N+1
}
cout << "The sum of square of all even number from "<< n << " to " << M << " is: " << sumOfSquare << endl;
}

void SumofEventoInput(){   
    cout << "Sum of all the even numbers from 1 to inputted number" << endl;
    cout << "----------------------------"<< endl;
}
int SumofEventoInput2(int N){   
    int sum=0;
    for(int num =1; num <=N; num++){
        if(num%2==0){
            sum = sum + num;
        }
    }
        return sum;
}

void Onetoten(){   cout << "Display numbers from 1-10" << endl;
    cout << "----------------------------"<< endl;
    int a = 1;
    do {
        cout << a;
        a = a +1;
    }while(a<11);}

void AtoZ(){   cout << "Display A - Z" << endl;
    cout << "----------------------------"<< endl;
    for (char alp ='A'; alp<='Z'; alp++ ){
    cout << alp << " ";
}}

void Palindrome(){   cout << "Palindrome word checker" << endl;
    cout << "----------------------------"<< endl;
}
// no argument and return a value
string Palindrome2(){
    int i = 0, length;
    string word, p=" is palindrome", np=" is not palindrome";
    bool pal = true;

    cout << "Enter a word: ";
    cin >> word;
    length = word.length() - 1;
    for (int i = 0; i <= length; i++, length--){
        if(word[i] != word[length]){
            pal = false;
        }
    }
    if (pal){
        cout << word;
        return p;
    } else {
        cout << word;
        return np;
    }
}

void Factorial(){   cout << "Factorial of a number" << endl;
    cout << "----------------------------"<< endl;
}
// return    a value and with argument
int Factorial2(int n1){
    int  factor = 1;
    for(n1; n1 >0; n1--){
        factor = factor * n1;
    }
    return factor;
}

void Binary(){   cout << "Decimal to Binary Conversion" << endl;
    cout << "----------------------------"<< endl;
}// no return a value and with argument
void Binary2(int dec){
    int bin[10], s1=0;
    for (s1; dec!=0; s1++){
        bin[s1] = dec %2;
        dec = dec/2;
    }
    cout << "Binary: ";
    for(s1=s1-1; s1>0; s1-- ){
        cout << bin[s1];
    } 
    cout << "0" << endl << endl; // additional 0 at the end because the final 0 
}
// no return a value and with argument
void Fibonacci(){   cout << "Fibonacci sequence" << endl;
    cout << "----------------------------"<< endl;
}
void Fibonacci2(int Nnn){
    int f1=0, f2=1, f3, in;
    cout << "Fibonacci Series: 0";
    for( in = 0; in < Nnn; ++in){
        f3 = f1+f2;
        cout << f3 <<" ";
        f1= f2;
        f2=f3;
    }
    cout << endl;
}




// For loops Statements
void ForTriangle(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << "* ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInverted(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << "* ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForTriangleNumber(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << a << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForTriangleNumber2(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << b << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInvertedNumber(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << a << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInvertedNumber2(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << b << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

//While Loop
void WhileTriangle(int row){
        int a = 1;
    while(a<=row){
        int b = 1;
    while(b<=a){
        cout <<"* ";
        Sleep(30);
        b++;
    }
        cout << endl;
        a++;
}
}

void WhileInverted(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
            cout << "* ";
            Sleep(30);
            b++;
    }
        cout << endl;
        a++;
}
}

void WhileTriangleNumber(int row){
        int a = 1;
    while(a<=row){
        int b=1;
    while(b<=a){
        cout << a <<" ";
        Sleep(30);
        b++;
    }
        cout << endl;
        a++;
}
}

void WhileTriangleNumber2(int row){
        int a = 1;
    while(a<=row){
        int b=1;
    while(b<=a){
        cout << b <<" ";
        Sleep(30);  
        b++;
    }
    cout << endl;
    a++;
}

}

void WhileInvertedNumber(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
        cout << a <<" ";
        Sleep(30);
        b++;
    }
    cout << endl;
    a++;
}
}

void WhileInvertedNumber2(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
        cout << b <<" ";
        Sleep(30);
        b++;
    }
    cout << endl;
    a++;
}
}

// Do while 
void DoWhileTriangle(int row){
        int a=1;
    do {
        int b=1;
        do {
            cout << "* ";
            Sleep(30);
            b++;
        }while(b<=a);
            cout << endl;
            a++;
    }while(a<=row);
}

void DoWhileInverted(int row){
    int a=1;
    do {
        int b=a;
        do {
            cout << "* ";
            Sleep(30);
            b++;
        }while(b<=row);
            cout << endl;
            a++;
    }while(a<=row);
}

void DoWhileTriangleNumber(int row){
        int a=1;
    do {
        int b=1;
        do {
        cout << a << " ";
        Sleep(30);
        b++;
        }while(b<=a);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileTriangleNumber2(int row){
        int a=1;
    do {
        int b=1;
        do {
        cout << b <<" ";
        Sleep(30);
        b++;
        }while(b<=a);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileInvertedNumber(int row){
        int a=1;
    do {
        int b=a;
        do {
        cout << a <<" ";
        Sleep(30);
        b++;
        }while(b<=row);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileInvertedNumber2(int row){
    int a=1;
    do {
        int b=a;
        do {
        cout << b <<" ";
        Sleep(30);
        b++;
        }while(b<=row);
        cout << endl;
        a++;
    }while(a<=row);
}
void Account() // this function is for creating and entering username and pin
{
    int Attempt=3;
    int pin=10604, pin2;
    string username="Egamen@cp2", username2;

    
    // for creating account
    
    int choice;

    enterAgain: // This is the label para bumalik dito kapag incorrect yung pin at username

    system("cls");
    Box(1,24,1,79);
    Box(5,20,5,75);

    gotoxy(23,10);
    cout << "Enter User Name: ";
    cin >> username2;
    gotoxy(23,12);
    cout << "Enter Pin: ";
    cin >> pin2;

    if(Attempt==0){ // automatic na maglolock yung account pag hindi tugma yung inenter na info sa created account
        system("cls");
        cout << "Account Locked";
        exit(0);
    }
    
    if(pin2==10604&&username2=="Egamen@cp2"){//username and pin
    gotoxy(10,15);
    cout << "Dear user, this Program is created by Jan Leo Egamen."<< endl;
    gotoxy(10,16);
    cout << "I hope you enjoy this, please give me a feedback, thanks!"<< endl;}

    else if(username!=username2){
        Attempt--;
        gotoxy(23,14);  
        cout << "Incorrect username! " << endl;
        gotoxy(23,16);
        cout << "Attempt Left: " << Attempt;
        getch();
        
        goto enterAgain;
    }
    else if(pin!=pin2){
        Attempt--;
        gotoxy(23,14);
        cout << "Incorrect pin!" << endl;
        gotoxy(23,16);
        cout << "Attempt Left: " << Attempt;
        getch();
        
        goto enterAgain;
    }
    
}



//1d array


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

//2d array
//function with no argument but no return value
void Display_All_Even2d(){
cout << "All Even numbers inputted in Array:"<<endl;
cout <<"----------------------"<<endl;
}
//function with argument but no return value
void Display_All_Even2d(int element[][100], int row, int col){
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

void Largest_Three2d(){
    cout << "Checker of the highest 3 inputted in Array:"<<endl;
    cout <<"----------------------"<<endl;
}
//function to output the largest three in array
void Largest_Three2d(int element[][100],int row, int col){
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

void TotalPosNeg2d(){
    cout << "Total of Positive and Negative Number"<<endl;
    cout <<"----------------------"<<endl;
}
//function to compute the total positive and negative in array
void TotalPosNeg2d(int element[][100],int row, int col){

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

void Count_int2d(){
    cout << "Occurence of the number inputted"<<endl;
    cout <<"----------------------"<<endl;
}
//function for counting the occurrence of a number in array 
void Count_int2d(int element[][100],int num, int row, int col){
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


void Sum_Diagonal2d (int arr[][100], int row, int col)
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

void Multiplication_Table2d(){
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

//pointers
void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void addNumbers(int* num1, int* num2) {
    int sum = *num1 + *num2;
    cout << "Sum: " << sum << endl;
}

int getArraySum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int getStringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void copyString(const char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

void concatenateStrings(const char* str1, const char* str2, char* result) {
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


// struct


struct Distance {
    int feet;
    float inch;
};

struct Marks {
    int rollNo;
    string name;
    float chemMarks;
    float mathsMarks;
    float phyMarks;
};

struct Complex {
    float real;
    float imag;
};

struct StudentInfo {
    int rollNo;
    string name;
    int age;
    string address;
    int marks;
};

struct Customer {
    string name;
    int accountNumber;
    float balance;
};

struct Date__ {
    int day;
    int month;
    int year;
};
void printStudentNamesWithAge14(StudentInfo students[], int numStudents) {
    cout << "Names of students with age 14:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].age == 14) {
            cout << students[i].name << endl;
        }
    }
}

void printStudentNamesWithEvenRollNo(StudentInfo students[], int numStudents) {
    cout << "Names of students with even roll number:" << endl;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo % 2 == 0) {
            cout << students[i].name << endl;
        }
    }
}

void displayStudentDetails(StudentInfo students[], int numStudents, int rollNo) {
    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].rollNo == rollNo) {
            cout << "Details of student with roll number " << rollNo << ":" << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with roll number " << rollNo << " not found." << endl;
    }
}

void printCustomerNamesWithBalanceLessThan200(Customer customers[], int numCustomers) {
    cout << "Names of customers with balance less than $200:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 200) {
            cout << customers[i].name << endl;
        }
    }
}

void incrementBalanceOfCustomers(Customer customers[], int numCustomers) {
    cout << "Balance after adding $100 to customers with balance more than $1000:" << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance > 1000) {
            customers[i].balance += 100;
        }
        cout << customers[i].name << ": $" << customers[i].balance << endl;
    }
}

//struct 2


struct Employee {
    string name;
    float salary;
    int hoursWorked;
};

void increaseSalary(Employee& employee) {
    if (employee.hoursWorked >= 12) {
        employee.salary += 150;
    } else if (employee.hoursWorked >= 10) {
        employee.salary += 100;
    } else if (employee.hoursWorked >= 8) {
        employee.salary += 50;
    }
}

void displayEmployees(const Employee employees[], int numEmployees) {
    cout << "Employees' Final Salaries:" << endl;
    for (int i = 0; i < numEmployees; i++) {
        cout << "Name: " << employees[i].name << ", Salary: $" << employees[i].salary << endl;
    }
}

struct Book {
    int accessionNumber;
    string author;
    string title;
    bool isIssued;
};

void addBook(Book library[], int& numBooks) {
    cout << "Enter the book information:" << endl;
    cout << "Accession Number: ";
    cin >> library[numBooks].accessionNumber;
    cout << "Author: ";
    cin.ignore();
    getline(cin, library[numBooks].author);
    cout << "Title: ";
    getline(cin, library[numBooks].title);
    library[numBooks].isIssued = false;

    numBooks++;
}

void displayBooksByAuthor(const Book library[], int numBooks) {
    string author;
    cout << "Enter the author's name: ";
    cin.ignore();
    getline(cin, author);

    cout << "Books by Author " << author << ":" << endl;
    bool found = false;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].author == author) {
            cout << "Accession Number: " << library[i].accessionNumber << ", Title: " << library[i].title << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No books found by Author " << author << "." << endl;
    }
}

void displayNumberOfBooksByTitle(const Book library[], int numBooks) {
    string title;
    cout << "Enter the title: ";
    cin.ignore();
    getline(cin, title);

    int count = 0;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].title == title) {
            count++;
        }
    }

    cout << "Number of books with title " << title << ": " << count << endl;
}

void displayTotalNumberOfBooks(int numBooks) {
    cout << "Total number of books in the library: " << numBooks << endl;
}

void issueBook(Book library[], int numBooks) {
    int accessionNumber;
    cout << "Enter the accession number of the book to issue: ";
    cin >> accessionNumber;

    bool found = false;
    for (int i = 0; i < numBooks; i++) {
        if (library[i].accessionNumber == accessionNumber) {
            if (library[i].isIssued) {
                cout << "Book with accession number " << accessionNumber << " is already issued." << endl;
            } else {
                library[i].isIssued = true;
                cout << "Book with accession number " << accessionNumber << " has been issued." << endl;
            }
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Book with accession number " << accessionNumber << " not found in the library." << endl;
    }
}

struct Date {
    int day;
    int month;
    int year;
};

void addDaysToDate(Date& date, int days) {
    date.day += days;

    while (date.day > 30) {
        date.day -= 30;
        date.month++;
        if (date.month > 12) {
            date.month = 1;
            date.year++;
        }
    }
}

void displayDate(const Date& date) {
    cout << "Date: " << date.day << "/" << date.month << "/" << date.year << endl;
}



}
#endif