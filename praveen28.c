#include <stdio.h>
#include<conio.h>
int main(void) 
{
int arr[20],n;
scanf("%d\n",&n);
for(int i=0;i<n;i++)
{
scanf("%d\n",&arr[i]);
}
for(int i=0;i<n;i++)
{
printf("%d %d\n",arr[i],i);
}
return 0;
}
