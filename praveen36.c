#include <stdio.h>
int main(void) {
	char a[1000];
	int count=0,s;
	printf("enter the string ");
	scanf("%[^\n]s",a);
	for(s=0;a[s]!='\0';s++)
	{
		if(a[s]>='a'&&a[s]<='z'||a[s]>='A'&&a[s]<='Z');
		else
		count++;
	}
	printf("%d",count);
	
	return 0;
}
