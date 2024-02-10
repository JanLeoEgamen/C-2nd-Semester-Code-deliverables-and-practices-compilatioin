#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int arr[ROWS][COLS];
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }
    // insertion sort
    for (int i = 0; i < ROWS; i++) {
        for (int j = 1; j < COLS; j++) {
            int key = arr[i][j];
            int k = j - 1;
            while (k >= 0 && arr[i][k] > key) {
                arr[i][k + 1] = arr[i][k];
                k--;
            }
            arr[i][k + 1] = key;
        }
    }
    cout << "The sorted array in ascending order is:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
