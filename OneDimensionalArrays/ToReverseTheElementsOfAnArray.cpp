/*  To Reverse the elements of an Array */

#include<stdio.h>

int main(){
	
	int arr[10] ={1,2,3,4,5,6,7,8,9,10};
	int i,j,temp;
	
	printf("Initial Array : ");
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	
	for(i=0,j=9; i<10 && j>0; i++, j--){
		
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	
	printf("\nAfter the resevered Array : ");
	for(int i=0;i<10;i++){
		printf("%d\t",arr[i]);
	}
	
}
