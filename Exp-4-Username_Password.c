#include <stdio.h>
void main()
{
char u;
int p;
printf("Enter username :\n");
scanf("%c",&u);
printf("Enter password :\n");
scanf("%d",&p);
if(u=='a')
{
if(p==123456)
{
printf("Password username is correct\n");
}
else
{
printf("Password is wrong\n");
}
}
else
{
printf("Username is wrong\n");
}
}
