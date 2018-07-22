#include<stdio.h>
int top=-1;
int a[100];
void push(int x){
	if(top==99){
		printf("overflow");
		return;
	}
	top++;
	a[top]=x;
}
void pop(){
	if(top==-1){
		printf("ëmpty");
		return;
	}
	top--;
}
void print(){
	int i;
	for(i=0;i<=top;i++){
	printf("%d ",a[i]);
	}
}
int main(){
	int x,n,i;
	printf("enter no of ele:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter ele:");
		scanf("%d",&x);
		push(x);
}
	print();
	printf("pop");
	pop();
	print();
}
