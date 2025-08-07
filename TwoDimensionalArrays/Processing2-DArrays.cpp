/*  Processing 2-D Arrays  */

#include<stdio.h>

int main(){
	
	int arr[4][5];
	int i,j;
	
	// Reading values in arr
	printf("Enter the elements of Array:\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//Display values of arr
	
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("arr[%d][%d] values = %d\n",i,j,arr[i][j]);
		}
	}
	return 0;
}
