#include<stdio.h>
#include<stdlib.h>
struct node *addatbeg(struct node *,int);
void traverse(struct node *);

struct node {
	
	int age;
	
	struct node *link;
};

int main(){
	
	struct node *start = NULL;
	int data,n,i;
	
	printf("Number of person ages = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the p%d age : \n",i);
		scanf("%d",&data);
		start = addatbeg(start,data);
	}
	traverse(start);
	return 0;

}


struct node *addatbeg(struct node *start,int data){
	
	struct node *temp;
	
	temp =(struct node *) malloc(sizeof(struct node));
	
	temp -> age =data;
	temp -> link = start;
	start = temp;
	
	return start;
}

void traverse(struct node *start){
	
	while(start != NULL){
		
		printf("%d ---> %d | %d\n",start,start->age,start->link);
		start=start->link;
		
	}
}
