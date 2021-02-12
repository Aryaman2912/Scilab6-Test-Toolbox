// n and m are declared as extern variables in main.c
// n = no. of rows in the matrix, m = no. of columns in the matrix
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
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		transpose_matrix[i][j] = matrix[j][i];
    	}
    }

    // return double pointer to transpose matrix
    return transpose_matrix;
};
