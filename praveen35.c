#include <stdio.h>
#include<conio.h>
int main(void) 
{
	char s[50];
	int a,count=0;

	scanf("%[^\n]s",s);
	for(a=0;s[a]!='\0';a++)
	{
		if(s[a]>='0' && s[a]<='9')
		{
			count=count+1;
		}
	}
	printf("\n%d",count);
	return 0;
}
