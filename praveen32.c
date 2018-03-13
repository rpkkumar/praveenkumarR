#include <stdio.h>
#include<string.h>
int main(void) {
	char a[50];
	int s,count=1;
	gets(a);
	
	for(s=0;a[s]!='\0';s++)
	{
		if(a[s] == ' ')
		count++;
}		
printf("%d",count);
	return 0;
}
