#include<stdio.h>
void display(int a[],int n){
		int i;
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
}
void bubble(int a[],int n){
	int i,j,temp;
	for(i=1;i<=n-1;i++){
		for(j=0;j<=n-i-1;j++){
			if(a[j]>a[j+1]){
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
		}
	}
}
void main(){
	int a[100],i,j,n;
	printf("enter num of ele:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter ele:");
		scanf("%d",&a[i]);
	}
	display(a,n);
	bubble(a,n);
	printf("\n");
	display(a,n);
}
	
