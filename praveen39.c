#include<stdio.h>
int main()
{
int s,max=0,i,a[10];
max=a[0];

for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
if(a[i]>max)
max=a[i];
}
printf("%d",max);
return 0;
}
