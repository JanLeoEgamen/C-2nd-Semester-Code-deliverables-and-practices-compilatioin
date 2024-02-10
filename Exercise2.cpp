//Egamen Jan Leo
#include <iostream>
#include <conio.h>
using namespace std;

void checker(int size) {
int temp;

    int arr[size], index[size];
    // Input array elements using for loop
    for(int i = 0; i < size; i++) {
        cout << "Enter value for element " << i+1 << ": ";
        cin >> arr[i];
        index[i]=arr[i];
    }

    /// Print largest 3 elements
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "The largest 3 elements are: " << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;
    cout << "The Index of the 3 largest are located in :";
    for(int k=0;k<size;k++){
        if(index[k]==arr[0]){
            cout<<k<<" ";
    }
    }
    for(int l=0;l<size;l++){
        if(index[l]==arr[1]){
            cout<<l<<" ";}
    }
    for(int m=0;m<size;m++){
        if(index[m]==arr[2]){
            cout<<m<<" ";}
    }    
    getch();
}


int main() {
    int size;
   cout << "Enter size of array: ";
    cin >> size;
    checker(size);
}
