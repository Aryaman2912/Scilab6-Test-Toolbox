// Include necessary header files
#include<stdio.h>
#include<stdlib.h>

// Main function
int main(){
	
	// File pointers to write to input file and read from output file
	FILE *input,*output;

	input = fopen("input.txt","w");
	
	int n,m;
	printf("Enter the number of rows and number of columns in the matrix: ");
	scanf("%d %d",&n,&m);
	
	// Write the number of rows and columns to the 'input.txt' file
	fprintf(input, "%d\n%d\n",n,m);

	int a[n][m],res[m][n];

	// Input matrix to a. Simultaneously, write the matrix to 'input.txt'
	printf("Enter the array(separate elements by spaces):\n");
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			scanf("%d",&a[i][j]);
			fprintf(input, "%d ",a[i][j]);
		}
		fprintf(input, "\n");
	}
	fclose(input);

	// Print original matrix
	printf("The original matrix is\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%3d ",a[i][j]);
		}
		printf("\n");
	}

	// Call program to compute transpose of the input matrix
	// Execute the compiled trans.c program
	system("./trans");
	
	// The output of the matrix is written to 'output.txt' file.
	// Open it in read mode and store the matrix in 'res'
	output = fopen("output.txt","r");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			fscanf(output,"%d ",&res[i][j]);
		}
	}
	fclose(output);

	// Print the computed transpose matrix
	printf("The transpose of the given matrix is: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%3d ",res[i][j]);
		}
		printf("\n");
	}
}