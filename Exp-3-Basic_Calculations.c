#include<stdio.h>
void main()
{
int a,b, add,sub,pro,mod;
float div;
printf("Enter Value of a and b: ");
scanf("%d%d",&a,&b);
add = a+b;
sub = a-b;
pro = a*b;
div = a/(float)b;
mod = a%b;
printf("Addition : %d\n", add);
printf("Subtraction : %d\n", sub);
printf("Multiplication : %d\n", pro);
printf("Division : %.2f\n", div);
printf("Modulus : %d\n", mod);
}
