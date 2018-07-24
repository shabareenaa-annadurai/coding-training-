#include<stdio.h>
#include<stdbool.h>
int a[100];
int rear=-1,top=-1;
bool isempty(){
	if(rear==-1&&top==-1){
		return true;
	}
	return false;
}
void enqueue(int x){
	if(isempty()){
		rear++;
		top++;		
	}
	else if(rear==99){
		printf("queue full");
		return;
	}
	else{
		rear=(rear+1)%100;
	}
	a[rear]=x;
}
void dequeue(){
	if(isempty()){
		printf("empty");
	}
	else if(rear==top){
		top=-1;
		rear=-1;
	}
	else{
		top=(top+1)%100;
	}
}
void print(){
	int i;
	for(i=top;i<=rear;i++){
		printf("%d ",a[i]);
	}
}
void main(){
	int x,i,n;
	printf("enter num of ele:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
	printf("enqueue:");
	scanf("%d",&x);
	enqueue(x);
}
	print();
	dequeue();
	printf("\n");
	print();
}
