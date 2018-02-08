#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,s=0;
clrscr();
printf("Enter the Range");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("The sum of Numbers between the range 0 to %d is: %d",n,s);
getch();
}
