#include <stdio.h>
void main()
{
int i,j,k,n;
printf("Enter the no of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
       printf(" ");
     }
    for(k=1;k<=i;k++)
    {
        printf("%d ",i);
     }
    printf("\n");
}

}
