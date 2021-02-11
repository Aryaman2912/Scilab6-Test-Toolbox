#include<stdio.h>
#include<malloc.h>

// Global variables to store dimensions of the variables
int n,m;

// Standalone function to compute the transpose of the matrix
// It returns a double pointer
int** transpose(int matrix[][m]){
	
	int** transpose_matrix;
	// dynamically allocate memory for m rows
	transpose_matrix = malloc(sizeof(int*) * m);
     
    for(int i = 0; i < m; i++){
    	// dynamically allocate memory for n columns in each row
        transpose_matrix[i] = malloc(sizeof(int*) * n);
    }

    // Compute the transpose of the matrix
    // formula used: transpose[i][j] = matrix[j][i] for all i,j
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		transpose_matrix[j][i] = matrix[i][j];
    	}
    }

    // return double pointer to result matrix
    return transpose_matrix;
};

// Main function
int main(){

	// file pointers for reading from 'input.txt' and writing to 'output.txt'
	FILE *input,*output;

	// input pointer will read from input.txt file
	input = fopen("input.txt","r");

	// read number of rows and columns present at the beginning of input.txt
	fscanf(input,"%d\n%d",&n,&m);
	
	// write each integer of matrix in 'input.txt' to 'matrix' array 
	int matrix[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			fscanf(input,"%d ",&matrix[i][j]);
		}
	}
	fclose(input);

	// call transpose() function on matrix to calculate its transpose
	int **transpose_matrix = transpose(matrix);

	// write the transpose to 'output.txt' so that it can be read in main function
	output = fopen("output.txt","w");
	
	// write transpose matrix to 'output.txt'
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			fprintf(output, "%d ",transpose_matrix[i][j]);
		}
		fprintf(output,"\n");
	}
	fclose(output);
	
}