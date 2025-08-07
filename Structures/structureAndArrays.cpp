#include<stdio.h>


struct person{
	char name[30];
	int age;
};

int main(){
	
	struct person p[10];
	int i;
	printf("Total bytes of person data type = %d\n",sizeof(person));
	for(i=0;i<10;i++){
		
		printf("Address of p[%d] = %d\n",i,&p[i]);
	}
	return 0;
}
