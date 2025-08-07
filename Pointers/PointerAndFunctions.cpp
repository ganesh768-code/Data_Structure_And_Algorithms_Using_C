/* Pointer and Functions
	
	function Arguments values two Types:
										
										1. call by Value
										2. call by Reference
 */
 
 #include<stdio.h>
 
 void value();
 void valuebyArgument(int,int);
 void referencebyArgument(int*,int*);
 
 int main(){
 	
 	value();
 }
 
 void value(){
 	
 	int a = 3;
 	int b = 4;
 	
 	printf("call by Value:\n");
 	printf("Value of a = %d and b = %d\n",a,b);
 	
 	valuebyArgument(a,b);
 	
 	printf("Value of a = %d and b = %d\n",a,b);
 	
 	printf("call by Reference:\n");
 	
 	printf("Value of a = %d and b = %d\n",a,b);
 	referencebyArgument(&a,&b);
 	printf("Value of a = %d and b = %d\n",a,b);
 	
 	
 	
 }
 
 void valuebyArgument(int a,int b){
 	
 	a++;
 	b++;

 }
 
 void referencebyArgument(int *a,int *b){
 	(*a)++;
 	(*b)++;
 }
