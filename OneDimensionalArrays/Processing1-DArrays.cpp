/* Processing 1-D Arrays */

#include<stdio.h>

int main(){
	
	int arr[5],i;
	
	/*  Reading values in arr */
	
	for(i=0;i<5;i++){
		printf("Enter the value of arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	/*  Displaying values of arr */
	
	printf("The array elements are: ");
	for(i=0;i<5;i++){
		printf("%d \t",arr[i]);
	}
	printf("\n");
	
	return 0;
}
