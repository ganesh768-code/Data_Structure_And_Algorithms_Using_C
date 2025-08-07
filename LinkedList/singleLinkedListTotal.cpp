#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	
	struct node *link;
	
};

/*  Funcations Declareation */
struct node *create_list(struct node *);  	
void display(struct node *);		
void Count(struct node *);
void search(struct node *,int );
struct node *addatbeg(struct node *,int );
struct node *addatend(struct node *,int );
struct node *addafter(struct node *,int ,int );
struct node *addbefore(struct node *,int ,int );
struct node *addatpos(struct node *,int ,int );


int main(){
	
	struct node *start=NULL;
	
	int choice,item,data,pos;
	
	printf("Menu of Single LinkedList : \n");
	printf("\n Option\t\t\tOperations");
	printf("\n========\t\t=============");
	printf("\n\n1 \t\t\tCreate List");
	printf("\n2 \t\t\tDisplay");
	printf("\n3 \t\t\tCount");
	printf("\n4 \t\t\tSearch");
	printf("\n5 \t\t\tAdd At Begin of List");
	printf("\n6 \t\t\tAdd At End of List");
	printf("\n7 \t\t\tAdd after node");
	printf("\n8 \t\t\tAdd before node");
	printf("\n9 \t\t\tAdd at position");
	printf("\n10\t\t\tDelete");
	printf("\n11\t\t\tReverse");
	printf("\n12\t\t\tQuit");
	
	while(1){
		
		printf("\nPlease, choice one Option in above Menu list: ");
		scanf("%d",&choice);
	
		
		switch(choice){
			case 1:
				start=create_list(start);
				break;
			case 2:
				display(start);
				break;
			case 3:
				Count(start);
				break;
			case 4:
				printf("\nPlease Enter Your Search item: ");
				scanf("%d",&item);
				search(start,item);
				break;
			case 5:
				printf("\nEnter the value to be inserted : ");
				scanf("%d",&data);
				start=addatbeg(start,data);
				break;
			case 6:
				printf("\nEnter the value : ");
				scanf("%d",&data);
				start=addatend(start,data);
				break;
			case 7:
				printf("\nEnter the value : ");
				scanf("%d",&data);
				printf("\nWhich item after you insert new node: ");
				scanf("%d",&item);
				start=addafter(start,data,item);
				break;
			case 8:
				printf("\nEnter the value : ");
				scanf("%d",&data);
				printf("\nWhich item before you insert new node: ");
				scanf("%d",&item);
				start=addbefore(start,data,item);
				break;
			case 9:
				printf("\nEnter the value : ");
				scanf("%d",&data);
				printf("\nWhich Position you insert new node: ");
				scanf("%d",&pos);
				start=addbefore(start,data,pos);
				break;
				break;
			case 10:
				break;
			case 11:
				break;
			case 12:
				exit(1);
				break;
			default:
				printf("\nWrong choice");
		}
	}
	
	free(start);
	
}

/* Creating the nodes */
struct node *create_list(struct node *start){
	
	int i,n,data;
	
	printf("\nEnter the number of nodes: ");  // Here, Take the Number of node user need
	scanf("%d",&n);
	
	start =NULL;
	
	if(n==0){             // if user node is 0. node not create 
		return start;
	}
	
	printf("\nEnter the element to be inserted : ");
	scanf("%d",&data);
	
	start=addatbeg(start,data);        
	
	for(i=2;i<=n;i++){
		printf("\nEnter the element to be inserted : ");
		scanf("%d",&data);
		
		start = addatend(start,data);			// node are insert at end of the list 
	}
	
	return start;	
}

/* Display all values in the list */
void display(struct node *start){
	
	struct node *p;
	
	if(start ==NULL){
		printf("\nList is Empty");
	}
	
	p=start;
	printf("\nList of values :\n");
	
	while(p !=NULL){
		printf("\n%d",p->data);
		p=p->link;
	}
}

/* Count the Number Nodes in the list */
void Count(struct node *start){
	
	struct node *p;
	int count=0;
	
	p=start;
	
	while(p!=NULL){
		p=p->link;
		count++;
	}
	printf("\nNumber of Elements are %d",count);
}

/* Search a Particular value in the list or not */
void search(struct node *start,int item){
	
	struct node *p;
	int pos =1;
	
	p=start;
	while(p!=NULL){
		if(p->data == item){
			printf("\nItem %d found at position %d",item,pos);
			return;
		}
		p=p->link;
		pos++;
	}
	printf("\nItem %d not found in list",item);
}

/*  Insertion in a single Linked List 

	There can be three cases while inserting a node in a Linked list:
		
		1. Insertion at the beginning of the list
		2. Insertion at the end of the List
		3. Insertion in between the list nodes:
			a. Insertion after a node
			b. Insertion before a node
			c. Insertion at a given position  */


// 1. Insertion at the beginning of the List
struct node *addatbeg(struct node *start,int data){
	
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	
	temp->data =data;
	temp->link=start;
	
	start =temp;
	
	return start;
		
}

// 2. Insertion at the end of the List
struct node *addatend(struct node *start,int data){
	struct node *p,*temp;
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	p=start;
	
	while(p->link != NULL){
		p=p->link;
	}
	
	p->link=temp;
	temp->link=NULL;
	
	return start;
}

// 3a. Insertion after a node
struct node *addafter(struct node *start,int data,int item){
	
	struct node *temp,*p;
	p=start;
	while(p != NULL){
		
		if(p->data == item){
			temp = (struct node *)malloc(sizeof(struct node));
			
			temp->data =data;
			temp->link =p->link;
			
			p->link=temp;
			
			return start;
		}
		p=p->link;
	}
}

// 3b. Insert before a node
struct node *addbefore(struct node *start,int data,int item){
	
	struct node *temp,*p;
	
	if(item==start->data){
		temp=(struct node *)malloc(sizeof(struct node));
		
		temp->data=data;
		temp->link=start;
		start=temp;
		
		return start;
	}
	
	p=start;
	
	while(p->link != NULL){
		
		if(p->link->data ==item){
			temp = (struct node *)malloc(sizeof(struct node));
			
			temp->data=data;
			temp->link=p->link;
			p->link=temp;
			
			return start;
			
		}
		p=p->link;
	}
	printf("\n%d Not present in the list \n",item);
	return start;
}

// 3c. Insertion at a given position
struct node *addatpos(struct node *start,int data,int pos){
	
	struct node *temp,*p;
	
	temp = (struct node *)malloc(sizeof(struct node));
	
	temp->data=data;
	
	if(pos==1){
		temp->link=start;
		start=temp;
		return start;
	}
	p=start;
	if(p==NULL){
		printf("\nthere are less than %d elements ",pos);
	}
	else{
		temp->link=p->link;
		p->link=temp;
	}
	return start;
}



