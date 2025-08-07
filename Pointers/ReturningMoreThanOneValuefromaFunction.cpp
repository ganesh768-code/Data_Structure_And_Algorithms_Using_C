/* Returning More Than One Value from a Function: 

	Probelm :
		We can return only one value from a function through return statement.
	
	Solution:
		This can be Overcome by call by reference
*/

#include<stdio.h>

void operations(int,int,int*,int*,int*);

int main(){
	
	int a,b,sum,diff,prod;
	
	a=4;
	b=2;
	
	printf("value of a = %d and b = %d\n",a,b);
	
	operations(a,b,&sum,&diff,&prod);
	printf("Operations:\naddition of a and b is %d\nsubstraction of a and b is %d\nMultiplication of a and b is %d",sum,diff,prod);
	
	
}

void operations(int x,int y,int *add,int *sub,int *mul){
	
	*add = x+y;
	*sub = x-y;
	*mul = x*y;
}
