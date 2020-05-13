#include <stdio.h>
void main()
{
int A[5];
int B[5];
int C[5];
int i,j,k;
printf("Enter the elements in the first array");
for(i=0;i<5;i++)
{
scanf("%d",&A[i]);
}
printf("Enter the elements in the second array");
for(j=0;j<5;j++)
{
scanf("%d",&B[j]);
}
for(k=0;k<5;k++)
{
C[k]=A[k]+B[k];
}
printf("required array is ::");
for(k=0;k<5;k++)
printf("%4d",C[k]);
printf("\n");
}
