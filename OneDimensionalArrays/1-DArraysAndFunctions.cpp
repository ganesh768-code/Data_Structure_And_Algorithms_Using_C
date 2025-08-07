/* 1-D Arrays and Functions: Passing Individual Array Elements to a function */

#include<stdio.h>

void check(int);

int main(){
	
	int arr[10];
	
	printf("Enter the Array Elements: \n");
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	
	return 0;
}

void check(int num){
	
	if(num%2==0){
		printf("%d is Even\n",num);
	}
	else{
		printf("%d is Odd\n",num);
	}
}

