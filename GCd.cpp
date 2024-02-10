#include <iostream>
using namespace std;
/*
int GCD(int n1, int n2)
{
    if (n2 != 0)
       return GCD(n2, n1 % n2);
    else 
       return n1;
}


int main()
{
   int n1, n2;

   cout << "Enter numbers: ";
   cin >> n1 >> n2;

   cout << "GCD of : " << GCD(n1, n2);

   return 0;
}

*/

int GCD(int n1, int n2){
    int gcd=0;
 for( int i=1; i<=n1 && i<=n1; i++)
 {
    if(n1 %i==0 && n2%i == 0){
        gcd=i;
    }
 }
return gcd;
}
int main()
{
    int n1, n2;

    cout << "Enter numbers: ";
    cin >> n1 >> n2;

    GCD(n1,n2);
 
    return 0;
}