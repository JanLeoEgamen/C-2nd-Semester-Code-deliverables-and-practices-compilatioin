#include <iostream>
#include <cstring>

using namespace std;

void swapNumbers(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void addNumbers(int* num1, int* num2) {
    int sum = *num1 + *num2;
    cout << "Sum: " << sum << endl;
}

int getArraySum(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int getStringLength(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

void copyString(const char* source, char* destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

void concatenateStrings(const char* str1, const char* str2, char* result) {
    while (*str1 != '\0') {
        *result = *str1;
        str1++;
        result++;
    }
    while (*str2 != '\0') {
        *result = *str2;
        str2++;
        result++;
    }
    *result = '\0';
}

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    int num1, num2;
    int choice;
    int arr[100];
    int arrSize;
    char str[100];
    char str1[100];
    char str2[100];
    char result[200];

    while (true) {
        cout << "-----------------------" << endl;
        cout << "1. Swap Numbers" << endl;
        cout << "2. Add Numbers" << endl;
        cout << "3. Sum of Array Elements" << endl;
        cout << "4. Length of String" << endl;
        cout << "5. Copy String" << endl;
        cout << "6. Concatenate Strings" << endl;
        cout << "7. Reverse Array" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:system("cls");
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                swapNumbers(&num1, &num2);
                cout << "Swapped numbers: " << num1 << " " << num2 << endl;
                break;
            case 2:system("cls");
                cout << "Enter first number: ";
                cin >> num1;
                cout << "Enter second number: ";
                cin >> num2;
                addNumbers(&num1, &num2);
                break;
            case 3:system("cls");
                cout << "Enter the size of the array: ";
                cin >> arrSize;
                cout << "Enter array elements: ";
                for (int i = 0; i < arrSize; i++) {
                    cin >> arr[i];
                }
                cout << "Sum of array elements: " << getArraySum(arr, arrSize) << endl;
                break;
            case 4:system("cls");
                cout << "Enter a string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str, sizeof(str));
                cout << "Length of the string: " << getStringLength(str) << endl;
                break;
            case 5:system("cls");
                cout << "Enter a string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str1, sizeof(str1));
                copyString(str1, str2);
                cout << "Copied string: " << str2 << endl;
                break;
            case 6:system("cls");
                cout << "Enter first string: ";
                cin.ignore(); // Ignore any previous newline character
                cin.getline(str1, sizeof(str1));
                cout << "Enter second string: ";
                cin.getline(str2, sizeof(str2));
                concatenateStrings(str1, str2, result);
                cout << "Concatenated string: " << result << endl;
                break;
            case 7:system("cls");
                cout << "Enter the size of the array: ";
                cin >> arrSize;
                cout << "Enter array elements: ";
                for (int i = 0; i < arrSize; i++) {
                    cin >> arr[i];
                }
                reverseArray(arr, arrSize);
                cout << "Array in reverse order: ";
                for (int i = 0; i < arrSize; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 8:system("cls");
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}