#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,k,sum=0;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    k=sum/n;
    printf("%d",k);
    getch();
}
