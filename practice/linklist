#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head;
void insert(int x){
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=x;
	temp->next=head;
	head=temp;
}
void display(){
	struct node *temp=head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
}
void search(int search){
	struct node *temp=head;
	while(temp!=NULL){
		if(temp->data==search){
			printf("ele found");
			return;
		}		
		temp=temp->next;
}
}
void delete(int d){
	struct node *temp=head;
	int i;
	if(d==1){
		head=temp->next;
		free(temp);
		return;
	}
	for(i=0;i<d-2;i++){
		temp=temp->next;
	}
	struct node *temp2=temp->next;
	temp->next=temp2->next;
	free(temp2);
}
void main()
{	
	head=NULL;
	int x,n,i,s,d;
	printf("enter no of ele:");
	scanf("%d",&n);
	printf("enter ele:");
	for(i=0;i<n;i++){
	scanf("%d",&x);
	insert(x);
}
	display();
	printf("enter the element to search for:");
	scanf("%d",&s);
	search(s);
	printf("enter pos to delete:");
	scanf("%d",&d);
	delete(d);
	display();
}
