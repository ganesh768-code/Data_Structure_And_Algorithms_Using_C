/*  Find Out the Largest and smallest number in an interger Array */

#include<stdio.h>

int main(){
	
	int arr[10]={12,45,23,65,76,78,22,43,11,5};
	
	int small,large;
	small=large=arr[0];
	
	for(int i=0;i<10;i++){
		
		if(small > arr[i]){
			small = arr[i];
		}
		if(large<arr[i]){
			large=arr[i];
		}
	}
	
	printf("The Elements of the Arrays:");
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	printf("\nThe Smallest Number in above Array is %d",small);
	printf("\nThe Largest Number in above Array is %d",large);
	
	return 0;
}
