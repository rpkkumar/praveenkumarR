#include<stdio.h>
void main()
{
char str[30];
int a=0,count=0;
  printf("enter the string");
  scanf("%s",&str);
while(str[a]!='\0')
{
if(isdigit(str[a]))
{
++count;
}
++a;
}

printf("no of digits is %d ",count);
