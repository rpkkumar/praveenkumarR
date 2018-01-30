#include<stdio.h>
#include<conio.h>
void main()
{
long int n;
clrscr();
int c=0;
printf("enter the number:");
scanf("%1d",&n);
while(n!=0);
n=n/10;
++c;
}
printf("no of digit=%d",c);
getch();
}
