#include <iostream>
using namespace std;


int main()
{

int n = 5;
cout << n << endl; // printing the value of n
cout << &n<< endl; // printing the the address of variable n

int * ptr = &n;
cout << ptr << endl;
cout << *ptr << endl;
*ptr=10;
cout << *ptr << endl;
cout << n << endl; 

/*

int *ptr2;
ptr2 = 7;       // mag eerror kasi wala pang address yung ptr2 kaya need 
                //mag declare muna ng new variable tapos iaassign yung address non sa ptr2 gamit yung &


*/
// pointers is only applicable to same data type

int v;
int *ptr2=&v;
*ptr2 = 7; 

cout<<endl; 
cout<<endl; 
cout<<ptr2; 

return 0;
}