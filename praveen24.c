#include<stdio.h>
#include<conio.h>
void main()
{
int n,temp,i,j,b[20];
printf("enter the array of numbers");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(b[i]>b[j])
{
temp=b[i];
a[i]=b[j];
b[j]=temp;
}
}
}
for(i=0;i<=n;i++)
{
    printf("%d",b[i]);
    getch();
}
}
