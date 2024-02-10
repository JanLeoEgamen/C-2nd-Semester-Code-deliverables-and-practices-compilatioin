#include <iostream>
using namespace std;

int main() {
    int arr[10] = {5, 3, 8, 6, 2, 7, 1, 4, 9, 0};
    int n = 10; // 3  2  5  3  4  5  6  7  8  9
    
    for (int i = 0; i/* */ < n-1; i++) {
        for (int j = 0; j/*4 */ < n-i-1; j++) {
            if (arr[j] /* */ > arr[j+1]/* */) {
                int temp = arr[j];//5
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
