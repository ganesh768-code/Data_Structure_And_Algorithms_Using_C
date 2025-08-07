#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
	
};

int main(){
	
	struct node n1;
	struct node n2;
	
	n1-->data=30;
	n1-->link=&n2;
	
	n2-->data=34;
	n2-->link=NULL;
	
	
	return 0;
}
