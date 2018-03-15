#include <stdio.h>
#include<string.h>
int main(void) 
{
	char str1[50],str2[50];
	int n1,n2,p,o;
	printf("enter the string1:");
	scanf("%s",str1);
	printf("enter the string2:");
	scanf("%s",str2);
	n1=strlen(str1);
	n2=strlen(str2);
	o=0;
	while(n1<(n1+n2))
	{
		str1[n1]=str2[o];
		o++;
		n1++;
	}
	printf("%s",str1);
	return 0;
}
