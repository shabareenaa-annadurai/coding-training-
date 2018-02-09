#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,s;
	printf("enter no of rows:");
	scanf("%d",&n);
	printf("enter no of stars:");
	scanf("%d",&s);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			for(j=1;j<=s-1;j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(j=1;j<=s;j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
