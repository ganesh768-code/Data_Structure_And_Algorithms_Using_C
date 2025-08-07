/*  Addition of Two Matrices */

#include<stdio.h>

#define ROW 2
#define COL 2

int main(){
	
	int mat1[ROW][COL], mat2[ROW][COL];  //Here adding to matrices both have same order
	
	int i,j;
	
	printf("Enter the Matrix 1 values:\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the Matrix 2 values:\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("Additon of Mat-1 and Mat-2 :\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			int sum;
			
			sum=mat1[i][j]+mat2[i][j];
			printf("%5d",sum);
		}
		printf("\n");
	}
	
	
}
