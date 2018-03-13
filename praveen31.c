#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],count=0;
	int a;
	gets(str);
	for(i=0;str[a]!='\0';i++)
	{
		if(str[a]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
