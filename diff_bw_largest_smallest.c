#include<stdio.h>
void main()
{
	int i,n,m,Difference;
	printf("Enter how many numbers should be entered in the series :");
	scanf("%d",&n);
	int max=-1,min=1000;
	for(i=1;i<=n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&m);
		if(m>max)
		{
			max=m;
		}
		if(m<min)
		{
			min=m;
		}
		
	}
	printf("\nmax:%d min:%d",max,min);
	Difference=min-max;
	printf("\nDIFFERENCE :%d",Difference);
}
