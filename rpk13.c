#include<stdio.h>
int main()
{
int e,s,count=0;
scanf("%d",&e);
for(s=2;s<e;s++)
{
if(e%s==0)
count++;
}
if(count==0)
printf("prime number\s");
else
printf("not a prime number\s");
}
