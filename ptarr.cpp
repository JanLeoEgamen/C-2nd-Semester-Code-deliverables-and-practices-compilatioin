    #include <iostream>
using namespace std;


int main()
{
        int luckynum [5];
        // cout << luckynum <<endl; // pag walang index piniprint yung address nung unang element sa array
        // cout << &luckynum[0] <<endl; //check
        // cout << luckynum[2] <<endl; // printing the 3rd element
        // cout << *(luckynum + 2) <<endl; // same way of printing without using indexprinting the 3rd element
        
        
        for (int i = 0; i <=4; i++)
        {
            cout << "Number: "; cin >> luckynum[i];
        }

        for (int i = 0; i <=4; i++)
        {
            cout << *(luckynum+i) << " ";

            // cout << (luckynum+i) << " "; address
        }


return 0;
}