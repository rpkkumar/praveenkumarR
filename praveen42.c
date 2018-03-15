#include<stdio.h>
#include<string.h>
int main(void)
{
	char d[1000],f[1000];
	scanf("%s",d);
	scanf("%s",f);
	if(strlen(d)==strlen(f))
	printf("%s",f);
	else if(strlen(d)>strlen(f))
	printf("%s",d);
	else
	printf("%s",f);
	}
