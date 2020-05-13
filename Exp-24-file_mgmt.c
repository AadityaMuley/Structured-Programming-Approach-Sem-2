#include<stdio.h>
int main()
{
FILE *fp;
char data[50],ch=NULL;
printf("open the file test.txt in read mode\n");
fp= fopen("test.txt","r");
if(fp == NULL)
{
printf("EMPTY FILE\n");
return 1;
}
printf("READING THE FILE test.txt\n");
do
{
printf("%c",ch);
ch = fgetc(fp);
}while(ch!=EOF);printf("CLOSING THE FILE test.txt");
fclose(fp);
return 0;
}
