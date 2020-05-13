#include<stdio.h>
void main()
{
int a,i=10;
do
{
printf("%d",i);
i--;
if(i==7)
{
i=i-1;
continue;
}
}
while(i>0);
}
