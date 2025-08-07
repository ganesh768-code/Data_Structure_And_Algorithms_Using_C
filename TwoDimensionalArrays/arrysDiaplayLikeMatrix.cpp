/*  Display a Matrix */

#include<stdio.h>

#define ROW 3
#define COL 4

int main(){
	int arr[ROW][COL];
	int i,j;
	
	//To take input value for user
	printf("Enter the arrays elements: \n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//To display array element like Matrix
	printf("Array Elements Display like Matrix:\n");
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
}

