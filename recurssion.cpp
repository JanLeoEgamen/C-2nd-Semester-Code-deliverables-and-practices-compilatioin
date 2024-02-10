#include <iostream>
using namespace std;

int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1);
  else
    return 1;
}



int main(){

cout << "Enter Number: ";
int num;
cin >> num;

if(num < 0){
    cout << "The number inputted must greater than 0";
}
else{
cout << "Factorial of " << num << " is " << factorial(num) << endl;
}

}