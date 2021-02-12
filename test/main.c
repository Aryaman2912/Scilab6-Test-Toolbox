// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// trans.c contains the function to calculate transpose of a matrix
#include"trans.c"

// Main function
int main(){
	
	// the dimensions are declared as extern so that they can be easily accessed in the transpose function
	extern int n,m;
	printf("Enter the number of rows and number of columns in the matrix: ");
	scanf("%d %d",&n,&m);

	int input[n][m];

	// Input matrix to a
	printf("Enter the array(separate elements by spaces):\n");
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			scanf("%d",&input[i][j]);
		}
	}

	// Print original matrix
	printf("The original matrix is\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%2d ",input[i][j]);
		}
		printf("\n");
	}

	// Call transpose function in trans.c
	int **output = transpose(input);

	// Print the computed transpose matrix
	printf("The transpose of the given matrix is: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%2d ",output[i][j]);
		}
		printf("\n");
	}
}
