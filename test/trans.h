int** transpose(int n, int m,int a[][m]){
	int** matrix;
	matrix = malloc(sizeof(int*) * m);
     
    for(int i = 0; i < m; i++){
        matrix[i] = malloc(sizeof(int*) * n);
    }
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < m; j++){
    		matrix[j][i] = a[i][j];
    	}
    }
    return matrix;
};