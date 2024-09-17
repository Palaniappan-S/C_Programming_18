#include<stdio.h>
void main()
{
int i,n;
float sum=0,fact=1;
printf("Enter a value for n:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*(float)i;
sum=(i/fact)+sum;
}
printf("The sum of the series is %f",sum);
}
