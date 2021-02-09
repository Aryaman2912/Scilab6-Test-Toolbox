#include<stdio.h>
#include<stdlib.h>
#include "trans.h"
int main(){
	int n,m;
	printf("Enter the number of rows and number of columns in the matrix: ");
	scanf("%d %d",&n,&m);
	int a[n][m];
	printf("Enter the array(separate elements by spaces):\n");
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			scanf("%d",&a[i][j]);
		}
	}
	printf("The original matrix is\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the given matrix is: \n");
	int** arr;
	arr = transpose(n,m,a);
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}