#include<stdio.h>
void main()
{
int n,i,j;
printf("Enter a number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=5;j>=n+1-i;j--)
{
printf("*");
}
printf("\n");
}
}
