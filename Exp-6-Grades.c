#include<stdio.h>
void main()
{
int phy,chem,math,bio,eng;
float percent,avg;
printf("Enter marks of 5 subjects
respectively(physics,chemistry,maths,biology,english):");
scanf("%d%d%d%d%d",&phy,&chem,&math,&bio,&eng);
avg=phy+chem+math+bio+eng;
percent=(avg/500)*100.0;
printf("Percentage = %f%% \n",percent);
if(percent>=70)
printf("Grade = Distinction\n");
else if(percent>=60)
printf("Grade = First class\n");
else if(percent>=50)
printf("Grade = Second class\n");
else if(percent>=40)
printf("Grade = Pass class\n");
else
printf("Grade = Fail\n");
}
