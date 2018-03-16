#include <stdio.h>
int main(void) 
{
	int a[100];
	int i,s;
		scanf("%d",&s);
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	int max=a[0];
	int min=a[0];
	for(i=1;i<s;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\n%d",min);
	printf("\n%d",max);

	return 0;
