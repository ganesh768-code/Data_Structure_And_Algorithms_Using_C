/*  Dereference pointer variables  

	syntax:
			data_type *pname; 
*/

#include<stdio.h>

int main(){
	
	int a=4;
	float b=5.3;
	int *ptr1=&a;
	float *ptr2=&b;
	
	printf("value of ptr1 = %d | Address of  a = %d\n",ptr1,&a);
	printf("value of ptr2 = %d | Address of  b = %d\n",ptr2,&b);
	
	printf("Address of ptr1 = %d\n",&ptr1);
	printf("Address of ptr2 = %d\n",&ptr2);
	
	printf("Indirect access of a value using ptr1 = %d | value of a = %d\n",*ptr1,a);
	printf("Indirect access of a value using ptr2 = %.2f | value of b = %.2f\n",*ptr2,b);
	
	return 0;
}
