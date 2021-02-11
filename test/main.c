// Include necessary header files
#include<stdio.h>
#include<stdlib.h>
#include"trans.c"

// Main function
int main(){
	
	
	extern int n,m;
	printf("Enter the number of rows and number of columns in the matrix: ");
	scanf("%d %d",&n,&m);

	int a[n][m];

	// Input matrix to a
	printf("Enter the array(separate elements by spaces):\n");
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			scanf("%d",&a[i][j]);
		}
	}

	// Print original matrix
	printf("The original matrix is\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}

	// Call transpose function in trans.c
	int **res = transpose(a);

	// Print the computed transpose matrix
	printf("The transpose of the given matrix is: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%2d ",res[i][j]);
		}
		printf("\n");
	}
}
