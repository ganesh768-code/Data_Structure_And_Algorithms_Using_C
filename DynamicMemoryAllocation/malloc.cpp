/* Dynamic Memory Allocation: Malloc() */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *p_age,n,i;
	
	printf("Enter the Number of person: ");
	scanf("%d",&n);
	p_age=(int *)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		
		printf("Person %d age = ",i);
		scanf("%d",(p_age+i));
	}
	
	if(p_age == NULL){
		printf("Allocate Memory is over");
	}
	
	for(i=0;i<n;i++){
		
		printf("Person %d age = %d\n",p_age+i,*(p_age+i));
		
	}
	
	return 0;
}
