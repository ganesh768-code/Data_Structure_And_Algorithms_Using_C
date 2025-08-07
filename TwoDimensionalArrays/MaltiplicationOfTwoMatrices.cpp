/*  multiplication of two matrices  */

#include<stdio.h>

#define M1ROW m1ROW
#define M1COL m1COL
#define M2ROW m2ROW
#define M2COL m2COL

int main(){
	int m1ROW,m1COL,m2ROW,m2COL;
	int mat1[M1ROW][M1COL],mat2[M2ROW][M2COL];
	int i,j,k;
	
	printf("Matrix-1 Features:\n");
	scanf("%d",&m1ROW);
	scanf("%d",&m1COL);
	
	printf("Enter the Matrix 1 elements :\n");
	for(i=0;i<M1ROW;i++){
		for(j=0;j<M1COL;j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Matrix-2 Features:\n");
	scanf("%d",&m2ROW);
	scanf("%d",&m2COL);
	
	printf("Enter the Matrix 2 elements:\n");
	for(i=0;i<M2ROW;i++){
		for(j=0;j<M2COL;j++){
			scanf("%d",&mat2[i][j]);
		}
	}
	
	if(M1ROW<=M2ROW){
		printf("Multiplication of Two Matrices:\n");
		for(i=0;i<M1ROW;i++){
			for(j=0;j<M2COL;j++){
				int sum =0;
				for(k=0;k<M2ROW;k++){
					sum+=mat1[i][k]*mat2[k][j];
				}
				printf("%5d",sum);
			}
			printf("\n");
		} 
	}
	return 0;
}
