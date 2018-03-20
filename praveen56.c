#include <stdio.h>
#include<conio.h>
int main(void) {
	int l,s,d;
	char a[10]="hello123";
	l=strlen(a);
	for(i=1;i<=l;i++)
	{
	while(((a[i]=='a')||(a[i]=='A'))&&((a[i]=='z')||(a[i]=='Z')))
	 {        
	 	c++;
	 }
	}
	if(d==l)
	{
		printf("string has only alphabets %s",a);
	}
	else
	{
		printf("string has both alphabets and numbers %s",a);
	}
	
	return 0;
}
