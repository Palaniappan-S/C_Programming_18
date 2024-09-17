#include<stdio.h>
void main()
{
	int a=1,b=2,c=3,i,j,k;
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=c;j++)
		{
			for(k=1;k<=c;k++)
			{
				printf("\n%d %d %d",i,j,k);
			}
		}
	}
}
