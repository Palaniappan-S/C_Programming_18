#include<stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter a number to get its factorial :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("FACTORIAL :%d",fact);
}
