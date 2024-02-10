#include <iostream>
using namespace std;

int main(){

    int arr[100];
    int size;

    int max=0, occ=0;

    cout << "Enter size: ";
    cin >> size;

    for (int a=0; a < size; a++){
    cout << "Enter element of " << a+1<< " : ";
    cin >> arr[a];
    }

    for (int b=0; b < size; b++)
    {   int count =1;
        for (int c=0; c < size; c++)
        {
                if(arr[b]==arr[c]){
                    count++;
                }
                if(count>occ){
                    occ=count;
                    max = arr[b];
                }
        }
    }

    


    return 0;
}