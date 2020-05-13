#include <stdio.h>
void main()
{
int A[20][20],B[20][20],C[20][20],m,n,i,j,k,l,a,b,c,d,e,f;
printf("Enter no of rows and columns of first matrix ::");
scanf("%d%d",&m,&n);
printf("Enter the elements of the matrix::");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&A[i][j]);
printf("The entered matrix is ::\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("Enter no of rows and columns of second matrix::");
scanf("%d%d",&e,&f);
if(m==e && n==f)
{
printf("Enter the elements of second matrix::");
for(k=0;k<e;k++)
for(l=0;l<f;l++)
{
scanf("%d",&B[k][l]);
}
printf("the entered matrix is ::\n");
for(k=0;k<e;k++)
{
for(l=0;l<f;l++)
{
printf("%d\t",B[k][l]);
}
printf("\n");
}
printf("the required subtraction matrix is ::\n");
for(c=0;c<m;c++)
{
for(d=0;d<n;d++)
{
C[c][d]=A[c][d]-B[c][d];
printf("%d\t",C[c][d]);
}
printf("\n");
}
}
elseprintf("subtraction is not possible\n");
}
