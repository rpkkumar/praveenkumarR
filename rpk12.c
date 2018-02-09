#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int a,rem,s,sum=0;
	scanf("%d",&a);
	s=a;
while(a!=0)
{
	rem=a%10;
	sum=sum*10+rem;
	a=a/10;
}
if(s==sum)
{
	printf("palindrome");
}
else
printf("not palindrome");
	return 0;
}
