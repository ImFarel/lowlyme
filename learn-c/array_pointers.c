#include <stdio.h>
#include <stdlib.h>

int main() {
	/**
	 * * Arrays and Pointers
	*/

	// char vowels[] = { 'A', 'E', 'I', 'O', 'U' };

	// char* pvowels = vowels;
	// int i;

	// for (i = 0; i < sizeof(vowels); i++)
	// {
	// 	printf("&vowels[%d]: %p, pvowels + %d: %p, vowels + %d: %p\n", i, &vowels[i], i, pvowels + i, i, vowels + i);
	// }

	// // Print the values
	// for (i = 0; i < 5; i++) {
	// 	printf("vowels[%d]: %c, *(pvowels + %d): %c, *(vowels + %d): %c\n", i, vowels[i], i, *(pvowels + i), i, *(vowels + i));
	// }


	/**
	 * * Dynamic Memory Allocation for one-dimensional arrays
	*/
	// Allocate memory to store five characters
	// int n = 5;
	// char* pvowels = (char*)malloc(n * sizeof(char));
	// int i;

	// pvowels[0] = 'A';
	// pvowels[1] = 'E';
	// *(pvowels + 2) = 'I';
	// pvowels[3] = 'O';
	// *(pvowels + 4) = 'U';

	// for (i = 0; i < n; i++) {
	// 	printf("%c ", pvowels[i]);
	// }

	// printf("\n");

	// free(pvowels);

	/**
	 * * Dynamic Memory Allocation for two-dimensional array
	*/
	// int nrows = 2;
	// int ncols = 5;
	// int i, j;
	// // Allocate memory for nrows 
	// char** pvowels = (char**)malloc(nrows * sizeof(char*));

	// // Allocate memory for ncols
	// pvowels[0] = (char*)malloc(ncols * sizeof(char));
	// pvowels[1] = (char*)malloc(ncols * sizeof(char));

	// pvowels[0][0] = 'A';
	// pvowels[0][1] = 'E';
	// pvowels[0][2] = 'I';
	// pvowels[0][3] = 'O';
	// pvowels[0][4] = 'U';

	// pvowels[1][0] = 'a';
	// pvowels[1][1] = 'e';
	// pvowels[1][2] = 'i';
	// pvowels[1][3] = 'o';
	// pvowels[1][4] = 'u';

	// for (i = 0; i < nrows; i++)
	// {
	// 	for (j = 0; j < ncols; j++)
	// 	{
	// 		printf("%c ", pvowels[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// free(pvowels[0]);
	// free(pvowels[1]);
	// free(pvowels);



	/**
	 * * Dynamic Memory Allocation for pascal tree
	*/

	// int i, j;
	// int** pnumbers = (int**)malloc(3 * sizeof(int*));

	// pnumbers[0] = (int*)malloc(3 * sizeof(int));
	// pnumbers[1] = (int*)malloc(3 * sizeof(int));
	// pnumbers[2] = (int*)malloc(3 * sizeof(int));

	// pnumbers[0][0] = 1;
	// pnumbers[1][0] = 1;
	// pnumbers[1][1] = 1;
	// pnumbers[2][0] = 1;
	// pnumbers[2][1] = 2;
	// pnumbers[2][2] = 1;

	// for (i = 0; i < 3; i++) {
	// 	for (j = 0; j <= i; j++) {
	// 		printf("%d", pnumbers[i][j]);
	// 	}
	// 	printf("\n");
	// }

	// for (i = 0; i < 3; i++) {
	// 	free(pnumbers[i]);
	// }

	// /* TODO: free the top-level pointer */
	// free(pnumbers);

	/**
	 *
	 *
	 *
	 *
	 *
	*/

	/**
	 ** Challenge:

	 * Write a C program that dynamically allocates a 2D array of integers with 5 rows and 5 columns.
	 * Fill the array with the multiplication table from 1 to 5, i.e., the element at row `i` and column `j` should be `(i+1) * (j+1)`.
	 * Print the array, and then free the memory you've allocated.
	 *
	 * Expected output:

		1 2 3 4 5
		2 4 6 8 10
		3 6 9 12 15
		4 8 12 16 20
		5 10 15 20 25

	 * Remember to free the memory you've allocated when you're done with it.
	*/

	int i, j;
	int rows = 5;
	int cols = 5;

	int** data = (int**)malloc(rows * sizeof(int*));

	for (i = 0; i < rows; i++)
	{
		data[i] = (int*)malloc(cols * sizeof(int));
		for (j = 0; j < cols; j++)
		{
			data[i][j] = (i + 1) * (j + 1);

			printf("%d ", data[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < rows; i++)
	{
		free(data[i]);
	}

	free(data);

	return 0;
}