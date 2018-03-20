#include<stdio.h>
#include<stdlib.h>
struct person
{
	int age;
	float weight;
	char first_name[20];
	char last_name[20];
	int lucky_numbers[5];
}p;
void main()
{
	int i;
	printf("\n age:");
	scanf("%d",&p.age);
	printf("\n weight:");
	scanf("%f",&p.weight);
	printf("\n first_name:");
	scanf("%s",p.first_name);
	printf("\n last_name:");
	scanf("%s",p.last_name);
	printf("\n lucky_numbers:");
	for(i=0;i<5;i++)
	scanf("%d",&p.lucky_numbers[i]);
	printf("%d\t%.1f\t%s\t%s",p.age,p.weight,p.first_name,p.last_name);
	for(i=0;i<5;i++)
	printf(" %d",p.lucky_numbers[i]);
}
