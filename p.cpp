#include <iostream>
using namespace std;


int main()
{
    int *p; // datatype *identifier, pwede din ganto i declare  /// int* p  //// int* p, a (yung p lang yung pointer) /// int *p, *a  (pointer dalawa)

            // & - address of operator - return the adress of the opperand, * - dereferencing operator 
int x =  25;        //& - para makuha o makita yung address ng variable, * - can handle both address and value

p=&x; // stores the address of x in variable p

cout << p;

return 0;
}