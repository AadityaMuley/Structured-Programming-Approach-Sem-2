#include<stdio.h>
void main()
{
int i,n;
int sum=0;
printf("Enter the number:: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i*i;
}
printf("Series value = %d",sum);
}
