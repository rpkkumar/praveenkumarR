#include<stdio.h>
#include<conio.h>
 void main()
{
int min1,hr1,min2,hr2 min,hr;
printf("Enter the starting time");
scanf("%d",&hr1);
scanf("%d",&min1);
printf("Enter the current time");
scanf("%d",&hr2);
scanf("%d",&min2);
min=min2-min1;
hr=hr2-hr1;
printf("The diff b/w time periods is....%d:%d",hr,min);
getch();
}
