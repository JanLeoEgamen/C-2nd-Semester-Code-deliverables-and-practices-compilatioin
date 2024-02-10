
//Harry Asence
#include <stdio.h>
#include <stdlib.h>

int main () {
	//Variable Declaration 
	int **array; //Pointer Version | 2d Array
	int size1, size2, i, j;
	int min, max, max2, min2;
	 int arr[size1][size2]; //Array Version
	
	array = (int**)malloc(size1*sizeof(int*));
	
	//Input | 2D Array Sizes
	printf ("Enter the size of rows : ");
	scanf ("%d", &size1);
	printf ("Enter the size of columns : ");
	scanf ("%d", &size2);
	
	//2D Array | Array of Pointer Version
	for (i=0; i<size1; i++) {
		array[i]=(int*)malloc(size2*sizeof(int*));
	}
	
	//Input | Elements of Array Version
	printf ("\nInput | Elements of Array Version\n\n");
	 for (i=0; i<size1; i++) {
	 	for (j=0; j<size2; j++) {
	 		printf ("Element [%d][%d] : ", i, j);
	 		scanf ("%d", &arr[i][j]);
	 		max2 = arr[0][0];
	 		min2 = arr[0][0];
	 	}
	 }
	
	//Input | Elements of Pointer Version
	printf ("\nInput | Elements of Pointer Version\n\n");
	for (i=0; i<size1; i++) {
		for (j=0; j<size2; j++) {
			printf ("Element [%d][%d] : ", i, j);
			scanf ("%d", &array[i][j]);
		}
	}
	min = array[0][0];
	max = array[0][0];
	
	 //Output | Array of Array Version
	 printf ("\n\n\nInput | Array of Array Version\n\n");
	 for (i=0; i<size1; i++) {
	 	printf ("\t");
	 	for (j=0; j<size2; j++) {
	 		printf ("%d  ", arr[i][j]);
	 	}
	 	printf ("\n");
	 }
	
	//Output | Array of Pointer Version
	printf ("\n\n\nInput | Array of Pointer Version\n\n");
	for (i=0; i<size1; i++) {
		printf ("\t");
		for (j=0; j<size2; j++) {
			printf ("%d  ", array[i][j]);
		}
		printf("\n");
	}
	
	
	//Processes | 2D Arrays of Two Versions
	for (i=0; i<size1; i++) {
		for (j=0; j<size2; j++) {
			//Process | 2D Array of Pointer Version
			if (array[i][j]>max) {
				max = array[i][j];
			}
			if (min>array[i][j]) {
				min = array[i][j];
			}
			
			//Process | 2D Array of Array Version
			if (min2>arr[i][j]) {
	 			min2 = arr[i][j];
	 		}
			if (max2<arr[i][j]) {
	 			max2 = arr[i][j];
	 		}
		}
	}
	
	//Output | Array of Array Version
	printf ("\n\nOutput | Array Version\n");
	printf ("\nMinimum Value : %d", min2);
	printf ("\nMaximum Value : %d", max2);
	
	//Output | Array of Pointer Version
	printf ("\n\nOutput | Pointer Version\n");
	printf ("\nMinimum Value : %d", min);
	printf ("\nMaximum Value : %d", max);
    system("pause");
}
