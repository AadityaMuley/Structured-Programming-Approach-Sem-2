#include<stdio.h>
void main()
{
int a,b;
void swap(int *p1, int *p2);
printf("Enter two numbers:");
scanf("%d %d",&a,&b);
printf("the values of a and b in the main function before calling the swap function are
%d and %d\n",a,b);
swap(&a,&b);
printf("the values of a and b in the main function after calling the swap function are
%d and %d\n",a,b);
}
void swap (int *p1, int *p2)
{
int temp;
temp=*p1;
*p1=*p2;
*p2=temp;printf("the values of a and b in the swap function after swapping are %d and
%d\n",*p1,*p2);
}
