#include<stdio.h>

struct node{
	
	struct node *pre;
	int age;
	struct node *next;
};

int main(){
	
	struct node *start=NULL;
	
	printf("Menu of Double Linkedlist Operations below : \n");
	printf("\nOptions\t\t\tOperations\n");
	printf("\n1.\t\t\tcreateList\n");
	printf("\n2.\t\t\taddatbeg\n");
	switch(choice){
		
		case 1:
			start=createlist(start);
	}
}

struct node createlist(struct node *start){
	
	int data,n;
	
	printf("Enter the number of Elements: ");
	scanf("%d",&n);
	
	printf("Enter the data: ");
	scanf("%d",&data);
	start=addtoempty(start,data);
	for(i=2;i<=n;i++){
		printf("Enter the data: ");
		scanf("%d",&data);
		start=addtobeg(start,data);	
	}
	
}

struct node addatbeg(struct node *start,int data){
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->pre=NULL;
	temp->age=data;
	temp->next=start;
	start->pre=temp
	start=temp;
}
struct node addtoempty(struct node *start,int data){
	
	struct node *temp;
	
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->age=data;
	temp->pre=NULL;
	temp->next=NULL;
	start=temp;
	return start;
}

struct node addatend(struct node *start,int data){
	struct node *temp,*p;
	temp=(struct node *)malloc(sizeof(struct node));
	
	p=start
	while(p->next!=NULL){
		p=p->next
	}
	temp->age=data;
	temp->next=NULL;
	temp->pre=p;
	p->next=temp;
	p=p->next;
	
	return start;
		
}




