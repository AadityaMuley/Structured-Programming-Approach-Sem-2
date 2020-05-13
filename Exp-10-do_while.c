#include<stdio.h>
void main()
{
int n,i=0;
printf("Enter a number::");
scanf("%d",&n);
do
{
i++;
printf("%d\n",n*i);
}
while(i<10);
}
