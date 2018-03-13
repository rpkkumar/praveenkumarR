#include <stdio.h>
void main()
{
int a,b,s;
printf("enter the number");
scanf("%d %d",&a,&b);
s=a;
a=b;
b=s;
printf("%d %d",a,b);
}
