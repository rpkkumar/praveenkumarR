#include<stdio.h>
void main()
{
	int b,c;
	printf("Enter the Two numbers :");
	scanf("%d %d",&b,&c);
	b=b^c;
	c=b^c;
	b=b^c;
	printf("%d\t%d",b,c);
}
