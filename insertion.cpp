#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    int n = 10;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}