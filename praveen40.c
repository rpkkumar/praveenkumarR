#include <stdio.h>
int main()
{
int i, a,first=0,next=1,sum;
clrscr();
printf("Enter series range:");
scanf("%d",&a);
printf("Fibonacci Series:");
for(i=0;i<a;i++)
{
printf("\n%d",first);
sum=first+next;
first=next;
next=sum;
}
getch();
return 0;
}
