#include <iostream>
using namespace std;

void linearSearch(int a[], int size, int search){
    int occurence = 0;
    cout << "The number"<< search << " of the array found at: "<< endl;
       
        for (int i =0; i<size; i++)
        {
            if(a[i]==search)
            {
                occurence++;
                cout << "[" << i << "]  " << endl;
            }
        }
    cout << endl << "With the occurrence of " << occurence << endl;
}

int main(){
    int a[100], size, search;

    cout << "Enter size: ";
    cin >> size;

        for (int i =0; i<size; i++)
        {
            cout << "Enter a[" << i << "]: ";
            cin >> a[i];
        }

    cout << "Enter value to search: ";
    cin >> search;
    linearSearch(a,size,search);


    return 0;
}