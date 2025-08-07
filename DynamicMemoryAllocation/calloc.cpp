/* Dynamic Memory Allocation: calloc() */

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *p_age,n=10,i;

	p_age=(int *)calloc(n,sizeof(int));  //Creating dynamic memory allocation
	
	*(p_age+0)=45;    //assign the value in oth position
	 p_age[1]=43;
	
	
	if(p_age == NULL){
		printf("Allocate Memory is over");  
	}
	
	for(i=0;i<n;i++){
		
		printf("Person %d age = %d\n",p_age+i,*(p_age+i));
		
	}
	
	free(p_age);
	return 0;
}
