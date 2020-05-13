#include<stdio.h>
int fib(int a)
{
if (a==0)
return 0;
if (a==1)
return 1;
return fib(a-1)+fib(a-2);
}
void main()
{
int i,n,s=0;
printf("Enter no of elements");
scanf("%d",&n);
printf("the series is:: ");
for(i=0;i<n;i++)
printf("%3d",fib(i));
printf("\n");
}
