/*  1-D Arrays and Functions: passing whole 1-D Array to a functions  

	Syntax:
			main(){
			      
			      int arr[10]
			      
			      func(arr); // In Function call, array name is specified without bracket
			}
			
			void func(int val[]){
			
				............
				............
			}
*/

#include<stdio.h>
void sqrfunct(int[]);

int main(){
	
	int arr[6]={1,2,3,4,5,6};
	sqrfunct(arr);
	
	printf("\ncontent of the Array are now : ");
	for(int i=0;i<6;i++){
		printf("%d\t",arr[i]);
	}
	return 0;
	
}

void sqrfunct(int num[]){
	
	int sum=0;
	for(int i=0;i<6;i++){
		sum=sum+(num[i]*num[i]);
	}
	printf("Square of Array Elements : %d",sum);
}

