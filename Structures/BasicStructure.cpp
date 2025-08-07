#include<stdio.h>


struct person{
	char name[30];
	int age;
};

int main(){
	
	struct person p[10]={"Ganesh",54};
	
	printf("Address of p1 = %d\n",&p1);
	printf("value of P1 name = %s\n",p1.name);
	printf("value of p1 age = %d",p1.age);
	
	return 0;
}
