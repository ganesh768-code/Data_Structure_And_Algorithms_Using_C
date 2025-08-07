/*  Pointer and Arrays 

	*(arr+i) == arr[i]
	
	(arr+i) == &arr[i]

*/

#include<stdio.h>

void NormalArray();
void PointerArray();

int main(){
	
	NormalArray();
	printf("\n");
	PointerArray();
	
	return 0;
}

void NormalArray(){
	
	int arr[6]={4,3,6,7,2,1};
	
	for(int i=0;i<6;i++){
		
		printf("arr[%d] -->  Value = %d  |  &arr[%d] -->  Address = %d\n",i,arr[i],i,&arr[i]);
	}
}

void PointerArray(){
	
	int arr[6]={4,3,6,7,2,1};
	
	for(int i=0;i<6;i++){
		
		printf("*(arr+%d) -->  value = %d  |  arr+%d -->  Address = %d\n",i,*(arr+i),i,arr+i);
		
	}
}
