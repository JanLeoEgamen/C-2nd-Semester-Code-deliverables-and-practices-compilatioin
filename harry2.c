#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Function Declaration
void reorder(int n, int *x);

// Main Function
int main() {
    char ans;
    int n, *x;

back:
    // Input | Integer Quantity
    printf("Enter the number of integers : ");
    scanf("%d", &n);

    // Allocate memory for x based on the user input
    x = (int *) malloc(n * sizeof(int));

    // Input | Integer Value/s
    for (int i = 0; i < n; i++) {
        printf("i = %d | x = ", i + 1);
        scanf("%d", &x[i]);
    }

    reorder(n, x);

    // Output | Reordered Integers
    printf("\n\nReordered lists of Integers : \n");
    for (int i = 0; i < n; i++) {
        printf("i = %d | x = %d\n", i + 1, x[i]);
    }

    // Ask user if they want to continue
    printf("\nDo you want to continue? Y/N\t");

    // Get user input
    ans = tolower(getchar());

    // Clear the input buffer
    while (getchar() != '\n');

    if (ans == 'y') {
        system("cls");
        goto back;
    }
    else {
        free(x);  // Deallocate memory
        return 0;
    }
}

// Reorder Function
void reorder(int n, int *x) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
                // Swap the values
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
}
