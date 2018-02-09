#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,i,j,k;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)       //for printing rows
    {
        for(j=1;j<=n-i;j++)     //for printing dots in rows
        {
            printf(".");
        }
        for(k=1;k<=i;k++)       //for printing numbers
            {
                printf("%d",i);
            }
        printf("\n");
    }
}
