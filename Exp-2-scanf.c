#include <stdio.h>
void main()
{
int rno=0;
double mob=0;
char g=0;
float wt=0;
printf("Enter Roll no : ");
scanf("%d",&rno);
printf("Enter gender : ");
scanf(" %c",&g);
printf("Enter mobile no : ");
scanf("%lf",&mob);
printf("Enter weight : ");
scanf("%f",&wt);
printf("Roll No : %d\n",rno);
printf("Gender : %c\n",g);
printf("Mob no : %lf\n",mob);
printf("Weight : %f\n",wt);
printf("Size of Roll No is %d\n ",sizeof(rno));
printf("Size of gender is %d\n ",sizeof(g));
printf("Size of mob is %d\n ",sizeof(mob));
printf("Size of weight is %d\n ",sizeof(wt));
}
